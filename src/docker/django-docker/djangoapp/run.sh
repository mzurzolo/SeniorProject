#!/bin/bash

pushd djangoapp
. py3/bin/activate
python3 /djangoapp/manage.py makemigrations
python3 /djangoapp/manage.py migrate
# python3 manage.py shell -c "from django.contrib.auth import get_user_model ; User = get_user_model(); User.objects.create_superuser('admin', 'admin@example.com', 'adminpass')"
python3 /djangoapp/manage.py runserver 0:8000
