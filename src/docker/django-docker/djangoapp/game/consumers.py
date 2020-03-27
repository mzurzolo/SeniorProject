from channels.generic.websocket import AsyncWebsocketConsumer
import json


class GameConsumer(AsyncWebsocketConsumer):
    async def connect(self):
        self.game_name = self.scope["url_route"]["kwargs"]["game_name"]
        self.game_group_name = "chat_%s" % self.game_name

        # Join game group
        await self.channel_layer.group_add(self.game_group_name, self.channel_name)

        await self.accept()

    async def disconnect(self, close_code):
        # Leave game group
        await self.channel_layer.group_discard(self.game_group_name, self.channel_name)

    # Receive message from WebSocket
    async def receive(self, text_data):
        text_data_json = json.loads(text_data)
        message = text_data_json["message"]

        # Send message to game group
        await self.channel_layer.group_send(
            self.game_group_name, {"type": "chat_message", "message": message}
        )

    # Receive message from game group
    async def chat_message(self, event):
        message = event["message"]

        # Send message to WebSocket
        await self.send(text_data=json.dumps({"message": message}))
