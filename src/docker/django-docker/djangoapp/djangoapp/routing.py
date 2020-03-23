from channels.auth import AuthMiddlewareStack
from channels.routing import ProtocolTypeRouter, URLRouter
from channels.http import AsgiHandler
import chat.routing
from django.contrib.auth import get_user_model
from django.conf.urls import url

User = get_user_model()
# This still isn't a safe way to create an admin user...
try:
    User.objects.create_superuser("admin", "admin@example.com", "adminpass")

except Exception as e:
    print(e)


application = ProtocolTypeRouter(
    {
        # (http->django views is added by default)
        "websocket": AuthMiddlewareStack(URLRouter(chat.routing.websocket_urlpatterns))
    }
)
