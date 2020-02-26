#!/bin/sh

# I put this in for consistency, so all developer utility scripts are run the
# same way
if [ "$0" = "$BASH_SOURCE" ]; then
    echo "Run this with source. (source rerun.sh, or . rerun.sh)"
    exit 1
fi

# $1 is the first argument passed to the function.
# Arguments are space-delimited, no parentheses
function start_container {
  sudo docker run --name $1 --network db-django-net -p $2 -d $3 ${4:-} ${5:-}
}

function restart_container {
  sudo docker stop $1
  sudo docker rm $1
  sudo docker run --name $1 --network db-django-net -p $2 -d $3 ${4:-} ${5:-}
}

# If starting the database container fails, restart it
# The port will only be exposed while we're developing
start_container database 3306:3306 mysqldb || \
restart_container database 3306:3306 mysqldb

# This gives the database container time to come up and initialize
READY_LOG="[Entrypoint] MySQL init process done. Ready for start up."
until [[ $(sudo docker logs database) == *"${READY_LOG}"* ]] ; do
  sleep 1s
done

# If starting the webserver container fails, restart it
# expose port 8000 (we'll probably change the port number to 443 in production)
start_container webserver 8000:8000 djangotest -p 5000:5000 || \
restart_container webserver 8000:8000 djangotest -p 5000:5000
