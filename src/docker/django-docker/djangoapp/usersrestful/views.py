from django.contrib.auth.models import Group
from rest_framework import viewsets, status
from rest_framework.decorators import api_view, action
from rest_framework.response import Response
from django.contrib.auth import get_user_model
from django.urls import reverse_lazy
from django.views import generic
from .serializers import UserSerializer, GroupSerializer
from .forms import CustomUserCreationForm
from .models import RUser
from rest_auth.registration import views



class UserViewSet(viewsets.ModelViewSet):
    """
    API endpoint that allows users to be viewed or edited.
    """

    queryset = RUser.objects.all().order_by("-date_joined")
    serializer_class = UserSerializer



class GroupViewSet(viewsets.ModelViewSet):
    """
    API endpoint that allows groups to be viewed or edited.
    """

    queryset = Group.objects.all()
    serializer_class = GroupSerializer


class Register(viewsets.ViewSetMixin, views.RegisterView):
    pass


class ConfirmEmail(viewsets.ViewSetMixin, views.VerifyEmailView):
    pass



@api_view()
def null_view(request):
    return Response(status=status.HTTP_400_BAD_REQUEST)

@api_view()
def complete_view(request):
    return Response("Email account is activated")



class SignUp(generic.CreateView):
    form_class = CustomUserCreationForm
    success_url = reverse_lazy("login")
    template_name = "signup.html"
