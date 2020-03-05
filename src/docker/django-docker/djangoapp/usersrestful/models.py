import uuid
from django.contrib.auth.models import AbstractUser, BaseUserManager
from django.db import models


class UserManager(BaseUserManager):
    pass


class RUser(AbstractUser):
    id = models.UUIDField(primary_key=True, default=uuid.uuid4)
