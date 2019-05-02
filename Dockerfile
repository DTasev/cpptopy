# Use an official Python runtime as a parent image
FROM gcc:7.3

# Set the working directory to /app
WORKDIR /app

# Copy the current directory contents into the container at /app
COPY . /app

RUN apt update && apt install -y python2.7-dev && apt install -y vim

RUN cd /home && wget http://downloads.sourceforge.net/project/boost/boost/1.60.0/boost_1_60_0.tar.gz \
  && tar xfz boost_1_60_0.tar.gz \
  && rm boost_1_60_0.tar.gz \
  && cd boost_1_60_0 \
  && ./bootstrap.sh --prefix=/usr/local --with-python=/usr/bin/python --with-libraries=python \
  && ./b2 install \
  && cd /home \
  && rm -rf boost_1_60_0

# Define environment variable
ENV NAME World
