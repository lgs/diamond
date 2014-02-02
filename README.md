Diamond
=======


#### Here it comes Diamond base image 

Diamond is the smallest lightweight Docker container on the planet. With a footprint of 1.215 MB, it is even smaller than busybox:

    REPOSITORY          TAG                 IMAGE ID            CREATED             SIZE
    lgsd/diamond        latest              b87c1c99c103        3 seconds ago       1.215 MB (virtual 1.215 MB)
    busybox             latest              e9aa60c60128        8 months ago        5.005 MB (virtual 5.005 MB)
    ubuntu              12.04               8dbd9e392a96        8 months ago        131.3 MB (virtual 131.3 MB)

Written as a part of my editorial project: "[Docker Essentials](https://leanpub.com/docker_essentials)" e-book. Made with [Buildroot](http://buildroot.uclibc.org/): making Embedded Linux easy, Diamond is a proof of concept "Base Image" to use for embedding self contained small apps on top of lightweight Docker boxes.

## Use 

    $ docker pull lgsd/diamond
    $ docker run -i -t lgsd/diamond sh

## Re-building

Rebuild by import current buildroot rootfs image:

    $ git clone https://github.com/lgs/diamond.git && cd diamond
    $ /usr/bin/docker import - lgsd/diamond < ./buildroot/output/images/rootfs.tar

## Copyright

Copyright (c) 2013-2014 Luca G. Soave
