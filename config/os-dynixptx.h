/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-dynixptx.h,v 6.12 1998/11/10 03:59:54 mcooper Exp $
 * @(#)os-dynixptx.h
 */

/*
 * System V Release 4 (dynixptx)
 */

/*
 * Define the following name for use in #ifdef's.
 * The value should be all upper-case with no periods (.).
 */
#if	!defined(dynixptx)
#define dynixptx
#endif

/*
 * We need <utime.h>
 */
#define NEED_UTIME_H

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
#define FSI_TYPE	FSI_GETMNTENT

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
#define STATFS_TYPE	STATFS_SYSV

/*
 * Type of arg functions we have.
 */
#define ARG_TYPE	ARG_VARARGS

/*
 * Do we have select()?
 */
#define HAVE_SELECT

/*
 * Type of signal handling functions.
 */
#if	!defined(POSIX_SIGNALS)
#define POSIX_SIGNALS
#endif
#include <signal.h>
#define signal(s,a) sigset(s,(void(*)())a)

/*
 * System V compatibility
 */
#include <string.h>
#include <fcntl.h>
#include <sys/select.h>
#include <time.h>
#include <netdb.h>

#define bcopy(a,b,c) 	memcpy(b,a,c)
#define bzero(a,b) 	memset(a,0,b)
#define setlinebuf(a)	setvbuf(a, NULL, _IOLBF, BUFSIZ)

/*
 * UID argument type for chown()
 */
typedef uid_t CHOWN_UID_T;

/*
 * GID argument type for chown()
 */
typedef gid_t CHOWN_GID_T;

/*
 * Our types
 */
typedef uid_t UID_T;	/* Must be signed */
typedef gid_t GID_T;	/* Must be signed */

/*
 * Generic pointer, used by memcpy, malloc, etc.  Usually char or void.
 */
typedef char POINTER;

/*
 * Type of set file time function available
 */
#define SETFTIME_TYPE	SETFTIME_UTIME

#define MOUNTED MNTTABNAME

/*
 * We have fchown()
 */
#undef HAVE_FCHOWN

/*
 * We have fchmod()
 */
#undef HAVE_FCHMOD

/*
 * We don't have u_char
 */
typedef unsigned char u_char;

/*
 * Path to the remote shell command
 */
#define _PATH_REMSH	"/usr/bin/resh"
