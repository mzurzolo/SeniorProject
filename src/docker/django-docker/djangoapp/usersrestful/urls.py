from django.urls import include, path, re_path
from rest_framework import routers
from . import views
from rest_registration.api import views as reg_api_views
from allauth import account


router = routers.DefaultRouter()
router.register(r"user", views.UserViewSet)
router.register(r"users", views.UsersViewSet)
router.register(r"acct/register", views.Register, basename="register")


# Wire up our API using automatic URL routing.
# Additionally, we include login URLs for the browsable API.
urlpatterns = [
    path("", include(router.urls)),
    path("acct/login/", reg_api_views.login, name="login"),
    path("acct/logout/", reg_api_views.logout, name="logout"),
    path("acct/profile/", reg_api_views.profile, name="profile"),
    re_path(
        r"^confirm-email/(?P<key>[-:\w]+)/$",
        account.views.confirm_email,
        name="account_confirm_email",
    ),
]
