from django.urls import include, path
from rest_framework import routers
from . import views


router = routers.DefaultRouter()
router.register(r"users", views.UserViewSet)
router.register(r"groups", views.GroupViewSet)

# Wire up our API using automatic URL routing.
# Additionally, we include login URLs for the browsable API.
urlpatterns = [
    path("", include(router.urls)),
    path("", include('rest_auth.urls')),
    path("registration", include('rest_auth.registration.urls')),
    path("auth/", include("rest_framework.urls", namespace="rest_framework")),
]
