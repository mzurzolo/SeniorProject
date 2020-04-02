mergeInto(LibraryManager.library, {

  // Create a new function with the same name as
  // the event listeners name and make sure the
  // parameters match as well.
  GameOver: function(winner) {

    // Within the function we're going to trigger
    // the event within the ReactUnityWebGL object
    // which is exposed by the library to the window.

    ReactUnityWebGL.GameOver(Pointer_stringify(winner));
  }

  ImportSave: function(player_1_id, player_2_id) {

    // Within the function we're going to trigger
    // the event within the ReactUnityWebGL object
    // which is exposed by the library to the window.

    ReactUnityWebGL.GameOver(Pointer_stringify(player_1_id),Pointer_stringify(player_2_id));
  }

  EndMove: function() {

    // Within the function we're going to trigger
    // the event within the ReactUnityWebGL object
    // which is exposed by the library to the window.

    ReactUnityWebGL.EndMove();
  }
});
