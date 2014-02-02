# Dockerfile for Diamond Base Image Creation 
# Diamond is the smallest lightweight Docker container on the planet. 
# With a footprint of 1.215 MB, it is even smaller than busybox.
#
# VERSION    0.1

FROM lgsd/diamond

MAINTAINER Luca G. Soave <luca.soave@gmail.com>

# You can force a daily or weekly upgrade of all your
# packages changing REFRESHED_AT date, from time to time
# otherwise the first lines would be cached by docker and
# you would always use non up-to-date versions of your OS

ENV REFRESHED_AT 2013-12-03
