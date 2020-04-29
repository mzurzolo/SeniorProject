import uuid
from django.db import models
from django.utils import timezone
from django.utils.translation import gettext_lazy as _
from django.contrib.auth import get_user_model

# import jsonfield
from jsonfield import JSONField
import sys

User = get_user_model()


class Game(models.Model):
    id = models.UUIDField(primary_key=True, default=uuid.uuid4)
    player_1 = models.ForeignKey(
        User, related_name="player_1", on_delete=models.SET_NULL, null=True, blank=True
    )
    player_2 = models.ForeignKey(
        User, related_name="player_2", on_delete=models.SET_NULL, null=True, blank=True
    )
    date_created = models.DateTimeField(
        _("date created"), default=timezone.now, db_index=True
    )
    date_completed = models.DateTimeField(_("date completed"), null=True, blank=True)
    winner = models.ForeignKey(
        User, related_name="winner", on_delete=models.SET_NULL, null=True, blank=True
    )
    gamestate = JSONField(
        default={
            "spaceList": ["", "", "", "", "", "", "", "", ""],
            "side": "X",
            "moves": 0,
            "player1": "",
            "player2": "",
        }
    )

    @staticmethod
    def create():
        """
        Create a new game
        :param user: the user that created the game
        :return: a new game object
        """
        new_game = Game()
        new_game.save()

    def set_winner(self, user):
        self.winner = user
        self.date_completed = timezone.now()
        self.save()
