from django.urls import re_path, path
from django.conf.urls import url
from . import consumers
from . import views

websocket_urlpatterns = [
    url(r'^chat/(?P<room_name>[^/]+)/$', consumers.ChatConsumer),
    url(r'^$',  views.about, name='about'),
    url(r'^new/$', views.new_room, name='new_room'),
    url(r'^chat/(?P<label>[\w-]{,50})/$', views.chat_room, name='chat_room'),
    #re_path(r"ws/(?P<label>[\w-]{,50})/$", consumers.ChatConsumer)
]
