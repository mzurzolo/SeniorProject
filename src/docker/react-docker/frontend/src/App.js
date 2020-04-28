import React from 'react';
import axios from 'axios';
import Landing from './pages/Landing/Landing';
import UserDashboard from './pages/UserDashboard/UserDashboard';
// import Signup from './pages/Signup/Signup';
import Game from './pages/GamePlay/GamePlay';
import PlayGame from './pages/GamePlay/PlayGame';
// import ChatJoin from './containers/forms/chat/client/src/components/Join/Join.js';
// import ChatRoom from './containers/forms/chat/client/src/components/Chat/Chat.js';
// import Messaging from './containers/media/Messaging/messaging';
import {Route, BrowserRouter as Router} from 'react-router-dom';
import UserProfile from './pages/UserProfile/UserProfile';
// import GameMenu from './pages/GameMenu/GameMenu';
import GameSelection from './pages/GameSelection/GameSelection';
import SignIn from './pages/SignIn/SignIn';
import SignUp from './pages/SignUp/SignUp';

// https://www.techiediaries.com/django-react-forms-csrf-axios/
axios.defaults.xsrfCookieName = 'csrftoken';
axios.defaults.xsrfHeaderName = 'X-CSRFToken';
// ToDo Item #7, we need it everywhere I think? or maybe just at the toplevel? not sure how it works (¯\_(ツ)_/¯)
// Item #11 on the ToDo list probably needs to specify a url variable here or something (¯\_(ツ)_/¯)
export default class App extends React.Component {
  render() {
    return (
      <Router>
        <div>
          <Route exact path='/' component={Landing} />
          <Route path='/Dashboard' component={UserDashboard} />
          <Route path='/Game' component={Game} />
          <Route path='/playgame/:id' component={PlayGame} />
          <Route path='/Profile' component={UserProfile} />
          <Route path='/gameselection' component={GameSelection} />
          <Route path='/signin' component={SignIn} />
          <Route path='/signup' component={SignUp} />
        </div>
      </Router>
    );
  }
}
