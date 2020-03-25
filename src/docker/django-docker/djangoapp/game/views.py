from rest_framework import viewsets
from . import serializers
from . import models
from rest_framework import permissions
from rest_framework.decorators import api_view, permission_classes


@permission_classes((permissions.AllowAny,))
class GameViewSet(viewsets.ModelViewSet):
    """
    API endpoint for games.
    """

    queryset = models.Game.objects.all().order_by("-date_created")
    serializer_class = serializers.GameSerializer
