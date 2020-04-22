mergeInto(LibraryManager.library,
    {
      GameOver: function(winner) {
        ReactUnityWebGL.GameOver(Pointer_stringify(winner));
      },
    });
mergeInto(LibraryManager.library,
    {
      EndMove: function() {
        ReactUnityWebGL.EndMove();
      },
    });
mergeInto(LibraryManager.library,
    {
      ImportSave: function(gamestate) {
        ReactUnityWebGL.ImportSave(Pointer_stringify(gamestate));
      },
    });
mergeInto(LibraryManager.library,
    {
      ExportState: function(savestate) {
        ReactUnityWebGL.ExportState(Pointer_stringify(savestate));
      },
    });
mergeInto(LibraryManager.library,
    {
      PollLoop: function() {
        ReactUnityWebGL.PollLoop();
      },
    });

mergeInto(LibraryManager.library,
    {
      PollTrigger: function() {
        ReactUnityWebGL.PollTrigger();
      },
    });

// ToDo Item #9, we may need signal/externl functions defined here?
