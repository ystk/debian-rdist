#
# Copyright (c) 1992-1998 Michael A. Cooper.  
# This software may be freely used and distributed provided it is not
# sold for profit or used in part or in whole for commercial gain
# without prior written agreement, and the author is credited
# appropriately.
#
# $Id: Makefile,v 6.10 1998/11/10 03:36:06 mcooper Exp $
#

#
# Main top-level Makefile
#

MAKE=make
TARGETS = src config doc support mf
SHELL=/bin/sh

all install install.man: FRC
	@for t in $(TARGETS); do \
		echo Making \"$@\" in \"$$t\"; \
		(cd $$t; ${MAKE} $@); \
	done

clean:
	rm -f *~ a.out core \#*
	@for t in $(TARGETS); do \
		echo Making \"$@\" in \"$$t\"; \
		(cd $$t; ${MAKE} $@); \
	done

FRC:
