from channels.generic.websocket import AsyncWebsocketConsumer
import json
from . import models
from channels.db import database_sync_to_async
# ToDo Item #2 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The game and the chat are not integrated.
# ToDo Item #3 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The chat and the backend are not integrated.
# ToDo Item #4 The chat does not use usernames; it allows you to define your own handle.
# ToDo Item #5 The chat is not stateful. The old chat was stateful (it saved every message to the database) so we should be able to reuse most or all of the backend code there.

class ChatConsumer(AsyncWebsocketConsumer):
    name = "ChatConsumer"

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
