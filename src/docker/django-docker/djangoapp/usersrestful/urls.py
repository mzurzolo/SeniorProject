from django.urls import include, path
from rest_framework import routers
from . import views
from rest_auth.registration.views import RegisterView, VerifyEmailView
from rest_auth.views import LoginView, LogoutView, UserDetailsView, PasswordResetView, PasswordResetConfirmView, PasswordChangeView


router = routers.DefaultRouter()
router.register(r"users", views.UserViewSet)
router.register(r"groups", views.GroupViewSet)
router.register(r"register", views.Register, basename="register")
router.register(r"register/account_confirm_email", views.ConfirmEmail, basename="account_confirm_email")


# Wire up our API using automatic URL routing.
# Additionally, we include login URLs for the browsable API.
urlpatterns = [
    path("", include(router.urls)),
    path("rest-auth/", include("rest_auth.urls")),
    path("auth/", include("rest_framework.urls", namespace="rest_framework")),
    path('registration/verify-email/', VerifyEmailView.as_view(), name='rest_verify_email'),
    path('registration/', include('rest_auth.registration.urls')),
    path('rest-auth/registration/account-email-verification-sent/', views.null_view, name='account_email_verification_sent'),
    path('password-reset/confirm/<str:uidb64>)/<str:token>/', views.null_view, name='password_reset_confirm')
]
