from channels.generic.websocket import AsyncWebsocketConsumer
import json
from . import models
from .models import Message
from channels.db import database_sync_to_async
from django.contrib.auth import get_user_model

User = get_user_model()
# ToDo Item #2 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The game and the chat are not integrated.
# ToDo Item #3 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The chat and the backend are not integrated.
# ToDo Item #4 The chat does not use usernames; it allows you to define your own handle.
# ToDo Item #5 The chat is not stateful. The old chat was stateful (it saved every message to the database) so we should be able to reuse most or all of the backend code there.

class ChatConsumer(AsyncWebsocketConsumer):
    name = "ChatConsumer"

    def init_chat(self, data):
        username = data['username']
        user = User.objects.get(username=username)
        content = {
            'command': 'init_chat'
        }
        if not user:
            content['error'] = 'Unable to get or create User with username: ' + username
            self.send_message(content)
        content['success'] = 'Chatting in with success with username: ' + username
        self.send_message(content)

    def fetch_messages(self, data):
        messages = Message.last_50_messages()
        content = {
            'command': 'messages',
            'messages': self.messages_to_json(messages)
        }
        self.send_message(content)

    def new_message(self, data):
        author = data['from']
        text = data['text']
        author_user, created = User.objects.get_or_create(username=author)
        message = Message.objects.create(author=author_user, content=text)
        content = {
            'command': 'new_message',
            'message': self.message_to_json(message)
        }
        self.send_chat_message(content)

    def messages_to_json(self, messages):
        result = []
        for message in messages:
            result.append(self.message_to_json(message))
        return result

    def message_to_json(self, message):
        return {
            'id': str(message.id),
            'author': message.author.username,
            'content': message.content,
            'created_at': str(message.created_at)
        }

    commands = {
        'init_chat': init_chat,
        'fetch_messages': fetch_messages,
        'new_message': new_message
    }


    async def websocket_connect(self, event):
        self.room_name = self.scope["url_route"]["kwargs"]["label"]
        self.room_group_name = "chat_%s" % self.room_name
        # Join room group
        await self.channel_layer.group_add(self.room_group_name, self.channel_name)
        await self.accept()

    async def disconnect(self, close_code):
        # Leave room group
        await self.channel_layer.group_discard(self.room_group_name, self.channel_name)

    # Receive message from WebSocket
    async def receive(self, text_data):
        text_data_json = json.loads(text_data)
        handle = text_data_json["handle"]
        message = text_data_json["message"]
        await self.save_message(handle=handle, message=message, label=self.room_name)
        # Send message to room group
        await self.channel_layer.group_send(
            self.room_group_name,
            {"type": "chat_message", "handle": handle, "message": message},
        )

    # Receive message from room group
    async def chat_message(self, event):
        handle = event["handle"]
        message = event["message"]

        # Send message to WebSocket
        await self.send(text_data=json.dumps({"handle": handle, "message": message}))

    @database_sync_to_async
    def save_message(self, handle, message, label):
        room = models.Room.objects.get(label=label)
        room.save()
        msg = models.Message(handle=handle, message=message, room=room)
        msg.save()
