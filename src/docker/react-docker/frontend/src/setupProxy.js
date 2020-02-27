const proxy = require('http-proxy-middleware');
module.exports = function(app) {
  app.use(
    '/api',
    proxy({
      target: 'http://webserver:8000',
      changeOrigin: true,
    })
  );
};
