#!/bin/bash

python3 -m venv env
. /env/bin/activate
python3 -m pip install -U pip
python3 -m pip install -r /djangoapp/requirements.txt
python3 -m pip freeze > /djangoapp/.autogen_requirements.txt
