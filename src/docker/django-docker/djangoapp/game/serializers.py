from rest_framework import serializers
from . import models

class GameSerializer(serializers.ModelSerializer):
    class Meta:
        model = models.Game
        fields = ['id', 'player_1', 'player_2', 'date_created', 'date_completed', 'winner']
