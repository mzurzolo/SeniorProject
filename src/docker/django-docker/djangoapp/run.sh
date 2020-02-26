#!/bin/bash

#pushd djangoapp/frontend
#serve -s build -l tcp://0.0.0.0:5000 &
#popd

pushd djangoapp
. py3/bin/activate
python3 /djangoapp/manage.py makemigrations
python3 /djangoapp/manage.py migrate
python3 /djangoapp/manage.py runserver 0:8000
