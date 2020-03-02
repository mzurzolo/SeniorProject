#!/bin/sh

# I put this in for consistency, so all developer utility scripts are run the
# same way
if [ "$0" = "$BASH_SOURCE" ]; then
    echo "Run this with source. (source run.sh, or . run.sh)"
    exit 1
fi

# $1 is the first argument passed to the function.
# Arguments are space-delimited, no parentheses
function start_container {
  sudo docker run --name $1 --network db-django-net --hostname $1 -p $2 -d $3 ${4:-} ${5:-}
}

# Start the database container.
# The port will only be exposed while we're developing
start_container database 3306:3306 mysqldb

# This gives the database container time to come up and initialize
READY_LOG="[Entrypoint] MySQL init process done. Ready for start up."
until [[ $(sudo docker logs database) == *"${READY_LOG}"* ]] ; do
  sleep 1s
done

# Start the webserver.
# expose port 8000 (we'll probably change the port number to 443 in production)
start_container webserver 8000:8000 djangotest

# Start the react container
# expose port 3000
#start_container reactapi 3000:3000 react
