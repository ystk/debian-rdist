/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: rdistpaths.h,v 6.9 1998/11/10 04:23:08 mcooper Exp $
 * @(#)paths.h
 */

#ifndef __RDISTPATHS_H__
#define __RDISTPATHS_H__
/*
 * This file should be used for those systems without any
 * <paths.h> or those with an incomplete version.
 */

#if	defined(HAVE_PATHS_H)
/*
 * Let the system's paths.h override what we have.
 */
#include <paths.h>
#endif	/* HAVE_PATHS_H */

#ifndef _PATH_SENDMAIL
#define _PATH_SENDMAIL		"/usr/lib/sendmail"
#endif
#ifndef _PATH_TMP
#define _PATH_TMP		"/tmp"
#endif
#ifndef _PATH_DEVNULL
#define _PATH_DEVNULL		"/dev/null"
#endif
#ifndef _PATH_BSHELL
#define _PATH_BSHELL		"/bin/sh"
#endif

#ifndef _PATH_REMSH
#define _PATH_REMSH		"/usr/ucb/rsh"		/* Remote shell */
#endif

#endif	/* __RDISTPATHS_H__ */
