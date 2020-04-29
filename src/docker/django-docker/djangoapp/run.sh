#!/bin/bash
cd /djangoapp
. /env/bin/activate
python3 /djangoapp/manage.py makemigrations
python3 /djangoapp/manage.py migrate
python3 /djangoapp/manage.py runserver 0:8000
