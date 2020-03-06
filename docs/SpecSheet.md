<h2 id=<span style="text-align:center;">Project Specification</span></h2>

### Fighting Roses / Rose Wars
##### By:
* Mike Zurzolo <mikezurzolo@gmail.com>
* Jeff Paulson <paulsonj3@students.rowan.edu>
* Colton Bonsall <Josephcbonsallv@gmail.com>
* Patrick O'Brien <obrienp4@students.rowan.edu>
* Semih Sahin <semihsahin2834@gmail.com>
* Steven Douglass <smd940@gmail.com>
* Tyler Roman <romant75@students.rowan.edu>
* Vincent Paone <vpaone59@gmail.com>
##### Github: [https://github.com/mzurzolo/SeniorProject](https://github.com/mzurzolo/SeniorProject)
##### Slack: [https://seniorproject-zca9503.slack.com](https://seniorproject-zca9503.slack.com)
#### Project Summary
The purpose of this project is to deliver an interesting, fun, and convenient way to spend some time in transit on mobile devices, tablets, or on the browser of a personal computer. We accomplish this by designing a compelling, strategic game with a comfortable user interface on a touch screen as well as on personal computers.
##### Project Goals
The main goals of this project are to:
* Design a board-game style strategy game that can be played by multiple remote users on different devices
* Allow users to create logins, profiles, and avatars
* Implement leader boards to track site-wide statistics
##### Product Features
* __Platform:__ Web app/Platform agnostic.
* __Game Concept:__ The game itself lies somewhere between Chess and an RPG; players choose what units to set to the field and command them against one or more other players for supremacy of the game field. Each user has game resources. Initial design will allow for 1v1 gameplay.
1. __Profiles and Matchmaking:__ We plan for each user to have their own profile which tracks their rank among other players based on their wins and losses. Each player must accept the Terms and Conditions of using the application in making the profile. The matchmaking engine the game uses should take each player’s rank into account. Matchmating will feature a "random match" feature for users who aren't interested in participating in the chatroom.
1. __Chat Client:__ Players in a game lobby should have the ability to chat amongst themselves. The player will be able to disable the chat if they are not comfortable with it. Games can be requested/started from the game lobby.
##### Limitations
Server-side hosting (for user profiles, and real-time state information for each game) will make scalability a challenge. An ad-hoc solution to track game state will be explored, but could introduce stability risks (especially for users with poor network performance) and increases client-side system requirements.

#### Stretch Goals
* Alternate game modes: Add the ability for users to configure game options like field size, player armies/game pieces, number of players, or RPG-style roleplaying objectives.
* Native app ports for Android and IOS
* Implement chat room (in game chat, and a larger chat room to find a game/players)
