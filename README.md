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

Rebuild the Diamond by clone the current ` https://github.com/lgs/diamond ` source code

    $ git clone https://github.com/lgs/diamond.git && cd diamond

Run the tarmaker meta-builder but don't forget to set “target architecture” menu. Select x86_64 when required by the GUI and exit 

    $ sh -x diamond-build.sh 

Now import with `docker import`, the new compiled rootfs image

    $ docker import - diamond < ./rootfs.tar
    $ docker run -i -t diamond sh
    / # uname -a
    Linux 6c10f137a0d5 3.11.0-15-generic #25-Ubuntu SMP Thu Jan 30 17:22:01 UTC 2014 x86_64 GNU/Linux

## Copyright

Copyright (c) 2013-2014 Luca G. Soave
