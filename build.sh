#!/bin/sh

if [ "$0" = "$BASH_SOURCE" ]; then
    echo "Run build.sh with source. (source build.sh, or . build.sh)"
    exit 1
fi

# build the database image
pushd src/docker/db-docker
sudo docker build -t userdatabase .
popd

# build the django image
pushd src/docker/django-docker
sudo docker build -t djangotrial .
popd

echo To run the django image:
echo     sudo docker run -p8000:8000 -it djangotrial

echo To run the database image:
echo     sudo docker run -p5432:5432 -it userdatabase
