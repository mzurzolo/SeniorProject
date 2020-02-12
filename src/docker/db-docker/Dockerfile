FROM mysql/mysql-server:latest

VOLUME /var/lib/mysql

ENV MYSQL_ROOT_PASSWORD=password
RUN yum clean all
RUN yum upgrade -y
COPY setup.sql /docker-entrypoint-initdb.d/setup.sql
CMD ["mysqld"]
