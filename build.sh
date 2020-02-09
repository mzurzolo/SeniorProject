#!/bin/sh

if [ "$0" = "$BASH_SOURCE" ]; then
    echo "Run build.sh with source. (source build.sh, or . build.sh)"
    exit 1
fi

# build the django image
pushd src/docker/django-docker
sudo docker build -t djangotrial .
popd

printf "\nTo run the django image:\n"
printf "    sudo docker run -p8000:8000 -it djangotrial\n"
