# base image
FROM node:buster-slim

# switch shell
SHELL ["/bin/bash", "-c"]

# get updates, install git
RUN apt-get update && apt-get -y upgrade \
  && apt-get install -y git \
  && apt clean all

# get the project
RUN git clone https://github.com/mzurzolo/SeniorProject.git \
  && pushd SeniorProject \
  && git checkout ready \
  && cp -r src/docker/react-docker/frontend /app \
  && popd \
  && rm -fR SeniorProject

# set working directory
WORKDIR /app

# add `/app/node_modules/.bin` to $PATH
ENV PATH /app/node_modules/.bin:$PATH

# install and cache app dependencies
RUN yarn && yarn build && yarn global add serve

# start app
CMD yarn && yarn start
#CMD ["npx", "serve", "-s", "build", "-p", "5000"]
