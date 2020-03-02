# base image
FROM node:latest

# set working directory
WORKDIR /app

# add `/app/node_modules/.bin` to $PATH
ENV PATH /app/node_modules/.bin:$PATH

ENV HOSTNAME reactapi

# install and cache app dependencies
COPY frontend /app
RUN yarn add react
RUN yarn add start-react-app
RUN yarn add http-proxy-middleware
RUN yarn add react-scripts

RUN yarn build
RUN yarn global add serve

# start app
CMD ["yarn", "start"]
#CMD ["npx", "serve", "-s", "build", "-p", "5000"]
