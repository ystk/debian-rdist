/*
 * Copyright (c) 1992-1998 Michael A. Cooper.
 * This software may be freely used and distributed provided it is not
 * sold for profit or used in part or in whole for commercial gain
 * without prior written agreement, and the author is credited
 * appropriately.
 */

/*
 * $Id: config-def.h,v 6.13 1998/11/10 03:59:47 mcooper Exp $
 * @(#)configdef.h
 */

#ifndef __configdef_h__
#define __configdef_h__

/*
 * Configuration definetions
 */

/*
 * Types of wait() functions
 */
#define WAIT_WAIT3		1
#define WAIT_WAITPID		2

/*
 * Types of directory routines
 */
#define DIR_DIRECT		1
#define DIR_DIRENT		2

/*
 * Types of filesystem info routines
 */
#define FSI_GETFSSTAT		1
#define FSI_GETMNT		2
#define FSI_MNTCTL		3
#define FSI_GETMNTENT		4

/*
 * Types of non-blocking I/O.
 */
#define NBIO_FCNTL		1
#define NBIO_IOCTL		2

/*
 * Types of executable formats
 */
#define EXE_AOUT		1
#define EXE_COFF		2
#define EXE_MACHO		3
#define EXE_HPEXEC		4
#define EXE_ELF			5
#define EXE_ELF_AND_COFF	6

/*
 * Types of set filetime functions
 */
#define SETFTIME_UTIMES		1		/* Have utimes() */
#define SETFTIME_UTIME		2		/* Have utime() */

/*
 * Types of statfs() calls
 */
#define STATFS_BSD		1
#define STATFS_SYSV		2
#define STATFS_OSF1		3

/*
 * Arg types
 */
#define ARG_VARARGS		1
#define ARG_STDARG		2

/*
 * Set buffering types
 */
#define SETBUF_SETLINEBUF	1
#define SETBUF_SETVBUF		2

/*
 * Socket Pair types
 */
#define SOCKPAIR_SOCKETPAIR	1
#define SOCKPAIR_SPIPE		2

#endif	/* __configdef_h__ */
