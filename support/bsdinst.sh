#!/bin/sh
#
# $Id: bsdinst.sh,v 6.1 1998/03/24 01:03:53 michaelc Exp $
#
# This accepts bsd-style install arguments and makes the appropriate calls
# to the System V install.
#

PATH=/usr/bin:/usr/ucb:/usr/sbin:/etc:/usr/etc:/usr/ccs/bin:$PATH
export PATH

flags=""
dst=""
src=""
dostrip=0
cp=cp
chown=chown
chgrp=chgrp
chmod=chmod
strip=strip

while [ x$1 != x ]; do
    case $1 in 
	-[dci]) shift
	    continue;;

	-m) 
	    shift
	    mode="$1"
	    shift
	    continue;;

	-g)
	    shift
	    group="$1"
	    shift
	    continue;;

	-o) shift
	    owner=$1
	    shift
	    continue;;

	-s) dostrip=1
	    shift
	    continue;;

	*)  if [ x$src = x ] 
	    then
		src=$1
	    else
		dst=$1
	    fi
	    shift
	    continue;;
    esac
done

if [ x$src = x ] 
then
	echo "bsdinstall:  no input file specified"
	exit 1
fi

if [ x$dst = x ] 
then
	echo "bsdinstall:  no destination specified"
	exit 1
fi


# set up some variable to be used later

rmcmd=""
srcdir="."

srcbase=`basename $src`

if [ -d $dst ]; then
    dstname=$dst/$srcbase
else
    dstname=$dst
fi

# do the actual install 

rm -f $dst/$srcbase
(cd $srcdir ;\
    $cp $src $dst; \
    if [ ! -z "$mode" ]; then \
	$chmod $mode $dstname; \
    fi; \
    if [ ! -z "$owner" ]; then \
	$chown $owner $dstname; \
    fi; \
    if [ ! -z "$group" ]; then \
	$chgrp $group $dstname; \
    fi; \
    if [ $dostrip -gt 0 ]; then \
	$strip $dstname; \
    fi; \
)

# and clean up

$rmcmd
