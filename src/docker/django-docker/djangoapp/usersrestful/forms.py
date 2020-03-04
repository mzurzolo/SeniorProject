from django.contrib.auth.forms import UserCreationForm
from .models import RUser


class CustomUserCreationForm(UserCreationForm):
    class Meta(UserCreationForm.Meta):
        model = RUser
        fields = UserCreationForm.Meta.fields
