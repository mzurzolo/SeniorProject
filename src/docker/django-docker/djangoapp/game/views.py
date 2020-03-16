from rest_framework import viewsets
from rest_framework import permissions
from . import serializers
from . import models


class GameViewSet(viewsets.ModelViewSet):
    """
    API endpoint for games.
    """

    queryset = models.Game.objects.all().order_by("-date_created")
    serializer_class = serializers.GameSerializer
    permission_classes = [permissions.IsAuthenticated]
