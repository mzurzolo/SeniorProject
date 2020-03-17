// Get started by creating a new React
// component and importing the libraries!

import React from "react";
import Unity, { UnityContent } from "react-unity-webgl";

export class App extends React.Component {
  state = {
    users: []
  };

  async componentDidMount() {
    try {
      const res = await fetch('/api/users');
      const users = await res.json();
      this.setState({
        users
      });
    } catch (e) {
      console.log(e);
    }
  }

  constructor(props) {
    super(props);

    // Next up create a new Unity Content object to
    // initialise and define your WebGL build. The
    // paths are relative from your index file.

    this.unityContent = new UnityContent(
      "MyGame/Build/MyGame.json",
      "MyGame/Build/UnityLoader.js"
    );

    this.unityContent.on("GameOver", winner => {
     console.log("Winner is " + winner);
   });

   this.unityContent.on("loaded", () => {
     console.log("Unity loaded!");
     var u = this.state.users.map( function(user) {
         return user.username;
         });
     this.unityContent.send(
        "Player1",
        "SetName",
        u[0]
      );
    this.unityContent.send(
       "Player2",
       "SetName",
       u[1]
     );
     console.log("Users assigned!");
   });
  }

  render() {

    // Finally render the Unity component and pass
    // the Unity content through the props.

    return <Unity unityContent={this.unityContent} />;
  }
}

export default App;
