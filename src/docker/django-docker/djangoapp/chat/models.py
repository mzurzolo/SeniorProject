from django.db import models
from django.utils import timezone
# Create your models here.
from django.contrib.auth import get_user_model

User = get_user_model()


class Room(models.Model):
    name = models.TextField()
    label = models.SlugField(unique=True)
    members = models.ManyToManyField(User)

class Message(models.Model):
    room = models.ForeignKey(Room, on_delete=models.SET_NULL, null=True, related_name='room')
    handle = models.TextField()
    message = models.TextField()
    timestamp = models.DateTimeField(default=timezone.now, db_index=True)
    sender = models.ForeignKey(
        User, related_name="sender", on_delete=models.SET_NULL, null=True, blank=True
    )
