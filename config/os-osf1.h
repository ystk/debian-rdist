/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: os-osf1.h,v 6.6 1998/11/10 04:00:02 mcooper Exp $
 * @(#)os-osf1.h
 */

/*
 * OSF/1 os-*.h file
 */

/*
 * Define the following name for use in #ifdef's.
 * The value should be all upper-case with no periods (.).
 */
#if	!defined(OSF1)
#define OSF1
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
#define FSI_TYPE	FSI_GETFSSTAT

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
#define STATFS_TYPE	STATFS_OSF1

/*
 * Type of arg functions we have.
 */
#define ARG_TYPE	ARG_VARARGS

/*
 * Do we have select()?
 */
#define HAVE_SELECT

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
typedef long UID_T;	/* Must be signed */
typedef long GID_T;	/* Must be signed */

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
 * Things we need
 */
typedef u_long		ulong;
#define NEED_STRING_H

/*
 * Set buffering Type
 */
#define SETBUF_TYPE 	SETBUF_SETVBUF