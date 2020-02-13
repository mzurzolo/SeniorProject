#!/bin/bash

pushd djangoapp
python3 -m venv py3
. py3/bin/activate
python3 -m pip install -U pip
python3 -m pip install -r requirements.txt
python3 manage.py migrate
python3 manage.py makemigrations polls
popd
