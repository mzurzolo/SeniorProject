from __future__ import unicode_literals
from django.db import models
from django.utils import timezone
from django.contrib.auth import get_user_model
from django.utils.translation import gettext_lazy as _

User = get_user_model()


class Room(models.Model):
    name = models.TextField()
    label = models.SlugField(unique=True)
    members = models.ManyToManyField(User)
    date_created = models.DateTimeField(_("date created"), default=timezone.now)


class Message(models.Model):
    room = models.ForeignKey(Room, related_name="messages", on_delete=models.SET_NULL, null=True, blank=True)
    handle = models.TextField()
    message = models.TextField()
    timestamp = models.DateTimeField(default=timezone.now, db_index=True)
    sender = models.ForeignKey(
        User, related_name="sender", on_delete=models.SET_NULL, null=True, blank=True
    )
    def __unicode__(self):
        return '[{timestamp}] {handle}: {message}'.format(**self.as_dict())

    @property
    def formatted_timestamp(self):
        return self.timestamp.strftime('%b %-d %-I:%M %p')

    def as_dict(self):
        return {'handle': self.handle, 'message': self.message, 'timestamp': self.formatted_timestamp}
