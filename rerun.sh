#!/bin/sh

if [ "$0" = "$BASH_SOURCE" ]; then
    echo "Run build.sh with source. (source build.sh, or . build.sh)"
    exit 1
fi

sudo docker run --name database --network db-django-net -p 3306:3306 -d mysqldb || \
sudo docker stop database ; \
sudo docker rm database ; \
sudo docker run --name database --network db-django-net -p 3306:3306 -d mysqldb

until [[ $(sudo docker logs database) == *"[Entrypoint] MySQL init process done. Ready for start up."* ]] ; do sleep 1s ; done

sudo docker run --name webserver --network db-django-net  -p 8000:8000 -it djangotest || \
sudo docker stop webserver ; \
sudo docker rm webserver ; \
sudo docker run --name webserver --network db-django-net  -p 8000:8000 -it djangotest
