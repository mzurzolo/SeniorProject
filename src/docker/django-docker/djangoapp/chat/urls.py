# chat/urls.py
from django.urls import path
from django.conf.urls import url
from . import views

urlpatterns = [
    url(r'^$',  views.about, name='about'),
    #path("", views.index, name="index"),
    #path("<str:room_name>/", views.room, name="room"),
    url(r'^new/$', views.new_room, name='new_room'),
    url(r'^(?P<label>[\w-]{,50})/$', views.chat_room, name='chat_room'),
]
