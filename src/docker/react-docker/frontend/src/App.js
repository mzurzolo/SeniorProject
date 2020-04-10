import React from 'react';
import axios from 'axios';
import Landing from './pages/Landing/Landing';
import UserDashboard from './pages/UserDashboard/UserDashboard';
import Signup from './pages/Signup/Signup';
import Game from './pages/GamePlay/GamePlay';
import ChatJoin from './containers/forms/chat/client/src/components/Join/Join.js';
import ChatRoom from './containers/forms/chat/client/src/components/Chat/Chat.js';
import {Route, BrowserRouter as Router} from 'react-router-dom';
import UserProfile from './pages/UserProfile/UserProfile';

// https://www.techiediaries.com/django-react-forms-csrf-axios/
axios.defaults.xsrfCookieName = 'csrftoken';
axios.defaults.xsrfHeaderName = 'X-CSRFToken';

export default class App extends React.Component {
  render() {
    return (
      <Router>
        <div>
          <Route exact path='/' component={Landing} />
          <Route path='/Dashboard' component={UserDashboard} />
          <Route path='/Signup' component={Signup} />
          <Route path='/Game' component={Game} />
          <Route path='/Chat' component={ChatJoin} />
          <Route path="/chatroom" component={ChatRoom} />
          <Route path='/Profile' component={UserProfile} />
        </div>
      </Router>
    );
  }
}
