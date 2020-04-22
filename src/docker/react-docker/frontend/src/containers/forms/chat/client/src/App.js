import React from 'react';

import Chat from './components/Chat/Chat';
import Join from './components/Join/Join';

import { BrowserRouter as Router, Route } from "react-router-dom";

const App = () => {
  return (
    <Router>
      <Route path="/" exact component={Join} />
      <Route path="/chat" component={Chat} />
    </Router>
  );
}
// ToDo Item #2 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The game and the chat are not integrated.
// ToDo Item #3 (hopeful for code reuse from src/docker/django-docker/djangoapp/{chat,static}) The chat and the backend are not integrated.
// ToDo Item #4 The chat does not use usernames; it allows you to define your own handle.
// ToDo Item #5 The chat is not stateful. The old chat was stateful (it saved every message to the database) so we should be able to reuse most or all of the backend code there.
export default App;
