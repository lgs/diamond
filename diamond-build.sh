#!/bin/sh

# First remove the old build form current directory
# then clone buildroot from the source conde and change dir 
# now re-compile 
#
git clone http://git.buildroot.net/git/buildroot.git && cd buildroot
make menuconfig
make

# output/images/rootfs.tar is containing the image to be imported in Docker
# but we need to fix something before ...
#
cd output/images
mkdir -p extra/etc extra/sbin 

# Docker sets the DNS configuration by bind-mounting over /etc/resolv.conf 
# which means that /etc/resolv.conf has to be a standard file. 
# By default, buildroot makes it a symlink.  
# We have to replace that symlink with a file. 
#
touch extra/etc/resolv.conf

# Likewise, Docker “injects” itself within containers by bind-mounting over /sbin/init. 
# This means that /sbin/init should be a regular mount point file as well. 
# By default, buildroot makes it a symlink, change that too.
#
touch extra/sbin/init

# Then update the tar file with "extra" fixing on the fly
#
tar rvf rootfs.tar -C extra .

# Now move it to the project root directory
#
cp -p ./rootfs.tar ../../../ 

echo "Docker import command will bring this image into Docker. We will name it “diamond”"
echo "/usr/bin/docker import - diamond < rootfs.tar"

# Removing all buildroot tree from the repository, fix Docker Index build issue
# see the thread: https://github.com/dotcloud/stackbrew/pull/28#issuecomment-34165644
#
[ -d ./buildroot ] && rm -rf ./buildroot



