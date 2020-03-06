<h2 id=<span style="text-align:center;">Design Specification</span></h2>

### Fighting Roses / Rose Wars

##### High Level Description:
* Rose Wars is a chess-style turn-based game for two players.
* The game runs through a webapp and users can login and then start a game.
* After logging in, players are taken to a dashboard, where they can view their profile, view leaderboards, or play the game.
* The game consists of two players taking turns controlling 6 units each, comprised of at least 1 General and 5 units chosen out of a random selection from a deck. On a player's turn, they can command their units to take 3 Actions and a possible Reaction between all of them. Actions include Movement, Attacking, and Charging. Each different type of unit has the ability to take Reactions that are unique to them.
* Players win by eliminating all of their opponent's units.
* The webapp is hosted on an AWS EC2 server, and uses a MySQL database, Django for the backend infrastructure, and Node.js (using the React Framework) for the frontend. The game itself runs on the Unity Game Engine.
![archpicture](pics/arch.png)
##### Approaches Considered:
* Unity vs React Rendering:
  * We considered the pros and cons of using Unity versus using React itself to render our board. While using React to do this would mean we'd have a better understanding of our entire code base, we decided that we'd reach higher fidelity if we took advantage of the powerful tools provided by Unity. This decision was helped with the discovery of the Unity-React-WebGL library, which allows Unity to connect to React seamlessly and easily.
##### Mockups:
* Homepage
![Homepage](pics/Homepage.png)
  * [/api/users/login]
  * [/api/users/login]
* SignupPage
![SignupPage](pics/SignupPage.png)
* Dashboard
![Dashboard](pics/Dashboard.png)
* UserProfile
![UserProfile](pics/UserProfile.png)
* GameScreen
![GameScreen](pics/GameScreen.png)
* GameScreen2
![GameScreen2](pics/GameScreen2.png)

##### Navigation Between Screens:
* [Click here to click through the slides](https://xd.adobe.com/view/0afd475f-d31e-4b11-7b1d-ffa94a47ca39-7ccc/)
* ![sequence](pics/sequence.png)

##### Backend Information:
* Database schema: Describe the attributes for all tables in the database

##### RESTful API:
* A list of all RESTful endpoints that will be implemented. For each endpoint, list the endpoint’s functionality and it’s input and output payloads.
* [/api]
  *  Returns browseable api documentation
* [/api/auth/login]
  *  This is the endpoint that allows an admin to gain access to all restful endpoints,  and    manually hit them.
  *  Payload:
```
{
  username: user
  password1: password1
}
```
* [/api/users]
  *  Returns all the current registered users with their username and email address.
  *  New users can also be added using POST.
* [/api/users/login]
  *  Matches user credentials to the database and returns code if the user does not exist.
  *  If the user does exist returns sessiontoken.
* [/api/users/wincount]
  *  Update and fetch number of wins a user has in order to be used in a leaderboard.
* [/api/users/registration]
  * This is the endpoint to register a new user.
  *  Payload:
```
{
  username: user,
  email: email,
  password1: password1,
  password2: password2
}
```
* [/api/users/logout]
  * Expires User's Sessiontoken after user request.
* [/api/users/editprofile]
  * Updates any changes made to the current user profile.
* [/api/game]
  * Returns all the current games that are active.
* [/api/game/startgame]
  * Creates an instance of a new game and returns its UUID.
* [/api/game/resumegame/game_uuid]
  * Returns a saved instance of a game, querried by its UUID.
* [/api/game/resumegame/savestate]
  * Saves the state of the current game to be resumed later on.
* [/api/chat/join]
  * Returns instance of a chatroom that has been created.
* [/api/chat/newchat]
  * Creates an instance of a new chatroom.

##### Functionality Provided by each screen:
* Explain which RESTful endpoints are accessed by the screen to provide the specified functionality.
* The Game Screen provides the main point of engagement with the user. Here, we will use Unity to deliver fun experiences to the user.

##### User Authentication / Data Security Considerations:
* All passwords will be hashed; plaintext password information will never be saved or manipulated.
* UUIDs will be used instead of sequential user numbers.
* The app uses Djangos framework to hash the passwords as they are being stored within the database
##### Tech Stack:
* __Platform__
  * WebApp, Platform independent, using Node.js LTS 12.16.1
  * The game itself runs inside the WebApp, using the Unity-React-WebGL library to integrated with the rest of the stack.
* __Development Tools__
  * The team uses a variety of tools for local development. We ensure consistency in toolset only where required. Required areas of tool consistency include:
    * Version Control: We use git, hosted on GitHub
    * Package managers: we use pip for python, and yarn to manage javascript dependencies
  * Areas where developers use the tools they're most comfortable with:
    * IDE/Text Editors (including Atom, and VSCode)
    * Database GUI Clients ([dBeaver](https://dbeaver.io/) or [MySQL Toolbench](https://www.mysql.com/products/workbench/))
    * Code Quality tools, including [black](https://black.readthedocs.io/en/stable/), [pylint](https://www.pylint.org/), and [eslint](https://eslint.org/)
* __Backend__
  * Programming Languages:
    * The Project uses a MySQL database to manage users and saved game state, primarily through an ORM API, with the exception of an SQL initialization script, which runs one time when a new database is created.
    * The Project's base infrastructure is primarily python, and uses the Django Framework.
  * EC2 / AWS:
    * We chose to use AWS to host our project because launching EC2 instances was a straightforward process.
    * The EC2 instance runs Ubuntu 18.04.4 LTS (Bionic Beaver) for its stability and usability.
  * Docker:
    * We use docker to containerize each major system component, automate build and deploy steps, and sandbox each component (for added security)
  * Unity Game Engine:
    * Unity is a widely-used game engine with a variety of readily available assets and tools. We think this will make it on-the-whole easier to develop with than using a custom-built solution.
    * Unity-React-WebGL is an open-source library of functions that expose Unity Web APIs using React, allowing us to seamlessly communicate between Unity and the backend using React as a liaison.

##### Goals, and Who They've Been Assigned to:
* Steven Douglass <smd940@gmail.com>
  * Implement React Components to display landing page information including:
    * Game Description.
    * Login.
    * Leaderboard.
    * Game Picture.
  * Implement responsive CSS design for viewing on different screen sizes
* Successfully create an account on the signup page by hitting API/users end point.
* Successfully login from the landing page by hitting API/users end point.
* Semih Sahin <semihsahin2834@gmail.com>
  * Lead endpoint development/organization
  * Integration between Django backend and React Frontend
* Jeff Paulson <paulsonj3@students.rowan.edu>
  * Establish a router within react linking pages as they are made.
  * Secure connection between Unity and React
* Tyler Roman <romant75@students.rowan.edu>
  * Lead game design effort
  * Have a basic turn system where each player commits moves and ends their turn one at a time.
* Patrick O'Brien <obrienp4@students.rowan.edu>
  * Develop templates for units on the game board.
  * Get a working Grid with intractable entities.
* Mike Zurzolo <mikezurzolo@gmail.com>
  * Replace shell scripts that I'm using to manage containers with a _docker-compose.yaml_ file.
  * Add fields to the user model to support the leader board, and possibly a friends list.
  * Start adding game support to Django (save game features, p2p communication for 2 player gameplay, possibly leveraging code Vince wrote for the chatroom).
* Vincent Paone <vpaone59@gmail.com>
  * Have working chat functionality.
  * Embed chat in home page.
* Colton Bonsall <Josephcbonsallv@gmail.com>
  * Develop working model of the leaderboard
  * Lead integration effort of the leaderboard with the rest of the codebase
