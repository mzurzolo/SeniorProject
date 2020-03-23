from rest_framework import serializers
from . import models


class RoomSerializer(serializers.ModelSerializer):
    class Meta:
        model = models.Room
        fields = ["name", "label", "members", "date_created"]
