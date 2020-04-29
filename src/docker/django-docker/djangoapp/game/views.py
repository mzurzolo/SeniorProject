from rest_framework import viewsets
from . import serializers
from . import models
from rest_framework import permissions
from rest_framework.decorators import action, api_view, permission_classes
from rest_framework.response import Response
from django.db import transaction
from django.db.models import Q, Count, Sum
from django.contrib.auth import get_user_model
import sys

User = get_user_model()


@permission_classes((permissions.AllowAny,))
class GameViewSet(viewsets.ModelViewSet):
    """
    API endpoint for games.
    """

    queryset = models.Game.objects.all().order_by("-date_created")
    serializer_class = serializers.GameSerializer

    @action(detail=False, methods=["get"])
    def available(self, request):
        with transaction.atomic():
            games = list(
                models.Game.objects.all()
                .order_by("-date_created")
                .filter(date_completed=None)
                .filter(player_2=None)
                .filter(player_1=request.user)
            )
        if len(games) < 1:
            with transaction.atomic():
                game = models.Game.objects.create(player_1=request.user)
                game.gamestate['player1'] = request.user.username
                game.save()
        else:
            with transaction.atomic():
                game = (
                    models.Game.objects.all()
                    .order_by("-date_created")
                    .filter(date_completed=None)
                    .filter(player_2=None)
                    .reverse()[0]
                )
                models.Game.objects.filter(id=game.id).update(player_2=request.user)
                game = models.Game.objects.get(id=game.id)
                game.gamestate['player2'] = request.user.username
                game.save()
        # serializer = self.get_serializer(game, many=False)
        print(game.gamestate['player1'], file=sys.stderr)
        with transaction.atomic():
            games = list(
                models.Game.objects.all()
                .order_by("-date_created")
                .filter(date_completed=None)
                .filter(player_1=request.user)
            )
            games = games + list(
                models.Game.objects.all()
                .order_by("-date_created")
                .filter(date_completed=None)
                .filter(player_2=request.user)
            )
            serializer = self.get_serializer(games, many=True)
        return Response(serializer.data)

    @action(detail=False, methods=["get"])
    def leaderboard(self, request):
        with transaction.atomic():
            gamequery = (
                models.Game.objects.all()
                .prefetch_related()
                .exclude(winner=None)
                .values("winner")
                .annotate(num_wins=Count("winner"))
            )
            results = (
                gamequery.order_by("num_wins")
                .values("winner", "num_wins")
                .reverse()[:10]
            )
            return_value = [
                {
                    "username": User.objects.get(id=entry["winner"]).username,
                    "num_wins": entry["num_wins"],
                }
                for entry in results
            ]
        return Response(return_value)

    @action(detail=True, methods=["get", "patch"])
    def state(self, request, pk):
        if request.method in ["GET"]:
            with transaction.atomic():
                gamestate = models.Game.objects.get(id=pk).gamestate
        if request.method in ["PATCH"]:
            with transaction.atomic():
                game = models.Game.objects.get(id=pk)
            game.gamestate = request.data["gamestate"]
            game.save()
            gamestate = game.gamestate
        return Response(gamestate)

    @action(detail=True, methods=["patch"])
    def winner(self, request, pk):
        if request.method in ["PATCH"]:
            with transaction.atomic():
                winner = User.objects.get(username=request.data["winner"])
                game = models.Game.objects.get(id=pk)
                game.set_winner(user=winner)
                game.save()
            serializer = self.get_serializer(game, many=False)
        return Response(serializer.data)
