from django.urls import path
from . import views
from django.contrib.auth import get_user_model

User = get_user_model()

urlpatterns = [path("signup/", views.SignUp.as_view(), name="signup")]
