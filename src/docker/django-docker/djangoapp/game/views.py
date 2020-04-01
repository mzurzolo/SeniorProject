from rest_framework import viewsets
from . import serializers
from . import models
from rest_framework import permissions
from rest_framework.decorators import action, api_view, permission_classes
from rest_framework.response import Response
from django.db import transaction


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
                .exclude(player_1=request.user)
            )
        if len(games) < 1:
            with transaction.atomic():
                game = models.Game.objects.create(player_1=request.user)
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
                print(game)
                models.Game.objects.filter(id=game.id).update(player_2=request.user)
                game = models.Game.objects.get(id=game.id)
        serializer = self.get_serializer(game, many=False)
        return Response(serializer.data)
