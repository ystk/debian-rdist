/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-ncr.h,v 1.4 1998/11/10 04:00:01 mcooper Exp $
 * @(#)os-ncr.h
 */

/*
 * Our OS name.
 */
#if	!defined(NCR)
#define NCR
#endif

/*
 * Path to sendmail on this OS is different than generic SVR4.
 */
#ifndef _PATH_SENDMAIL
#define _PATH_SENDMAIL		"/usr/lib/sendmail"
#endif

/*
 * System V Release 4 (ncr)
 */
#include "os-svr4.h"

/*
 * We want to use the real version of these
 */
#undef bcopy
#undef bzero

/*
 * Signal that can be used to test whether an rdist child process
 * is still running.  This should be a signal that is not used for
 * anything else.  On most systems, SIGUSR1 is appropriate.
 */
#define TEST_SIGNAL	SIGUSR1
