# base image
FROM node:latest

# set working directory
WORKDIR /app

# add `/app/node_modules/.bin` to $PATH
ENV PATH /app/node_modules/.bin:$PATH

ENV HOSTNAME reactapi

# install and cache app dependencies
COPY frontend /app
RUN npm install -g start-react-app
RUN yarn global add http-proxy-middleware

RUN npx yarn build
RUN yarn global add serve

# start app
CMD ["npx", "yarn", "start"]
#CMD ["npx", "serve", "-s", "build", "-p", "5000"]
