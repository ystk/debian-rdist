/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-sunos5.h,v 6.6 1998/11/10 04:00:05 mcooper Exp $
 * @(#)os-sunos5.h
 */

/*
 * Path to sendmail on this OS is different than generic SVR4.
 */
#ifndef _PATH_SENDMAIL
#define _PATH_SENDMAIL		"/usr/lib/sendmail"
#endif

/*
 * SunOS 5.x (Solaris 2.x) from Sun.
 */

#include "os-svr4.h"

/*
 * Types for write(2)
 */
#define WRITE_RETURN_T		ssize_t
#define WRITE_AMT_T		size_t

/*
 * We have ftruncate()
 */
#define HAVE_FTRUNCATE
