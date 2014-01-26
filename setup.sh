#!/bin/sh

# First we clone buildroot, then change dir and compile 
#
/usr/bin/git clone http://git.buildroot.net/git/buildroot.git && cd buildroot
/usr/bin/make menuconfig
/usr/bin/make

# output/images/rootfs.tar is containing the image to be imported in Docker
# but we need to fix something before ...
#
cd output/images
/bin/mkdir -p extra/etc extra/sbin 

# Docker sets the DNS configuration by bind-mounting over /etc/resolv.conf. 
# This means that /etc/resolv.conf has to be a standard file. 
# By default, buildroot makes it a symlink. 
# We have to replace that symlink with a file (an empty file will do).
#
/usr/bin/touch extra/etc/resolv.conf

# Likewise, Docker “injects” itself within containers by bind-mounting over /sbin/init. 
# This means that /sbin/init should be a regular mount point file as well. 
# By default, buildroot makes it a symlink to busybox. 
# We will change that, too.
#
/usr/bin/touch extra/sbin/init

# Then update the tar file on the fly
/bin/tar rvf rootfs.tar -C extra .

# Docker import command will bring this image into Docker. We will name it “diamond”
/usr/bin/docker import - diamond < rootfs.tar
