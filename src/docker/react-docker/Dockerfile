# base image
FROM node:latest

# set working directory
WORKDIR /app

# add `/app/node_modules/.bin` to $PATH
ENV PATH /app/node_modules/.bin:$PATH

# install and cache app dependencies
COPY frontend /app
RUN yarn && yarn build && yarn global add serve

# start app
CMD yarn && yarn start
#CMD ["npx", "serve", "-s", "build", "-p", "5000"]
