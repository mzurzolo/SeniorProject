"""
ASGI config for djangoapp project.

It exposes the ASGI callable as a module-level variable named ``application``.

For more information on this file, see
https://docs.djangoproject.com/en/3.0/howto/deployment/asgi/
"""

import os

from django.core.asgi import get_asgi_application
from django.contrib.auth import get_user_model

os.environ.setdefault("DJANGO_SETTINGS_MODULE", "djangoapp.settings")

application = get_asgi_application()

# This still isn't a safe way to create an admin user...
try:
    User.objects.create_superuser("admin", "admin@example.com", "adminpass")

except Exception as e:
    print(e)
