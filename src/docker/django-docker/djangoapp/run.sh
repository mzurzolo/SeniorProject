#!/bin/bash

pushd djangoapp
. py3/bin/activate
python3 /djangoapp/manage.py migrate
python3 /djangoapp/manage.py runserver 0:8000
