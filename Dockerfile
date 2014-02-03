# Dockerfile for Diamond Base Image Creation 
# Diamond is the smallest lightweight Docker container on the planet. 
# With a footprint of 1.215 MB, it is even smaller than busybox.
#
# VERSION    1.0

FROM scratch

MAINTAINER Luca G. Soave <luca.soave@gmail.com>
ADD rootfs.tar /
CMD /bin/sh
