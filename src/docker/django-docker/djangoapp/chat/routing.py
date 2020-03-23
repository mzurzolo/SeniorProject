from django.urls import re_path, path
from django.conf.urls import url
from . import consumers
from . import views

# websocket_urlpatterns = [
#    url(r'^chat/(?P<label>[\w-]{,50}[^/]+)/$', consumers.ChatConsumer),
# ]
websocket_urlpatterns = [url(r"^(?P<label>[\w-]{,50})/$", consumers.ChatConsumer)]
