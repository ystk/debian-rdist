/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-dcosx.h,v 6.4 1998/11/10 03:59:52 mcooper Exp $
 * @(#)os-dcosx.h
 */

/*
 * Path to sendmail on this OS is different than generic SVR4.
 */
#ifndef _PATH_SENDMAIL
#define _PATH_SENDMAIL		"/usr/lib/sendmail"
#endif

/*
 * System V Release 4 (dcosx)
 */
#include "os-svr4.h"
