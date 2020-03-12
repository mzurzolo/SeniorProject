from django.urls import include, path
from rest_framework import routers
from . import views
from rest_auth.registration.views import VerifyEmailView
import rest_auth
from rest_framework.urlpatterns import format_suffix_patterns

from rest_framework.decorators import api_view
from rest_framework.response import Response
from rest_framework.reverse import reverse
from rest_framework.schemas import get_schema_view
router = routers.DefaultRouter()
router.register(r"users", views.UserViewSet)


#router.register(r"schema", schema_view, basename="schema")
# Wire up our API using automatic URL routing.
# Additionally, we include login URLs for the browsable API.
urlpatterns = [
    path("", include(router.urls)),
    path("", include("rest_registration.api.urls")),
    #path("", include("rest_auth.urls")),
    #path("auth/", include("rest_framework.urls")),
    #path("", VerifyEmailView.as_view(), name='rest_verify_email'),
    path("", include('rest_auth.registration.urls')),
    #path('password-reset/confirm/<str:uidb64>)/<str:token>/', views.null_view, name='password_reset_confirm'),
]
