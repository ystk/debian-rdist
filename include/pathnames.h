/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: pathnames.h,v 6.9 1998/11/10 04:02:48 mcooper Exp $
 * @(#)pathnames.h	5.4 (Berkeley) 8/27/90
 */

#include "config.h"

#if	!defined(_RDIST_TMP)
#	define _RDIST_TMP	"rdistXXXXXX"		/* Temporary file */
#endif	/* _RDIST_TMP */

#if	!defined(_PATH_RDISTD)
#	define _PATH_RDISTD	"rdistd"		/* Rdist server */
#endif	/* _PATH_RDISTD */
