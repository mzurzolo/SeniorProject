FROM mysql/mysql-server:latest

VOLUME /var/lib/mysql

ENV MYSQL_ROOT_PASSWORD=password
ENV MYSQL_DATABASE=users
ENV MYSQL_USER=default
ENV MYSQL_PASSWORD=password
RUN yum clean all
RUN yum upgrade -y
COPY setup.sh /setup.sh
RUN["mysqld"]
RUN ["/setup.sh"]
CMD ["mysqld"]
