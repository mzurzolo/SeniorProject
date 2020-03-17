from django.contrib.auth.models import Group
from rest_framework import viewsets, status
from rest_framework.decorators import api_view
from rest_framework.response import Response
from .serializers import UserSerializer, GroupSerializer
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


@api_view()
def null_view(request):
    return Response(status=status.HTTP_400_BAD_REQUEST)
