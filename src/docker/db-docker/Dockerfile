FROM mysql/mysql-server:5.7

# switch shell
SHELL ["/bin/bash", "-c"]

RUN yum -y upgrade \
  && yum -y install git \
  && yum clean all

# get the project
RUN git clone https://github.com/mzurzolo/SeniorProject.git \
  && pushd SeniorProject \
  && git checkout ready \
  && cp -r src/docker/db-docker/setup.sql /docker-entrypoint-initdb.d/setup.sql \
  && popd \
  && rm -fR SeniorProject

VOLUME /var/lib/mysql
# 13. This is clearly not safe
ENV MYSQL_ROOT_PASSWORD=password

CMD ["mysqld"]
