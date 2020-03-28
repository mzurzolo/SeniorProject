FROM debian:buster-slim
# ^ the starting docker image

# switch shell
SHELL ["/bin/bash", "-c"]

# get updates, install wget (command-line download utility)
RUN apt-get update && apt-get -y upgrade \
  && apt-get install -y tzdata  wget apt-utils curl git \
  && apt clean all

# get the mysql repository info (repo location, public key for signed packages)
RUN wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb \
  && DEBIAN_FRONTEND=noninteractive apt -y install /mysql-apt-config_0.8.13-1_all.deb \
  && rm /mysql-apt-config_0.8.13-1_all.deb

# the above command doesn't configure the repo correctly
# this copy command gets the project and
# manually puts the correct configuration in place
RUN git clone https://github.com/mzurzolo/SeniorProject.git \
  && pushd SeniorProject \
  && git checkout ready \
  && cp -r src/docker/django-docker/djangoapp /djangoapp \
  && cp src/docker/django-docker/mysql.list /etc/apt/sources.list.d/mysql.list \
  && popd \
  && rm -fR SeniorProject

# install more packages we need for django, react, and mysql
RUN DEBIAN_FRONTEND=noninteractive apt update \
  && DEBIAN_FRONTEND=noninteractive apt -y upgrade \
  && apt-get install -y python3-venv \
  libmysqlclient-dev \
  build-essential \
  python-dev \
  python3-dev \
  libssl-dev \
  && apt clean all

# build the djangoapp
RUN /djangoapp/build.sh

# set this script to run when the image starts up
ENTRYPOINT ["/djangoapp/run.sh"]

# we're using port 8000
EXPOSE 8000/tcp
