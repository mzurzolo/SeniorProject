<h2 id=<span style="text-align:center;">Design Specification</span></h2>

### Fighting Roses / Rose Wars

##### High Level Description:

##### Approaches Considered:

##### Mockups:
* Homepage
![Homepage](pics/Homepage.png)
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

##### RESTful API:
* [/api]
* [/auth]
* [/api/users]
* [/api/login]
* [/api/signup]

##### User Authentication / Data Security Considerations:
* All passwords will be hashed; plaintext password information will never be saved or manipulated.
* UUIDs will be used instead of

##### Tech Stack:
* EC2 / AWS:
  * We chose to use AWS to host our project because launching EC2 instances was a straightforward process.
  * The EC2 instance runs Ubuntu 18.04.4 LTS (Bionic Beaver) for its stability and usability.
* Docker:
  * We use docker to containerize each major system component.
* Database:
  * MySQL
* Webserver:
  * Django
* Frontend:
  * ReactJS

##### Goals:

##### Tasks Assigned:
* Mike Zurzolo <mikezurzolo@gmail.com>
* Jeff Paulson <paulsonj3@students.rowan.edu>
* Colton Bonsall <Josephcbonsallv@gmail.com>
* Patrick O'Brien <obrienp4@students.rowan.edu>
* Semih Sahin <semihsahin2834@gmail.com>
* Steven Douglass <smd940@gmail.com>
* Tyler Roman <romant75@students.rowan.edu>
* Vincent Paone <vpaone59@gmail.com>
