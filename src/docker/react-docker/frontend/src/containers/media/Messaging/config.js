const ws_scheme = window.location.protocol == 'https:' ? 'wss' : 'ws';
const API_PATH = ws_scheme + '://' + window.location.host + '/d' + window.location.pathname; // 'localhost:8000/chat/chat/messaging';// +
console.log(API_PATH);
// '/d/chat';

export default {
  API_PATH,
};
