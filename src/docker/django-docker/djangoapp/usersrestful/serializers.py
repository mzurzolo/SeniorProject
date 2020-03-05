from django.contrib.auth.models import Group
from rest_framework import serializers
from .models import RUser


class UserSerializer(serializers.HyperlinkedModelSerializer):
    class Meta:
        model = RUser
        fields = ["url", "username", "email", "id", "groups"]


class GroupSerializer(serializers.HyperlinkedModelSerializer):
    class Meta:
        model = Group
        fields = ["url", "name"]
