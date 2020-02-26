FROM debian:buster-slim
# ^ the starting docker image

# get updates, install wget (command-line download utility)
RUN apt-get update && apt-get -y upgrade \
  && apt-get install -y tzdata  wget apt-utils \
  && apt clean all

# get the mysql repository info (repo location, public key for signed packages)
RUN wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb \
  && DEBIAN_FRONTEND=noninteractive apt -y install /mysql-apt-config_0.8.13-1_all.deb \
  && rm /mysql-apt-config_0.8.13-1_all.deb \
  && apt-get update && apt-get -y upgrade \
  && apt clean all

# the above command doesn't configure the repo correctly
# this copy command manually puts the correct configuration in place
COPY mysql.list /etc/apt/sources.list.d/mysql.list

# install more packages we need for django and mysql
RUN apt-get install -y python3-venv \
  libmysqlclient-dev \
  build-essential \
  python-dev \
  python3-dev \
  libssl-dev \
  && apt clean all

# copy the djangoapp folder into the docker image, at /djangoapp
COPY djangoapp /djangoapp

# build the djangoapp
RUN ["/bin/bash", "/djangoapp/build.sh"]

# set this script to run when the image starts up
ENTRYPOINT ["/djangoapp/run.sh"]

# we're using port 8000
EXPOSE 8000/tcp
