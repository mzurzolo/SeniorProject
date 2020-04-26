import React, {Component} from 'react';
import EditInfo from '../../containers/forms/EditInfo';
import './UserEdit.css';

export default class Signup extends Component {
    render() {
      return (
        <div id='UserEdit'>
          <EditInfo/>
        </div>
      );
    }
  }