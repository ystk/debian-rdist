/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-aix4.h,v 1.2 1998/11/10 03:59:49 mcooper Exp $
 */

/*
 * AIX 4.x for RS/6000s from IBM.
 */

/*
 * Define the following name for use in #ifdef's.
 * The value should be all upper-case with no periods (.).
 */
#if	!defined(AIX)
#define AIX
#endif

/*
 * Things we need
 */
#define NEED_SYS_SELECT_H

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
#define FSI_TYPE	FSI_MNTCTL

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
#define EXE_TYPE	EXE_COFF
#define FILEHDR_H	<filehdr.h>	/* Name of <filehdr.h> include file */

/*
 * Select the type of statfs() system call (if any).
 */
#define STATFS_TYPE	STATFS_BSD

/*
 * Type of arg functions we have.
 */
#define ARG_TYPE	ARG_VARARGS

/*
 * Do we have select()?
 */
#define HAVE_SELECT

/*
 * Name of <paths.h> include file
 */
#define PATHS_H		"rdistpaths.h"

/*
 * UID argument type for chown()
 */
typedef uid_t CHOWN_UID_T;

/*
 * GID argument type for chown()
 */
typedef gid_t CHOWN_GID_T;

/*
 * Our types, usually these are uid_t and gid_t.
 */
typedef uid_t UID_T;	/* Must be signed */
typedef uid_t GID_T;	/* Must be signed */

/*
 * Generic pointer, used by memcpy, malloc, etc.  Usually char or void.
 */
typedef void POINTER;

/*
 * Type of set file time function available
 */
#define SETFTIME_TYPE	SETFTIME_UTIMES

/*
 * We have fchown()
 */
#define HAVE_FCHOWN

/*
 * We have fchmod()
 */
#define HAVE_FCHMOD

/*
 * We have ftruncate()
 */
#define HAVE_FTRUNCATE

/*
 * Types for write(2)
 */
#define WRITE_RETURN_T		ssize_t
#define WRITE_AMT_T		size_t

/*
 * POSIX signals
 */
#define POSIX_SIGNALS

#define NEED_UNISTD_H
#define NEED_SYS_SELECT_H

#define _PATH_REMSH		"/usr/bin/rsh"
