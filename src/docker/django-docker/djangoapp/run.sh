#!/bin/bash

pushd djangoapp
. py3/bin/activate
python3 /djangoapp/manage.py migrate
python3 manage.py shell -c "from django.contrib.auth.models import User; User.objects.create_superuser('admin', 'admin@example.com', 'adminpass')"
python3 /djangoapp/manage.py runserver 0:8000
