FROM debian:buster-slim

RUN apt-get update && apt-get -y upgrade \
  && apt-get install -y tzdata  wget apt-utils \
  && apt clean all
RUN wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb \
  && DEBIAN_FRONTEND=noninteractive apt -y install /mysql-apt-config_0.8.13-1_all.deb \
  && rm /mysql-apt-config_0.8.13-1_all.deb \
  && apt-get update && apt-get -y upgrade \
  && apt clean all
COPY mysql.list /etc/apt/sources.list.d/mysql.list
RUN apt-get install -y python3-venv \
  libmysqlclient-dev \
  build-essential \
  python-dev \
  python3-dev \
  libssl-dev \
  && apt clean all
COPY djangoapp /djangoapp
RUN ["/bin/bash", "/djangoapp/build.sh"]
ENTRYPOINT ["/djangoapp/run.sh"]
EXPOSE 8000/tcp
