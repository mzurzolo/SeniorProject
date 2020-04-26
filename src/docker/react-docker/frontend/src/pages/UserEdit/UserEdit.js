import React, {Component} from 'react';
import './UserEdit.css';
import EditInfo from '../../containers/forms/EditInfo';

export default class Signup extends Component {
    render() {
      return (
        <div id='UserEdit'>
          <EditInfo/>
        </div>
      );
    }
  }