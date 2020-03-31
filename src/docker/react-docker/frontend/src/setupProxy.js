const {createProxyMiddleware} = require('http-proxy-middleware');
// const proxy = require('http-proxy-middleware');
module.exports = function(app) {
  app.use(
      '/d',
      createProxyMiddleware({
        target: 'http://webserver:8000',
        changeOrigin: true,
      }),
  );
};
