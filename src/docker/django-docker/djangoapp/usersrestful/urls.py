from django.urls import include, path
from rest_framework import routers
from . import views
from rest_auth.registration.views import RegisterView
from rest_auth.views import LoginView, LogoutView, UserDetailsView, PasswordResetView, PasswordResetConfirmView, PasswordChangeView


router = routers.DefaultRouter()
router.register(r"users", views.UserViewSet)
router.register(r"groups", views.GroupViewSet)
#router.register(r"registration", RegisterView)

# Wire up our API using automatic URL routing.
# Additionally, we include login URLs for the browsable API.
urlpatterns = [
    path("", include(router.urls)),
    path("accounts/", include("rest_registration.api.urls")),
    path("auth/", include("rest_framework.urls", namespace='rest_framework')),
]
