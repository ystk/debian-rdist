/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-ftx.h,v 1.3 1998/11/10 03:59:56 mcooper Exp $
 * @(#)os-ftx.h
 */

/*
 * Path to sendmail on this OS is different than generic SVR4.
 */
#ifndef _PATH_SENDMAIL
#define _PATH_SENDMAIL		"/usr/lib/sendmail"
#endif

/*
 * System V Release 4 (ftx)
 */
#include "os-svr4.h"

/*
 * Signal that can be used to test whether an rdist child process
 * is still running.  This should be a signal that is not used for
 * anything else.  On most systems, SIGUSR1 is appropriate.
 */
#define TEST_SIGNAL	SIGUSR1
