FROM debian:buster-slim

RUN apt-get update && apt-get -y upgrade
RUN apt-get install -y tzdata
RUN apt-get install -y python3-venv
COPY djangoapp /djangoapp
RUN ["/djangoapp/build.sh"]
ENTRYPOINT ["/djangoapp/run.sh"]
EXPOSE 8000/tcp
