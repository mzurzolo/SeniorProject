from __future__ import unicode_literals
from django.db import models
from django.utils import timezone
from django.contrib.auth import get_user_model
from django.utils.translation import gettext_lazy as _

User = get_user_model()

# ToDo Item #2 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The game and the chat are not integrated.
# ToDo Item #3 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The chat and the backend are not integrated.
# ToDo Item #4 The chat does not use usernames; it allows you to define your own handle.
# ToDo Item #5 The chat is not stateful. The old chat was stateful (it saved every message to the database) so we should be able to reuse most or all of the backend code there.

class Room(models.Model):
    name = models.TextField()
    label = models.SlugField(unique=True)
    members = models.ManyToManyField(User)
    date_created = models.DateTimeField(_("date created"), default=timezone.now)


class Message(models.Model):
    room = models.ForeignKey(
        Room, related_name="messages", on_delete=models.SET_NULL, null=True, blank=True
    )
    handle = models.TextField()
    message = models.TextField()
    timestamp = models.DateTimeField(default=timezone.now, db_index=True)
    sender = models.ForeignKey(
        User, related_name="sender", on_delete=models.SET_NULL, null=True, blank=True
    )

    def __unicode__(self):
        return "[{timestamp}] {handle}: {message}".format(**self.as_dict())

    @property
    def formatted_timestamp(self):
        return self.timestamp.strftime("%b %-d %-I:%M %p")

    def as_dict(self):
        return {
            "handle": self.handle,
            "message": self.message,
            "timestamp": self.formatted_timestamp,
        }
