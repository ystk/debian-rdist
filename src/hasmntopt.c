/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */
#ifndef lint
static char RCSid[] = 
"$Id: hasmntopt.c,v 6.1 1998/11/10 04:11:16 mcooper Exp $";

static char sccsid[] = "@(#)hasmntopt.c";

static char copyright[] =
"Copyright (c) 1992-1998 Michael A. Cooper.\n\
@(#) Copyright (c) 1983-1993 Regents of the University of California.\n\
 All rights reserved.\n";
#endif /* not lint */

#include "defs.h"
#include "filesys.h"

/* 
 * dc/osx does not have this routine.  Since it is only used to check for
 * read-only mounted filesystems, we disable this functionality.  So rdist
 * will think all mounted filesystems are read-write.
 */
char *
hasmntopt(mnt, opt)
	struct mntent *mnt;
	char *opt;
{
	return(0);
}
