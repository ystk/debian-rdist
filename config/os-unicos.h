/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-unicos.h,v 6.5 1998/11/10 04:00:07 mcooper Exp $
 * @(#)os-unicos.h
 */

/*
 * Unicos
 */

/*
 * Define the following name for use in #ifdef's.
 * The value should be all upper-case with no periods (.).
 */
#if	!defined(UNICOS)
#define UNICOS
#endif

/*
 * Set process args to messages that show up when running ps(1)
 *
 * Under some OS's, the SETARGS code will cause ": is not an identifier"
 * errors for "special" commands.
 */
#define SETARGS

/*
 * Define the type of directory routines your system has.
 */
#define DIR_TYPE	DIR_DIRENT

/*
 * Determine what routines we have to get filesystem info.
 */
#define FSI_TYPE	FSI_GETMNTENT2

/*
 * Type of non-blocking I/O.
 */
#define NBIO_TYPE	NBIO_FCNTL

/*
 * Type of wait() function to use.
 */
#define WAIT_TYPE	WAIT_WAITPID

/*
 * Type of argument passed to wait() (above).
 */
#define WAIT_ARG_TYPE	int

/*
 * Select the type of executable file format.
 */
#define EXE_TYPE	EXE_AOUT

/*
 * Select the type of statfs() system call (if any).
 */
#define STATFS_TYPE	STATFS_SYSV

/*
 * Type of arg functions we have.
 */
#define ARG_TYPE	ARG_VARARGS

/*
 * System V compatibility
 */
#include <string.h>

#define bcopy(a,b,c) 	memcpy(b,a,c)
#define bzero(a,b) 	memset(a,0,b)
#define setlinebuf(a)	setvbuf(a, NULL, _IOLBF, BUFSIZ)

/*
 * UID argument type for chown()
 */
typedef int CHOWN_UID_T;

/*
 * GID argument type for chown()
 */
typedef int CHOWN_GID_T;

/*
 * Our types
 */
typedef long UID_T;	/* Must be signed */
typedef long GID_T;	/* Must be signed */

#define MAXPATHLEN	PATH_MAX
#define N_BADMAG	BADMAG

#define mnt_special	mt_filsys
#define mnt_fstype	mt_fstyp
#define mnt_mntopts	mt_mntopts
#define mnt_mountp	mt_dev
#define target		utarget

/*
 * Generic pointer, used by memcpy, malloc, etc.  Usually char or void.
 */
typedef void POINTER;

/*
 * Type of set file time function available
 */
#define SETFTIME_TYPE   SETFTIME_UTIMES

/*
 * Things we have
 */
#define HAVE_FCHOWN			/* Have fchown() */
#define HAVE_FCHMOD			/* Have fchmod() */
#define HAVE_SELECT			/* Have select() */
/*#define HAVE_SAVED_IDS		/* Have POSIX style saved [ug]id's */
#ifndef POSIX_SIGNALS
#define POSIX_SIGNALS			/* Have POSIX signals */
#endif

/*
 * Things we need
 */
#define NEED_UNISTD_H			/* Need <unistd.h> */
#define NEED_FCNTL_H			/* Need <fcntl.h> */

/*
 * Miscellaneous
 */
#define MNTENT_H	<mntent.h>	/* Name of mntent.h include file */
#define MNTTAB_H	<mnttab.h>	/* Name of mnttab.h include file */

/*
 * Mount table
 */
#ifndef MNTTAB
#define MNTTAB   "/etc/mnttab
#endif
