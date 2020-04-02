mergeInto(LibraryManager.library,
{
  GameOver: function(winner)
  {
    ReactUnityWebGL.GameOver(Pointer_stringify(winner));
  }
});
mergeInto(LibraryManager.library,
{
  EndMove: function()
  {
    ReactUnityWebGL.EndMove();
  }
});
mergeInto(LibraryManager.library,
{
  ImportSave: function(player_1_id, player_2_id)
  {
    ReactUnityWebGL.ImportSave(Pointer_stringify(player_1_id),Pointer_stringify(player_2_id));
  }
});
