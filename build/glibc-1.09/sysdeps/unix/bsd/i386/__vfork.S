/* Copyright (C) 1993, 1994 Free Software Foundation, Inc.
This file is part of the GNU C Library.

The GNU C Library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public License as
published by the Free Software Foundation; either version 2 of the
License, or (at your option) any later version.

The GNU C Library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with the GNU C Library; see the file COPYING.LIB.  If
not, write to the Free Software Foundation, Inc., 675 Mass Ave,
Cambridge, MA 02139, USA.  */

#include <sysdep.h>

/* Since vfork shares the address space between the parent and child,
   we must take care to avoid the child unwinding the stack frame and
   clobbering it for the parent.  */

.text
ENTRY (__vfork)
	popl scratch		/* Save the return PC in a register.  */
	DO_CALL (vfork, 0)	/* Do the system call.  */
	pushl scratch		/* Put the return PC back on the stack.  */
	jb syscall_error	/* Branch if error.  */
	/* R1 is now 0 for the parent and 1 for the child.  Decrement it to
	   make it -1 (all bits set) for the parent, and 0 (no bits set)
	   for the child.  Then AND it with R0, so the parent gets
	   R0&-1==R0, and the child gets R0&0==0.  */
	decl r1
	andl r1, r0
	ret
