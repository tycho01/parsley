

#line 1 "/vagrant/parsley/parsley.h" 1






#line 1 "/usr/include/c++/4.9.2/tr1/stdbool.h" 1
// TR1 stdbool.h -*- C++ -*-

// Copyright (C) 2006-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file tr1/stdbool.h
 *  This is a TR1 C++ Library header. 
 */





#line 1 "/usr/include/c++/4.9.2/tr1/cstdbool" 1
// TR1 cstdbool -*- C++ -*-

// Copyright (C) 2006-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file tr1/cstdbool
 *  This is a TR1 C++ Library header. 
 */







#line 1 "/usr/include/c++/4.9.2/tr1/cstdbool" 1







#line 13 "/usr/include/c++/4.9.2/tr1/stdbool.h" 2



#line 5 "/vagrant/parsley/parsley.h" 2

#line 1 "/usr/include/libxslt/xslt.h" 1
/*
 * Summary: Interfaces, constants and types related to the XSLT engine
 * Description: Interfaces, constants and types related to the XSLT engine
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/tree.h" 1
/*
 * Summary: interfaces for tree manipulation
 * Description: this module describes the structures found in an tree resulting
 *              from an XML or HTML parsing, as well as the API provided for
 *              various processing on that tree
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/stdio.h" 1
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991, 1994-2010, 2011 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */






#line 1 "/usr/include/features.h" 1
/* Copyright (C) 1991-1993,1995-2007,2009,2010,2011
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _BSD_SOURCE		ISO C, POSIX, and 4.3BSD things.
   _SVID_SOURCE		ISO C, POSIX, and SVID things.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.
   _FORTIFY_SOURCE	If set to numeric value > 0 additional security
			measures are defined, according to level.

   The `-ansi' switch to the GNU C compiler defines __STRICT_ANSI__.
   If none of these are defined, the default is to have _SVID_SOURCE,
   _BSD_SOURCE, and _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200112L.  If more than one of these are defined, they accumulate.
   For example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE
   together give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_BSD		Define 4.3BSD things.
   __USE_SVID		Define SVID things.
   __USE_MISC		Define things common to BSD and System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.
   __FAVOR_BSD		Favor 4.3BSD things in cases of conflict.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */


/* Undefine everything, so we get a clean slate.  */


























/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Always use ISO C things.  */


/* Convenience macros to test the versions of glibc and gcc.
   Use them like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note - they won't work for gcc1 or glibc1, since the _MINOR macros
   were not defined then.  */








/* If _BSD_SOURCE was defined by the user, favor BSD over POSIX.  */






/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */























/* If nothing (other than _GNU_SOURCE) is defined,
   define _BSD_SOURCE and _SVID_SOURCE.  */







/* This is to enable the ISO C99 extension.  Also recognize the old macro
   which was used prior to the standard acceptance.  This macro will
   eventually go away and the features enabled by default once the ISO C99
   standard is widely adopted.  */





/* This is to enable the ISO C90 Amendment 1:1995 extension.  */





/* If none of the ANSI/POSIX macros are defined, use POSIX.1 and POSIX.2
   (and IEEE Std 1003.1b-1993 unless _XOPEN_SOURCE is defined).  */






















































































































/* Define __STDC_IEC_559__ and other similar macros.  */

#line 1 "/usr/include/features.h" 1

/* wchar_t uses ISO 10646-1 (2nd ed., published 2000-09-15) / Unicode 3.1.  */


/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */






/* Decide whether a compiler supports the long long datatypes.  */







/* This is here only because every header file already includes this one.  */



#line 1 "/usr/include/features.h" 1


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */






/* There are some functions that must be declared 'extern inline' even with
   -Os when building LIBC, or they'll end up undefined.  */







/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */

#line 1 "/usr/include/features.h" 1




#line 27 "/usr/include/stdio.h" 2

__BEGIN_DECLS




#line 1 "/usr/include/stdio.h" 1


#line 1 "/usr/include/stdio.h" 1







/* Define outside of namespace so the C++ is happy.  */
struct _IO_FILE;

__BEGIN_NAMESPACE_STD
/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;
__END_NAMESPACE_STD



__USING_NAMESPACE_STD(FILE)









/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE __FILE;










#line 1 "/usr/include/libio.h" 1
/* Copyright (C) 1991-1995,1997-2006,2007,2009,2011 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Per Bothner <bothner@cygnus.com>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.

   As a special exception, if you link the code in this file with
   files compiled with a GNU compiler to produce an executable,
   that does not cause the resulting executable to be covered by
   the GNU Lesser General Public License.  This exception does not
   however invalidate any other reasons why the executable file
   might be covered by the GNU Lesser General Public License.
   This exception applies to code released by its copyright holders
   in files containing the exception.  */





#line 1 "/usr/include/_G_config.h" 1
/* This file is needed by libio to define various configuration parameters.
   These are always the same in the GNU C library.  */




/* Define types for libio in terms of the standard internal type names.  */


#line 1 "/usr/include/_G_config.h" 1






#line 1 "/usr/include/_G_config.h" 1





#line 1 "/usr/include/wchar.h" 1
/* Copyright (C) 1995-2008, 2009, 2010, 2011 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *      ISO C99 Standard: 7.24
 *	Extended multibyte and wide character utilities	<wchar.h>
 */






























#line 1 "/usr/include/wchar.h" 1

/* We try to get wint_t from <stddef.h>, but not all GCC versions define it
   there.  So define it ourselves if it remains undefined.  */

/* Integral type unchanged by default argument promotions that can
   hold any value corresponding to members of the extended character
   set, as well as at least one value that does not correspond to any
   member of the extended character set.  */

typedef unsigned int wint_t;











/* Tell the caller that we provide correct C++ prototypes.  */







/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {

    

    wint_t __wch;

    char __wchb[4];
  } __value;		/* Value so far.  */
} __mbstate_t;




/* The rest of the file is only used if used if __need_mbstate_t is not
   defined.  */











































			


			 
     



			


			 
     



     


     








			






			 


			  










		       









		      





			 









     

     


     




     

     


     







     






     



     



     

				       
     


     




     

				      
     


     




			
			









     

				      
     


     






     







     

				       
     


     




     



			 




     









			  
     



















		       
		       



		       



			

		      












	  





	  



	       

	  






			 
			 




			 
			 







			  
			  




			  
			  
			  


















		      






		     

			    








			




				  
     








			      
     





					
					








			     
     





				       
				       





















			  
			  


				    
				    



				
				



					  
					  
     


			
     


		       
     


			      
			      







			




			 
     





















		     
     





     


		     
     






		      
		      
     





		     
     



		      
		      
     







		    
     





     


		    
     









				 
		       
     

		       
     

				     
				     
     


			     


			     
     
















		     
		     
     





		    
     


		     
		     
     






				  
				  
     

				 
     

				      
				      
     


			      
			      

			     

			      
			      













































			






		   























































				 








			    








			
			








			  
			  
			  




























/* Undefine all __need_* constants in case we are included to get those
   constants but the whole file was already read.  */



#line 11 "/usr/include/_G_config.h" 2

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;












  
  
  
    
    
  



typedef int _G_int16_t ;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t ;
typedef unsigned int _G_uint32_t ;




/* These library features are always available in the GNU C library.  */




















/* This is defined by <bits/stat.h> if `st_blksize' exists.  */




/* These are the vtbl details for ELF.  */















#line 32 "/usr/include/libio.h" 2
/* ALL of these should be defined in _G_config.h */

















/* This define avoids name pollution if we're using GNU stdarg.h */


#line 1 "/usr/include/c++/4.9.2/tr1/stdarg.h" 1
// TR1 stdarg.h -*- C++ -*-

// Copyright (C) 2006-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file tr1/stdarg.h
 *  This is a TR1 C++ Library header. 
 */





#line 1 "/usr/include/c++/4.9.2/tr1/cstdarg" 1
// TR1 cstdarg -*- C++ -*-

// Copyright (C) 2006-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file tr1/cstdarg
 *  This is a TR1 C++ Library header. 
 */





#line 1 "/usr/include/c++/4.9.2/cstdarg" 1
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cstdarg
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdarg.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 20.4.6  C library
//




#line 1 "/usr/include/c++/4.9.2/cstdarg" 1

#line 1 "/usr/include/c++/4.9.2/cstdarg" 1




// Adhere to section 17.4.1.2 clause 5 of ISO 14882:1998




namespace std
{
  using ::va_list;
} // namespace std



#line 13 "/usr/include/c++/4.9.2/tr1/cstdarg" 2



#line 13 "/usr/include/c++/4.9.2/tr1/stdarg.h" 2



#line 37 "/usr/include/libio.h" 2









#line 1 "/usr/include/libio.h" 1











/* For backward compatibility */







































/* Magic numbers and bits for the _flags field.
   The magic numbers use the high-order bits of _flags;
   the remaining bits are available for variable flags.
   Note: The magic numbers must all be negative if stdio
   emulation is desired. */

































/* These are "formatting flags" matching the iostream fmtflags enum values. */



















struct _IO_jump_t;  struct _IO_FILE;

/* Handle lock.  */







typedef void _IO_lock_t;



/* A streammarker remembers a position in a buffer. */

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  /* If _pos >= 0
 it points to _buf->Gbase()+_pos. FIXME comment */
  /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
  int _pos;

    
    
  
    
    
    
    
    

};

/* This is the structure from the libstdc++ codecvt class.  */
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};






  
  
					     
					     
					     
					     
					     
  
						 
						 
  
					    
					    
					    
					    
  
  
  
			      
  

  
  





  
  
  
  
  
  
  
  
  
  
  
  

  
  
  

  

  



struct _IO_FILE {
  int _flags;		/* High-order word is _IO_MAGIC; rest is flags. */


  /* The following pointers correspond to the C++ streambuf protocol. */
  /* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
  char* _IO_read_ptr;	/* Current read pointer */
  char* _IO_read_end;	/* End of get area. */
  char* _IO_read_base;	/* Start of putback+get area. */
  char* _IO_write_base;	/* Start of put area. */
  char* _IO_write_ptr;	/* Current put pointer. */
  char* _IO_write_end;	/* End of put area. */
  char* _IO_buf_base;	/* Start of reserve area. */
  char* _IO_buf_end;	/* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base;  /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;

  

  int _flags2;

  __off_t _old_offset; /* This used to be _offset but it's too small.  */


  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  /*  char* _save_gptr;  char* _save_egptr; */

  _IO_lock_t *_lock;





  


  __off64_t _offset;

  
  
  
  
  
  

  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;











/* Functions to do I/O and file management for a stream.  */

/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
   Return number of bytes read.  */
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);

/* Write N bytes pointed to by BUF to COOKIE.  Write all N bytes
   unless there is an error.  Return number of bytes written, or -1 if
   there is an error without writing anything.  If the file has been
   opened for append (__mode.__append set), then set the file pointer
   to the end of the file and then do the write; if not, just write at
   the current file pointer.  */
typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
				 size_t __n);

/* Move COOKIE's file position to *POS bytes from the
   beginning of the file (if W is SEEK_SET),
   the current position (if W is SEEK_CUR),
   or the end of the file (if W is SEEK_END).
   Set *POS to the new file position.
   Returns zero if successful, nonzero if not.  */
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);

/* Close COOKIE.  */
typedef int __io_close_fn (void *__cookie);












  
  
  
  







			     




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);









































extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __THROW;
extern int _IO_ferror (_IO_FILE *__fp) __THROW;

extern int _IO_peekc_locked (_IO_FILE *__fp);

/* This one is for Emacs. */



extern void _IO_flockfile (_IO_FILE *) __THROW;
extern void _IO_funlockfile (_IO_FILE *) __THROW;
extern int _IO_ftrylockfile (_IO_FILE *) __THROW;
















extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
			__gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
			 __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __THROW;







































			 

			  









}




#line 57 "/usr/include/stdio.h" 2




typedef __gnuc_va_list va_list;










typedef __off_t off_t;











typedef __ssize_t ssize_t;




/* The type of the second argument to `fgetpos' and `fsetpos'.  */
__BEGIN_NAMESPACE_STD

typedef _G_fpos_t fpos_t;



__END_NAMESPACE_STD




/* The possibilities for the third argument to `setvbuf'.  */





/* Default buffer size.  */





/* End of file character.
   Some things throughout the library rely on this being -1.  */





/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */










/* Default path prefix for `tempnam' and `tmpnam'.  */




/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */

#line 1 "/usr/include/stdio.h" 1


/* Standard streams.  */
extern struct _IO_FILE *stdin;		/* Standard input stream.  */
extern struct _IO_FILE *stdout;		/* Standard output stream.  */
extern struct _IO_FILE *stderr;		/* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */




__BEGIN_NAMESPACE_STD
/* Remove file FILENAME.  */
extern int remove (__const char *__filename) __THROW;
/* Rename file OLD to NEW.  */
extern int rename (__const char *__old, __const char *__new) __THROW;
__END_NAMESPACE_STD


/* Rename file OLD relative to OLDFD to NEW relative to NEWFD.  */
extern int renameat (int __oldfd, __const char *__old, int __newfd,
		     __const char *__new) __THROW;


__BEGIN_NAMESPACE_STD
/* Create a temporary file and open it read/write.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern FILE *tmpfile (void) __wur;












/* Generate a temporary filename.  */
extern char *tmpnam (char *__s) __THROW __wur;
__END_NAMESPACE_STD


/* This is the reentrant variant of `tmpnam'.  The only difference is
   that it does not allow S to be NULL.  */
extern char *tmpnam_r (char *__s) __THROW __wur;




/* Generate a unique temporary filename using up to five characters of PFX
   if it is not NULL.  The directory to put this file in is searched for
   as follows: First the environment variable "TMPDIR" is checked.
   If it contains the name of a writable directory, that directory is used.
   If not and if DIR is not NULL, that value is checked.  If that fails,
   P_tmpdir is tried and finally "/tmp".  The storage for the filename
   is allocated by `malloc'.  */
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __THROW __attribute_malloc__ __wur;



__BEGIN_NAMESPACE_STD
/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);
__END_NAMESPACE_STD


/* Faster versions when locking is not required.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fflush_unlocked (FILE *__stream);













__BEGIN_NAMESPACE_STD

/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (__const char *__restrict __filename,
		    __const char *__restrict __modes) __wur;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (__const char *__restrict __filename,
		      __const char *__restrict __modes,
		      FILE *__restrict __stream) __wur;



				 
  

				   
				   
  





__END_NAMESPACE_STD


		      

			
			



/* Create a new stream that refers to an existing system file descriptor.  */
extern FILE *fdopen (int __fd, __const char *__modes) __THROW __wur;






			  
			  



/* Create a new stream that refers to a memory buffer.  */
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __THROW __wur;

/* Open a stream that writes into a malloc'd buffer that is expanded as
   necessary.  *BUFLOC and *SIZELOC are updated with the buffer's location
   and the number of characters written on fflush or fclose.  */
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __THROW __wur;



__BEGIN_NAMESPACE_STD
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __THROW;
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
		    int __modes, size_t __n) __THROW;
__END_NAMESPACE_STD


/* If BUF is NULL, make STREAM unbuffered.
   Else make it use SIZE bytes of BUF for buffering.  */
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
		       size_t __size) __THROW;

/* Make STREAM line-buffered.  */
extern void setlinebuf (FILE *__stream) __THROW;



__BEGIN_NAMESPACE_STD
/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *__restrict __stream,
		    __const char *__restrict __format, ...);
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (__const char *__restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *__restrict __s,
		    __const char *__restrict __format, ...) __THROWNL;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
		     __gnuc_va_list __arg);
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
		     __gnuc_va_list __arg) __THROWNL;
__END_NAMESPACE_STD


__BEGIN_NAMESPACE_C99
/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *__restrict __s, size_t __maxlen,
		     __const char *__restrict __format, ...)
     __THROWNL ;

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
		      __const char *__restrict __format, __gnuc_va_list __arg)
     __THROWNL ;
__END_NAMESPACE_C99






		      
     

		       
     

		     
     



/* Write formatted output to a file descriptor.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern int vdprintf (int __fd, __const char *__restrict __fmt,
		     __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     ;



__BEGIN_NAMESPACE_STD
/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *__restrict __stream,
		   __const char *__restrict __format, ...) __wur;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (__const char *__restrict __format, ...) __wur;
/* Read formatted input from S.  */
extern int sscanf (__const char *__restrict __s,
		   __const char *__restrict __format, ...) __THROW;









				
		       

		       

				    
			   

extern int __isoc99_fscanf (FILE *__restrict __stream,
			    __const char *__restrict __format, ...) __wur;
extern int __isoc99_scanf (__const char *__restrict __format, ...) __wur;
extern int __isoc99_sscanf (__const char *__restrict __s,
			    __const char *__restrict __format, ...) __THROW;






__END_NAMESPACE_STD


__BEGIN_NAMESPACE_C99
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
		    __gnuc_va_list __arg)
      __wur;

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
      __wur;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (__const char *__restrict __s,
		    __const char *__restrict __format, __gnuc_va_list __arg)
     __THROW ;









		       
			
		       
     

				
     

			   
			    
			    
     

extern int __isoc99_vfscanf (FILE *__restrict __s,
			     __const char *__restrict __format,
			     __gnuc_va_list __arg) __wur;
extern int __isoc99_vscanf (__const char *__restrict __format,
			    __gnuc_va_list __arg) __wur;
extern int __isoc99_vsscanf (__const char *__restrict __s,
			     __const char *__restrict __format,
			     __gnuc_va_list __arg) __THROW;






__END_NAMESPACE_C99



__BEGIN_NAMESPACE_STD
/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);
__END_NAMESPACE_STD

/* The C standard explicitly says this is a macro, so we always do the
   optimization for it.  */



/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);



/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fgetc_unlocked (FILE *__stream);



__BEGIN_NAMESPACE_STD
/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.

   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);
__END_NAMESPACE_STD

/* The C standard explicitly says this can be a macro,
   so we always do the optimization for it.  */



/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputc_unlocked (int __c, FILE *__stream);



/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);





/* Get a word (int) from STREAM.  */
extern int getw (FILE *__stream);

/* Write a word (int) to STREAM.  */
extern int putw (int __w, FILE *__stream);



__BEGIN_NAMESPACE_STD
/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __wur;

/* Get a newline-terminated string from stdin, removing the newline.
   DO NOT USE THIS FUNCTION!!  There is no limit on how much it will read.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *gets (char *__s) __wur;
__END_NAMESPACE_STD









			     




/* Read up to (and including) a DELIMITER from STREAM into *LINEPTR
   (and null-terminate it). *LINEPTR is a pointer returned from malloc (or
   NULL), pointing to *N characters of space.  It is realloc'd as
   necessary.  Returns the number of characters read (not including the
   null terminator), or -1 on error or EOF.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern __ssize_t __getdelim (char **__restrict __lineptr,
			       size_t *__restrict __n, int __delimiter,
			       FILE *__restrict __stream) __wur;
extern __ssize_t getdelim (char **__restrict __lineptr,
			     size_t *__restrict __n, int __delimiter,
			     FILE *__restrict __stream) __wur;

/* Like `getdelim', but reads up to a newline.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern __ssize_t getline (char **__restrict __lineptr,
			    size_t *__restrict __n,
			    FILE *__restrict __stream) __wur;



__BEGIN_NAMESPACE_STD
/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (__const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream);


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void *__restrict __ptr, size_t __size,
		     size_t __n, FILE *__restrict __stream) __wur;
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
		      size_t __n, FILE *__restrict __s);
__END_NAMESPACE_STD









			   



/* Faster versions when locking is not necessary.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
			      size_t __n, FILE *__restrict __stream) __wur;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
			       size_t __n, FILE *__restrict __stream);



__BEGIN_NAMESPACE_STD
/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) __wur;
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream);
__END_NAMESPACE_STD

/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */



/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __off_t ftello (FILE *__stream) __wur;



		       
		       








__BEGIN_NAMESPACE_STD

/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, __const fpos_t *__pos);



				 

		       





__END_NAMESPACE_STD








__BEGIN_NAMESPACE_STD
/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) __THROW;
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) __THROW __wur;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) __THROW __wur;
__END_NAMESPACE_STD


/* Faster versions when locking is not required.  */
extern void clearerr_unlocked (FILE *__stream) __THROW;
extern int feof_unlocked (FILE *__stream) __THROW __wur;
extern int ferror_unlocked (FILE *__stream) __THROW __wur;



__BEGIN_NAMESPACE_STD
/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (__const char *__s);
__END_NAMESPACE_STD

/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
   are available on this system.  Even if available, these variables
   should not be used directly.  The `strerror' function provides
   all the necessary functionality.  */

#line 1 "/usr/include/stdio.h" 1



/* Return the system file descriptor for STREAM.  */
extern int fileno (FILE *__stream) __THROW __wur;



/* Faster version when locking is not required.  */
extern int fileno_unlocked (FILE *__stream) __THROW __wur;





/* Create a new stream connected to a pipe running the given command.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *popen (__const char *__command, __const char *__modes) __wur;

/* Close a stream opened by popen and return the status of its child.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int pclose (FILE *__stream);




/* Return the name of the controlling terminal.  */
extern char *ctermid (char *__s) __THROW;














			   
     

			    
			    
     




/* These are defined in POSIX.1:1996.  */

/* Acquire ownership of STREAM.  */
extern void flockfile (FILE *__stream) __THROW;

/* Try to acquire ownership of STREAM but do not block if it is not
   possible.  */
extern int ftrylockfile (FILE *__stream) __THROW __wur;

/* Relinquish the ownership granted for STREAM.  */
extern void funlockfile (FILE *__stream) __THROW;










/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */










__END_DECLS





#line 15 "/usr/include/libxml2/libxml/tree.h" 2

#line 1 "/usr/include/libxml2/libxml/xmlversion.h" 1
/*
 * Summary: compile-time version informations
 * Description: compile-time version informations for the XML library
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/xmlexports.h" 1
/*
 * Summary: macros for marking symbols as exportable/importable.
 * Description: macros for marking symbols as exportable/importable.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Igor Zlatovic <igor@zlatkovic.com>
 */




/**
 * XMLPUBFUN, XMLPUBVAR, XMLCALL
 *
 * Macros which declare an exportable function, an exportable variable and
 * the calling convention used for functions.
 *
 * Please use an extra block for every platform/compiler combination when
 * modifying this, rather than overlong #ifdef lines. This helps
 * readability as well as the fact that different compilers on the same
 * platform might need different definitions.
 */

/**
 * XMLPUBFUN:
 *
 * Macros which declare an exportable function
 */

/**
 * XMLPUBVAR:
 *
 * Macros which declare an exportable variable
 */

/**
 * XMLCALL:
 *
 * Macros which declare the called convention for exported functions
 */

/**
 * XMLCDECL:
 *
 * Macro which declares the calling convention for exported functions that 
 * use '...'.
 */


/** DOC_DISABLE */

/* Windows platform with MS compiler */

  
  
  
  
  
    
    
  
    
    
      
    
      
    
  
  
    
  
    
  
  
  
    
  


/* Windows platform with Borland compiler */

  
  
  
  
  
    
    
  
    
    
      
    
      
    
  
  
  
  
    
  


/* Windows platform with GNU compiler (Mingw) */

  
  
  
  
  




  
    
    
  
    
    
      
    
      
    
  
  
  
  
    
  


/* Cygwin platform, GNU compiler */

  
  
  
  
  
    
    
  
    
    
      
    
      
    
  
  
  


/* Compatibility */








#line 13 "/usr/include/libxml2/libxml/xmlversion.h" 2


extern "C" {


/*
 * use those to be sure nothing nasty will happen if
 * your library and includes mismatch
 */

 void  xmlCheckVersion(int version);


/**
 * LIBXML_DOTTED_VERSION:
 *
 * the version string like "1.2.3"
 */


/**
 * LIBXML_VERSION:
 *
 * the version number: 1.2.3 value is 10203
 */


/**
 * LIBXML_VERSION_STRING:
 *
 * the version number string, 1.2.3 value is "10203"
 */


/**
 * LIBXML_VERSION_EXTRA:
 *
 * extra version information, used to show a CVS compilation
 */


/**
 * LIBXML_TEST_VERSION:
 *
 * Macro to check that the libxml version in use is compatible with
 * the version the software has been compiled against
 */











/**
 * WITHOUT_TRIO:
 *
 * defined if the trio support should not be configured in
 */











/**
 * LIBXML_THREAD_ENABLED:
 *
 * Whether the thread support is configured in
 */







/**
 * LIBXML_TREE_ENABLED:
 *
 * Whether the DOM like tree manipulation API support is configured in
 */




/**
 * LIBXML_OUTPUT_ENABLED:
 *
 * Whether the serialization/saving support is configured in
 */




/**
 * LIBXML_PUSH_ENABLED:
 *
 * Whether the push parsing interfaces are configured in
 */




/**
 * LIBXML_READER_ENABLED:
 *
 * Whether the xmlReader parsing interface is configured in
 */




/**
 * LIBXML_PATTERN_ENABLED:
 *
 * Whether the xmlPattern node selection interface is configured in
 */




/**
 * LIBXML_WRITER_ENABLED:
 *
 * Whether the xmlWriter saving interface is configured in
 */




/**
 * LIBXML_SAX1_ENABLED:
 *
 * Whether the older SAX1 interface is configured in
 */




/**
 * LIBXML_FTP_ENABLED:
 *
 * Whether the FTP support is configured in
 */




/**
 * LIBXML_HTTP_ENABLED:
 *
 * Whether the HTTP support is configured in
 */




/**
 * LIBXML_VALID_ENABLED:
 *
 * Whether the DTD validation support is configured in
 */




/**
 * LIBXML_HTML_ENABLED:
 *
 * Whether the HTML support is configured in
 */




/**
 * LIBXML_LEGACY_ENABLED:
 *
 * Whether the deprecated APIs are compiled in for compatibility
 */




/**
 * LIBXML_C14N_ENABLED:
 *
 * Whether the Canonicalization support is configured in
 */




/**
 * LIBXML_CATALOG_ENABLED:
 *
 * Whether the Catalog support is configured in
 */




/**
 * LIBXML_DOCB_ENABLED:
 *
 * Whether the SGML Docbook support is configured in
 */




/**
 * LIBXML_XPATH_ENABLED:
 *
 * Whether XPath is configured in
 */




/**
 * LIBXML_XPTR_ENABLED:
 *
 * Whether XPointer is configured in
 */




/**
 * LIBXML_XINCLUDE_ENABLED:
 *
 * Whether XInclude is configured in
 */




/**
 * LIBXML_ICONV_ENABLED:
 *
 * Whether iconv support is available
 */




/**
 * LIBXML_ICU_ENABLED:
 *
 * Whether icu support is available
 */




/**
 * LIBXML_ISO8859X_ENABLED:
 *
 * Whether ISO-8859-* support is made available in case iconv is not
 */




/**
 * LIBXML_DEBUG_ENABLED:
 *
 * Whether Debugging module is configured in
 */




/**
 * DEBUG_MEMORY_LOCATION:
 *
 * Whether the memory debugging is configured in
 */




/**
 * LIBXML_DEBUG_RUNTIME:
 *
 * Whether the runtime debugging is configured in
 */




/**
 * LIBXML_UNICODE_ENABLED:
 *
 * Whether the Unicode related interfaces are compiled in
 */




/**
 * LIBXML_REGEXP_ENABLED:
 *
 * Whether the regular expressions interfaces are compiled in
 */




/**
 * LIBXML_AUTOMATA_ENABLED:
 *
 * Whether the automata interfaces are compiled in
 */




/**
 * LIBXML_EXPR_ENABLED:
 *
 * Whether the formal expressions interfaces are compiled in
 */




/**
 * LIBXML_SCHEMAS_ENABLED:
 *
 * Whether the Schemas validation interfaces are compiled in
 */




/**
 * LIBXML_SCHEMATRON_ENABLED:
 *
 * Whether the Schematron validation interfaces are compiled in
 */




/**
 * LIBXML_MODULES_ENABLED:
 *
 * Whether the module interfaces are compiled in
 */


/**
 * LIBXML_MODULE_EXTENSION:
 *
 * the string suffix used by dynamic modules (usually shared libraries)
 */



/**
 * LIBXML_ZLIB_ENABLED:
 *
 * Whether the Zlib support is compiled in
 */









/**
 * ATTRIBUTE_UNUSED:
 *
 * Macro used to signal to GCC unused function parameters
 */





/**
 * LIBXML_ATTR_ALLOC_SIZE:
 *
 * Macro used to indicate to GCC this is an allocator function
 */











/**
 * LIBXML_ATTR_FORMAT:
 *
 * Macro used to indicate to GCC the parameter are printf like
 */

































}





#line 16 "/usr/include/libxml2/libxml/tree.h" 2

#line 1 "/usr/include/libxml2/libxml/xmlstring.h" 1
/*
 * Summary: set of routines to process strings
 * Description: type and interfaces needed for the internal string handling
 *              of the library, especially UTF8 processing.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/xmlstring.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlstring.h" 1


extern "C" {


/**
 * xmlChar:
 *
 * This is a basic byte in an UTF-8 encoded string.
 * It's unsigned allowing to pinpoint case where char * are assigned
 * to xmlChar * (possibly making serialization back impossible).
 */
typedef unsigned char xmlChar;

/**
 * BAD_CAST:
 *
 * Macro to cast a string to an xmlChar * when one know its safe.
 */


/*
 * xmlChar handling
 */
 xmlChar * 
                xmlStrdup                (const xmlChar *cur);
 xmlChar * 
                xmlStrndup               (const xmlChar *cur,
                                         int len);
 xmlChar * 
                xmlCharStrndup           (const char *cur,
                                         int len);
 xmlChar * 
                xmlCharStrdup            (const char *cur);
 xmlChar * 
                xmlStrsub                (const xmlChar *str,
                                         int start,
                                         int len);
 const xmlChar * 
                xmlStrchr                (const xmlChar *str,
                                         xmlChar val);
 const xmlChar * 
                xmlStrstr                (const xmlChar *str,
                                         const xmlChar *val);
 const xmlChar * 
                xmlStrcasestr            (const xmlChar *str,
                                         const xmlChar *val);
 int 
                xmlStrcmp                (const xmlChar *str1,
                                         const xmlChar *str2);
 int 
                xmlStrncmp               (const xmlChar *str1,
                                         const xmlChar *str2,
                                         int len);
 int 
                xmlStrcasecmp            (const xmlChar *str1,
                                         const xmlChar *str2);
 int 
                xmlStrncasecmp           (const xmlChar *str1,
                                         const xmlChar *str2,
                                         int len);
 int 
                xmlStrEqual              (const xmlChar *str1,
                                         const xmlChar *str2);
 int 
                xmlStrQEqual             (const xmlChar *pref,
                                         const xmlChar *name,
                                         const xmlChar *str);
 int 
                xmlStrlen                (const xmlChar *str);
 xmlChar * 
                xmlStrcat                (xmlChar *cur,
                                         const xmlChar *add);
 xmlChar * 
                xmlStrncat               (xmlChar *cur,
                                         const xmlChar *add,
                                         int len);
 xmlChar * 
                xmlStrncatNew            (const xmlChar *str1,
                                         const xmlChar *str2,
                                         int len);
 int 
                xmlStrPrintf             (xmlChar *buf,
                                         int len,
                                         const xmlChar *msg,
                                         ...);
 int 
                xmlStrVPrintf                (xmlChar *buf,
                                         int len,
                                         const xmlChar *msg,
                                         va_list ap);

 int 
        xmlGetUTF8Char                   (const unsigned char *utf,
                                         int *len);
 int 
        xmlCheckUTF8                     (const unsigned char *utf);
 int 
        xmlUTF8Strsize                   (const xmlChar *utf,
                                         int len);
 xmlChar *  
        xmlUTF8Strndup                   (const xmlChar *utf,
                                         int len);
 const xmlChar *  
        xmlUTF8Strpos                    (const xmlChar *utf,
                                         int pos);
 int 
        xmlUTF8Strloc                    (const xmlChar *utf,
                                         const xmlChar *utfchar);
 xmlChar *  
        xmlUTF8Strsub                    (const xmlChar *utf,
                                         int start,
                                         int len);
 int 
        xmlUTF8Strlen                    (const xmlChar *utf);
 int 
        xmlUTF8Size                      (const xmlChar *utf);
 int 
        xmlUTF8Charcmp                   (const xmlChar *utf1,
                                         const xmlChar *utf2);


}



#line 17 "/usr/include/libxml2/libxml/tree.h" 2


extern "C" {


/*
 * Some of the basic types pointer to structures:
 */
/* xmlIO.h */
typedef struct _xmlParserInputBuffer xmlParserInputBuffer;
typedef xmlParserInputBuffer *xmlParserInputBufferPtr;

typedef struct _xmlOutputBuffer xmlOutputBuffer;
typedef xmlOutputBuffer *xmlOutputBufferPtr;

/* parser.h */
typedef struct _xmlParserInput xmlParserInput;
typedef xmlParserInput *xmlParserInputPtr;

typedef struct _xmlParserCtxt xmlParserCtxt;
typedef xmlParserCtxt *xmlParserCtxtPtr;

typedef struct _xmlSAXLocator xmlSAXLocator;
typedef xmlSAXLocator *xmlSAXLocatorPtr;

typedef struct _xmlSAXHandler xmlSAXHandler;
typedef xmlSAXHandler *xmlSAXHandlerPtr;

/* entities.h */
typedef struct _xmlEntity xmlEntity;
typedef xmlEntity *xmlEntityPtr;

/**
 * BASE_BUFFER_SIZE:
 *
 * default buffer size 4000.
 */


/**
 * LIBXML_NAMESPACE_DICT:
 *
 * Defines experimental behaviour:
 * 1) xmlNs gets an additional field @context (a xmlDoc)
 * 2) when creating a tree, xmlNs->href is stored in the dict of xmlDoc.
 */
/* #define LIBXML_NAMESPACE_DICT */

/**
 * xmlBufferAllocationScheme:
 *
 * A buffer allocation scheme can be defined to either match exactly the
 * need or double it's allocated size each time it is found too small.
 */

typedef enum {
    XML_BUFFER_ALLOC_DOUBLEIT,	/* double each time one need to grow */
    XML_BUFFER_ALLOC_EXACT,	/* grow only to the minimal size */
    XML_BUFFER_ALLOC_IMMUTABLE, /* immutable buffer */
    XML_BUFFER_ALLOC_IO		/* special allocation scheme used for I/O */
} xmlBufferAllocationScheme;

/**
 * xmlBuffer:
 *
 * A buffer structure.
 */
typedef struct _xmlBuffer xmlBuffer;
typedef xmlBuffer *xmlBufferPtr;
struct _xmlBuffer {
    xmlChar *content;		/* The buffer content UTF8 */
    unsigned int use;		/* The buffer size used */
    unsigned int size;		/* The buffer size */
    xmlBufferAllocationScheme alloc; /* The realloc method */
    xmlChar *contentIO;		/* in IO mode we may have a different base */
};

/**
 * XML_XML_NAMESPACE:
 *
 * This is the namespace for the special xml: prefix predefined in the
 * XML Namespace specification.
 */



/**
 * XML_XML_ID:
 *
 * This is the name for the special xml:id attribute
 */


/*
 * The different element types carried by an XML tree.
 *
 * NOTE: This is synchronized with DOM Level1 values
 *       See http://www.w3.org/TR/REC-DOM-Level-1/
 *
 * Actually this had diverged a bit, and now XML_DOCUMENT_TYPE_NODE should
 * be deprecated to use an XML_DTD_NODE.
 */
typedef enum {
    XML_ELEMENT_NODE=		1,
    XML_ATTRIBUTE_NODE=		2,
    XML_TEXT_NODE=		3,
    XML_CDATA_SECTION_NODE=	4,
    XML_ENTITY_REF_NODE=	5,
    XML_ENTITY_NODE=		6,
    XML_PI_NODE=		7,
    XML_COMMENT_NODE=		8,
    XML_DOCUMENT_NODE=		9,
    XML_DOCUMENT_TYPE_NODE=	10,
    XML_DOCUMENT_FRAG_NODE=	11,
    XML_NOTATION_NODE=		12,
    XML_HTML_DOCUMENT_NODE=	13,
    XML_DTD_NODE=		14,
    XML_ELEMENT_DECL=		15,
    XML_ATTRIBUTE_DECL=		16,
    XML_ENTITY_DECL=		17,
    XML_NAMESPACE_DECL=		18,
    XML_XINCLUDE_START=		19,
    XML_XINCLUDE_END=		20

   ,XML_DOCB_DOCUMENT_NODE=	21

} xmlElementType;


/**
 * xmlNotation:
 *
 * A DTD Notation definition.
 */

typedef struct _xmlNotation xmlNotation;
typedef xmlNotation *xmlNotationPtr;
struct _xmlNotation {
    const xmlChar               *name;	        /* Notation name */
    const xmlChar               *PublicID;	/* Public identifier, if any */
    const xmlChar               *SystemID;	/* System identifier, if any */
};

/**
 * xmlAttributeType:
 *
 * A DTD Attribute type definition.
 */

typedef enum {
    XML_ATTRIBUTE_CDATA = 1,
    XML_ATTRIBUTE_ID,
    XML_ATTRIBUTE_IDREF	,
    XML_ATTRIBUTE_IDREFS,
    XML_ATTRIBUTE_ENTITY,
    XML_ATTRIBUTE_ENTITIES,
    XML_ATTRIBUTE_NMTOKEN,
    XML_ATTRIBUTE_NMTOKENS,
    XML_ATTRIBUTE_ENUMERATION,
    XML_ATTRIBUTE_NOTATION
} xmlAttributeType;

/**
 * xmlAttributeDefault:
 *
 * A DTD Attribute default definition.
 */

typedef enum {
    XML_ATTRIBUTE_NONE = 1,
    XML_ATTRIBUTE_REQUIRED,
    XML_ATTRIBUTE_IMPLIED,
    XML_ATTRIBUTE_FIXED
} xmlAttributeDefault;

/**
 * xmlEnumeration:
 *
 * List structure used when there is an enumeration in DTDs.
 */

typedef struct _xmlEnumeration xmlEnumeration;
typedef xmlEnumeration *xmlEnumerationPtr;
struct _xmlEnumeration {
    struct _xmlEnumeration    *next;	/* next one */
    const xmlChar            *name;	/* Enumeration name */
};

/**
 * xmlAttribute:
 *
 * An Attribute declaration in a DTD.
 */

typedef struct _xmlAttribute xmlAttribute;
typedef xmlAttribute *xmlAttributePtr;
struct _xmlAttribute {
    void           *_private;	        /* application data */
    xmlElementType          type;       /* XML_ATTRIBUTE_DECL, must be second ! */
    const xmlChar          *name;	/* Attribute name */
    struct _xmlNode    *children;	/* NULL */
    struct _xmlNode        *last;	/* NULL */
    struct _xmlDtd       *parent;	/* -> DTD */
    struct _xmlNode        *next;	/* next sibling link  */
    struct _xmlNode        *prev;	/* previous sibling link  */
    struct _xmlDoc          *doc;       /* the containing document */

    struct _xmlAttribute  *nexth;	/* next in hash table */
    xmlAttributeType       atype;	/* The attribute type */
    xmlAttributeDefault      def;	/* the default */
    const xmlChar  *defaultValue;	/* or the default value */
    xmlEnumerationPtr       tree;       /* or the enumeration tree if any */
    const xmlChar        *prefix;	/* the namespace prefix if any */
    const xmlChar          *elem;	/* Element holding the attribute */
};

/**
 * xmlElementContentType:
 *
 * Possible definitions of element content types.
 */
typedef enum {
    XML_ELEMENT_CONTENT_PCDATA = 1,
    XML_ELEMENT_CONTENT_ELEMENT,
    XML_ELEMENT_CONTENT_SEQ,
    XML_ELEMENT_CONTENT_OR
} xmlElementContentType;

/**
 * xmlElementContentOccur:
 *
 * Possible definitions of element content occurrences.
 */
typedef enum {
    XML_ELEMENT_CONTENT_ONCE = 1,
    XML_ELEMENT_CONTENT_OPT,
    XML_ELEMENT_CONTENT_MULT,
    XML_ELEMENT_CONTENT_PLUS
} xmlElementContentOccur;

/**
 * xmlElementContent:
 *
 * An XML Element content as stored after parsing an element definition
 * in a DTD.
 */

typedef struct _xmlElementContent xmlElementContent;
typedef xmlElementContent *xmlElementContentPtr;
struct _xmlElementContent {
    xmlElementContentType     type;	/* PCDATA, ELEMENT, SEQ or OR */
    xmlElementContentOccur    ocur;	/* ONCE, OPT, MULT or PLUS */
    const xmlChar             *name;	/* Element name */
    struct _xmlElementContent *c1;	/* first child */
    struct _xmlElementContent *c2;	/* second child */
    struct _xmlElementContent *parent;	/* parent */
    const xmlChar             *prefix;	/* Namespace prefix */
};

/**
 * xmlElementTypeVal:
 *
 * The different possibilities for an element content type.
 */

typedef enum {
    XML_ELEMENT_TYPE_UNDEFINED = 0,
    XML_ELEMENT_TYPE_EMPTY = 1,
    XML_ELEMENT_TYPE_ANY,
    XML_ELEMENT_TYPE_MIXED,
    XML_ELEMENT_TYPE_ELEMENT
} xmlElementTypeVal;


}


#line 1 "/usr/include/libxml2/libxml/xmlregexp.h" 1
/*
 * Summary: regular expressions handling
 * Description: basic API for libxml regular expressions handling used
 *              for XML Schemas and validation.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/xmlregexp.h" 1




extern "C" {


/**
 * xmlRegexpPtr:
 *
 * A libxml regular expression, they can actually be far more complex
 * thank the POSIX regex expressions.
 */
typedef struct _xmlRegexp xmlRegexp;
typedef xmlRegexp *xmlRegexpPtr;

/**
 * xmlRegExecCtxtPtr:
 *
 * A libxml progressive regular expression evaluation context
 */
typedef struct _xmlRegExecCtxt xmlRegExecCtxt;
typedef xmlRegExecCtxt *xmlRegExecCtxtPtr;


}


#line 1 "/usr/include/libxml2/libxml/xmlregexp.h" 1

#line 1 "/usr/include/libxml2/libxml/dict.h" 1
/*
 * Summary: string dictionnary
 * Description: dictionary of reusable strings, just used to avoid allocation
 *         and freeing operations.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/dict.h" 1

#line 1 "/usr/include/libxml2/libxml/dict.h" 1


extern "C" {


/*
 * The dictionnary.
 */
typedef struct _xmlDict xmlDict;
typedef xmlDict *xmlDictPtr;

/*
 * Constructor and destructor.
 */
 xmlDictPtr 
			xmlDictCreate	(void);
 xmlDictPtr 
			xmlDictCreateSub(xmlDictPtr sub);
 int 
			xmlDictReference(xmlDictPtr dict);
 void 			
			xmlDictFree	(xmlDictPtr dict);

/*
 * Lookup of entry in the dictionnary.
 */
 const xmlChar * 		
			xmlDictLookup	(xmlDictPtr dict,
		                         const xmlChar *name,
		                         int len);
 const xmlChar * 		
			xmlDictExists	(xmlDictPtr dict,
		                         const xmlChar *name,
		                         int len);
 const xmlChar * 		
			xmlDictQLookup	(xmlDictPtr dict,
		                         const xmlChar *prefix,
		                         const xmlChar *name);
 int 
			xmlDictOwns	(xmlDictPtr dict,
					 const xmlChar *str);
 int 			
			xmlDictSize	(xmlDictPtr dict);

/*
 * Cleanup function
 */
 void 
                        xmlDictCleanup  (void);


}



#line 38 "/usr/include/libxml2/libxml/xmlregexp.h" 2

extern "C" {


/*
 * The POSIX like API
 */
 xmlRegexpPtr 
		    xmlRegexpCompile	(const xmlChar *regexp);
 void 			 xmlRegFreeRegexp(xmlRegexpPtr regexp);
 int 
		    xmlRegexpExec	(xmlRegexpPtr comp,
					 const xmlChar *value);
 void 
		    xmlRegexpPrint	(FILE *output,
					 xmlRegexpPtr regexp);
 int 
		    xmlRegexpIsDeterminist(xmlRegexpPtr comp);

/**
 * xmlRegExecCallbacks:
 * @exec: the regular expression context
 * @token: the current token string
 * @transdata: transition data
 * @inputdata: input data
 *
 * Callback function when doing a transition in the automata
 */
typedef void (*xmlRegExecCallbacks) (xmlRegExecCtxtPtr exec,
	                             const xmlChar *token,
				     void *transdata,
				     void *inputdata);

/*
 * The progressive API
 */
 xmlRegExecCtxtPtr 
		    xmlRegNewExecCtxt	(xmlRegexpPtr comp,
					 xmlRegExecCallbacks callback,
					 void *data);
 void 
		    xmlRegFreeExecCtxt	(xmlRegExecCtxtPtr exec);
 int 
		    xmlRegExecPushString(xmlRegExecCtxtPtr exec,
					 const xmlChar *value,
					 void *data);
 int 
		    xmlRegExecPushString2(xmlRegExecCtxtPtr exec,
					 const xmlChar *value,
					 const xmlChar *value2,
					 void *data);

 int 
		    xmlRegExecNextValues(xmlRegExecCtxtPtr exec,
					 int *nbval,
					 int *nbneg,
					 xmlChar **values,
					 int *terminal);
 int 
		    xmlRegExecErrInfo	(xmlRegExecCtxtPtr exec,
					 const xmlChar **string,
					 int *nbval,
					 int *nbneg,
					 xmlChar **values,
					 int *terminal);

/*
 * Formal regular expression handling
 * Its goal is to do some formal work on content models
 */

/* expressions are used within a context */
typedef struct _xmlExpCtxt xmlExpCtxt;
typedef xmlExpCtxt *xmlExpCtxtPtr;

 void 
			xmlExpFreeCtxt	(xmlExpCtxtPtr ctxt);
 xmlExpCtxtPtr 
			xmlExpNewCtxt	(int maxNodes,
					 xmlDictPtr dict);

 int 
			xmlExpCtxtNbNodes(xmlExpCtxtPtr ctxt);
 int 
			xmlExpCtxtNbCons(xmlExpCtxtPtr ctxt);

/* Expressions are trees but the tree is opaque */
typedef struct _xmlExpNode xmlExpNode;
typedef xmlExpNode *xmlExpNodePtr;

typedef enum {
    XML_EXP_EMPTY = 0,
    XML_EXP_FORBID = 1,
    XML_EXP_ATOM = 2,
    XML_EXP_SEQ = 3,
    XML_EXP_OR = 4,
    XML_EXP_COUNT = 5
} xmlExpNodeType;

/*
 * 2 core expressions shared by all for the empty language set
 * and for the set with just the empty token
 */
extern xmlExpNodePtr forbiddenExp;
extern xmlExpNodePtr emptyExp;

/*
 * Expressions are reference counted internally
 */
 void 
			xmlExpFree	(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr expr);
 void 
			xmlExpRef	(xmlExpNodePtr expr);

/*
 * constructors can be either manual or from a string
 */
 xmlExpNodePtr 
			xmlExpParse	(xmlExpCtxtPtr ctxt,
					 const char *expr);
 xmlExpNodePtr 
			xmlExpNewAtom	(xmlExpCtxtPtr ctxt,
					 const xmlChar *name,
					 int len);
 xmlExpNodePtr 
			xmlExpNewOr	(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr left,
					 xmlExpNodePtr right);
 xmlExpNodePtr 
			xmlExpNewSeq	(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr left,
					 xmlExpNodePtr right);
 xmlExpNodePtr 
			xmlExpNewRange	(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr subset,
					 int min,
					 int max);
/*
 * The really interesting APIs
 */
 int 
			xmlExpIsNillable(xmlExpNodePtr expr);
 int 
			xmlExpMaxToken	(xmlExpNodePtr expr);
 int 
			xmlExpGetLanguage(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr expr,
					 const xmlChar**langList,
					 int len);
 int 
			xmlExpGetStart	(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr expr,
					 const xmlChar**tokList,
					 int len);
 xmlExpNodePtr 
			xmlExpStringDerive(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr expr,
					 const xmlChar *str,
					 int len);
 xmlExpNodePtr 
			xmlExpExpDerive	(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr expr,
					 xmlExpNodePtr sub);
 int 
			xmlExpSubsume	(xmlExpCtxtPtr ctxt,
					 xmlExpNodePtr expr,
					 xmlExpNodePtr sub);
 void 
			xmlExpDump	(xmlBufferPtr buf,
					 xmlExpNodePtr expr);


}






#line 280 "/usr/include/libxml2/libxml/tree.h" 2

extern "C" {


/**
 * xmlElement:
 *
 * An XML Element declaration from a DTD.
 */

typedef struct _xmlElement xmlElement;
typedef xmlElement *xmlElementPtr;
struct _xmlElement {
    void           *_private;	        /* application data */
    xmlElementType          type;       /* XML_ELEMENT_DECL, must be second ! */
    const xmlChar          *name;	/* Element name */
    struct _xmlNode    *children;	/* NULL */
    struct _xmlNode        *last;	/* NULL */
    struct _xmlDtd       *parent;	/* -> DTD */
    struct _xmlNode        *next;	/* next sibling link  */
    struct _xmlNode        *prev;	/* previous sibling link  */
    struct _xmlDoc          *doc;       /* the containing document */

    xmlElementTypeVal      etype;	/* The type */
    xmlElementContentPtr content;	/* the allowed element content */
    xmlAttributePtr   attributes;	/* List of the declared attributes */
    const xmlChar        *prefix;	/* the namespace prefix if any */

    xmlRegexpPtr       contModel;	/* the validating regexp */

    

};


/**
 * XML_LOCAL_NAMESPACE:
 *
 * A namespace declaration node.
 */

typedef xmlElementType xmlNsType;

/**
 * xmlNs:
 *
 * An XML namespace.
 * Note that prefix == NULL is valid, it defines the default namespace
 * within the subtree (until overridden).
 *
 * xmlNsType is unified with xmlElementType.
 */

typedef struct _xmlNs xmlNs;
typedef xmlNs *xmlNsPtr;
struct _xmlNs {
    struct _xmlNs  *next;	/* next Ns link for this node  */
    xmlNsType      type;	/* global or local */
    const xmlChar *href;	/* URL for the namespace */
    const xmlChar *prefix;	/* prefix for the namespace */
    void           *_private;   /* application data */
    struct _xmlDoc *context;		/* normally an xmlDoc */
};

/**
 * xmlDtd:
 *
 * An XML DTD, as defined by <!DOCTYPE ... There is actually one for
 * the internal subset and for the external subset.
 */
typedef struct _xmlDtd xmlDtd;
typedef xmlDtd *xmlDtdPtr;
struct _xmlDtd {
    void           *_private;	/* application data */
    xmlElementType  type;       /* XML_DTD_NODE, must be second ! */
    const xmlChar *name;	/* Name of the DTD */
    struct _xmlNode *children;	/* the value of the property link */
    struct _xmlNode *last;	/* last child link */
    struct _xmlDoc  *parent;	/* child->parent link */
    struct _xmlNode *next;	/* next sibling link  */
    struct _xmlNode *prev;	/* previous sibling link  */
    struct _xmlDoc  *doc;	/* the containing document */

    /* End of common part */
    void          *notations;   /* Hash table for notations if any */
    void          *elements;    /* Hash table for elements if any */
    void          *attributes;  /* Hash table for attributes if any */
    void          *entities;    /* Hash table for entities if any */
    const xmlChar *ExternalID;	/* External identifier for PUBLIC DTD */
    const xmlChar *SystemID;	/* URI for a SYSTEM or PUBLIC DTD */
    void          *pentities;   /* Hash table for param entities if any */
};

/**
 * xmlAttr:
 *
 * An attribute on an XML node.
 */
typedef struct _xmlAttr xmlAttr;
typedef xmlAttr *xmlAttrPtr;
struct _xmlAttr {
    void           *_private;	/* application data */
    xmlElementType   type;      /* XML_ATTRIBUTE_NODE, must be second ! */
    const xmlChar   *name;      /* the name of the property */
    struct _xmlNode *children;	/* the value of the property */
    struct _xmlNode *last;	/* NULL */
    struct _xmlNode *parent;	/* child->parent link */
    struct _xmlAttr *next;	/* next sibling link  */
    struct _xmlAttr *prev;	/* previous sibling link  */
    struct _xmlDoc  *doc;	/* the containing document */
    xmlNs           *ns;        /* pointer to the associated namespace */
    xmlAttributeType atype;     /* the attribute type if validating */
    void            *psvi;	/* for type/PSVI informations */
};

/**
 * xmlID:
 *
 * An XML ID instance.
 */

typedef struct _xmlID xmlID;
typedef xmlID *xmlIDPtr;
struct _xmlID {
    struct _xmlID    *next;	/* next ID */
    const xmlChar    *value;	/* The ID name */
    xmlAttrPtr        attr;	/* The attribute holding it */
    const xmlChar    *name;	/* The attribute if attr is not available */
    int               lineno;	/* The line number if attr is not available */
    struct _xmlDoc   *doc;	/* The document holding the ID */
};

/**
 * xmlRef:
 *
 * An XML IDREF instance.
 */

typedef struct _xmlRef xmlRef;
typedef xmlRef *xmlRefPtr;
struct _xmlRef {
    struct _xmlRef    *next;	/* next Ref */
    const xmlChar     *value;	/* The Ref name */
    xmlAttrPtr        attr;	/* The attribute holding it */
    const xmlChar    *name;	/* The attribute if attr is not available */
    int               lineno;	/* The line number if attr is not available */
};

/**
 * xmlNode:
 *
 * A node in an XML tree.
 */
typedef struct _xmlNode xmlNode;
typedef xmlNode *xmlNodePtr;
struct _xmlNode {
    void           *_private;	/* application data */
    xmlElementType   type;	/* type number, must be second ! */
    const xmlChar   *name;      /* the name of the node, or the entity */
    struct _xmlNode *children;	/* parent->childs link */
    struct _xmlNode *last;	/* last child link */
    struct _xmlNode *parent;	/* child->parent link */
    struct _xmlNode *next;	/* next sibling link  */
    struct _xmlNode *prev;	/* previous sibling link  */
    struct _xmlDoc  *doc;	/* the containing document */

    /* End of common part */
    xmlNs           *ns;        /* pointer to the associated namespace */
    xmlChar         *content;   /* the content */
    struct _xmlAttr *properties;/* properties list */
    xmlNs           *nsDef;     /* namespace definitions on this node */
    void            *psvi;	/* for type/PSVI informations */
    unsigned short   line;	/* line number */
    unsigned short   extra;	/* extra data for XPath/XSLT */
};

/**
 * XML_GET_CONTENT:
 *
 * Macro to extract the content pointer of a node.
 */



/**
 * XML_GET_LINE:
 *
 * Macro to extract the line number of an element node. 
 */



/**
 * xmlDocProperty
 *
 * Set of properties of the document as found by the parser
 * Some of them are linked to similary named xmlParserOption
 */
typedef enum {
    XML_DOC_WELLFORMED		= 1<<0, /* document is XML well formed */
    XML_DOC_NSVALID		= 1<<1, /* document is Namespace valid */
    XML_DOC_OLD10		= 1<<2, /* parsed with old XML-1.0 parser */
    XML_DOC_DTDVALID		= 1<<3, /* DTD validation was successful */
    XML_DOC_XINCLUDE		= 1<<4, /* XInclude substitution was done */
    XML_DOC_USERBUILT		= 1<<5, /* Document was built using the API
                                           and not by parsing an instance */
    XML_DOC_INTERNAL		= 1<<6, /* built for internal processing */
    XML_DOC_HTML		= 1<<7  /* parsed or built HTML document */
} xmlDocProperties;

/**
 * xmlDoc:
 *
 * An XML document.
 */
typedef struct _xmlDoc xmlDoc;
typedef xmlDoc *xmlDocPtr;
struct _xmlDoc {
    void           *_private;	/* application data */
    xmlElementType  type;       /* XML_DOCUMENT_NODE, must be second ! */
    char           *name;	/* name/filename/URI of the document */
    struct _xmlNode *children;	/* the document tree */
    struct _xmlNode *last;	/* last child link */
    struct _xmlNode *parent;	/* child->parent link */
    struct _xmlNode *next;	/* next sibling link  */
    struct _xmlNode *prev;	/* previous sibling link  */
    struct _xmlDoc  *doc;	/* autoreference to itself */

    /* End of common part */
    int             compression;/* level of zlib compression */
    int             standalone; /* standalone document (no external refs) 
				     1 if standalone="yes"
				     0 if standalone="no"
				    -1 if there is no XML declaration
				    -2 if there is an XML declaration, but no
					standalone attribute was specified */
    struct _xmlDtd  *intSubset;	/* the document internal subset */
    struct _xmlDtd  *extSubset;	/* the document external subset */
    struct _xmlNs   *oldNs;	/* Global namespace, the old way */
    const xmlChar  *version;	/* the XML version string */
    const xmlChar  *encoding;   /* external initial encoding, if any */
    void           *ids;        /* Hash table for ID attributes if any */
    void           *refs;       /* Hash table for IDREFs attributes if any */
    const xmlChar  *URL;	/* The URI for that document */
    int             charset;    /* encoding of the in-memory content
				   actually an xmlCharEncoding */
    struct _xmlDict *dict;      /* dict used to allocate names or NULL */
    void           *psvi;	/* for type/PSVI informations */
    int             parseFlags;	/* set of xmlParserOption used to parse the
				   document */
    int             properties;	/* set of xmlDocProperties for this document
				   set at the end of parsing */
};


typedef struct _xmlDOMWrapCtxt xmlDOMWrapCtxt;
typedef xmlDOMWrapCtxt *xmlDOMWrapCtxtPtr;

/**
 * xmlDOMWrapAcquireNsFunction:
 * @ctxt:  a DOM wrapper context
 * @node:  the context node (element or attribute) 
 * @nsName:  the requested namespace name
 * @nsPrefix:  the requested namespace prefix 
 *
 * A function called to acquire namespaces (xmlNs) from the wrapper.
 *
 * Returns an xmlNsPtr or NULL in case of an error.
 */
typedef xmlNsPtr (*xmlDOMWrapAcquireNsFunction) (xmlDOMWrapCtxtPtr ctxt,
						 xmlNodePtr node,
						 const xmlChar *nsName,
						 const xmlChar *nsPrefix);

/**
 * xmlDOMWrapCtxt:
 *
 * Context for DOM wrapper-operations.
 */
struct _xmlDOMWrapCtxt {
    void * _private;
    /*
    * The type of this context, just in case we need specialized
    * contexts in the future.
    */
    int type;
    /*
    * Internal namespace map used for various operations.
    */
    void * namespaceMap;
    /*
    * Use this one to acquire an xmlNsPtr intended for node->ns.
    * (Note that this is not intended for elem->nsDef).
    */
    xmlDOMWrapAcquireNsFunction getNsForNodeFunc;
};

/**
 * xmlChildrenNode:
 *
 * Macro for compatibility naming layer with libxml1. Maps
 * to "children."
 */




/**
 * xmlRootNode:
 *
 * Macro for compatibility naming layer with libxml1. Maps 
 * to "children".
 */




/*
 * Variables.
 */

/*
 * Some helper functions
 */

 int 
		xmlValidateNCName	(const xmlChar *value,
					 int space);



 int 		
		xmlValidateQName	(const xmlChar *value,
					 int space);
 int 		
		xmlValidateName		(const xmlChar *value,
					 int space);
 int 		
		xmlValidateNMToken	(const xmlChar *value,
					 int space);


 xmlChar * 	
		xmlBuildQName		(const xmlChar *ncname,
					 const xmlChar *prefix,
					 xmlChar *memory,
					 int len);
 xmlChar * 	
		xmlSplitQName2		(const xmlChar *name,
					 xmlChar **prefix);
 const xmlChar * 	
		xmlSplitQName3		(const xmlChar *name,
					 int *len);

/*
 * Handling Buffers.
 */

 void 		
		xmlSetBufferAllocationScheme(xmlBufferAllocationScheme scheme);
 xmlBufferAllocationScheme 	 
		xmlGetBufferAllocationScheme(void);

 xmlBufferPtr 	
		xmlBufferCreate		(void);
 xmlBufferPtr 	
		xmlBufferCreateSize	(size_t size);
 xmlBufferPtr 	
		xmlBufferCreateStatic	(void *mem,
					 size_t size);
 int 		
		xmlBufferResize		(xmlBufferPtr buf,
					 unsigned int size);
 void 		
		xmlBufferFree		(xmlBufferPtr buf);
 int 		
		xmlBufferDump		(FILE *file,
					 xmlBufferPtr buf);
 int 		
		xmlBufferAdd		(xmlBufferPtr buf,
					 const xmlChar *str,
					 int len);
 int 		
		xmlBufferAddHead	(xmlBufferPtr buf,
					 const xmlChar *str,
					 int len);
 int 		
		xmlBufferCat		(xmlBufferPtr buf,
					 const xmlChar *str);
 int 	
		xmlBufferCCat		(xmlBufferPtr buf,
					 const char *str);
 int 		
		xmlBufferShrink		(xmlBufferPtr buf,
					 unsigned int len);
 int 		
		xmlBufferGrow		(xmlBufferPtr buf,
					 unsigned int len);
 void 		
		xmlBufferEmpty		(xmlBufferPtr buf);
 const xmlChar* 	
		xmlBufferContent	(const xmlBufferPtr buf);
 void 		
		xmlBufferSetAllocationScheme(xmlBufferPtr buf,
					 xmlBufferAllocationScheme scheme);
 int 		
		xmlBufferLength		(const xmlBufferPtr buf);

/*
 * Creating/freeing new structures.
 */
 xmlDtdPtr 	
		xmlCreateIntSubset	(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *ExternalID,
					 const xmlChar *SystemID);
 xmlDtdPtr 	
		xmlNewDtd		(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *ExternalID,
					 const xmlChar *SystemID);
 xmlDtdPtr 	
		xmlGetIntSubset		(xmlDocPtr doc);
 void 		
		xmlFreeDtd		(xmlDtdPtr cur);

 xmlNsPtr 	
		xmlNewGlobalNs		(xmlDocPtr doc,
					 const xmlChar *href,
					 const xmlChar *prefix);

 xmlNsPtr 	
		xmlNewNs		(xmlNodePtr node,
					 const xmlChar *href,
					 const xmlChar *prefix);
 void 		
		xmlFreeNs		(xmlNsPtr cur);
 void 		
		xmlFreeNsList		(xmlNsPtr cur);
 xmlDocPtr  	
		xmlNewDoc		(const xmlChar *version);
 void 		
		xmlFreeDoc		(xmlDocPtr cur);
 xmlAttrPtr 	
		xmlNewDocProp		(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *value);


 xmlAttrPtr 	
		xmlNewProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *value);

 xmlAttrPtr 	
		xmlNewNsProp		(xmlNodePtr node,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *value);
 xmlAttrPtr 	
		xmlNewNsPropEatName	(xmlNodePtr node,
					 xmlNsPtr ns,
					 xmlChar *name,
					 const xmlChar *value);
 void 		
		xmlFreePropList		(xmlAttrPtr cur);
 void 		
		xmlFreeProp		(xmlAttrPtr cur);
 xmlAttrPtr 	
		xmlCopyProp		(xmlNodePtr target,
					 xmlAttrPtr cur);
 xmlAttrPtr 	
		xmlCopyPropList		(xmlNodePtr target,
					 xmlAttrPtr cur);

 xmlDtdPtr 	
		xmlCopyDtd		(xmlDtdPtr dtd);


 xmlDocPtr 	
		xmlCopyDoc		(xmlDocPtr doc,
					 int recursive);

/*
 * Creating new nodes.
 */
 xmlNodePtr 	
		xmlNewDocNode		(xmlDocPtr doc,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewDocNodeEatName	(xmlDocPtr doc,
					 xmlNsPtr ns,
					 xmlChar *name,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewNode		(xmlNsPtr ns,
					 const xmlChar *name);
 xmlNodePtr 	
		xmlNewNodeEatName	(xmlNsPtr ns,
					 xmlChar *name);

 xmlNodePtr 	
		xmlNewChild		(xmlNodePtr parent,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);

 xmlNodePtr 	
		xmlNewDocText		(xmlDocPtr doc,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewText		(const xmlChar *content);
 xmlNodePtr 	
		xmlNewDocPI		(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewPI		(const xmlChar *name,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewDocTextLen	(xmlDocPtr doc,
					 const xmlChar *content,
					 int len);
 xmlNodePtr 	
		xmlNewTextLen		(const xmlChar *content,
					 int len);
 xmlNodePtr 	
		xmlNewDocComment	(xmlDocPtr doc,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewComment		(const xmlChar *content);
 xmlNodePtr 	
		xmlNewCDataBlock	(xmlDocPtr doc,
					 const xmlChar *content,
					 int len);
 xmlNodePtr 	
		xmlNewCharRef		(xmlDocPtr doc,
					 const xmlChar *name);
 xmlNodePtr 	
		xmlNewReference		(xmlDocPtr doc,
					 const xmlChar *name);
 xmlNodePtr 	
		xmlCopyNode		(const xmlNodePtr node,
					 int recursive);
 xmlNodePtr 	
		xmlDocCopyNode		(const xmlNodePtr node,
					 xmlDocPtr doc,
					 int recursive);
 xmlNodePtr 	
		xmlDocCopyNodeList	(xmlDocPtr doc,
					 const xmlNodePtr node);
 xmlNodePtr 	
		xmlCopyNodeList		(const xmlNodePtr node);

 xmlNodePtr 	
		xmlNewTextChild		(xmlNodePtr parent,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewDocRawNode	(xmlDocPtr doc,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);
 xmlNodePtr 	
		xmlNewDocFragment	(xmlDocPtr doc);


/*
 * Navigating.
 */
 long 		
		xmlGetLineNo		(xmlNodePtr node);

 xmlChar * 	
		xmlGetNodePath		(xmlNodePtr node);

 xmlNodePtr 	
		xmlDocGetRootElement	(xmlDocPtr doc);
 xmlNodePtr 	
		xmlGetLastChild		(xmlNodePtr parent);
 int 		
		xmlNodeIsText		(xmlNodePtr node);
 int 		
		xmlIsBlankNode		(xmlNodePtr node);

/*
 * Changing the structure.
 */

 xmlNodePtr 	
		xmlDocSetRootElement	(xmlDocPtr doc,
					 xmlNodePtr root);


 void 		
		xmlNodeSetName		(xmlNodePtr cur,
					 const xmlChar *name);

 xmlNodePtr 	
		xmlAddChild		(xmlNodePtr parent,
					 xmlNodePtr cur);
 xmlNodePtr 	
		xmlAddChildList		(xmlNodePtr parent,
					 xmlNodePtr cur);

 xmlNodePtr 	
		xmlReplaceNode		(xmlNodePtr old,
					 xmlNodePtr cur);



 xmlNodePtr 	
		xmlAddPrevSibling	(xmlNodePtr cur,
					 xmlNodePtr elem);

 xmlNodePtr 	
		xmlAddSibling		(xmlNodePtr cur,
					 xmlNodePtr elem);
 xmlNodePtr 	
		xmlAddNextSibling	(xmlNodePtr cur,
					 xmlNodePtr elem);
 void 		
		xmlUnlinkNode		(xmlNodePtr cur);
 xmlNodePtr 	
		xmlTextMerge		(xmlNodePtr first,
					 xmlNodePtr second);
 int 		
		xmlTextConcat		(xmlNodePtr node,
					 const xmlChar *content,
					 int len);
 void 		
		xmlFreeNodeList		(xmlNodePtr cur);
 void 		
		xmlFreeNode		(xmlNodePtr cur);
 void 		
		xmlSetTreeDoc		(xmlNodePtr tree,
					 xmlDocPtr doc);
 void 		
		xmlSetListDoc		(xmlNodePtr list,
					 xmlDocPtr doc);
/*
 * Namespaces.
 */
 xmlNsPtr 	
		xmlSearchNs		(xmlDocPtr doc,
					 xmlNodePtr node,
					 const xmlChar *nameSpace);
 xmlNsPtr 	
		xmlSearchNsByHref	(xmlDocPtr doc,
					 xmlNodePtr node,
					 const xmlChar *href);

 xmlNsPtr * 	
		xmlGetNsList		(xmlDocPtr doc,
					 xmlNodePtr node);


 void 		
		xmlSetNs		(xmlNodePtr node,
					 xmlNsPtr ns);
 xmlNsPtr 	
		xmlCopyNamespace	(xmlNsPtr cur);
 xmlNsPtr 	
		xmlCopyNamespaceList	(xmlNsPtr cur);

/*
 * Changing the content.
 */

 xmlAttrPtr 	
		xmlSetProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *value);
 xmlAttrPtr 	
		xmlSetNsProp		(xmlNodePtr node,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *value);

 xmlChar * 	
		xmlGetNoNsProp		(xmlNodePtr node,
					 const xmlChar *name);
 xmlChar * 	
		xmlGetProp		(xmlNodePtr node,
					 const xmlChar *name);
 xmlAttrPtr 	
		xmlHasProp		(xmlNodePtr node,
					 const xmlChar *name);
 xmlAttrPtr 	
		xmlHasNsProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *nameSpace);
 xmlChar * 	
		xmlGetNsProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *nameSpace);
 xmlNodePtr 	
		xmlStringGetNodeList	(xmlDocPtr doc,
					 const xmlChar *value);
 xmlNodePtr 	
		xmlStringLenGetNodeList	(xmlDocPtr doc,
					 const xmlChar *value,
					 int len);
 xmlChar * 	
		xmlNodeListGetString	(xmlDocPtr doc,
					 xmlNodePtr list,
					 int inLine);

 xmlChar * 	
		xmlNodeListGetRawString	(xmlDocPtr doc,
					 xmlNodePtr list,
					 int inLine);

 void 		
		xmlNodeSetContent	(xmlNodePtr cur,
					 const xmlChar *content);

 void 		
		xmlNodeSetContentLen	(xmlNodePtr cur,
					 const xmlChar *content,
					 int len);

 void 		
		xmlNodeAddContent	(xmlNodePtr cur,
					 const xmlChar *content);
 void 		
		xmlNodeAddContentLen	(xmlNodePtr cur,
					 const xmlChar *content,
					 int len);
 xmlChar * 	
		xmlNodeGetContent	(xmlNodePtr cur);
 int 
		xmlNodeBufGetContent	(xmlBufferPtr buffer,
					 xmlNodePtr cur);
 xmlChar * 	
		xmlNodeGetLang		(xmlNodePtr cur);
 int 		
		xmlNodeGetSpacePreserve	(xmlNodePtr cur);

 void 		
		xmlNodeSetLang		(xmlNodePtr cur,
					 const xmlChar *lang);
 void 		
		xmlNodeSetSpacePreserve (xmlNodePtr cur,
					 int val);

 xmlChar * 	
		xmlNodeGetBase		(xmlDocPtr doc,
					 xmlNodePtr cur);

 void 		
		xmlNodeSetBase		(xmlNodePtr cur,
					 const xmlChar *uri);


/*
 * Removing content.
 */
 int 		
		xmlRemoveProp		(xmlAttrPtr cur);

 int 		
		xmlUnsetNsProp		(xmlNodePtr node,
					 xmlNsPtr ns,
					 const xmlChar *name);
 int 		
		xmlUnsetProp		(xmlNodePtr node,
					 const xmlChar *name);


/*
 * Internal, don't use.
 */
 void 		
		xmlBufferWriteCHAR	(xmlBufferPtr buf,
					 const xmlChar *string);
 void 		
		xmlBufferWriteChar	(xmlBufferPtr buf,
					 const char *string);
 void 		
		xmlBufferWriteQuotedString(xmlBufferPtr buf,
					 const xmlChar *string);


 void xmlAttrSerializeTxtContent(xmlBufferPtr buf,
					 xmlDocPtr doc,
					 xmlAttrPtr attr,
					 const xmlChar *string);



/*
 * Namespace handling.
 */
 int 		
		xmlReconciliateNs	(xmlDocPtr doc,
					 xmlNodePtr tree);



/*
 * Saving.
 */
 void 		
		xmlDocDumpFormatMemory	(xmlDocPtr cur,
					 xmlChar **mem,
					 int *size,
					 int format);
 void 		
		xmlDocDumpMemory	(xmlDocPtr cur,
					 xmlChar **mem,
					 int *size);
 void 		
		xmlDocDumpMemoryEnc	(xmlDocPtr out_doc,
					 xmlChar **doc_txt_ptr,
					 int * doc_txt_len,
					 const char *txt_encoding);
 void 		
		xmlDocDumpFormatMemoryEnc(xmlDocPtr out_doc,
					 xmlChar **doc_txt_ptr,
					 int * doc_txt_len,
					 const char *txt_encoding,
					 int format);
 int 		
		xmlDocFormatDump	(FILE *f,
					 xmlDocPtr cur,
					 int format);
 int 	
		xmlDocDump		(FILE *f,
					 xmlDocPtr cur);
 void 		
		xmlElemDump		(FILE *f,
					 xmlDocPtr doc,
					 xmlNodePtr cur);
 int 		
		xmlSaveFile		(const char *filename,
					 xmlDocPtr cur);
 int 		
		xmlSaveFormatFile	(const char *filename,
					 xmlDocPtr cur,
					 int format);
 int 		
		xmlNodeDump		(xmlBufferPtr buf,
					 xmlDocPtr doc,
					 xmlNodePtr cur,
					 int level,
					 int format);

 int 		
		xmlSaveFileTo		(xmlOutputBufferPtr buf,
					 xmlDocPtr cur,
					 const char *encoding);
 int              
		xmlSaveFormatFileTo     (xmlOutputBufferPtr buf,
					 xmlDocPtr cur,
				         const char *encoding,
				         int format);
 void 		
		xmlNodeDumpOutput	(xmlOutputBufferPtr buf,
					 xmlDocPtr doc,
					 xmlNodePtr cur,
					 int level,
					 int format,
					 const char *encoding);

 int 		
		xmlSaveFormatFileEnc    (const char *filename,
					 xmlDocPtr cur,
					 const char *encoding,
					 int format);

 int 		
		xmlSaveFileEnc		(const char *filename,
					 xmlDocPtr cur,
					 const char *encoding);


/*
 * XHTML
 */
 int 		
		xmlIsXHTML		(const xmlChar *systemID,
					 const xmlChar *publicID);

/*
 * Compression.
 */
 int 		
		xmlGetDocCompressMode	(xmlDocPtr doc);
 void 		
		xmlSetDocCompressMode	(xmlDocPtr doc,
					 int mode);
 int 		
		xmlGetCompressMode	(void);
 void 		
		xmlSetCompressMode	(int mode);

/*
* DOM-wrapper helper functions.
*/
 xmlDOMWrapCtxtPtr 
		xmlDOMWrapNewCtxt	(void);
 void 
		xmlDOMWrapFreeCtxt	(xmlDOMWrapCtxtPtr ctxt);
 int 
	    xmlDOMWrapReconcileNamespaces(xmlDOMWrapCtxtPtr ctxt,
					 xmlNodePtr elem,
					 int options);
 int 
	    xmlDOMWrapAdoptNode		(xmlDOMWrapCtxtPtr ctxt,
					 xmlDocPtr sourceDoc,
					 xmlNodePtr node,
					 xmlDocPtr destDoc,		    
					 xmlNodePtr destParent,
					 int options);
 int 
	    xmlDOMWrapRemoveNode	(xmlDOMWrapCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlNodePtr node,
					 int options);
 int 
	    xmlDOMWrapCloneNode		(xmlDOMWrapCtxtPtr ctxt,
					 xmlDocPtr sourceDoc,
					 xmlNodePtr node,
					 xmlNodePtr *clonedNode,
					 xmlDocPtr destDoc,
					 xmlNodePtr destParent,
					 int deep,
					 int options);


/*
 * 5 interfaces from DOM ElementTraversal, but different in entities
 * traversal.
 */
 unsigned long 
            xmlChildElementCount        (xmlNodePtr parent);
 xmlNodePtr 
            xmlNextElementSibling       (xmlNodePtr node);
 xmlNodePtr 
            xmlFirstElementChild        (xmlNodePtr parent);
 xmlNodePtr 
            xmlLastElementChild         (xmlNodePtr parent);
 xmlNodePtr 
            xmlPreviousElementSibling   (xmlNodePtr node);


}



#line 1 "/usr/include/libxml2/libxml/xmlmemory.h" 1
/*
 * Summary: interface for the memory allocator
 * Description: provides interfaces for the memory allocator,
 *              including debugging capabilities.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */






#line 1 "/usr/include/libxml2/libxml/xmlmemory.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlmemory.h" 1

/**
 * DEBUG_MEMORY:
 *
 * DEBUG_MEMORY replaces the allocator with a collect and debug
 * shell to the libc allocator.
 * DEBUG_MEMORY should only be activated when debugging
 * libxml i.e. if libxml has been configured with --with-debug-mem too.
 */
/* #define DEBUG_MEMORY_FREED */
/* #define DEBUG_MEMORY_LOCATION */







/**
 * DEBUG_MEMORY_LOCATION:
 *
 * DEBUG_MEMORY_LOCATION should be activated only when debugging
 * libxml i.e. if libxml has been configured with --with-debug-mem too.
 */




extern "C" {


/*
 * The XML memory wrapper support 4 basic overloadable functions.
 */
/**
 * xmlFreeFunc:
 * @mem: an already allocated block of memory
 *
 * Signature for a free() implementation.
 */
typedef void ( *xmlFreeFunc)(void *mem);
/**
 * xmlMallocFunc:
 * @size:  the size requested in bytes
 *
 * Signature for a malloc() implementation.
 *
 * Returns a pointer to the newly allocated block or NULL in case of error.
 */
typedef void *(  *xmlMallocFunc)(size_t size);

/**
 * xmlReallocFunc:
 * @mem: an already allocated block of memory
 * @size:  the new size requested in bytes
 *
 * Signature for a realloc() implementation.
 *
 * Returns a pointer to the newly reallocated block or NULL in case of error.
 */
typedef void *( *xmlReallocFunc)(void *mem, size_t size);

/**
 * xmlStrdupFunc:
 * @str: a zero terminated string
 *
 * Signature for an strdup() implementation.
 *
 * Returns the copy of the string or NULL in case of error.
 */
typedef char *( *xmlStrdupFunc)(const char *str);

/*
 * The 4 interfaces used for all memory handling within libxml.
LIBXML_DLL_IMPORT xmlFreeFunc xmlFree;
LIBXML_DLL_IMPORT xmlMallocFunc xmlMalloc;
LIBXML_DLL_IMPORT xmlMallocFunc xmlMallocAtomic;
LIBXML_DLL_IMPORT xmlReallocFunc xmlRealloc;
LIBXML_DLL_IMPORT xmlStrdupFunc xmlMemStrdup;
 */

/*
 * The way to overload the existing functions.
 * The xmlGc function have an extra entry for atomic block
 * allocations useful for garbage collected memory allocators
 */
 int 
	xmlMemSetup	(xmlFreeFunc freeFunc,
			 xmlMallocFunc mallocFunc,
			 xmlReallocFunc reallocFunc,
			 xmlStrdupFunc strdupFunc);
 int 
	xmlMemGet	(xmlFreeFunc *freeFunc,
			 xmlMallocFunc *mallocFunc,
			 xmlReallocFunc *reallocFunc,
			 xmlStrdupFunc *strdupFunc);
 int 
	xmlGcMemSetup	(xmlFreeFunc freeFunc,
			 xmlMallocFunc mallocFunc,
			 xmlMallocFunc mallocAtomicFunc,
			 xmlReallocFunc reallocFunc,
			 xmlStrdupFunc strdupFunc);
 int 
	xmlGcMemGet	(xmlFreeFunc *freeFunc,
			 xmlMallocFunc *mallocFunc,
			 xmlMallocFunc *mallocAtomicFunc,
			 xmlReallocFunc *reallocFunc,
			 xmlStrdupFunc *strdupFunc);

/*
 * Initialization of the memory layer.
 */
 int 
	xmlInitMemory	(void);

/*
 * Cleanup of the memory layer.
 */
 void 
                xmlCleanupMemory        (void);
/*
 * These are specific to the XML debug memory wrapper.
 */
 int 
	xmlMemUsed	(void);
 int 
	xmlMemBlocks	(void);
 void 
	xmlMemDisplay	(FILE *fp);
 void 
	xmlMemDisplayLast(FILE *fp, long nbBytes);
 void 
	xmlMemShow	(FILE *fp, int nr);
 void 
	xmlMemoryDump	(void);
 void * 
	xmlMemMalloc	(size_t size) ;
 void * 
	xmlMemRealloc	(void *ptr,size_t size);
 void 
	xmlMemFree	(void *ptr);
 char * 
	xmlMemoryStrdup	(const char *str);
 void * 
	xmlMallocLoc	(size_t size, const char *file, int line) ;
 void * 
	xmlReallocLoc	(void *ptr, size_t size, const char *file, int line);
 void * 
	xmlMallocAtomicLoc (size_t size, const char *file, int line) ;
 char * 
	xmlMemStrdupLoc	(const char *str, const char *file, int line);













































}





#line 1 "/usr/include/libxml2/libxml/threads.h" 1
/**
 * Summary: interfaces for thread handling
 * Description: set of generic threading related routines
 *              should work with pthreads, Windows native or TLS threads
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/threads.h" 1


extern "C" {


/*
 * xmlMutex are a simple mutual exception locks.
 */
typedef struct _xmlMutex xmlMutex;
typedef xmlMutex *xmlMutexPtr;

/*
 * xmlRMutex are reentrant mutual exception locks.
 */
typedef struct _xmlRMutex xmlRMutex;
typedef xmlRMutex *xmlRMutexPtr;


}


#line 1 "/usr/include/libxml2/libxml/globals.h" 1
/*
 * Summary: interface for all global variables of the library
 * Description: all the global variables and thread handling for
 *              those variables is handled by this module.
 *
 * The bottom of this file is automatically generated by build_glob.py
 * based on the description file global.data
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Gary Pennington <Gary.Pennington@uk.sun.com>, Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/globals.h" 1

#line 1 "/usr/include/libxml2/libxml/parser.h" 1
/*
 * Summary: the core parser module
 * Description: Interfaces, constants and types related to the XML parser
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/parser.h" 1


#line 1 "/usr/include/libxml2/libxml/parser.h" 1

#line 1 "/usr/include/libxml2/libxml/parser.h" 1

#line 1 "/usr/include/libxml2/libxml/parser.h" 1

#line 1 "/usr/include/libxml2/libxml/hash.h" 1
/*
 * Summary: Chained hash tables
 * Description: This module implements the hash table support used in 
 * 		various places in the library.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Bjorn Reese <bjorn.reese@systematic.dk>
 */





extern "C" {


/*
 * The hash table.
 */
typedef struct _xmlHashTable xmlHashTable;
typedef xmlHashTable *xmlHashTablePtr;


}



#line 1 "/usr/include/libxml2/libxml/hash.h" 1

#line 1 "/usr/include/libxml2/libxml/hash.h" 1

#line 1 "/usr/include/libxml2/libxml/hash.h" 1


extern "C" {


/*
 * Recent version of gcc produce a warning when a function pointer is assigned
 * to an object pointer, or vice versa.  The following macro is a dirty hack
 * to allow suppression of the warning.  If your architecture has function
 * pointers which are a different size than a void pointer, there may be some
 * serious trouble within the library.
 */
/**
 * XML_CAST_FPTR:
 * @fptr:  pointer to a function
 *
 * Macro to do a casting from an object pointer to a
 * function pointer without encountering a warning from
 * gcc
 *
 * #define XML_CAST_FPTR(fptr) (*(void **)(&fptr))
 * This macro violated ISO C aliasing rules (gcc4 on s390 broke)
 * so it is disabled now
 */




/*
 * function types:
 */
/**
 * xmlHashDeallocator:
 * @payload:  the data in the hash
 * @name:  the name associated
 *
 * Callback to free data from a hash.
 */
typedef void (*xmlHashDeallocator)(void *payload, xmlChar *name);
/**
 * xmlHashCopier:
 * @payload:  the data in the hash
 * @name:  the name associated
 *
 * Callback to copy data from a hash.
 *
 * Returns a copy of the data or NULL in case of error.
 */
typedef void *(*xmlHashCopier)(void *payload, xmlChar *name);
/**
 * xmlHashScanner:
 * @payload:  the data in the hash
 * @data:  extra scannner data
 * @name:  the name associated
 *
 * Callback when scanning data in a hash with the simple scanner.
 */
typedef void (*xmlHashScanner)(void *payload, void *data, xmlChar *name);
/**
 * xmlHashScannerFull:
 * @payload:  the data in the hash
 * @data:  extra scannner data
 * @name:  the name associated
 * @name2:  the second name associated
 * @name3:  the third name associated
 *
 * Callback when scanning data in a hash with the full scanner.
 */
typedef void (*xmlHashScannerFull)(void *payload, void *data,
				   const xmlChar *name, const xmlChar *name2,
				   const xmlChar *name3);

/*
 * Constructor and destructor.
 */
 xmlHashTablePtr 
			xmlHashCreate	(int size);
 xmlHashTablePtr 
			xmlHashCreateDict(int size,
					 xmlDictPtr dict);
 void 			
			xmlHashFree	(xmlHashTablePtr table,
					 xmlHashDeallocator f);

/*
 * Add a new entry to the hash table.
 */
 int 			
			xmlHashAddEntry	(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         void *userdata);
 int 			
			xmlHashUpdateEntry(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         void *userdata,
					 xmlHashDeallocator f);
 int 		    
			xmlHashAddEntry2(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         void *userdata);
 int 			
			xmlHashUpdateEntry2(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         void *userdata,
					 xmlHashDeallocator f);
 int 			
			xmlHashAddEntry3(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         const xmlChar *name3,
		                         void *userdata);
 int 			
			xmlHashUpdateEntry3(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         const xmlChar *name3,
		                         void *userdata,
					 xmlHashDeallocator f);

/*
 * Remove an entry from the hash table.
 */
 int      
			xmlHashRemoveEntry(xmlHashTablePtr table, const xmlChar *name,
                           xmlHashDeallocator f);
 int      
			xmlHashRemoveEntry2(xmlHashTablePtr table, const xmlChar *name,
                            const xmlChar *name2, xmlHashDeallocator f);
 int      
			xmlHashRemoveEntry3(xmlHashTablePtr table, const xmlChar *name,
                            const xmlChar *name2, const xmlChar *name3,
                            xmlHashDeallocator f);

/*
 * Retrieve the userdata.
 */
 void * 			
			xmlHashLookup	(xmlHashTablePtr table,
					 const xmlChar *name);
 void * 			
			xmlHashLookup2	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2);
 void * 			
			xmlHashLookup3	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2,
					 const xmlChar *name3);
 void * 			
			xmlHashQLookup	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *prefix);
 void * 			
			xmlHashQLookup2	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *prefix,
					 const xmlChar *name2,
					 const xmlChar *prefix2);
 void * 			
			xmlHashQLookup3	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *prefix,
					 const xmlChar *name2,
					 const xmlChar *prefix2,
					 const xmlChar *name3,
					 const xmlChar *prefix3);

/*
 * Helpers.
 */
 xmlHashTablePtr 		
			xmlHashCopy	(xmlHashTablePtr table,
					 xmlHashCopier f);
 int 			
			xmlHashSize	(xmlHashTablePtr table);
 void 			
			xmlHashScan	(xmlHashTablePtr table,
					 xmlHashScanner f,
					 void *data);
 void 			
			xmlHashScan3	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2,
					 const xmlChar *name3,
					 xmlHashScanner f,
					 void *data);
 void 			
			xmlHashScanFull	(xmlHashTablePtr table,
					 xmlHashScannerFull f,
					 void *data);
 void 			
			xmlHashScanFull3(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2,
					 const xmlChar *name3,
					 xmlHashScannerFull f,
					 void *data);

}



#line 18 "/usr/include/libxml2/libxml/parser.h" 2

#line 1 "/usr/include/libxml2/libxml/valid.h" 1
/*
 * Summary: The DTD validation
 * Description: API for the DTD handling and the validity checking
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */






#line 1 "/usr/include/libxml2/libxml/valid.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlerror.h" 1
/*
 * Summary: error handling
 * Description: the API used to report errors
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */


#line 1 "/usr/include/libxml2/libxml/xmlerror.h" 1





extern "C" {


/**
 * xmlErrorLevel:
 *
 * Indicates the level of an error
 */
typedef enum {
    XML_ERR_NONE = 0,
    XML_ERR_WARNING = 1,	/* A simple warning */
    XML_ERR_ERROR = 2,		/* A recoverable error */
    XML_ERR_FATAL = 3		/* A fatal error */
} xmlErrorLevel;

/**
 * xmlErrorDomain:
 *
 * Indicates where an error may have come from
 */
typedef enum {
    XML_FROM_NONE = 0,
    XML_FROM_PARSER,	/* The XML parser */
    XML_FROM_TREE,	/* The tree module */
    XML_FROM_NAMESPACE,	/* The XML Namespace module */
    XML_FROM_DTD,	/* The XML DTD validation with parser context*/
    XML_FROM_HTML,	/* The HTML parser */
    XML_FROM_MEMORY,	/* The memory allocator */
    XML_FROM_OUTPUT,	/* The serialization code */
    XML_FROM_IO,	/* The Input/Output stack */
    XML_FROM_FTP,	/* The FTP module */
    XML_FROM_HTTP,	/* The HTTP module */
    XML_FROM_XINCLUDE,	/* The XInclude processing */
    XML_FROM_XPATH,	/* The XPath module */
    XML_FROM_XPOINTER,	/* The XPointer module */
    XML_FROM_REGEXP,	/* The regular expressions module */
    XML_FROM_DATATYPE,	/* The W3C XML Schemas Datatype module */
    XML_FROM_SCHEMASP,	/* The W3C XML Schemas parser module */
    XML_FROM_SCHEMASV,	/* The W3C XML Schemas validation module */
    XML_FROM_RELAXNGP,	/* The Relax-NG parser module */
    XML_FROM_RELAXNGV,	/* The Relax-NG validator module */
    XML_FROM_CATALOG,	/* The Catalog module */
    XML_FROM_C14N,	/* The Canonicalization module */
    XML_FROM_XSLT,	/* The XSLT engine from libxslt */
    XML_FROM_VALID,	/* The XML DTD validation with valid context */
    XML_FROM_CHECK,	/* The error checking module */
    XML_FROM_WRITER,	/* The xmlwriter module */
    XML_FROM_MODULE,	/* The dynamically loaded module module*/
    XML_FROM_I18N,	/* The module handling character conversion */
    XML_FROM_SCHEMATRONV	/* The Schematron validator module */
} xmlErrorDomain;

/**
 * xmlError:
 *
 * An XML Error instance.
 */

typedef struct _xmlError xmlError;
typedef xmlError *xmlErrorPtr;
struct _xmlError {
    int		domain;	/* What part of the library raised this error */
    int		code;	/* The error code, e.g. an xmlParserError */
    char       *message;/* human-readable informative error message */
    xmlErrorLevel level;/* how consequent is the error */
    char       *file;	/* the filename */
    int		line;	/* the line number if available */
    char       *str1;	/* extra string information */
    char       *str2;	/* extra string information */
    char       *str3;	/* extra string information */
    int		int1;	/* extra number information */
    int		int2;	/* column number of the error or 0 if N/A (todo: rename this field when we would break ABI) */
    void       *ctxt;   /* the parser context if available */
    void       *node;   /* the node in the tree */
};

/**
 * xmlParserError:
 *
 * This is an error that the XML (or HTML) parser can generate
 */
typedef enum {
    XML_ERR_OK = 0,
    XML_ERR_INTERNAL_ERROR, /* 1 */
    XML_ERR_NO_MEMORY, /* 2 */
    XML_ERR_DOCUMENT_START, /* 3 */
    XML_ERR_DOCUMENT_EMPTY, /* 4 */
    XML_ERR_DOCUMENT_END, /* 5 */
    XML_ERR_INVALID_HEX_CHARREF, /* 6 */
    XML_ERR_INVALID_DEC_CHARREF, /* 7 */
    XML_ERR_INVALID_CHARREF, /* 8 */
    XML_ERR_INVALID_CHAR, /* 9 */
    XML_ERR_CHARREF_AT_EOF, /* 10 */
    XML_ERR_CHARREF_IN_PROLOG, /* 11 */
    XML_ERR_CHARREF_IN_EPILOG, /* 12 */
    XML_ERR_CHARREF_IN_DTD, /* 13 */
    XML_ERR_ENTITYREF_AT_EOF, /* 14 */
    XML_ERR_ENTITYREF_IN_PROLOG, /* 15 */
    XML_ERR_ENTITYREF_IN_EPILOG, /* 16 */
    XML_ERR_ENTITYREF_IN_DTD, /* 17 */
    XML_ERR_PEREF_AT_EOF, /* 18 */
    XML_ERR_PEREF_IN_PROLOG, /* 19 */
    XML_ERR_PEREF_IN_EPILOG, /* 20 */
    XML_ERR_PEREF_IN_INT_SUBSET, /* 21 */
    XML_ERR_ENTITYREF_NO_NAME, /* 22 */
    XML_ERR_ENTITYREF_SEMICOL_MISSING, /* 23 */
    XML_ERR_PEREF_NO_NAME, /* 24 */
    XML_ERR_PEREF_SEMICOL_MISSING, /* 25 */
    XML_ERR_UNDECLARED_ENTITY, /* 26 */
    XML_WAR_UNDECLARED_ENTITY, /* 27 */
    XML_ERR_UNPARSED_ENTITY, /* 28 */
    XML_ERR_ENTITY_IS_EXTERNAL, /* 29 */
    XML_ERR_ENTITY_IS_PARAMETER, /* 30 */
    XML_ERR_UNKNOWN_ENCODING, /* 31 */
    XML_ERR_UNSUPPORTED_ENCODING, /* 32 */
    XML_ERR_STRING_NOT_STARTED, /* 33 */
    XML_ERR_STRING_NOT_CLOSED, /* 34 */
    XML_ERR_NS_DECL_ERROR, /* 35 */
    XML_ERR_ENTITY_NOT_STARTED, /* 36 */
    XML_ERR_ENTITY_NOT_FINISHED, /* 37 */
    XML_ERR_LT_IN_ATTRIBUTE, /* 38 */
    XML_ERR_ATTRIBUTE_NOT_STARTED, /* 39 */
    XML_ERR_ATTRIBUTE_NOT_FINISHED, /* 40 */
    XML_ERR_ATTRIBUTE_WITHOUT_VALUE, /* 41 */
    XML_ERR_ATTRIBUTE_REDEFINED, /* 42 */
    XML_ERR_LITERAL_NOT_STARTED, /* 43 */
    XML_ERR_LITERAL_NOT_FINISHED, /* 44 */
    XML_ERR_COMMENT_NOT_FINISHED, /* 45 */
    XML_ERR_PI_NOT_STARTED, /* 46 */
    XML_ERR_PI_NOT_FINISHED, /* 47 */
    XML_ERR_NOTATION_NOT_STARTED, /* 48 */
    XML_ERR_NOTATION_NOT_FINISHED, /* 49 */
    XML_ERR_ATTLIST_NOT_STARTED, /* 50 */
    XML_ERR_ATTLIST_NOT_FINISHED, /* 51 */
    XML_ERR_MIXED_NOT_STARTED, /* 52 */
    XML_ERR_MIXED_NOT_FINISHED, /* 53 */
    XML_ERR_ELEMCONTENT_NOT_STARTED, /* 54 */
    XML_ERR_ELEMCONTENT_NOT_FINISHED, /* 55 */
    XML_ERR_XMLDECL_NOT_STARTED, /* 56 */
    XML_ERR_XMLDECL_NOT_FINISHED, /* 57 */
    XML_ERR_CONDSEC_NOT_STARTED, /* 58 */
    XML_ERR_CONDSEC_NOT_FINISHED, /* 59 */
    XML_ERR_EXT_SUBSET_NOT_FINISHED, /* 60 */
    XML_ERR_DOCTYPE_NOT_FINISHED, /* 61 */
    XML_ERR_MISPLACED_CDATA_END, /* 62 */
    XML_ERR_CDATA_NOT_FINISHED, /* 63 */
    XML_ERR_RESERVED_XML_NAME, /* 64 */
    XML_ERR_SPACE_REQUIRED, /* 65 */
    XML_ERR_SEPARATOR_REQUIRED, /* 66 */
    XML_ERR_NMTOKEN_REQUIRED, /* 67 */
    XML_ERR_NAME_REQUIRED, /* 68 */
    XML_ERR_PCDATA_REQUIRED, /* 69 */
    XML_ERR_URI_REQUIRED, /* 70 */
    XML_ERR_PUBID_REQUIRED, /* 71 */
    XML_ERR_LT_REQUIRED, /* 72 */
    XML_ERR_GT_REQUIRED, /* 73 */
    XML_ERR_LTSLASH_REQUIRED, /* 74 */
    XML_ERR_EQUAL_REQUIRED, /* 75 */
    XML_ERR_TAG_NAME_MISMATCH, /* 76 */
    XML_ERR_TAG_NOT_FINISHED, /* 77 */
    XML_ERR_STANDALONE_VALUE, /* 78 */
    XML_ERR_ENCODING_NAME, /* 79 */
    XML_ERR_HYPHEN_IN_COMMENT, /* 80 */
    XML_ERR_INVALID_ENCODING, /* 81 */
    XML_ERR_EXT_ENTITY_STANDALONE, /* 82 */
    XML_ERR_CONDSEC_INVALID, /* 83 */
    XML_ERR_VALUE_REQUIRED, /* 84 */
    XML_ERR_NOT_WELL_BALANCED, /* 85 */
    XML_ERR_EXTRA_CONTENT, /* 86 */
    XML_ERR_ENTITY_CHAR_ERROR, /* 87 */
    XML_ERR_ENTITY_PE_INTERNAL, /* 88 */
    XML_ERR_ENTITY_LOOP, /* 89 */
    XML_ERR_ENTITY_BOUNDARY, /* 90 */
    XML_ERR_INVALID_URI, /* 91 */
    XML_ERR_URI_FRAGMENT, /* 92 */
    XML_WAR_CATALOG_PI, /* 93 */
    XML_ERR_NO_DTD, /* 94 */
    XML_ERR_CONDSEC_INVALID_KEYWORD, /* 95 */
    XML_ERR_VERSION_MISSING, /* 96 */
    XML_WAR_UNKNOWN_VERSION, /* 97 */
    XML_WAR_LANG_VALUE, /* 98 */
    XML_WAR_NS_URI, /* 99 */
    XML_WAR_NS_URI_RELATIVE, /* 100 */
    XML_ERR_MISSING_ENCODING, /* 101 */
    XML_WAR_SPACE_VALUE, /* 102 */
    XML_ERR_NOT_STANDALONE, /* 103 */
    XML_ERR_ENTITY_PROCESSING, /* 104 */
    XML_ERR_NOTATION_PROCESSING, /* 105 */
    XML_WAR_NS_COLUMN, /* 106 */
    XML_WAR_ENTITY_REDEFINED, /* 107 */
    XML_ERR_UNKNOWN_VERSION, /* 108 */
    XML_ERR_VERSION_MISMATCH, /* 109 */
    XML_ERR_USER_STOP, /* 111 */
    XML_NS_ERR_XML_NAMESPACE = 200,
    XML_NS_ERR_UNDEFINED_NAMESPACE, /* 201 */
    XML_NS_ERR_QNAME, /* 202 */
    XML_NS_ERR_ATTRIBUTE_REDEFINED, /* 203 */
    XML_NS_ERR_EMPTY, /* 204 */
    XML_NS_ERR_COLON, /* 205 */
    XML_DTD_ATTRIBUTE_DEFAULT = 500,
    XML_DTD_ATTRIBUTE_REDEFINED, /* 501 */
    XML_DTD_ATTRIBUTE_VALUE, /* 502 */
    XML_DTD_CONTENT_ERROR, /* 503 */
    XML_DTD_CONTENT_MODEL, /* 504 */
    XML_DTD_CONTENT_NOT_DETERMINIST, /* 505 */
    XML_DTD_DIFFERENT_PREFIX, /* 506 */
    XML_DTD_ELEM_DEFAULT_NAMESPACE, /* 507 */
    XML_DTD_ELEM_NAMESPACE, /* 508 */
    XML_DTD_ELEM_REDEFINED, /* 509 */
    XML_DTD_EMPTY_NOTATION, /* 510 */
    XML_DTD_ENTITY_TYPE, /* 511 */
    XML_DTD_ID_FIXED, /* 512 */
    XML_DTD_ID_REDEFINED, /* 513 */
    XML_DTD_ID_SUBSET, /* 514 */
    XML_DTD_INVALID_CHILD, /* 515 */
    XML_DTD_INVALID_DEFAULT, /* 516 */
    XML_DTD_LOAD_ERROR, /* 517 */
    XML_DTD_MISSING_ATTRIBUTE, /* 518 */
    XML_DTD_MIXED_CORRUPT, /* 519 */
    XML_DTD_MULTIPLE_ID, /* 520 */
    XML_DTD_NO_DOC, /* 521 */
    XML_DTD_NO_DTD, /* 522 */
    XML_DTD_NO_ELEM_NAME, /* 523 */
    XML_DTD_NO_PREFIX, /* 524 */
    XML_DTD_NO_ROOT, /* 525 */
    XML_DTD_NOTATION_REDEFINED, /* 526 */
    XML_DTD_NOTATION_VALUE, /* 527 */
    XML_DTD_NOT_EMPTY, /* 528 */
    XML_DTD_NOT_PCDATA, /* 529 */
    XML_DTD_NOT_STANDALONE, /* 530 */
    XML_DTD_ROOT_NAME, /* 531 */
    XML_DTD_STANDALONE_WHITE_SPACE, /* 532 */
    XML_DTD_UNKNOWN_ATTRIBUTE, /* 533 */
    XML_DTD_UNKNOWN_ELEM, /* 534 */
    XML_DTD_UNKNOWN_ENTITY, /* 535 */
    XML_DTD_UNKNOWN_ID, /* 536 */
    XML_DTD_UNKNOWN_NOTATION, /* 537 */
    XML_DTD_STANDALONE_DEFAULTED, /* 538 */
    XML_DTD_XMLID_VALUE, /* 539 */
    XML_DTD_XMLID_TYPE, /* 540 */
    XML_DTD_DUP_TOKEN, /* 541 */
    XML_HTML_STRUCURE_ERROR = 800,
    XML_HTML_UNKNOWN_TAG, /* 801 */
    XML_RNGP_ANYNAME_ATTR_ANCESTOR = 1000,
    XML_RNGP_ATTR_CONFLICT, /* 1001 */
    XML_RNGP_ATTRIBUTE_CHILDREN, /* 1002 */
    XML_RNGP_ATTRIBUTE_CONTENT, /* 1003 */
    XML_RNGP_ATTRIBUTE_EMPTY, /* 1004 */
    XML_RNGP_ATTRIBUTE_NOOP, /* 1005 */
    XML_RNGP_CHOICE_CONTENT, /* 1006 */
    XML_RNGP_CHOICE_EMPTY, /* 1007 */
    XML_RNGP_CREATE_FAILURE, /* 1008 */
    XML_RNGP_DATA_CONTENT, /* 1009 */
    XML_RNGP_DEF_CHOICE_AND_INTERLEAVE, /* 1010 */
    XML_RNGP_DEFINE_CREATE_FAILED, /* 1011 */
    XML_RNGP_DEFINE_EMPTY, /* 1012 */
    XML_RNGP_DEFINE_MISSING, /* 1013 */
    XML_RNGP_DEFINE_NAME_MISSING, /* 1014 */
    XML_RNGP_ELEM_CONTENT_EMPTY, /* 1015 */
    XML_RNGP_ELEM_CONTENT_ERROR, /* 1016 */
    XML_RNGP_ELEMENT_EMPTY, /* 1017 */
    XML_RNGP_ELEMENT_CONTENT, /* 1018 */
    XML_RNGP_ELEMENT_NAME, /* 1019 */
    XML_RNGP_ELEMENT_NO_CONTENT, /* 1020 */
    XML_RNGP_ELEM_TEXT_CONFLICT, /* 1021 */
    XML_RNGP_EMPTY, /* 1022 */
    XML_RNGP_EMPTY_CONSTRUCT, /* 1023 */
    XML_RNGP_EMPTY_CONTENT, /* 1024 */
    XML_RNGP_EMPTY_NOT_EMPTY, /* 1025 */
    XML_RNGP_ERROR_TYPE_LIB, /* 1026 */
    XML_RNGP_EXCEPT_EMPTY, /* 1027 */
    XML_RNGP_EXCEPT_MISSING, /* 1028 */
    XML_RNGP_EXCEPT_MULTIPLE, /* 1029 */
    XML_RNGP_EXCEPT_NO_CONTENT, /* 1030 */
    XML_RNGP_EXTERNALREF_EMTPY, /* 1031 */
    XML_RNGP_EXTERNAL_REF_FAILURE, /* 1032 */
    XML_RNGP_EXTERNALREF_RECURSE, /* 1033 */
    XML_RNGP_FORBIDDEN_ATTRIBUTE, /* 1034 */
    XML_RNGP_FOREIGN_ELEMENT, /* 1035 */
    XML_RNGP_GRAMMAR_CONTENT, /* 1036 */
    XML_RNGP_GRAMMAR_EMPTY, /* 1037 */
    XML_RNGP_GRAMMAR_MISSING, /* 1038 */
    XML_RNGP_GRAMMAR_NO_START, /* 1039 */
    XML_RNGP_GROUP_ATTR_CONFLICT, /* 1040 */
    XML_RNGP_HREF_ERROR, /* 1041 */
    XML_RNGP_INCLUDE_EMPTY, /* 1042 */
    XML_RNGP_INCLUDE_FAILURE, /* 1043 */
    XML_RNGP_INCLUDE_RECURSE, /* 1044 */
    XML_RNGP_INTERLEAVE_ADD, /* 1045 */
    XML_RNGP_INTERLEAVE_CREATE_FAILED, /* 1046 */
    XML_RNGP_INTERLEAVE_EMPTY, /* 1047 */
    XML_RNGP_INTERLEAVE_NO_CONTENT, /* 1048 */
    XML_RNGP_INVALID_DEFINE_NAME, /* 1049 */
    XML_RNGP_INVALID_URI, /* 1050 */
    XML_RNGP_INVALID_VALUE, /* 1051 */
    XML_RNGP_MISSING_HREF, /* 1052 */
    XML_RNGP_NAME_MISSING, /* 1053 */
    XML_RNGP_NEED_COMBINE, /* 1054 */
    XML_RNGP_NOTALLOWED_NOT_EMPTY, /* 1055 */
    XML_RNGP_NSNAME_ATTR_ANCESTOR, /* 1056 */
    XML_RNGP_NSNAME_NO_NS, /* 1057 */
    XML_RNGP_PARAM_FORBIDDEN, /* 1058 */
    XML_RNGP_PARAM_NAME_MISSING, /* 1059 */
    XML_RNGP_PARENTREF_CREATE_FAILED, /* 1060 */
    XML_RNGP_PARENTREF_NAME_INVALID, /* 1061 */
    XML_RNGP_PARENTREF_NO_NAME, /* 1062 */
    XML_RNGP_PARENTREF_NO_PARENT, /* 1063 */
    XML_RNGP_PARENTREF_NOT_EMPTY, /* 1064 */
    XML_RNGP_PARSE_ERROR, /* 1065 */
    XML_RNGP_PAT_ANYNAME_EXCEPT_ANYNAME, /* 1066 */
    XML_RNGP_PAT_ATTR_ATTR, /* 1067 */
    XML_RNGP_PAT_ATTR_ELEM, /* 1068 */
    XML_RNGP_PAT_DATA_EXCEPT_ATTR, /* 1069 */
    XML_RNGP_PAT_DATA_EXCEPT_ELEM, /* 1070 */
    XML_RNGP_PAT_DATA_EXCEPT_EMPTY, /* 1071 */
    XML_RNGP_PAT_DATA_EXCEPT_GROUP, /* 1072 */
    XML_RNGP_PAT_DATA_EXCEPT_INTERLEAVE, /* 1073 */
    XML_RNGP_PAT_DATA_EXCEPT_LIST, /* 1074 */
    XML_RNGP_PAT_DATA_EXCEPT_ONEMORE, /* 1075 */
    XML_RNGP_PAT_DATA_EXCEPT_REF, /* 1076 */
    XML_RNGP_PAT_DATA_EXCEPT_TEXT, /* 1077 */
    XML_RNGP_PAT_LIST_ATTR, /* 1078 */
    XML_RNGP_PAT_LIST_ELEM, /* 1079 */
    XML_RNGP_PAT_LIST_INTERLEAVE, /* 1080 */
    XML_RNGP_PAT_LIST_LIST, /* 1081 */
    XML_RNGP_PAT_LIST_REF, /* 1082 */
    XML_RNGP_PAT_LIST_TEXT, /* 1083 */
    XML_RNGP_PAT_NSNAME_EXCEPT_ANYNAME, /* 1084 */
    XML_RNGP_PAT_NSNAME_EXCEPT_NSNAME, /* 1085 */
    XML_RNGP_PAT_ONEMORE_GROUP_ATTR, /* 1086 */
    XML_RNGP_PAT_ONEMORE_INTERLEAVE_ATTR, /* 1087 */
    XML_RNGP_PAT_START_ATTR, /* 1088 */
    XML_RNGP_PAT_START_DATA, /* 1089 */
    XML_RNGP_PAT_START_EMPTY, /* 1090 */
    XML_RNGP_PAT_START_GROUP, /* 1091 */
    XML_RNGP_PAT_START_INTERLEAVE, /* 1092 */
    XML_RNGP_PAT_START_LIST, /* 1093 */
    XML_RNGP_PAT_START_ONEMORE, /* 1094 */
    XML_RNGP_PAT_START_TEXT, /* 1095 */
    XML_RNGP_PAT_START_VALUE, /* 1096 */
    XML_RNGP_PREFIX_UNDEFINED, /* 1097 */
    XML_RNGP_REF_CREATE_FAILED, /* 1098 */
    XML_RNGP_REF_CYCLE, /* 1099 */
    XML_RNGP_REF_NAME_INVALID, /* 1100 */
    XML_RNGP_REF_NO_DEF, /* 1101 */
    XML_RNGP_REF_NO_NAME, /* 1102 */
    XML_RNGP_REF_NOT_EMPTY, /* 1103 */
    XML_RNGP_START_CHOICE_AND_INTERLEAVE, /* 1104 */
    XML_RNGP_START_CONTENT, /* 1105 */
    XML_RNGP_START_EMPTY, /* 1106 */
    XML_RNGP_START_MISSING, /* 1107 */
    XML_RNGP_TEXT_EXPECTED, /* 1108 */
    XML_RNGP_TEXT_HAS_CHILD, /* 1109 */
    XML_RNGP_TYPE_MISSING, /* 1110 */
    XML_RNGP_TYPE_NOT_FOUND, /* 1111 */
    XML_RNGP_TYPE_VALUE, /* 1112 */
    XML_RNGP_UNKNOWN_ATTRIBUTE, /* 1113 */
    XML_RNGP_UNKNOWN_COMBINE, /* 1114 */
    XML_RNGP_UNKNOWN_CONSTRUCT, /* 1115 */
    XML_RNGP_UNKNOWN_TYPE_LIB, /* 1116 */
    XML_RNGP_URI_FRAGMENT, /* 1117 */
    XML_RNGP_URI_NOT_ABSOLUTE, /* 1118 */
    XML_RNGP_VALUE_EMPTY, /* 1119 */
    XML_RNGP_VALUE_NO_CONTENT, /* 1120 */
    XML_RNGP_XMLNS_NAME, /* 1121 */
    XML_RNGP_XML_NS, /* 1122 */
    XML_XPATH_EXPRESSION_OK = 1200,
    XML_XPATH_NUMBER_ERROR, /* 1201 */
    XML_XPATH_UNFINISHED_LITERAL_ERROR, /* 1202 */
    XML_XPATH_START_LITERAL_ERROR, /* 1203 */
    XML_XPATH_VARIABLE_REF_ERROR, /* 1204 */
    XML_XPATH_UNDEF_VARIABLE_ERROR, /* 1205 */
    XML_XPATH_INVALID_PREDICATE_ERROR, /* 1206 */
    XML_XPATH_EXPR_ERROR, /* 1207 */
    XML_XPATH_UNCLOSED_ERROR, /* 1208 */
    XML_XPATH_UNKNOWN_FUNC_ERROR, /* 1209 */
    XML_XPATH_INVALID_OPERAND, /* 1210 */
    XML_XPATH_INVALID_TYPE, /* 1211 */
    XML_XPATH_INVALID_ARITY, /* 1212 */
    XML_XPATH_INVALID_CTXT_SIZE, /* 1213 */
    XML_XPATH_INVALID_CTXT_POSITION, /* 1214 */
    XML_XPATH_MEMORY_ERROR, /* 1215 */
    XML_XPTR_SYNTAX_ERROR, /* 1216 */
    XML_XPTR_RESOURCE_ERROR, /* 1217 */
    XML_XPTR_SUB_RESOURCE_ERROR, /* 1218 */
    XML_XPATH_UNDEF_PREFIX_ERROR, /* 1219 */
    XML_XPATH_ENCODING_ERROR, /* 1220 */
    XML_XPATH_INVALID_CHAR_ERROR, /* 1221 */
    XML_TREE_INVALID_HEX = 1300,
    XML_TREE_INVALID_DEC, /* 1301 */
    XML_TREE_UNTERMINATED_ENTITY, /* 1302 */
    XML_TREE_NOT_UTF8, /* 1303 */
    XML_SAVE_NOT_UTF8 = 1400,
    XML_SAVE_CHAR_INVALID, /* 1401 */
    XML_SAVE_NO_DOCTYPE, /* 1402 */
    XML_SAVE_UNKNOWN_ENCODING, /* 1403 */
    XML_REGEXP_COMPILE_ERROR = 1450,
    XML_IO_UNKNOWN = 1500,
    XML_IO_EACCES, /* 1501 */
    XML_IO_EAGAIN, /* 1502 */
    XML_IO_EBADF, /* 1503 */
    XML_IO_EBADMSG, /* 1504 */
    XML_IO_EBUSY, /* 1505 */
    XML_IO_ECANCELED, /* 1506 */
    XML_IO_ECHILD, /* 1507 */
    XML_IO_EDEADLK, /* 1508 */
    XML_IO_EDOM, /* 1509 */
    XML_IO_EEXIST, /* 1510 */
    XML_IO_EFAULT, /* 1511 */
    XML_IO_EFBIG, /* 1512 */
    XML_IO_EINPROGRESS, /* 1513 */
    XML_IO_EINTR, /* 1514 */
    XML_IO_EINVAL, /* 1515 */
    XML_IO_EIO, /* 1516 */
    XML_IO_EISDIR, /* 1517 */
    XML_IO_EMFILE, /* 1518 */
    XML_IO_EMLINK, /* 1519 */
    XML_IO_EMSGSIZE, /* 1520 */
    XML_IO_ENAMETOOLONG, /* 1521 */
    XML_IO_ENFILE, /* 1522 */
    XML_IO_ENODEV, /* 1523 */
    XML_IO_ENOENT, /* 1524 */
    XML_IO_ENOEXEC, /* 1525 */
    XML_IO_ENOLCK, /* 1526 */
    XML_IO_ENOMEM, /* 1527 */
    XML_IO_ENOSPC, /* 1528 */
    XML_IO_ENOSYS, /* 1529 */
    XML_IO_ENOTDIR, /* 1530 */
    XML_IO_ENOTEMPTY, /* 1531 */
    XML_IO_ENOTSUP, /* 1532 */
    XML_IO_ENOTTY, /* 1533 */
    XML_IO_ENXIO, /* 1534 */
    XML_IO_EPERM, /* 1535 */
    XML_IO_EPIPE, /* 1536 */
    XML_IO_ERANGE, /* 1537 */
    XML_IO_EROFS, /* 1538 */
    XML_IO_ESPIPE, /* 1539 */
    XML_IO_ESRCH, /* 1540 */
    XML_IO_ETIMEDOUT, /* 1541 */
    XML_IO_EXDEV, /* 1542 */
    XML_IO_NETWORK_ATTEMPT, /* 1543 */
    XML_IO_ENCODER, /* 1544 */
    XML_IO_FLUSH, /* 1545 */
    XML_IO_WRITE, /* 1546 */
    XML_IO_NO_INPUT, /* 1547 */
    XML_IO_BUFFER_FULL, /* 1548 */
    XML_IO_LOAD_ERROR, /* 1549 */
    XML_IO_ENOTSOCK, /* 1550 */
    XML_IO_EISCONN, /* 1551 */
    XML_IO_ECONNREFUSED, /* 1552 */
    XML_IO_ENETUNREACH, /* 1553 */
    XML_IO_EADDRINUSE, /* 1554 */
    XML_IO_EALREADY, /* 1555 */
    XML_IO_EAFNOSUPPORT, /* 1556 */
    XML_XINCLUDE_RECURSION=1600,
    XML_XINCLUDE_PARSE_VALUE, /* 1601 */
    XML_XINCLUDE_ENTITY_DEF_MISMATCH, /* 1602 */
    XML_XINCLUDE_NO_HREF, /* 1603 */
    XML_XINCLUDE_NO_FALLBACK, /* 1604 */
    XML_XINCLUDE_HREF_URI, /* 1605 */
    XML_XINCLUDE_TEXT_FRAGMENT, /* 1606 */
    XML_XINCLUDE_TEXT_DOCUMENT, /* 1607 */
    XML_XINCLUDE_INVALID_CHAR, /* 1608 */
    XML_XINCLUDE_BUILD_FAILED, /* 1609 */
    XML_XINCLUDE_UNKNOWN_ENCODING, /* 1610 */
    XML_XINCLUDE_MULTIPLE_ROOT, /* 1611 */
    XML_XINCLUDE_XPTR_FAILED, /* 1612 */
    XML_XINCLUDE_XPTR_RESULT, /* 1613 */
    XML_XINCLUDE_INCLUDE_IN_INCLUDE, /* 1614 */
    XML_XINCLUDE_FALLBACKS_IN_INCLUDE, /* 1615 */
    XML_XINCLUDE_FALLBACK_NOT_IN_INCLUDE, /* 1616 */
    XML_XINCLUDE_DEPRECATED_NS, /* 1617 */
    XML_XINCLUDE_FRAGMENT_ID, /* 1618 */
    XML_CATALOG_MISSING_ATTR = 1650,
    XML_CATALOG_ENTRY_BROKEN, /* 1651 */
    XML_CATALOG_PREFER_VALUE, /* 1652 */
    XML_CATALOG_NOT_CATALOG, /* 1653 */
    XML_CATALOG_RECURSION, /* 1654 */
    XML_SCHEMAP_PREFIX_UNDEFINED = 1700,
    XML_SCHEMAP_ATTRFORMDEFAULT_VALUE, /* 1701 */
    XML_SCHEMAP_ATTRGRP_NONAME_NOREF, /* 1702 */
    XML_SCHEMAP_ATTR_NONAME_NOREF, /* 1703 */
    XML_SCHEMAP_COMPLEXTYPE_NONAME_NOREF, /* 1704 */
    XML_SCHEMAP_ELEMFORMDEFAULT_VALUE, /* 1705 */
    XML_SCHEMAP_ELEM_NONAME_NOREF, /* 1706 */
    XML_SCHEMAP_EXTENSION_NO_BASE, /* 1707 */
    XML_SCHEMAP_FACET_NO_VALUE, /* 1708 */
    XML_SCHEMAP_FAILED_BUILD_IMPORT, /* 1709 */
    XML_SCHEMAP_GROUP_NONAME_NOREF, /* 1710 */
    XML_SCHEMAP_IMPORT_NAMESPACE_NOT_URI, /* 1711 */
    XML_SCHEMAP_IMPORT_REDEFINE_NSNAME, /* 1712 */
    XML_SCHEMAP_IMPORT_SCHEMA_NOT_URI, /* 1713 */
    XML_SCHEMAP_INVALID_BOOLEAN, /* 1714 */
    XML_SCHEMAP_INVALID_ENUM, /* 1715 */
    XML_SCHEMAP_INVALID_FACET, /* 1716 */
    XML_SCHEMAP_INVALID_FACET_VALUE, /* 1717 */
    XML_SCHEMAP_INVALID_MAXOCCURS, /* 1718 */
    XML_SCHEMAP_INVALID_MINOCCURS, /* 1719 */
    XML_SCHEMAP_INVALID_REF_AND_SUBTYPE, /* 1720 */
    XML_SCHEMAP_INVALID_WHITE_SPACE, /* 1721 */
    XML_SCHEMAP_NOATTR_NOREF, /* 1722 */
    XML_SCHEMAP_NOTATION_NO_NAME, /* 1723 */
    XML_SCHEMAP_NOTYPE_NOREF, /* 1724 */
    XML_SCHEMAP_REF_AND_SUBTYPE, /* 1725 */
    XML_SCHEMAP_RESTRICTION_NONAME_NOREF, /* 1726 */
    XML_SCHEMAP_SIMPLETYPE_NONAME, /* 1727 */
    XML_SCHEMAP_TYPE_AND_SUBTYPE, /* 1728 */
    XML_SCHEMAP_UNKNOWN_ALL_CHILD, /* 1729 */
    XML_SCHEMAP_UNKNOWN_ANYATTRIBUTE_CHILD, /* 1730 */
    XML_SCHEMAP_UNKNOWN_ATTR_CHILD, /* 1731 */
    XML_SCHEMAP_UNKNOWN_ATTRGRP_CHILD, /* 1732 */
    XML_SCHEMAP_UNKNOWN_ATTRIBUTE_GROUP, /* 1733 */
    XML_SCHEMAP_UNKNOWN_BASE_TYPE, /* 1734 */
    XML_SCHEMAP_UNKNOWN_CHOICE_CHILD, /* 1735 */
    XML_SCHEMAP_UNKNOWN_COMPLEXCONTENT_CHILD, /* 1736 */
    XML_SCHEMAP_UNKNOWN_COMPLEXTYPE_CHILD, /* 1737 */
    XML_SCHEMAP_UNKNOWN_ELEM_CHILD, /* 1738 */
    XML_SCHEMAP_UNKNOWN_EXTENSION_CHILD, /* 1739 */
    XML_SCHEMAP_UNKNOWN_FACET_CHILD, /* 1740 */
    XML_SCHEMAP_UNKNOWN_FACET_TYPE, /* 1741 */
    XML_SCHEMAP_UNKNOWN_GROUP_CHILD, /* 1742 */
    XML_SCHEMAP_UNKNOWN_IMPORT_CHILD, /* 1743 */
    XML_SCHEMAP_UNKNOWN_LIST_CHILD, /* 1744 */
    XML_SCHEMAP_UNKNOWN_NOTATION_CHILD, /* 1745 */
    XML_SCHEMAP_UNKNOWN_PROCESSCONTENT_CHILD, /* 1746 */
    XML_SCHEMAP_UNKNOWN_REF, /* 1747 */
    XML_SCHEMAP_UNKNOWN_RESTRICTION_CHILD, /* 1748 */
    XML_SCHEMAP_UNKNOWN_SCHEMAS_CHILD, /* 1749 */
    XML_SCHEMAP_UNKNOWN_SEQUENCE_CHILD, /* 1750 */
    XML_SCHEMAP_UNKNOWN_SIMPLECONTENT_CHILD, /* 1751 */
    XML_SCHEMAP_UNKNOWN_SIMPLETYPE_CHILD, /* 1752 */
    XML_SCHEMAP_UNKNOWN_TYPE, /* 1753 */
    XML_SCHEMAP_UNKNOWN_UNION_CHILD, /* 1754 */
    XML_SCHEMAP_ELEM_DEFAULT_FIXED, /* 1755 */
    XML_SCHEMAP_REGEXP_INVALID, /* 1756 */
    XML_SCHEMAP_FAILED_LOAD, /* 1757 */
    XML_SCHEMAP_NOTHING_TO_PARSE, /* 1758 */
    XML_SCHEMAP_NOROOT, /* 1759 */
    XML_SCHEMAP_REDEFINED_GROUP, /* 1760 */
    XML_SCHEMAP_REDEFINED_TYPE, /* 1761 */
    XML_SCHEMAP_REDEFINED_ELEMENT, /* 1762 */
    XML_SCHEMAP_REDEFINED_ATTRGROUP, /* 1763 */
    XML_SCHEMAP_REDEFINED_ATTR, /* 1764 */
    XML_SCHEMAP_REDEFINED_NOTATION, /* 1765 */
    XML_SCHEMAP_FAILED_PARSE, /* 1766 */
    XML_SCHEMAP_UNKNOWN_PREFIX, /* 1767 */
    XML_SCHEMAP_DEF_AND_PREFIX, /* 1768 */
    XML_SCHEMAP_UNKNOWN_INCLUDE_CHILD, /* 1769 */
    XML_SCHEMAP_INCLUDE_SCHEMA_NOT_URI, /* 1770 */
    XML_SCHEMAP_INCLUDE_SCHEMA_NO_URI, /* 1771 */
    XML_SCHEMAP_NOT_SCHEMA, /* 1772 */
    XML_SCHEMAP_UNKNOWN_MEMBER_TYPE, /* 1773 */
    XML_SCHEMAP_INVALID_ATTR_USE, /* 1774 */
    XML_SCHEMAP_RECURSIVE, /* 1775 */
    XML_SCHEMAP_SUPERNUMEROUS_LIST_ITEM_TYPE, /* 1776 */
    XML_SCHEMAP_INVALID_ATTR_COMBINATION, /* 1777 */
    XML_SCHEMAP_INVALID_ATTR_INLINE_COMBINATION, /* 1778 */
    XML_SCHEMAP_MISSING_SIMPLETYPE_CHILD, /* 1779 */
    XML_SCHEMAP_INVALID_ATTR_NAME, /* 1780 */
    XML_SCHEMAP_REF_AND_CONTENT, /* 1781 */
    XML_SCHEMAP_CT_PROPS_CORRECT_1, /* 1782 */
    XML_SCHEMAP_CT_PROPS_CORRECT_2, /* 1783 */
    XML_SCHEMAP_CT_PROPS_CORRECT_3, /* 1784 */
    XML_SCHEMAP_CT_PROPS_CORRECT_4, /* 1785 */
    XML_SCHEMAP_CT_PROPS_CORRECT_5, /* 1786 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_1, /* 1787 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_1, /* 1788 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_2, /* 1789 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_2, /* 1790 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_3, /* 1791 */
    XML_SCHEMAP_WILDCARD_INVALID_NS_MEMBER, /* 1792 */
    XML_SCHEMAP_INTERSECTION_NOT_EXPRESSIBLE, /* 1793 */
    XML_SCHEMAP_UNION_NOT_EXPRESSIBLE, /* 1794 */
    XML_SCHEMAP_SRC_IMPORT_3_1, /* 1795 */
    XML_SCHEMAP_SRC_IMPORT_3_2, /* 1796 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_1, /* 1797 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_2, /* 1798 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_3, /* 1799 */
    XML_SCHEMAP_COS_CT_EXTENDS_1_3, /* 1800 */
    XML_SCHEMAV_NOROOT = 1801,
    XML_SCHEMAV_UNDECLAREDELEM, /* 1802 */
    XML_SCHEMAV_NOTTOPLEVEL, /* 1803 */
    XML_SCHEMAV_MISSING, /* 1804 */
    XML_SCHEMAV_WRONGELEM, /* 1805 */
    XML_SCHEMAV_NOTYPE, /* 1806 */
    XML_SCHEMAV_NOROLLBACK, /* 1807 */
    XML_SCHEMAV_ISABSTRACT, /* 1808 */
    XML_SCHEMAV_NOTEMPTY, /* 1809 */
    XML_SCHEMAV_ELEMCONT, /* 1810 */
    XML_SCHEMAV_HAVEDEFAULT, /* 1811 */
    XML_SCHEMAV_NOTNILLABLE, /* 1812 */
    XML_SCHEMAV_EXTRACONTENT, /* 1813 */
    XML_SCHEMAV_INVALIDATTR, /* 1814 */
    XML_SCHEMAV_INVALIDELEM, /* 1815 */
    XML_SCHEMAV_NOTDETERMINIST, /* 1816 */
    XML_SCHEMAV_CONSTRUCT, /* 1817 */
    XML_SCHEMAV_INTERNAL, /* 1818 */
    XML_SCHEMAV_NOTSIMPLE, /* 1819 */
    XML_SCHEMAV_ATTRUNKNOWN, /* 1820 */
    XML_SCHEMAV_ATTRINVALID, /* 1821 */
    XML_SCHEMAV_VALUE, /* 1822 */
    XML_SCHEMAV_FACET, /* 1823 */
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_1, /* 1824 */
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_2, /* 1825 */
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_3, /* 1826 */
    XML_SCHEMAV_CVC_TYPE_3_1_1, /* 1827 */
    XML_SCHEMAV_CVC_TYPE_3_1_2, /* 1828 */
    XML_SCHEMAV_CVC_FACET_VALID, /* 1829 */
    XML_SCHEMAV_CVC_LENGTH_VALID, /* 1830 */
    XML_SCHEMAV_CVC_MINLENGTH_VALID, /* 1831 */
    XML_SCHEMAV_CVC_MAXLENGTH_VALID, /* 1832 */
    XML_SCHEMAV_CVC_MININCLUSIVE_VALID, /* 1833 */
    XML_SCHEMAV_CVC_MAXINCLUSIVE_VALID, /* 1834 */
    XML_SCHEMAV_CVC_MINEXCLUSIVE_VALID, /* 1835 */
    XML_SCHEMAV_CVC_MAXEXCLUSIVE_VALID, /* 1836 */
    XML_SCHEMAV_CVC_TOTALDIGITS_VALID, /* 1837 */
    XML_SCHEMAV_CVC_FRACTIONDIGITS_VALID, /* 1838 */
    XML_SCHEMAV_CVC_PATTERN_VALID, /* 1839 */
    XML_SCHEMAV_CVC_ENUMERATION_VALID, /* 1840 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_1, /* 1841 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_2, /* 1842 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_3, /* 1843 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_4, /* 1844 */
    XML_SCHEMAV_CVC_ELT_1, /* 1845 */
    XML_SCHEMAV_CVC_ELT_2, /* 1846 */
    XML_SCHEMAV_CVC_ELT_3_1, /* 1847 */
    XML_SCHEMAV_CVC_ELT_3_2_1, /* 1848 */
    XML_SCHEMAV_CVC_ELT_3_2_2, /* 1849 */
    XML_SCHEMAV_CVC_ELT_4_1, /* 1850 */
    XML_SCHEMAV_CVC_ELT_4_2, /* 1851 */
    XML_SCHEMAV_CVC_ELT_4_3, /* 1852 */
    XML_SCHEMAV_CVC_ELT_5_1_1, /* 1853 */
    XML_SCHEMAV_CVC_ELT_5_1_2, /* 1854 */
    XML_SCHEMAV_CVC_ELT_5_2_1, /* 1855 */
    XML_SCHEMAV_CVC_ELT_5_2_2_1, /* 1856 */
    XML_SCHEMAV_CVC_ELT_5_2_2_2_1, /* 1857 */
    XML_SCHEMAV_CVC_ELT_5_2_2_2_2, /* 1858 */
    XML_SCHEMAV_CVC_ELT_6, /* 1859 */
    XML_SCHEMAV_CVC_ELT_7, /* 1860 */
    XML_SCHEMAV_CVC_ATTRIBUTE_1, /* 1861 */
    XML_SCHEMAV_CVC_ATTRIBUTE_2, /* 1862 */
    XML_SCHEMAV_CVC_ATTRIBUTE_3, /* 1863 */
    XML_SCHEMAV_CVC_ATTRIBUTE_4, /* 1864 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_1, /* 1865 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_1, /* 1866 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_2, /* 1867 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_4, /* 1868 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_5_1, /* 1869 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_5_2, /* 1870 */
    XML_SCHEMAV_ELEMENT_CONTENT, /* 1871 */
    XML_SCHEMAV_DOCUMENT_ELEMENT_MISSING, /* 1872 */
    XML_SCHEMAV_CVC_COMPLEX_TYPE_1, /* 1873 */
    XML_SCHEMAV_CVC_AU, /* 1874 */
    XML_SCHEMAV_CVC_TYPE_1, /* 1875 */
    XML_SCHEMAV_CVC_TYPE_2, /* 1876 */
    XML_SCHEMAV_CVC_IDC, /* 1877 */
    XML_SCHEMAV_CVC_WILDCARD, /* 1878 */
    XML_SCHEMAV_MISC, /* 1879 */
    XML_XPTR_UNKNOWN_SCHEME = 1900,
    XML_XPTR_CHILDSEQ_START, /* 1901 */
    XML_XPTR_EVAL_FAILED, /* 1902 */
    XML_XPTR_EXTRA_OBJECTS, /* 1903 */
    XML_C14N_CREATE_CTXT = 1950,
    XML_C14N_REQUIRES_UTF8, /* 1951 */
    XML_C14N_CREATE_STACK, /* 1952 */
    XML_C14N_INVALID_NODE, /* 1953 */
    XML_C14N_UNKNOW_NODE, /* 1954 */
    XML_C14N_RELATIVE_NAMESPACE, /* 1955 */
    XML_FTP_PASV_ANSWER = 2000,
    XML_FTP_EPSV_ANSWER, /* 2001 */
    XML_FTP_ACCNT, /* 2002 */
    XML_FTP_URL_SYNTAX, /* 2003 */
    XML_HTTP_URL_SYNTAX = 2020,
    XML_HTTP_USE_IP, /* 2021 */
    XML_HTTP_UNKNOWN_HOST, /* 2022 */
    XML_SCHEMAP_SRC_SIMPLE_TYPE_1 = 3000,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_2, /* 3001 */
    XML_SCHEMAP_SRC_SIMPLE_TYPE_3, /* 3002 */
    XML_SCHEMAP_SRC_SIMPLE_TYPE_4, /* 3003 */
    XML_SCHEMAP_SRC_RESOLVE, /* 3004 */
    XML_SCHEMAP_SRC_RESTRICTION_BASE_OR_SIMPLETYPE, /* 3005 */
    XML_SCHEMAP_SRC_LIST_ITEMTYPE_OR_SIMPLETYPE, /* 3006 */
    XML_SCHEMAP_SRC_UNION_MEMBERTYPES_OR_SIMPLETYPES, /* 3007 */
    XML_SCHEMAP_ST_PROPS_CORRECT_1, /* 3008 */
    XML_SCHEMAP_ST_PROPS_CORRECT_2, /* 3009 */
    XML_SCHEMAP_ST_PROPS_CORRECT_3, /* 3010 */
    XML_SCHEMAP_COS_ST_RESTRICTS_1_1, /* 3011 */
    XML_SCHEMAP_COS_ST_RESTRICTS_1_2, /* 3012 */
    XML_SCHEMAP_COS_ST_RESTRICTS_1_3_1, /* 3013 */
    XML_SCHEMAP_COS_ST_RESTRICTS_1_3_2, /* 3014 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_1, /* 3015 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_1, /* 3016 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_2, /* 3017 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_1, /* 3018 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_2, /* 3019 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_3, /* 3020 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_4, /* 3021 */
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_5, /* 3022 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_1, /* 3023 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1, /* 3024 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1_2, /* 3025 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_2, /* 3026 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_1, /* 3027 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_3, /* 3028 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_4, /* 3029 */
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_5, /* 3030 */
    XML_SCHEMAP_COS_ST_DERIVED_OK_2_1, /* 3031 */
    XML_SCHEMAP_COS_ST_DERIVED_OK_2_2, /* 3032 */
    XML_SCHEMAP_S4S_ELEM_NOT_ALLOWED, /* 3033 */
    XML_SCHEMAP_S4S_ELEM_MISSING, /* 3034 */
    XML_SCHEMAP_S4S_ATTR_NOT_ALLOWED, /* 3035 */
    XML_SCHEMAP_S4S_ATTR_MISSING, /* 3036 */
    XML_SCHEMAP_S4S_ATTR_INVALID_VALUE, /* 3037 */
    XML_SCHEMAP_SRC_ELEMENT_1, /* 3038 */
    XML_SCHEMAP_SRC_ELEMENT_2_1, /* 3039 */
    XML_SCHEMAP_SRC_ELEMENT_2_2, /* 3040 */
    XML_SCHEMAP_SRC_ELEMENT_3, /* 3041 */
    XML_SCHEMAP_P_PROPS_CORRECT_1, /* 3042 */
    XML_SCHEMAP_P_PROPS_CORRECT_2_1, /* 3043 */
    XML_SCHEMAP_P_PROPS_CORRECT_2_2, /* 3044 */
    XML_SCHEMAP_E_PROPS_CORRECT_2, /* 3045 */
    XML_SCHEMAP_E_PROPS_CORRECT_3, /* 3046 */
    XML_SCHEMAP_E_PROPS_CORRECT_4, /* 3047 */
    XML_SCHEMAP_E_PROPS_CORRECT_5, /* 3048 */
    XML_SCHEMAP_E_PROPS_CORRECT_6, /* 3049 */
    XML_SCHEMAP_SRC_INCLUDE, /* 3050 */
    XML_SCHEMAP_SRC_ATTRIBUTE_1, /* 3051 */
    XML_SCHEMAP_SRC_ATTRIBUTE_2, /* 3052 */
    XML_SCHEMAP_SRC_ATTRIBUTE_3_1, /* 3053 */
    XML_SCHEMAP_SRC_ATTRIBUTE_3_2, /* 3054 */
    XML_SCHEMAP_SRC_ATTRIBUTE_4, /* 3055 */
    XML_SCHEMAP_NO_XMLNS, /* 3056 */
    XML_SCHEMAP_NO_XSI, /* 3057 */
    XML_SCHEMAP_COS_VALID_DEFAULT_1, /* 3058 */
    XML_SCHEMAP_COS_VALID_DEFAULT_2_1, /* 3059 */
    XML_SCHEMAP_COS_VALID_DEFAULT_2_2_1, /* 3060 */
    XML_SCHEMAP_COS_VALID_DEFAULT_2_2_2, /* 3061 */
    XML_SCHEMAP_CVC_SIMPLE_TYPE, /* 3062 */
    XML_SCHEMAP_COS_CT_EXTENDS_1_1, /* 3063 */
    XML_SCHEMAP_SRC_IMPORT_1_1, /* 3064 */
    XML_SCHEMAP_SRC_IMPORT_1_2, /* 3065 */
    XML_SCHEMAP_SRC_IMPORT_2, /* 3066 */
    XML_SCHEMAP_SRC_IMPORT_2_1, /* 3067 */
    XML_SCHEMAP_SRC_IMPORT_2_2, /* 3068 */
    XML_SCHEMAP_INTERNAL, /* 3069 non-W3C */
    XML_SCHEMAP_NOT_DETERMINISTIC, /* 3070 non-W3C */
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_1, /* 3071 */
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_2, /* 3072 */
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_3, /* 3073 */
    XML_SCHEMAP_MG_PROPS_CORRECT_1, /* 3074 */
    XML_SCHEMAP_MG_PROPS_CORRECT_2, /* 3075 */
    XML_SCHEMAP_SRC_CT_1, /* 3076 */
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_3, /* 3077 */
    XML_SCHEMAP_AU_PROPS_CORRECT_2, /* 3078 */
    XML_SCHEMAP_A_PROPS_CORRECT_2, /* 3079 */
    XML_SCHEMAP_C_PROPS_CORRECT, /* 3080 */
    XML_SCHEMAP_SRC_REDEFINE, /* 3081 */
    XML_SCHEMAP_SRC_IMPORT, /* 3082 */
    XML_SCHEMAP_WARN_SKIP_SCHEMA, /* 3083 */
    XML_SCHEMAP_WARN_UNLOCATED_SCHEMA, /* 3084 */
    XML_SCHEMAP_WARN_ATTR_REDECL_PROH, /* 3085 */
    XML_SCHEMAP_WARN_ATTR_POINTLESS_PROH, /* 3085 */
    XML_SCHEMAP_AG_PROPS_CORRECT, /* 3086 */
    XML_SCHEMAP_COS_CT_EXTENDS_1_2, /* 3087 */
    XML_SCHEMAP_AU_PROPS_CORRECT, /* 3088 */
    XML_SCHEMAP_A_PROPS_CORRECT_3, /* 3089 */
    XML_SCHEMAP_COS_ALL_LIMITED, /* 3090 */
    XML_SCHEMATRONV_ASSERT = 4000, /* 4000 */
    XML_SCHEMATRONV_REPORT,
    XML_MODULE_OPEN = 4900, /* 4900 */
    XML_MODULE_CLOSE, /* 4901 */
    XML_CHECK_FOUND_ELEMENT = 5000,
    XML_CHECK_FOUND_ATTRIBUTE, /* 5001 */
    XML_CHECK_FOUND_TEXT, /* 5002 */
    XML_CHECK_FOUND_CDATA, /* 5003 */
    XML_CHECK_FOUND_ENTITYREF, /* 5004 */
    XML_CHECK_FOUND_ENTITY, /* 5005 */
    XML_CHECK_FOUND_PI, /* 5006 */
    XML_CHECK_FOUND_COMMENT, /* 5007 */
    XML_CHECK_FOUND_DOCTYPE, /* 5008 */
    XML_CHECK_FOUND_FRAGMENT, /* 5009 */
    XML_CHECK_FOUND_NOTATION, /* 5010 */
    XML_CHECK_UNKNOWN_NODE, /* 5011 */
    XML_CHECK_ENTITY_TYPE, /* 5012 */
    XML_CHECK_NO_PARENT, /* 5013 */
    XML_CHECK_NO_DOC, /* 5014 */
    XML_CHECK_NO_NAME, /* 5015 */
    XML_CHECK_NO_ELEM, /* 5016 */
    XML_CHECK_WRONG_DOC, /* 5017 */
    XML_CHECK_NO_PREV, /* 5018 */
    XML_CHECK_WRONG_PREV, /* 5019 */
    XML_CHECK_NO_NEXT, /* 5020 */
    XML_CHECK_WRONG_NEXT, /* 5021 */
    XML_CHECK_NOT_DTD, /* 5022 */
    XML_CHECK_NOT_ATTR, /* 5023 */
    XML_CHECK_NOT_ATTR_DECL, /* 5024 */
    XML_CHECK_NOT_ELEM_DECL, /* 5025 */
    XML_CHECK_NOT_ENTITY_DECL, /* 5026 */
    XML_CHECK_NOT_NS_DECL, /* 5027 */
    XML_CHECK_NO_HREF, /* 5028 */
    XML_CHECK_WRONG_PARENT,/* 5029 */
    XML_CHECK_NS_SCOPE, /* 5030 */
    XML_CHECK_NS_ANCESTOR, /* 5031 */
    XML_CHECK_NOT_UTF8, /* 5032 */
    XML_CHECK_NO_DICT, /* 5033 */
    XML_CHECK_NOT_NCNAME, /* 5034 */
    XML_CHECK_OUTSIDE_DICT, /* 5035 */
    XML_CHECK_WRONG_NAME, /* 5036 */
    XML_CHECK_NAME_NOT_NULL, /* 5037 */
    XML_I18N_NO_NAME = 6000,
    XML_I18N_NO_HANDLER, /* 6001 */
    XML_I18N_EXCESS_HANDLER, /* 6002 */
    XML_I18N_CONV_FAILED, /* 6003 */
    XML_I18N_NO_OUTPUT /* 6004 */

    
    

} xmlParserErrors;

/**
 * xmlGenericErrorFunc:
 * @ctx:  a parsing context
 * @msg:  the message
 * @...:  the extra arguments of the varags to format the message
 *
 * Signature of the function to use when there is an error and
 * no parsing or validity context available .
 */
typedef void ( *xmlGenericErrorFunc) (void *ctx,
				 const char *msg,
				 ...) ;
/**
 * xmlStructuredErrorFunc:
 * @userData:  user provided data for the error callback
 * @error:  the error being raised.
 *
 * Signature of the function to use when there is an error and
 * the module handles the new error reporting mechanism.
 */
typedef void ( *xmlStructuredErrorFunc) (void *userData, xmlErrorPtr error);

/*
 * Use the following function to reset the two global variables
 * xmlGenericError and xmlGenericErrorContext.
 */
 void 
    xmlSetGenericErrorFunc	(void *ctx,
				 xmlGenericErrorFunc handler);
 void 
    initGenericErrorDefaultFunc	(xmlGenericErrorFunc *handler);

 void 
    xmlSetStructuredErrorFunc	(void *ctx,
				 xmlStructuredErrorFunc handler);
/*
 * Default message routines used by SAX and Valid context for error
 * and warning reporting.
 */
 void 
    xmlParserError		(void *ctx,
				 const char *msg,
				 ...) ;
 void 
    xmlParserWarning		(void *ctx,
				 const char *msg,
				 ...) ;
 void 
    xmlParserValidityError	(void *ctx,
				 const char *msg,
				 ...) ;
 void 
    xmlParserValidityWarning	(void *ctx,
				 const char *msg,
				 ...) ;
 void 
    xmlParserPrintFileInfo	(xmlParserInputPtr input);
 void 
    xmlParserPrintFileContext	(xmlParserInputPtr input);

/*
 * Extended error information routines
 */
 xmlErrorPtr 
    xmlGetLastError		(void);
 void 
    xmlResetLastError		(void);
 xmlErrorPtr 
    xmlCtxtGetLastError		(void *ctx);
 void 
    xmlCtxtResetLastError	(void *ctx);
 void 
    xmlResetError		(xmlErrorPtr err);
 int 
    xmlCopyError		(xmlErrorPtr from,
				 xmlErrorPtr to);






    
				 
				 
                                 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 
				 

    
				 
				 
				 
				 


}



#line 15 "/usr/include/libxml2/libxml/valid.h" 2

#line 1 "/usr/include/libxml2/libxml/valid.h" 1

#line 1 "/usr/include/libxml2/libxml/list.h" 1
/*
 * Summary: lists interfaces
 * Description: this module implement the list support used in 
 * various place in the library.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Gary Pennington <Gary.Pennington@uk.sun.com>
 */





#line 1 "/usr/include/libxml2/libxml/list.h" 1


extern "C" {


typedef struct _xmlLink xmlLink;
typedef xmlLink *xmlLinkPtr;

typedef struct _xmlList xmlList;
typedef xmlList *xmlListPtr;

/**
 * xmlListDeallocator:
 * @lk:  the data to deallocate
 *
 * Callback function used to free data from a list.
 */
typedef void (*xmlListDeallocator) (xmlLinkPtr lk);
/**
 * xmlListDataCompare:
 * @data0: the first data
 * @data1: the second data
 *
 * Callback function used to compare 2 data.
 *
 * Returns 0 is equality, -1 or 1 otherwise depending on the ordering.
 */
typedef int  (*xmlListDataCompare) (const void *data0, const void *data1);
/**
 * xmlListWalker:
 * @data: the data found in the list
 * @user: extra user provided data to the walker
 *
 * Callback function used when walking a list with xmlListWalk().
 *
 * Returns 0 to stop walking the list, 1 otherwise.
 */
typedef int (*xmlListWalker) (const void *data, const void *user);

/* Creation/Deletion */
 xmlListPtr 
		xmlListCreate		(xmlListDeallocator deallocator,
	                                 xmlListDataCompare compare);
 void 		
		xmlListDelete		(xmlListPtr l);

/* Basic Operators */
 void * 		
		xmlListSearch		(xmlListPtr l,
					 void *data);
 void * 		
		xmlListReverseSearch	(xmlListPtr l,
					 void *data);
 int 		
		xmlListInsert		(xmlListPtr l,
					 void *data) ;
 int 		
		xmlListAppend		(xmlListPtr l,
					 void *data) ;
 int 		
		xmlListRemoveFirst	(xmlListPtr l,
					 void *data);
 int 		
		xmlListRemoveLast	(xmlListPtr l,
					 void *data);
 int 		
		xmlListRemoveAll	(xmlListPtr l,
					 void *data);
 void 		
		xmlListClear		(xmlListPtr l);
 int 		
		xmlListEmpty		(xmlListPtr l);
 xmlLinkPtr 	
		xmlListFront		(xmlListPtr l);
 xmlLinkPtr 	
		xmlListEnd		(xmlListPtr l);
 int 		
		xmlListSize		(xmlListPtr l);

 void 		
		xmlListPopFront		(xmlListPtr l);
 void 		
		xmlListPopBack		(xmlListPtr l);
 int 		
		xmlListPushFront	(xmlListPtr l,
					 void *data);
 int 		
		xmlListPushBack		(xmlListPtr l,
					 void *data);

/* Advanced Operators */
 void 		
		xmlListReverse		(xmlListPtr l);
 void 		
		xmlListSort		(xmlListPtr l);
 void 		
		xmlListWalk		(xmlListPtr l,
					 xmlListWalker walker,
					 const void *user);
 void 		
		xmlListReverseWalk	(xmlListPtr l,
					 xmlListWalker walker,
					 const void *user);
 void 		
		xmlListMerge		(xmlListPtr l1,
					 xmlListPtr l2);
 xmlListPtr 	
		xmlListDup		(const xmlListPtr old);
 int 		
		xmlListCopy		(xmlListPtr cur,
					 const xmlListPtr old);
/* Link operators */
 void *           
		xmlLinkGetData          (xmlLinkPtr lk);

/* xmlListUnique() */
/* xmlListSwap */


}




#line 17 "/usr/include/libxml2/libxml/valid.h" 2

#line 1 "/usr/include/libxml2/libxml/xmlautomata.h" 1
/*
 * Summary: API to build regexp automata
 * Description: the API to build regexp automata
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/xmlautomata.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlautomata.h" 1




#line 1 "/usr/include/libxml2/libxml/xmlautomata.h" 1


extern "C" {


/**
 * xmlAutomataPtr:
 *
 * A libxml automata description, It can be compiled into a regexp
 */
typedef struct _xmlAutomata xmlAutomata;
typedef xmlAutomata *xmlAutomataPtr;

/**
 * xmlAutomataStatePtr:
 *
 * A state int the automata description,
 */
typedef struct _xmlAutomataState xmlAutomataState;
typedef xmlAutomataState *xmlAutomataStatePtr;

/*
 * Building API
 */
 xmlAutomataPtr 		
		    xmlNewAutomata		(void);
 void 			
		    xmlFreeAutomata		(xmlAutomataPtr am);

 xmlAutomataStatePtr 	
		    xmlAutomataGetInitState	(xmlAutomataPtr am);
 int 			
		    xmlAutomataSetFinalState	(xmlAutomataPtr am,
						 xmlAutomataStatePtr state);
 xmlAutomataStatePtr 	
		    xmlAutomataNewState		(xmlAutomataPtr am);
 xmlAutomataStatePtr 	
		    xmlAutomataNewTransition	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 const xmlChar *token,
						 void *data);
 xmlAutomataStatePtr 	
		    xmlAutomataNewTransition2	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 const xmlChar *token,
						 const xmlChar *token2,
						 void *data);
 xmlAutomataStatePtr 
                    xmlAutomataNewNegTrans	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 const xmlChar *token,
						 const xmlChar *token2,
						 void *data);

 xmlAutomataStatePtr 	
		    xmlAutomataNewCountTrans	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 const xmlChar *token,
						 int min,
						 int max,
						 void *data);
 xmlAutomataStatePtr 	
		    xmlAutomataNewCountTrans2	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 const xmlChar *token,
						 const xmlChar *token2,
						 int min,
						 int max,
						 void *data);
 xmlAutomataStatePtr 	
		    xmlAutomataNewOnceTrans	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 const xmlChar *token,
						 int min,
						 int max,
						 void *data);
 xmlAutomataStatePtr 
		    xmlAutomataNewOnceTrans2	(xmlAutomataPtr am, 
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to, 
						 const xmlChar *token,
						 const xmlChar *token2,
						 int min, 
						 int max, 
						 void *data);
 xmlAutomataStatePtr 	
		    xmlAutomataNewAllTrans	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 int lax);
 xmlAutomataStatePtr 	
		    xmlAutomataNewEpsilon	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to);
 xmlAutomataStatePtr 	
		    xmlAutomataNewCountedTrans	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 int counter);
 xmlAutomataStatePtr 	
		    xmlAutomataNewCounterTrans	(xmlAutomataPtr am,
						 xmlAutomataStatePtr from,
						 xmlAutomataStatePtr to,
						 int counter);
 int 			
		    xmlAutomataNewCounter	(xmlAutomataPtr am,
						 int min,
						 int max);

 xmlRegexpPtr 		
		    xmlAutomataCompile		(xmlAutomataPtr am);
 int 	    		
		    xmlAutomataIsDeterminist	(xmlAutomataPtr am);


}







#line 18 "/usr/include/libxml2/libxml/valid.h" 2

#line 1 "/usr/include/libxml2/libxml/valid.h" 1


extern "C" {


/*
 * Validation state added for non-determinist content model.
 */
typedef struct _xmlValidState xmlValidState;
typedef xmlValidState *xmlValidStatePtr;

/**
 * xmlValidityErrorFunc:
 * @ctx:  usually an xmlValidCtxtPtr to a validity error context,
 *        but comes from ctxt->userData (which normally contains such
 *        a pointer); ctxt->userData can be changed by the user.
 * @msg:  the string to format *printf like vararg
 * @...:  remaining arguments to the format
 *
 * Callback called when a validity error is found. This is a message
 * oriented function similar to an *printf function.
 */
typedef void ( *xmlValidityErrorFunc) (void *ctx,
			     const char *msg,
			     ...) ;

/**
 * xmlValidityWarningFunc:
 * @ctx:  usually an xmlValidCtxtPtr to a validity error context,
 *        but comes from ctxt->userData (which normally contains such
 *        a pointer); ctxt->userData can be changed by the user.
 * @msg:  the string to format *printf like vararg
 * @...:  remaining arguments to the format
 *
 * Callback called when a validity warning is found. This is a message
 * oriented function similar to an *printf function.
 */
typedef void ( *xmlValidityWarningFunc) (void *ctx,
			       const char *msg,
			       ...) ;
















/*
 * xmlValidCtxt:
 * An xmlValidCtxt is used for error reporting when validating.
 */
typedef struct _xmlValidCtxt xmlValidCtxt;
typedef xmlValidCtxt *xmlValidCtxtPtr;
struct _xmlValidCtxt {
    void *userData;			/* user specific data block */
    xmlValidityErrorFunc error;		/* the callback in case of errors */
    xmlValidityWarningFunc warning;	/* the callback in case of warning */

    /* Node analysis stack used when validating within entities */
    xmlNodePtr         node;          /* Current parsed Node */
    int                nodeNr;        /* Depth of the parsing stack */
    int                nodeMax;       /* Max depth of the parsing stack */
    xmlNodePtr        *nodeTab;       /* array of nodes */

    unsigned int     finishDtd;       /* finished validating the Dtd ? */
    xmlDocPtr              doc;       /* the document */
    int                  valid;       /* temporary validity check result */

    /* state state used for non-determinist content validation */
    xmlValidState     *vstate;        /* current state */
    int                vstateNr;      /* Depth of the validation stack */
    int                vstateMax;     /* Max depth of the validation stack */
    xmlValidState     *vstateTab;     /* array of validation states */


    xmlAutomataPtr            am;     /* the automata */
    xmlAutomataStatePtr    state;     /* used to build the automata */

    
    

};

/*
 * ALL notation declarations are stored in a table.
 * There is one table per DTD.
 */

typedef struct _xmlHashTable xmlNotationTable;
typedef xmlNotationTable *xmlNotationTablePtr;

/*
 * ALL element declarations are stored in a table.
 * There is one table per DTD.
 */

typedef struct _xmlHashTable xmlElementTable;
typedef xmlElementTable *xmlElementTablePtr;

/*
 * ALL attribute declarations are stored in a table.
 * There is one table per DTD.
 */

typedef struct _xmlHashTable xmlAttributeTable;
typedef xmlAttributeTable *xmlAttributeTablePtr;

/*
 * ALL IDs attributes are stored in a table.
 * There is one table per document.
 */

typedef struct _xmlHashTable xmlIDTable;
typedef xmlIDTable *xmlIDTablePtr;

/*
 * ALL Refs attributes are stored in a table.
 * There is one table per document.
 */

typedef struct _xmlHashTable xmlRefTable;
typedef xmlRefTable *xmlRefTablePtr;

/* Notation */
 xmlNotationPtr 	    
		xmlAddNotationDecl	(xmlValidCtxtPtr ctxt,
					 xmlDtdPtr dtd,
					 const xmlChar *name,
					 const xmlChar *PublicID,
					 const xmlChar *SystemID);

 xmlNotationTablePtr  
		xmlCopyNotationTable	(xmlNotationTablePtr table);

 void 		    
		xmlFreeNotationTable	(xmlNotationTablePtr table);

 void 		    
		xmlDumpNotationDecl	(xmlBufferPtr buf,
					 xmlNotationPtr nota);
 void 		    
		xmlDumpNotationTable	(xmlBufferPtr buf,
					 xmlNotationTablePtr table);


/* Element Content */
/* the non Doc version are being deprecated */
 xmlElementContentPtr  
		xmlNewElementContent	(const xmlChar *name,
					 xmlElementContentType type);
 xmlElementContentPtr  
		xmlCopyElementContent	(xmlElementContentPtr content);
 void 		     
		xmlFreeElementContent	(xmlElementContentPtr cur);
/* the new versions with doc argument */
 xmlElementContentPtr  
		xmlNewDocElementContent	(xmlDocPtr doc,
					 const xmlChar *name,
					 xmlElementContentType type);
 xmlElementContentPtr  
		xmlCopyDocElementContent(xmlDocPtr doc,
					 xmlElementContentPtr content);
 void 		     
		xmlFreeDocElementContent(xmlDocPtr doc,
					 xmlElementContentPtr cur);
 void 		     
		xmlSnprintfElementContent(char *buf,
					 int size,
	                                 xmlElementContentPtr content,
					 int englob);

/* DEPRECATED */
 void 		     
		xmlSprintfElementContent(char *buf,
	                                 xmlElementContentPtr content,
					 int englob);

/* DEPRECATED */

/* Element */
 xmlElementPtr 	   
		xmlAddElementDecl	(xmlValidCtxtPtr ctxt,
					 xmlDtdPtr dtd,
					 const xmlChar *name,
					 xmlElementTypeVal type,
					 xmlElementContentPtr content);

 xmlElementTablePtr  
		xmlCopyElementTable	(xmlElementTablePtr table);

 void 		   
		xmlFreeElementTable	(xmlElementTablePtr table);

 void 		   
		xmlDumpElementTable	(xmlBufferPtr buf,
					 xmlElementTablePtr table);
 void 		   
		xmlDumpElementDecl	(xmlBufferPtr buf,
					 xmlElementPtr elem);


/* Enumeration */
 xmlEnumerationPtr  
		xmlCreateEnumeration	(const xmlChar *name);
 void 		   
		xmlFreeEnumeration	(xmlEnumerationPtr cur);

 xmlEnumerationPtr   
		xmlCopyEnumeration	(xmlEnumerationPtr cur);


/* Attribute */
 xmlAttributePtr 	    
		xmlAddAttributeDecl	(xmlValidCtxtPtr ctxt,
					 xmlDtdPtr dtd,
					 const xmlChar *elem,
					 const xmlChar *name,
					 const xmlChar *ns,
					 xmlAttributeType type,
					 xmlAttributeDefault def,
					 const xmlChar *defaultValue,
					 xmlEnumerationPtr tree);

 xmlAttributeTablePtr  
		xmlCopyAttributeTable  (xmlAttributeTablePtr table);

 void 		     
		xmlFreeAttributeTable  (xmlAttributeTablePtr table);

 void 		     
		xmlDumpAttributeTable  (xmlBufferPtr buf,
					xmlAttributeTablePtr table);
 void 		     
		xmlDumpAttributeDecl   (xmlBufferPtr buf,
					xmlAttributePtr attr);


/* IDs */
 xmlIDPtr 	
		xmlAddID	       (xmlValidCtxtPtr ctxt,
					xmlDocPtr doc,
					const xmlChar *value,
					xmlAttrPtr attr);
 void 		
		xmlFreeIDTable	       (xmlIDTablePtr table);
 xmlAttrPtr 	
		xmlGetID	       (xmlDocPtr doc,
					const xmlChar *ID);
 int 		
		xmlIsID		       (xmlDocPtr doc,
					xmlNodePtr elem,
					xmlAttrPtr attr);
 int 		
		xmlRemoveID	       (xmlDocPtr doc, 
					xmlAttrPtr attr);

/* IDREFs */
 xmlRefPtr 	
		xmlAddRef	       (xmlValidCtxtPtr ctxt,
					xmlDocPtr doc,
					const xmlChar *value,
					xmlAttrPtr attr);
 void 		
		xmlFreeRefTable	       (xmlRefTablePtr table);
 int 		
		xmlIsRef	       (xmlDocPtr doc,
					xmlNodePtr elem,
					xmlAttrPtr attr);
 int 		
		xmlRemoveRef	       (xmlDocPtr doc, 
					xmlAttrPtr attr);
 xmlListPtr 	
		xmlGetRefs	       (xmlDocPtr doc,
					const xmlChar *ID);

/**
 * The public function calls related to validity checking.
 */

/* Allocate/Release Validation Contexts */
 xmlValidCtxtPtr 	    
		xmlNewValidCtxt(void);
 void 		    
		xmlFreeValidCtxt(xmlValidCtxtPtr);

 int 		
		xmlValidateRoot		(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc);
 int 		
		xmlValidateElementDecl	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
		                         xmlElementPtr elem);
 xmlChar * 	
		xmlValidNormalizeAttributeValue(xmlDocPtr doc,
					 xmlNodePtr elem,
					 const xmlChar *name,
					 const xmlChar *value);
 xmlChar * 	
		xmlValidCtxtNormalizeAttributeValue(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlNodePtr elem,
					 const xmlChar *name,
					 const xmlChar *value);
 int 		
		xmlValidateAttributeDecl(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
		                         xmlAttributePtr attr);
 int 		
		xmlValidateAttributeValue(xmlAttributeType type,
					 const xmlChar *value);
 int 		
		xmlValidateNotationDecl	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
		                         xmlNotationPtr nota);
 int 		
		xmlValidateDtd		(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlDtdPtr dtd);
 int 		
		xmlValidateDtdFinal	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc);
 int 		
		xmlValidateDocument	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc);
 int 		
		xmlValidateElement	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlNodePtr elem);
 int 		
		xmlValidateOneElement	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
		                         xmlNodePtr elem);
 int 	
		xmlValidateOneAttribute	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlNodePtr	elem,
					 xmlAttrPtr attr,
					 const xmlChar *value);
 int 		
		xmlValidateOneNamespace	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlNodePtr elem,
					 const xmlChar *prefix,
					 xmlNsPtr ns,
					 const xmlChar *value);
 int 		
		xmlValidateDocumentFinal(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc);



 int 		
		xmlValidateNotationUse	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 const xmlChar *notationName);


 int 		
		xmlIsMixedElement	(xmlDocPtr doc,
					 const xmlChar *name);
 xmlAttributePtr 	
		xmlGetDtdAttrDesc	(xmlDtdPtr dtd,
					 const xmlChar *elem,
					 const xmlChar *name);
 xmlAttributePtr 	
		xmlGetDtdQAttrDesc	(xmlDtdPtr dtd,
					 const xmlChar *elem,
					 const xmlChar *name,
					 const xmlChar *prefix);
 xmlNotationPtr 	
		xmlGetDtdNotationDesc	(xmlDtdPtr dtd,
					 const xmlChar *name);
 xmlElementPtr 	
		xmlGetDtdQElementDesc	(xmlDtdPtr dtd,
					 const xmlChar *name,
					 const xmlChar *prefix);
 xmlElementPtr 	
		xmlGetDtdElementDesc	(xmlDtdPtr dtd,
					 const xmlChar *name);



 int 		
		xmlValidGetPotentialChildren(xmlElementContent *ctree,
					 const xmlChar **names,
					 int *len,
					 int max);

 int 		
		xmlValidGetValidElements(xmlNode *prev,
					 xmlNode *next,
					 const xmlChar **names,
					 int max);
 int 		
		xmlValidateNameValue	(const xmlChar *value);
 int 		
		xmlValidateNamesValue	(const xmlChar *value);
 int 		
		xmlValidateNmtokenValue	(const xmlChar *value);
 int 		
		xmlValidateNmtokensValue(const xmlChar *value);


/*
 * Validation based on the regexp support
 */
 int 		
		xmlValidBuildContentModel(xmlValidCtxtPtr ctxt,
					 xmlElementPtr elem);

 int 		
		xmlValidatePushElement	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlNodePtr elem,
					 const xmlChar *qname);
 int 		
		xmlValidatePushCData	(xmlValidCtxtPtr ctxt,
					 const xmlChar *data,
					 int len);
 int 		
		xmlValidatePopElement	(xmlValidCtxtPtr ctxt,
					 xmlDocPtr doc,
					 xmlNodePtr elem,
					 const xmlChar *qname);



}



#line 19 "/usr/include/libxml2/libxml/parser.h" 2

#line 1 "/usr/include/libxml2/libxml/entities.h" 1
/*
 * Summary: interface for the XML entities handling
 * Description: this module provides some of the entity API needed
 *              for the parser and applications.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/entities.h" 1

#line 1 "/usr/include/libxml2/libxml/entities.h" 1


extern "C" {


/*
 * The different valid entity types.
 */
typedef enum {
    XML_INTERNAL_GENERAL_ENTITY = 1,
    XML_EXTERNAL_GENERAL_PARSED_ENTITY = 2,
    XML_EXTERNAL_GENERAL_UNPARSED_ENTITY = 3,
    XML_INTERNAL_PARAMETER_ENTITY = 4,
    XML_EXTERNAL_PARAMETER_ENTITY = 5,
    XML_INTERNAL_PREDEFINED_ENTITY = 6
} xmlEntityType;

/*
 * An unit of storage for an entity, contains the string, the value
 * and the linkind data needed for the linking in the hash table.
 */

struct _xmlEntity {
    void           *_private;	        /* application data */
    xmlElementType          type;       /* XML_ENTITY_DECL, must be second ! */
    const xmlChar          *name;	/* Entity name */
    struct _xmlNode    *children;	/* First child link */
    struct _xmlNode        *last;	/* Last child link */
    struct _xmlDtd       *parent;	/* -> DTD */
    struct _xmlNode        *next;	/* next sibling link  */
    struct _xmlNode        *prev;	/* previous sibling link  */
    struct _xmlDoc          *doc;       /* the containing document */

    xmlChar                *orig;	/* content without ref substitution */
    xmlChar             *content;	/* content or ndata if unparsed */
    int                   length;	/* the content length */
    xmlEntityType          etype;	/* The entity type */
    const xmlChar    *ExternalID;	/* External identifier for PUBLIC */
    const xmlChar      *SystemID;	/* URI for a SYSTEM or PUBLIC Entity */

    struct _xmlEntity     *nexte;	/* unused */
    const xmlChar           *URI;	/* the full URI as computed */
    int                    owner;	/* does the entity own the childrens */
    int			 checked;	/* was the entity content checked */
					/* this is also used to count entites
					 * references done from that entity
					 * and if it contains '<' */
};

/*
 * All entities are stored in an hash table.
 * There is 2 separate hash tables for global and parameter entities.
 */

typedef struct _xmlHashTable xmlEntitiesTable;
typedef xmlEntitiesTable *xmlEntitiesTablePtr;

/*
 * External functions:
 */


 void 
		xmlInitializePredefinedEntities	(void);


 xmlEntityPtr 
			xmlNewEntity		(xmlDocPtr doc,
						 const xmlChar *name,
						 int type,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID,
						 const xmlChar *content);
 xmlEntityPtr 
			xmlAddDocEntity		(xmlDocPtr doc,
						 const xmlChar *name,
						 int type,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID,
						 const xmlChar *content);
 xmlEntityPtr 
			xmlAddDtdEntity		(xmlDocPtr doc,
						 const xmlChar *name,
						 int type,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID,
						 const xmlChar *content);
 xmlEntityPtr 
			xmlGetPredefinedEntity	(const xmlChar *name);
 xmlEntityPtr 
			xmlGetDocEntity		(xmlDocPtr doc,
						 const xmlChar *name);
 xmlEntityPtr 
			xmlGetDtdEntity		(xmlDocPtr doc,
						 const xmlChar *name);
 xmlEntityPtr 
			xmlGetParameterEntity	(xmlDocPtr doc,
						 const xmlChar *name);

 const xmlChar * 
			xmlEncodeEntities	(xmlDocPtr doc,
						 const xmlChar *input);

 xmlChar * 
			xmlEncodeEntitiesReentrant(xmlDocPtr doc,
						 const xmlChar *input);
 xmlChar * 
			xmlEncodeSpecialChars	(xmlDocPtr doc,
						 const xmlChar *input);
 xmlEntitiesTablePtr 
			xmlCreateEntitiesTable	(void);

 xmlEntitiesTablePtr 
			xmlCopyEntitiesTable	(xmlEntitiesTablePtr table);

 void 
			xmlFreeEntitiesTable	(xmlEntitiesTablePtr table);

 void 
			xmlDumpEntitiesTable	(xmlBufferPtr buf,
						 xmlEntitiesTablePtr table);
 void 
			xmlDumpEntityDecl	(xmlBufferPtr buf,
						 xmlEntityPtr ent);


 void 
			xmlCleanupPredefinedEntities(void);




}




#line 20 "/usr/include/libxml2/libxml/parser.h" 2

#line 1 "/usr/include/libxml2/libxml/parser.h" 1

#line 1 "/usr/include/libxml2/libxml/parser.h" 1


extern "C" {


/**
 * XML_DEFAULT_VERSION:
 *
 * The default version of XML used: 1.0
 */


/**
 * xmlParserInput:
 *
 * An xmlParserInput is an input flow for the XML processor.
 * Each entity parsed is associated an xmlParserInput (except the
 * few predefined ones). This is the case both for internal entities
 * - in which case the flow is already completely in memory - or
 * external entities - in which case we use the buf structure for
 * progressive reading and I18N conversions to the internal UTF-8 format.
 */

/**
 * xmlParserInputDeallocate:
 * @str:  the string to deallocate
 *
 * Callback for freeing some parser input allocations.
 */
typedef void (* xmlParserInputDeallocate)(xmlChar *str);

struct _xmlParserInput {
    /* Input buffer */
    xmlParserInputBufferPtr buf;      /* UTF-8 encoded buffer */

    const char *filename;             /* The file analyzed, if any */
    const char *directory;            /* the directory/base of the file */
    const xmlChar *base;              /* Base of the array to parse */
    const xmlChar *cur;               /* Current char being parsed */
    const xmlChar *end;               /* end of the array to parse */
    int length;                       /* length if known */
    int line;                         /* Current line */
    int col;                          /* Current column */
    /*
     * NOTE: consumed is only tested for equality in the parser code,
     *       so even if there is an overflow this should not give troubles
     *       for parsing very large instances.
     */
    unsigned long consumed;           /* How many xmlChars already consumed */
    xmlParserInputDeallocate free;    /* function to deallocate the base */
    const xmlChar *encoding;          /* the encoding string for entity */
    const xmlChar *version;           /* the version string for entity */
    int standalone;                   /* Was that entity marked standalone */
    int id;                           /* an unique identifier for the entity */
};

/**
 * xmlParserNodeInfo:
 *
 * The parser can be asked to collect Node informations, i.e. at what
 * place in the file they were detected. 
 * NOTE: This is off by default and not very well tested.
 */
typedef struct _xmlParserNodeInfo xmlParserNodeInfo;
typedef xmlParserNodeInfo *xmlParserNodeInfoPtr;

struct _xmlParserNodeInfo {
  const struct _xmlNode* node;
  /* Position & line # that text that created the node begins & ends on */
  unsigned long begin_pos;
  unsigned long begin_line;
  unsigned long end_pos;
  unsigned long end_line;
};

typedef struct _xmlParserNodeInfoSeq xmlParserNodeInfoSeq;
typedef xmlParserNodeInfoSeq *xmlParserNodeInfoSeqPtr;
struct _xmlParserNodeInfoSeq {
  unsigned long maximum;
  unsigned long length;
  xmlParserNodeInfo* buffer;
};

/**
 * xmlParserInputState:
 *
 * The parser is now working also as a state based parser.
 * The recursive one use the state info for entities processing.
 */
typedef enum {
    XML_PARSER_EOF = -1,	/* nothing is to be parsed */
    XML_PARSER_START = 0,	/* nothing has been parsed */
    XML_PARSER_MISC,		/* Misc* before int subset */
    XML_PARSER_PI,		/* Within a processing instruction */
    XML_PARSER_DTD,		/* within some DTD content */
    XML_PARSER_PROLOG,		/* Misc* after internal subset */
    XML_PARSER_COMMENT,		/* within a comment */
    XML_PARSER_START_TAG,	/* within a start tag */
    XML_PARSER_CONTENT,		/* within the content */
    XML_PARSER_CDATA_SECTION,	/* within a CDATA section */
    XML_PARSER_END_TAG,		/* within a closing tag */
    XML_PARSER_ENTITY_DECL,	/* within an entity declaration */
    XML_PARSER_ENTITY_VALUE,	/* within an entity value in a decl */
    XML_PARSER_ATTRIBUTE_VALUE,	/* within an attribute value */
    XML_PARSER_SYSTEM_LITERAL,	/* within a SYSTEM value */
    XML_PARSER_EPILOG, 		/* the Misc* after the last end tag */
    XML_PARSER_IGNORE,		/* within an IGNORED section */
    XML_PARSER_PUBLIC_LITERAL 	/* within a PUBLIC value */
} xmlParserInputState;

/**
 * XML_DETECT_IDS:
 *
 * Bit in the loadsubset context field to tell to do ID/REFs lookups.
 * Use it to initialize xmlLoadExtDtdDefaultValue.
 */


/**
 * XML_COMPLETE_ATTRS:
 *
 * Bit in the loadsubset context field to tell to do complete the
 * elements attributes lists with the ones defaulted from the DTDs.
 * Use it to initialize xmlLoadExtDtdDefaultValue.
 */


/**
 * XML_SKIP_IDS:
 *
 * Bit in the loadsubset context field to tell to not do ID/REFs registration.
 * Used to initialize xmlLoadExtDtdDefaultValue in some special cases.
 */


/**
 * xmlParserMode:
 *
 * A parser can operate in various modes
 */
typedef enum {
    XML_PARSE_UNKNOWN = 0,
    XML_PARSE_DOM = 1,
    XML_PARSE_SAX = 2,
    XML_PARSE_PUSH_DOM = 3,
    XML_PARSE_PUSH_SAX = 4,
    XML_PARSE_READER = 5
} xmlParserMode;

/**
 * xmlParserCtxt:
 *
 * The parser context.
 * NOTE This doesn't completely define the parser state, the (current ?)
 *      design of the parser uses recursive function calls since this allow
 *      and easy mapping from the production rules of the specification
 *      to the actual code. The drawback is that the actual function call
 *      also reflect the parser state. However most of the parsing routines
 *      takes as the only argument the parser context pointer, so migrating
 *      to a state based parser for progressive parsing shouldn't be too hard.
 */
struct _xmlParserCtxt {
    struct _xmlSAXHandler *sax;       /* The SAX handler */
    void            *userData;        /* For SAX interface only, used by DOM build */
    xmlDocPtr           myDoc;        /* the document being built */
    int            wellFormed;        /* is the document well formed */
    int       replaceEntities;        /* shall we replace entities ? */
    const xmlChar    *version;        /* the XML version string */
    const xmlChar   *encoding;        /* the declared encoding, if any */
    int            standalone;        /* standalone document */
    int                  html;        /* an HTML(1)/Docbook(2) document
                                       * 3 is HTML after <head>
                                       * 10 is HTML after <body>
                                       */

    /* Input stream stack */
    xmlParserInputPtr  input;         /* Current input stream */
    int                inputNr;       /* Number of current input streams */
    int                inputMax;      /* Max number of input streams */
    xmlParserInputPtr *inputTab;      /* stack of inputs */

    /* Node analysis stack only used for DOM building */
    xmlNodePtr         node;          /* Current parsed Node */
    int                nodeNr;        /* Depth of the parsing stack */
    int                nodeMax;       /* Max depth of the parsing stack */
    xmlNodePtr        *nodeTab;       /* array of nodes */

    int record_info;                  /* Whether node info should be kept */
    xmlParserNodeInfoSeq node_seq;    /* info about each node parsed */

    int errNo;                        /* error code */

    int     hasExternalSubset;        /* reference and external subset */
    int             hasPErefs;        /* the internal subset has PE refs */
    int              external;        /* are we parsing an external entity */

    int                 valid;        /* is the document valid */
    int              validate;        /* shall we try to validate ? */
    xmlValidCtxt        vctxt;        /* The validity context */

    xmlParserInputState instate;      /* current type of input */
    int                 token;        /* next char look-ahead */    

    char           *directory;        /* the data directory */

    /* Node name stack */
    const xmlChar     *name;          /* Current parsed Node */
    int                nameNr;        /* Depth of the parsing stack */
    int                nameMax;       /* Max depth of the parsing stack */
    const xmlChar *   *nameTab;       /* array of nodes */

    long               nbChars;       /* number of xmlChar processed */
    long            checkIndex;       /* used by progressive parsing lookup */
    int             keepBlanks;       /* ugly but ... */
    int             disableSAX;       /* SAX callbacks are disabled */
    int               inSubset;       /* Parsing is in int 1/ext 2 subset */
    const xmlChar *    intSubName;    /* name of subset */
    xmlChar *          extSubURI;     /* URI of external subset */
    xmlChar *          extSubSystem;  /* SYSTEM ID of external subset */

    /* xml:space values */
    int *              space;         /* Should the parser preserve spaces */
    int                spaceNr;       /* Depth of the parsing stack */
    int                spaceMax;      /* Max depth of the parsing stack */
    int *              spaceTab;      /* array of space infos */

    int                depth;         /* to prevent entity substitution loops */
    xmlParserInputPtr  entity;        /* used to check entities boundaries */
    int                charset;       /* encoding of the in-memory content
				         actually an xmlCharEncoding */
    int                nodelen;       /* Those two fields are there to */
    int                nodemem;       /* Speed up large node parsing */
    int                pedantic;      /* signal pedantic warnings */
    void              *_private;      /* For user data, libxml won't touch it */

    int                loadsubset;    /* should the external subset be loaded */
    int                linenumbers;   /* set line number in element content */
    void              *catalogs;      /* document's own catalog */
    int                recovery;      /* run in recovery mode */
    int                progressive;   /* is this a progressive parsing */
    xmlDictPtr         dict;          /* dictionnary for the parser */
    const xmlChar *   *atts;          /* array for the attributes callbacks */
    int                maxatts;       /* the size of the array */
    int                docdict;       /* use strings from dict to build tree */

    /*
     * pre-interned strings
     */
    const xmlChar *str_xml;
    const xmlChar *str_xmlns;
    const xmlChar *str_xml_ns;

    /*
     * Everything below is used only by the new SAX mode
     */
    int                sax2;          /* operating in the new SAX mode */
    int                nsNr;          /* the number of inherited namespaces */
    int                nsMax;         /* the size of the arrays */
    const xmlChar *   *nsTab;         /* the array of prefix/namespace name */
    int               *attallocs;     /* which attribute were allocated */
    void *            *pushTab;       /* array of data for push */
    xmlHashTablePtr    attsDefault;   /* defaulted attributes if any */
    xmlHashTablePtr    attsSpecial;   /* non-CDATA attributes if any */
    int                nsWellFormed;  /* is the document XML Nanespace okay */
    int                options;       /* Extra options */

    /*
     * Those fields are needed only for treaming parsing so far
     */
    int               dictNames;    /* Use dictionary names for the tree */
    int               freeElemsNr;  /* number of freed element nodes */
    xmlNodePtr        freeElems;    /* List of freed element nodes */
    int               freeAttrsNr;  /* number of freed attributes nodes */
    xmlAttrPtr        freeAttrs;    /* List of freed attributes nodes */

    /*
     * the complete error informations for the last error.
     */
    xmlError          lastError;
    xmlParserMode     parseMode;    /* the parser mode */
    unsigned long    nbentities;    /* number of entities references */
    unsigned long  sizeentities;    /* size of parsed entities */

    /* for use by HTML non-recursive parser */
    xmlParserNodeInfo *nodeInfo;      /* Current NodeInfo */
    int                nodeInfoNr;    /* Depth of the parsing stack */
    int                nodeInfoMax;   /* Max depth of the parsing stack */
    xmlParserNodeInfo *nodeInfoTab;   /* array of nodeInfos */
    unsigned long      sizeentcopy;   /* volume of entity copy */
};

/**
 * xmlSAXLocator:
 *
 * A SAX Locator.
 */
struct _xmlSAXLocator {
    const xmlChar *(*getPublicId)(void *ctx);
    const xmlChar *(*getSystemId)(void *ctx);
    int (*getLineNumber)(void *ctx);
    int (*getColumnNumber)(void *ctx);
};

/**
 * xmlSAXHandler:
 *
 * A SAX handler is bunch of callbacks called by the parser when processing
 * of the input generate data or structure informations.
 */

/**
 * resolveEntitySAXFunc:
 * @ctx:  the user data (XML parser context)
 * @publicId: The public ID of the entity
 * @systemId: The system ID of the entity
 *
 * Callback:
 * The entity loader, to control the loading of external entities,
 * the application can either:
 *    - override this resolveEntity() callback in the SAX block
 *    - or better use the xmlSetExternalEntityLoader() function to
 *      set up it's own entity resolution routine
 *
 * Returns the xmlParserInputPtr if inlined or NULL for DOM behaviour.
 */
typedef xmlParserInputPtr (*resolveEntitySAXFunc) (void *ctx,
				const xmlChar *publicId,
				const xmlChar *systemId);
/**
 * internalSubsetSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  the root element name
 * @ExternalID:  the external ID
 * @SystemID:  the SYSTEM ID (e.g. filename or URL)
 *
 * Callback on internal subset declaration.
 */
typedef void (*internalSubsetSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar *ExternalID,
				const xmlChar *SystemID);
/**
 * externalSubsetSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  the root element name
 * @ExternalID:  the external ID
 * @SystemID:  the SYSTEM ID (e.g. filename or URL)
 *
 * Callback on external subset declaration.
 */
typedef void (*externalSubsetSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar *ExternalID,
				const xmlChar *SystemID);
/**
 * getEntitySAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name: The entity name
 *
 * Get an entity by name.
 *
 * Returns the xmlEntityPtr if found.
 */
typedef xmlEntityPtr (*getEntitySAXFunc) (void *ctx,
				const xmlChar *name);
/**
 * getParameterEntitySAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name: The entity name
 *
 * Get a parameter entity by name.
 *
 * Returns the xmlEntityPtr if found.
 */
typedef xmlEntityPtr (*getParameterEntitySAXFunc) (void *ctx,
				const xmlChar *name);
/**
 * entityDeclSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  the entity name 
 * @type:  the entity type 
 * @publicId: The public ID of the entity
 * @systemId: The system ID of the entity
 * @content: the entity value (without processing).
 *
 * An entity definition has been parsed.
 */
typedef void (*entityDeclSAXFunc) (void *ctx,
				const xmlChar *name,
				int type,
				const xmlChar *publicId,
				const xmlChar *systemId,
				xmlChar *content);
/**
 * notationDeclSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name: The name of the notation
 * @publicId: The public ID of the entity
 * @systemId: The system ID of the entity
 *
 * What to do when a notation declaration has been parsed.
 */
typedef void (*notationDeclSAXFunc)(void *ctx,
				const xmlChar *name,
				const xmlChar *publicId,
				const xmlChar *systemId);
/**
 * attributeDeclSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @elem:  the name of the element
 * @fullname:  the attribute name 
 * @type:  the attribute type 
 * @def:  the type of default value
 * @defaultValue: the attribute default value
 * @tree:  the tree of enumerated value set
 *
 * An attribute definition has been parsed.
 */
typedef void (*attributeDeclSAXFunc)(void *ctx,
				const xmlChar *elem,
				const xmlChar *fullname,
				int type,
				int def,
				const xmlChar *defaultValue,
				xmlEnumerationPtr tree);
/**
 * elementDeclSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  the element name 
 * @type:  the element type 
 * @content: the element value tree
 *
 * An element definition has been parsed.
 */
typedef void (*elementDeclSAXFunc)(void *ctx,
				const xmlChar *name,
				int type,
				xmlElementContentPtr content);
/**
 * unparsedEntityDeclSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name: The name of the entity
 * @publicId: The public ID of the entity
 * @systemId: The system ID of the entity
 * @notationName: the name of the notation
 *
 * What to do when an unparsed entity declaration is parsed.
 */
typedef void (*unparsedEntityDeclSAXFunc)(void *ctx,
				const xmlChar *name,
				const xmlChar *publicId,
				const xmlChar *systemId,
				const xmlChar *notationName);
/**
 * setDocumentLocatorSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @loc: A SAX Locator
 *
 * Receive the document locator at startup, actually xmlDefaultSAXLocator.
 * Everything is available on the context, so this is useless in our case.
 */
typedef void (*setDocumentLocatorSAXFunc) (void *ctx,
				xmlSAXLocatorPtr loc);
/**
 * startDocumentSAXFunc:
 * @ctx:  the user data (XML parser context)
 *
 * Called when the document start being processed.
 */
typedef void (*startDocumentSAXFunc) (void *ctx);
/**
 * endDocumentSAXFunc:
 * @ctx:  the user data (XML parser context)
 *
 * Called when the document end has been detected.
 */
typedef void (*endDocumentSAXFunc) (void *ctx);
/**
 * startElementSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  The element name, including namespace prefix
 * @atts:  An array of name/value attributes pairs, NULL terminated
 *
 * Called when an opening tag has been processed.
 */
typedef void (*startElementSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar **atts);
/**
 * endElementSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  The element name
 *
 * Called when the end of an element has been detected.
 */
typedef void (*endElementSAXFunc) (void *ctx,
				const xmlChar *name);
/**
 * attributeSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  The attribute name, including namespace prefix
 * @value:  The attribute value
 *
 * Handle an attribute that has been read by the parser.
 * The default handling is to convert the attribute into an
 * DOM subtree and past it in a new xmlAttr element added to
 * the element.
 */
typedef void (*attributeSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar *value);
/**
 * referenceSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @name:  The entity name
 *
 * Called when an entity reference is detected. 
 */
typedef void (*referenceSAXFunc) (void *ctx,
				const xmlChar *name);
/**
 * charactersSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @ch:  a xmlChar string
 * @len: the number of xmlChar
 *
 * Receiving some chars from the parser.
 */
typedef void (*charactersSAXFunc) (void *ctx,
				const xmlChar *ch,
				int len);
/**
 * ignorableWhitespaceSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @ch:  a xmlChar string
 * @len: the number of xmlChar
 *
 * Receiving some ignorable whitespaces from the parser.
 * UNUSED: by default the DOM building will use characters.
 */
typedef void (*ignorableWhitespaceSAXFunc) (void *ctx,
				const xmlChar *ch,
				int len);
/**
 * processingInstructionSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @target:  the target name
 * @data: the PI data's
 *
 * A processing instruction has been parsed.
 */
typedef void (*processingInstructionSAXFunc) (void *ctx,
				const xmlChar *target,
				const xmlChar *data);
/**
 * commentSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @value:  the comment content
 *
 * A comment has been parsed.
 */
typedef void (*commentSAXFunc) (void *ctx,
				const xmlChar *value);
/**
 * cdataBlockSAXFunc:
 * @ctx:  the user data (XML parser context)
 * @value:  The pcdata content
 * @len:  the block length
 *
 * Called when a pcdata block has been parsed.
 */
typedef void (*cdataBlockSAXFunc) (
	                        void *ctx,
				const xmlChar *value,
				int len);
/**
 * warningSAXFunc:
 * @ctx:  an XML parser context
 * @msg:  the message to display/transmit
 * @...:  extra parameters for the message display
 * 
 * Display and format a warning messages, callback.
 */
typedef void ( *warningSAXFunc) (void *ctx,
				const char *msg, ...) ;
/**
 * errorSAXFunc:
 * @ctx:  an XML parser context
 * @msg:  the message to display/transmit
 * @...:  extra parameters for the message display
 * 
 * Display and format an error messages, callback.
 */
typedef void ( *errorSAXFunc) (void *ctx,
				const char *msg, ...) ;
/**
 * fatalErrorSAXFunc:
 * @ctx:  an XML parser context
 * @msg:  the message to display/transmit
 * @...:  extra parameters for the message display
 * 
 * Display and format fatal error messages, callback.
 * Note: so far fatalError() SAX callbacks are not used, error()
 *       get all the callbacks for errors.
 */
typedef void ( *fatalErrorSAXFunc) (void *ctx,
				const char *msg, ...) ;
/**
 * isStandaloneSAXFunc:
 * @ctx:  the user data (XML parser context)
 *
 * Is this document tagged standalone?
 *
 * Returns 1 if true
 */
typedef int (*isStandaloneSAXFunc) (void *ctx);
/**
 * hasInternalSubsetSAXFunc:
 * @ctx:  the user data (XML parser context)
 *
 * Does this document has an internal subset.
 *
 * Returns 1 if true
 */
typedef int (*hasInternalSubsetSAXFunc) (void *ctx);

/**
 * hasExternalSubsetSAXFunc:
 * @ctx:  the user data (XML parser context)
 *
 * Does this document has an external subset?
 *
 * Returns 1 if true
 */
typedef int (*hasExternalSubsetSAXFunc) (void *ctx);

/************************************************************************
 *									*
 *			The SAX version 2 API extensions		*
 *									*
 ************************************************************************/
/**
 * XML_SAX2_MAGIC:
 *
 * Special constant found in SAX2 blocks initialized fields
 */


/**
 * startElementNsSAX2Func:
 * @ctx:  the user data (XML parser context)
 * @localname:  the local name of the element
 * @prefix:  the element namespace prefix if available
 * @URI:  the element namespace name if available
 * @nb_namespaces:  number of namespace definitions on that node
 * @namespaces:  pointer to the array of prefix/URI pairs namespace definitions
 * @nb_attributes:  the number of attributes on that node
 * @nb_defaulted:  the number of defaulted attributes. The defaulted
 *                  ones are at the end of the array
 * @attributes:  pointer to the array of (localname/prefix/URI/value/end)
 *               attribute values.
 *
 * SAX2 callback when an element start has been detected by the parser.
 * It provides the namespace informations for the element, as well as
 * the new namespace declarations on the element.
 */

typedef void (*startElementNsSAX2Func) (void *ctx,
					const xmlChar *localname,
					const xmlChar *prefix,
					const xmlChar *URI,
					int nb_namespaces,
					const xmlChar **namespaces,
					int nb_attributes,
					int nb_defaulted,
					const xmlChar **attributes);
 
/**
 * endElementNsSAX2Func:
 * @ctx:  the user data (XML parser context)
 * @localname:  the local name of the element
 * @prefix:  the element namespace prefix if available
 * @URI:  the element namespace name if available
 *
 * SAX2 callback when an element end has been detected by the parser.
 * It provides the namespace informations for the element.
 */

typedef void (*endElementNsSAX2Func)   (void *ctx,
					const xmlChar *localname,
					const xmlChar *prefix,
					const xmlChar *URI);


struct _xmlSAXHandler {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError; /* unused error() get all the errors */
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    unsigned int initialized;
    /* The following fields are extensions available only on version 2 */
    void *_private;
    startElementNsSAX2Func startElementNs;
    endElementNsSAX2Func endElementNs;
    xmlStructuredErrorFunc serror;
};

/*
 * SAX Version 1
 */
typedef struct _xmlSAXHandlerV1 xmlSAXHandlerV1;
typedef xmlSAXHandlerV1 *xmlSAXHandlerV1Ptr;
struct _xmlSAXHandlerV1 {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError; /* unused error() get all the errors */
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    unsigned int initialized;
};


/**
 * xmlExternalEntityLoader:
 * @URL: The System ID of the resource requested
 * @ID: The Public ID of the resource requested
 * @context: the XML parser context 
 *
 * External entity loaders types.
 *
 * Returns the entity input parser.
 */
typedef xmlParserInputPtr (*xmlExternalEntityLoader) (const char *URL,
					 const char *ID,
					 xmlParserCtxtPtr context);


}



#line 1 "/usr/include/libxml2/libxml/encoding.h" 1
/*
 * Summary: interface for the encoding conversion functions
 * Description: interface for the encoding conversion functions needed for
 *              XML basic encoding and iconv() support.
 *
 * Related specs are
 * rfc2044        (UTF-8 and UTF-16) F. Yergeau Alis Technologies
 * [ISO-10646]    UTF-8 and UTF-16 in Annexes
 * [ISO-8859-1]   ISO Latin-1 characters codes.
 * [UNICODE]      The Unicode Consortium, "The Unicode Standard --
 *                Worldwide Character Encoding -- Version 1.0", Addison-
 *                Wesley, Volume 1, 1991, Volume 2, 1992.  UTF-8 is
 *                described in Unicode Technical Report #4.
 * [US-ASCII]     Coded Character Set--7-bit American Standard Code for
 *                Information Interchange, ANSI X3.4-1986.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/encoding.h" 1



#line 1 "/usr/include/iconv.h" 1
/* Copyright (C) 1997-2000, 2003, 2011 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





#line 1 "/usr/include/iconv.h" 1


#line 1 "/usr/include/iconv.h" 1


__BEGIN_DECLS

/* Identifier for conversion method from one codeset to another.  */
typedef void *iconv_t;


/* Allocate descriptor for code conversion from codeset FROMCODE to
   codeset TOCODE.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern iconv_t iconv_open (__const char *__tocode, __const char *__fromcode);

/* Convert at most *INBYTESLEFT bytes from *INBUF according to the
   code conversion algorithm specified by CD and place up to
   *OUTBYTESLEFT bytes in buffer at *OUTBUF.  */
extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
		     size_t *__restrict __inbytesleft,
		     char **__restrict __outbuf,
		     size_t *__restrict __outbytesleft);

/* Free resources allocated for descriptor CD for code conversion.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int iconv_close (iconv_t __cd);

__END_DECLS



#line 27 "/usr/include/libxml2/libxml/encoding.h" 2





extern "C" {


/*
 * xmlCharEncoding:
 *
 * Predefined values for some standard encodings.
 * Libxml does not do beforehand translation on UTF8 and ISOLatinX.
 * It also supports ASCII, ISO-8859-1, and UTF16 (LE and BE) by default.
 *
 * Anything else would have to be translated to UTF8 before being
 * given to the parser itself. The BOM for UTF16 and the encoding
 * declaration are looked at and a converter is looked for at that
 * point. If not found the parser stops here as asked by the XML REC. A
 * converter can be registered by the user using xmlRegisterCharEncodingHandler
 * but the current form doesn't allow stateful transcoding (a serious
 * problem agreed !). If iconv has been found it will be used
 * automatically and allow stateful transcoding, the simplest is then
 * to be sure to enable iconv and to provide iconv libs for the encoding
 * support needed.
 *
 * Note that the generic "UTF-16" is not a predefined value.  Instead, only
 * the specific UTF-16LE and UTF-16BE are present.
 */
typedef enum {
    XML_CHAR_ENCODING_ERROR=   -1, /* No char encoding detected */
    XML_CHAR_ENCODING_NONE=	0, /* No char encoding detected */
    XML_CHAR_ENCODING_UTF8=	1, /* UTF-8 */
    XML_CHAR_ENCODING_UTF16LE=	2, /* UTF-16 little endian */
    XML_CHAR_ENCODING_UTF16BE=	3, /* UTF-16 big endian */
    XML_CHAR_ENCODING_UCS4LE=	4, /* UCS-4 little endian */
    XML_CHAR_ENCODING_UCS4BE=	5, /* UCS-4 big endian */
    XML_CHAR_ENCODING_EBCDIC=	6, /* EBCDIC uh! */
    XML_CHAR_ENCODING_UCS4_2143=7, /* UCS-4 unusual ordering */
    XML_CHAR_ENCODING_UCS4_3412=8, /* UCS-4 unusual ordering */
    XML_CHAR_ENCODING_UCS2=	9, /* UCS-2 */
    XML_CHAR_ENCODING_8859_1=	10,/* ISO-8859-1 ISO Latin 1 */
    XML_CHAR_ENCODING_8859_2=	11,/* ISO-8859-2 ISO Latin 2 */
    XML_CHAR_ENCODING_8859_3=	12,/* ISO-8859-3 */
    XML_CHAR_ENCODING_8859_4=	13,/* ISO-8859-4 */
    XML_CHAR_ENCODING_8859_5=	14,/* ISO-8859-5 */
    XML_CHAR_ENCODING_8859_6=	15,/* ISO-8859-6 */
    XML_CHAR_ENCODING_8859_7=	16,/* ISO-8859-7 */
    XML_CHAR_ENCODING_8859_8=	17,/* ISO-8859-8 */
    XML_CHAR_ENCODING_8859_9=	18,/* ISO-8859-9 */
    XML_CHAR_ENCODING_2022_JP=  19,/* ISO-2022-JP */
    XML_CHAR_ENCODING_SHIFT_JIS=20,/* Shift_JIS */
    XML_CHAR_ENCODING_EUC_JP=   21,/* EUC-JP */
    XML_CHAR_ENCODING_ASCII=    22 /* pure ASCII */
} xmlCharEncoding;

/**
 * xmlCharEncodingInputFunc:
 * @out:  a pointer to an array of bytes to store the UTF-8 result
 * @outlen:  the length of @out
 * @in:  a pointer to an array of chars in the original encoding
 * @inlen:  the length of @in
 *
 * Take a block of chars in the original encoding and try to convert
 * it to an UTF-8 block of chars out.
 *
 * Returns the number of bytes written, -1 if lack of space, or -2
 *     if the transcoding failed.
 * The value of @inlen after return is the number of octets consumed
 *     if the return value is positive, else unpredictiable.
 * The value of @outlen after return is the number of octets consumed.
 */
typedef int (* xmlCharEncodingInputFunc)(unsigned char *out, int *outlen,
                                         const unsigned char *in, int *inlen);


/**
 * xmlCharEncodingOutputFunc:
 * @out:  a pointer to an array of bytes to store the result
 * @outlen:  the length of @out
 * @in:  a pointer to an array of UTF-8 chars
 * @inlen:  the length of @in
 *
 * Take a block of UTF-8 chars in and try to convert it to another
 * encoding.
 * Note: a first call designed to produce heading info is called with
 * in = NULL. If stateful this should also initialize the encoder state.
 *
 * Returns the number of bytes written, -1 if lack of space, or -2
 *     if the transcoding failed.
 * The value of @inlen after return is the number of octets consumed
 *     if the return value is positive, else unpredictiable.
 * The value of @outlen after return is the number of octets produced.
 */
typedef int (* xmlCharEncodingOutputFunc)(unsigned char *out, int *outlen,
                                          const unsigned char *in, int *inlen);


/*
 * Block defining the handlers for non UTF-8 encodings.
 * If iconv is supported, there are two extra fields.
 */


  
  




typedef struct _xmlCharEncodingHandler xmlCharEncodingHandler;
typedef xmlCharEncodingHandler *xmlCharEncodingHandlerPtr;
struct _xmlCharEncodingHandler {
    char                       *name;
    xmlCharEncodingInputFunc   input;
    xmlCharEncodingOutputFunc  output;

    iconv_t                    iconv_in;
    iconv_t                    iconv_out;


    
    

};


}


#line 1 "/usr/include/libxml2/libxml/encoding.h" 1

extern "C" {


/*
 * Interfaces for encoding handlers.
 */
 void 	
	xmlInitCharEncodingHandlers	(void);
 void 	
	xmlCleanupCharEncodingHandlers	(void);
 void 	
	xmlRegisterCharEncodingHandler	(xmlCharEncodingHandlerPtr handler);
 xmlCharEncodingHandlerPtr 
	xmlGetCharEncodingHandler	(xmlCharEncoding enc);
 xmlCharEncodingHandlerPtr 
	xmlFindCharEncodingHandler	(const char *name);
 xmlCharEncodingHandlerPtr 
	xmlNewCharEncodingHandler	(const char *name, 
                          		 xmlCharEncodingInputFunc input,
                          		 xmlCharEncodingOutputFunc output);

/*
 * Interfaces for encoding names and aliases.
 */
 int 	
	xmlAddEncodingAlias		(const char *name,
					 const char *alias);
 int 	
	xmlDelEncodingAlias		(const char *alias);
 const char * 
	xmlGetEncodingAlias		(const char *alias);
 void 	
	xmlCleanupEncodingAliases	(void);
 xmlCharEncoding 
	xmlParseCharEncoding		(const char *name);
 const char * 
	xmlGetCharEncodingName		(xmlCharEncoding enc);

/*
 * Interfaces directly used by the parsers.
 */
 xmlCharEncoding 
	xmlDetectCharEncoding		(const unsigned char *in,
					 int len);

 int 	
	xmlCharEncOutFunc		(xmlCharEncodingHandler *handler,
					 xmlBufferPtr out,
					 xmlBufferPtr in);

 int 	
	xmlCharEncInFunc		(xmlCharEncodingHandler *handler,
					 xmlBufferPtr out,
					 xmlBufferPtr in);
 int 
	xmlCharEncFirstLine		(xmlCharEncodingHandler *handler,
					 xmlBufferPtr out,
					 xmlBufferPtr in);
 int 	
	xmlCharEncCloseFunc		(xmlCharEncodingHandler *handler);

/*
 * Export a few useful functions
 */

 int 	
	UTF8Toisolat1			(unsigned char *out,
					 int *outlen,
					 const unsigned char *in,
					 int *inlen);

 int 	
	isolat1ToUTF8			(unsigned char *out,
					 int *outlen,
					 const unsigned char *in,
					 int *inlen);

}




#line 797 "/usr/include/libxml2/libxml/parser.h" 2

#line 1 "/usr/include/libxml2/libxml/xmlIO.h" 1
/*
 * Summary: interface for the I/O interfaces used by the parser
 * Description: interface for the I/O interfaces used by the parser
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/xmlIO.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlIO.h" 1


extern "C" {


/*
 * Those are the functions and datatypes for the parser input
 * I/O structures.
 */

/**
 * xmlInputMatchCallback:
 * @filename: the filename or URI
 *
 * Callback used in the I/O Input API to detect if the current handler 
 * can provide input fonctionnalities for this resource.
 *
 * Returns 1 if yes and 0 if another Input module should be used
 */
typedef int ( *xmlInputMatchCallback) (char const *filename);
/**
 * xmlInputOpenCallback:
 * @filename: the filename or URI
 *
 * Callback used in the I/O Input API to open the resource
 *
 * Returns an Input context or NULL in case or error
 */
typedef void * ( *xmlInputOpenCallback) (char const *filename);
/**
 * xmlInputReadCallback:
 * @context:  an Input context
 * @buffer:  the buffer to store data read
 * @len:  the length of the buffer in bytes
 *
 * Callback used in the I/O Input API to read the resource
 *
 * Returns the number of bytes read or -1 in case of error
 */
typedef int ( *xmlInputReadCallback) (void * context, char * buffer, int len);
/**
 * xmlInputCloseCallback:
 * @context:  an Input context
 *
 * Callback used in the I/O Input API to close the resource
 *
 * Returns 0 or -1 in case of error
 */
typedef int ( *xmlInputCloseCallback) (void * context);


/*
 * Those are the functions and datatypes for the library output
 * I/O structures.
 */

/**
 * xmlOutputMatchCallback:
 * @filename: the filename or URI
 *
 * Callback used in the I/O Output API to detect if the current handler 
 * can provide output fonctionnalities for this resource.
 *
 * Returns 1 if yes and 0 if another Output module should be used
 */
typedef int ( *xmlOutputMatchCallback) (char const *filename);
/**
 * xmlOutputOpenCallback:
 * @filename: the filename or URI
 *
 * Callback used in the I/O Output API to open the resource
 *
 * Returns an Output context or NULL in case or error
 */
typedef void * ( *xmlOutputOpenCallback) (char const *filename);
/**
 * xmlOutputWriteCallback:
 * @context:  an Output context
 * @buffer:  the buffer of data to write
 * @len:  the length of the buffer in bytes
 *
 * Callback used in the I/O Output API to write to the resource
 *
 * Returns the number of bytes written or -1 in case of error
 */
typedef int ( *xmlOutputWriteCallback) (void * context, const char * buffer,
                                       int len);
/**
 * xmlOutputCloseCallback:
 * @context:  an Output context
 *
 * Callback used in the I/O Output API to close the resource
 *
 * Returns 0 or -1 in case of error
 */
typedef int ( *xmlOutputCloseCallback) (void * context);



}



#line 1 "/usr/include/libxml2/libxml/xmlIO.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlIO.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlIO.h" 1

#line 1 "/usr/include/libxml2/libxml/xmlIO.h" 1


extern "C" {

struct _xmlParserInputBuffer {
    void*                  context;
    xmlInputReadCallback   readcallback;
    xmlInputCloseCallback  closecallback;
    
    xmlCharEncodingHandlerPtr encoder; /* I18N conversions to UTF-8 */
    
    xmlBufferPtr buffer;    /* Local buffer encoded in UTF-8 */
    xmlBufferPtr raw;       /* if encoder != NULL buffer for raw input */
    int	compressed;	    /* -1=unknown, 0=not compressed, 1=compressed */
    int error;
    unsigned long rawconsumed;/* amount consumed from raw */
};



struct _xmlOutputBuffer {
    void*                   context;
    xmlOutputWriteCallback  writecallback;
    xmlOutputCloseCallback  closecallback;
    
    xmlCharEncodingHandlerPtr encoder; /* I18N conversions to UTF-8 */
    
    xmlBufferPtr buffer;    /* Local buffer encoded in UTF-8 or ISOLatin */
    xmlBufferPtr conv;      /* if encoder != NULL buffer for output */
    int written;            /* total number of byte written */
    int error;
};


/*
 * Interfaces for input
 */
 void 	
	xmlCleanupInputCallbacks		(void);

 int 
	xmlPopInputCallbacks			(void);

 void 	
	xmlRegisterDefaultInputCallbacks	(void);
 xmlParserInputBufferPtr 
	xmlAllocParserInputBuffer		(xmlCharEncoding enc);

 xmlParserInputBufferPtr 
	xmlParserInputBufferCreateFilename	(const char *URI,
                                                 xmlCharEncoding enc);
 xmlParserInputBufferPtr 
	xmlParserInputBufferCreateFile		(FILE *file,
                                                 xmlCharEncoding enc);
 xmlParserInputBufferPtr 
	xmlParserInputBufferCreateFd		(int fd,
	                                         xmlCharEncoding enc);
 xmlParserInputBufferPtr 
	xmlParserInputBufferCreateMem		(const char *mem, int size,
	                                         xmlCharEncoding enc);
 xmlParserInputBufferPtr 
	xmlParserInputBufferCreateStatic	(const char *mem, int size,
	                                         xmlCharEncoding enc);
 xmlParserInputBufferPtr 
	xmlParserInputBufferCreateIO		(xmlInputReadCallback   ioread,
						 xmlInputCloseCallback  ioclose,
						 void *ioctx,
	                                         xmlCharEncoding enc);
 int 	
	xmlParserInputBufferRead		(xmlParserInputBufferPtr in,
						 int len);
 int 	
	xmlParserInputBufferGrow		(xmlParserInputBufferPtr in,
						 int len);
 int 	
	xmlParserInputBufferPush		(xmlParserInputBufferPtr in,
						 int len,
						 const char *buf);
 void 	
	xmlFreeParserInputBuffer		(xmlParserInputBufferPtr in);
 char * 	
	xmlParserGetDirectory			(const char *filename);

 int      
	xmlRegisterInputCallbacks		(xmlInputMatchCallback matchFunc,
						 xmlInputOpenCallback openFunc,
						 xmlInputReadCallback readFunc,
						 xmlInputCloseCallback closeFunc);

xmlParserInputBufferPtr
	__xmlParserInputBufferCreateFilename(const char *URI,
										xmlCharEncoding enc);


/*
 * Interfaces for output
 */
 void 	
	xmlCleanupOutputCallbacks		(void);
 void 	
	xmlRegisterDefaultOutputCallbacks(void);
 xmlOutputBufferPtr 
	xmlAllocOutputBuffer		(xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr 
	xmlOutputBufferCreateFilename	(const char *URI,
					 xmlCharEncodingHandlerPtr encoder,
					 int compression);

 xmlOutputBufferPtr 
	xmlOutputBufferCreateFile	(FILE *file,
					 xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr 
	xmlOutputBufferCreateBuffer	(xmlBufferPtr buffer,
					 xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr 
	xmlOutputBufferCreateFd		(int fd,
					 xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr 
	xmlOutputBufferCreateIO		(xmlOutputWriteCallback   iowrite,
					 xmlOutputCloseCallback  ioclose,
					 void *ioctx,
					 xmlCharEncodingHandlerPtr encoder);

 int 	
	xmlOutputBufferWrite		(xmlOutputBufferPtr out,
					 int len,
					 const char *buf);
 int 	
	xmlOutputBufferWriteString	(xmlOutputBufferPtr out,
					 const char *str);
 int 	
	xmlOutputBufferWriteEscape	(xmlOutputBufferPtr out,
					 const xmlChar *str,
					 xmlCharEncodingOutputFunc escaping);

 int 	
	xmlOutputBufferFlush		(xmlOutputBufferPtr out);
 int 	
	xmlOutputBufferClose		(xmlOutputBufferPtr out);

 int      
	xmlRegisterOutputCallbacks	(xmlOutputMatchCallback matchFunc,
					 xmlOutputOpenCallback openFunc,
					 xmlOutputWriteCallback writeFunc,
					 xmlOutputCloseCallback closeFunc);

xmlOutputBufferPtr
	__xmlOutputBufferCreateFilename(const char *URI,
                              xmlCharEncodingHandlerPtr encoder,
                              int compression);


/*  This function only exists if HTTP support built into the library  */
 void 	
	xmlRegisterHTTPPostCallbacks	(void );

	


 xmlParserInputPtr 
	xmlCheckHTTPInput		(xmlParserCtxtPtr ctxt,
					 xmlParserInputPtr ret);

/*
 * A predefined entity loader disabling network accesses
 */
 xmlParserInputPtr  
	xmlNoNetExternalEntityLoader	(const char *URL,
					 const char *ID,
					 xmlParserCtxtPtr ctxt);

/* 
 * xmlNormalizeWindowsPath is obsolete, don't use it. 
 * Check xmlCanonicPath in uri.h for a better alternative.
 */
 xmlChar *  
	xmlNormalizeWindowsPath		(const xmlChar *path);

 int 	
	xmlCheckFilename		(const char *path);
/**
 * Default 'file://' protocol callbacks 
 */
 int 	
	xmlFileMatch 			(const char *filename);
 void * 	
	xmlFileOpen 			(const char *filename);
 int 	
	xmlFileRead 			(void * context, 
					 char * buffer, 
					 int len);
 int 	
	xmlFileClose 			(void * context);

/**
 * Default 'http://' protocol callbacks 
 */

 int 	
	xmlIOHTTPMatch 			(const char *filename);
 void * 	
	xmlIOHTTPOpen 			(const char *filename);

 void * 	
	xmlIOHTTPOpenW			(const char * post_uri,
					 int   compression );

 int  	
	xmlIOHTTPRead			(void * context, 
					 char * buffer, 
					 int len);
 int 	
	xmlIOHTTPClose 			(void * context);


/**
 * Default 'ftp://' protocol callbacks 
 */

 int 	
	xmlIOFTPMatch 			(const char *filename);
 void * 	
	xmlIOFTPOpen 			(const char *filename);
 int  	
	xmlIOFTPRead			(void * context, 
					 char * buffer, 
					 int len);
 int  	
	xmlIOFTPClose 			(void * context);



}




#line 798 "/usr/include/libxml2/libxml/parser.h" 2

#line 1 "/usr/include/libxml2/libxml/parser.h" 1


extern "C" {



/*
 * Init/Cleanup
 */
 void 		
		xmlInitParser		(void);
 void 		
		xmlCleanupParser	(void);

/*
 * Input functions
 */
 int 		
		xmlParserInputRead	(xmlParserInputPtr in,
					 int len);
 int 		
		xmlParserInputGrow	(xmlParserInputPtr in,
					 int len);

/*
 * Basic parsing Interfaces
 */

 xmlDocPtr 	
		xmlParseDoc		(const xmlChar *cur);
 xmlDocPtr 	
		xmlParseFile		(const char *filename);
 xmlDocPtr 	
		xmlParseMemory		(const char *buffer,
					 int size);

 int 		
		xmlSubstituteEntitiesDefault(int val);
 int 		
		xmlKeepBlanksDefault	(int val);
 void 		
		xmlStopParser		(xmlParserCtxtPtr ctxt);
 int 		
		xmlPedanticParserDefault(int val);
 int 		
		xmlLineNumbersDefault	(int val);


/*
 * Recovery mode 
 */
 xmlDocPtr 	
		xmlRecoverDoc		(const xmlChar *cur);
 xmlDocPtr 	
		xmlRecoverMemory	(const char *buffer,
					 int size);
 xmlDocPtr 	
		xmlRecoverFile		(const char *filename);


/*
 * Less common routines and SAX interfaces
 */
 int 		
		xmlParseDocument	(xmlParserCtxtPtr ctxt);
 int 		
		xmlParseExtParsedEnt	(xmlParserCtxtPtr ctxt);

 int 		
		xmlSAXUserParseFile	(xmlSAXHandlerPtr sax,
					 void *user_data,
					 const char *filename);
 int 		
		xmlSAXUserParseMemory	(xmlSAXHandlerPtr sax,
					 void *user_data,
					 const char *buffer,
					 int size);
 xmlDocPtr 	
		xmlSAXParseDoc		(xmlSAXHandlerPtr sax,
					 const xmlChar *cur,
					 int recovery);
 xmlDocPtr 	
		xmlSAXParseMemory	(xmlSAXHandlerPtr sax,
					 const char *buffer,
                                   	 int size,
					 int recovery);
 xmlDocPtr 	
		xmlSAXParseMemoryWithData (xmlSAXHandlerPtr sax,
					 const char *buffer,
                                   	 int size,
					 int recovery,
					 void *data);
 xmlDocPtr 	
		xmlSAXParseFile		(xmlSAXHandlerPtr sax,
					 const char *filename,
					 int recovery);
 xmlDocPtr 	
		xmlSAXParseFileWithData	(xmlSAXHandlerPtr sax,
					 const char *filename,
					 int recovery,
					 void *data);
 xmlDocPtr 	
		xmlSAXParseEntity	(xmlSAXHandlerPtr sax,
					 const char *filename);
 xmlDocPtr 	
		xmlParseEntity		(const char *filename);



 xmlDtdPtr 	
		xmlSAXParseDTD		(xmlSAXHandlerPtr sax,
					 const xmlChar *ExternalID,
					 const xmlChar *SystemID);
 xmlDtdPtr 	
		xmlParseDTD		(const xmlChar *ExternalID,
					 const xmlChar *SystemID);
 xmlDtdPtr 	
		xmlIOParseDTD		(xmlSAXHandlerPtr sax,
					 xmlParserInputBufferPtr input,
					 xmlCharEncoding enc);


 int 	
		xmlParseBalancedChunkMemory(xmlDocPtr doc,
					 xmlSAXHandlerPtr sax,
					 void *user_data,
					 int depth,
					 const xmlChar *string,
					 xmlNodePtr *lst);

 xmlParserErrors 
		xmlParseInNodeContext	(xmlNodePtr node,
					 const char *data,
					 int datalen,
					 int options,
					 xmlNodePtr *lst);

 int           
		xmlParseBalancedChunkMemoryRecover(xmlDocPtr doc,
                     xmlSAXHandlerPtr sax,
                     void *user_data,
                     int depth,
                     const xmlChar *string,
                     xmlNodePtr *lst,
                     int recover);
 int 		
		xmlParseExternalEntity	(xmlDocPtr doc,
					 xmlSAXHandlerPtr sax,
					 void *user_data,
					 int depth,
					 const xmlChar *URL,
					 const xmlChar *ID,
					 xmlNodePtr *lst);

 int 		
		xmlParseCtxtExternalEntity(xmlParserCtxtPtr ctx,
					 const xmlChar *URL,
					 const xmlChar *ID,
					 xmlNodePtr *lst);

/*
 * Parser contexts handling.
 */
 xmlParserCtxtPtr 	
		xmlNewParserCtxt	(void);
 int 		
		xmlInitParserCtxt	(xmlParserCtxtPtr ctxt);
 void 		
		xmlClearParserCtxt	(xmlParserCtxtPtr ctxt);
 void 		
		xmlFreeParserCtxt	(xmlParserCtxtPtr ctxt);

 void 		
		xmlSetupParserForBuffer	(xmlParserCtxtPtr ctxt,
					 const xmlChar* buffer,
					 const char *filename);

 xmlParserCtxtPtr  
		xmlCreateDocParserCtxt	(const xmlChar *cur);


/*
 * Reading/setting optional parsing features.
 */
 int 		
		xmlGetFeaturesList	(int *len,
					 const char **result);
 int 		
		xmlGetFeature		(xmlParserCtxtPtr ctxt,
					 const char *name,
					 void *result);
 int 		
		xmlSetFeature		(xmlParserCtxtPtr ctxt,
					 const char *name,
					 void *value);



/*
 * Interfaces for the Push mode.
 */
 xmlParserCtxtPtr  
		xmlCreatePushParserCtxt(xmlSAXHandlerPtr sax,
					 void *user_data,
					 const char *chunk,
					 int size,
					 const char *filename);
 int 		 
		xmlParseChunk		(xmlParserCtxtPtr ctxt,
					 const char *chunk,
					 int size,
					 int terminate);


/*
 * Special I/O mode.
 */

 xmlParserCtxtPtr  
		xmlCreateIOParserCtxt	(xmlSAXHandlerPtr sax,
					 void *user_data,
					 xmlInputReadCallback   ioread,
					 xmlInputCloseCallback  ioclose,
					 void *ioctx,
					 xmlCharEncoding enc);

 xmlParserInputPtr  
		xmlNewIOInputStream	(xmlParserCtxtPtr ctxt,
					 xmlParserInputBufferPtr input,
					 xmlCharEncoding enc);

/*
 * Node infos.
 */
 const xmlParserNodeInfo* 
		xmlParserFindNodeInfo	(const xmlParserCtxtPtr ctxt,
				         const xmlNodePtr node);
 void 		
		xmlInitNodeInfoSeq	(xmlParserNodeInfoSeqPtr seq);
 void 		
		xmlClearNodeInfoSeq	(xmlParserNodeInfoSeqPtr seq);
 unsigned long  
		xmlParserFindNodeInfoIndex(const xmlParserNodeInfoSeqPtr seq,
                                         const xmlNodePtr node);
 void 		
		xmlParserAddNodeInfo	(xmlParserCtxtPtr ctxt,
					 const xmlParserNodeInfoPtr info);

/*
 * External entities handling actually implemented in xmlIO.
 */

 void 		
		xmlSetExternalEntityLoader(xmlExternalEntityLoader f);
 xmlExternalEntityLoader 
		xmlGetExternalEntityLoader(void);
 xmlParserInputPtr 
		xmlLoadExternalEntity	(const char *URL,
					 const char *ID,
					 xmlParserCtxtPtr ctxt);

/*
 * Index lookup, actually implemented in the encoding module
 */
 long 
		xmlByteConsumed		(xmlParserCtxtPtr ctxt);

/*
 * New set of simpler/more flexible APIs
 */
/**
 * xmlParserOption:
 *
 * This is the set of XML parser options that can be passed down
 * to the xmlReadDoc() and similar calls.
 */
typedef enum {
    XML_PARSE_RECOVER	= 1<<0,	/* recover on errors */
    XML_PARSE_NOENT	= 1<<1,	/* substitute entities */
    XML_PARSE_DTDLOAD	= 1<<2,	/* load the external subset */
    XML_PARSE_DTDATTR	= 1<<3,	/* default DTD attributes */
    XML_PARSE_DTDVALID	= 1<<4,	/* validate with the DTD */
    XML_PARSE_NOERROR	= 1<<5,	/* suppress error reports */
    XML_PARSE_NOWARNING	= 1<<6,	/* suppress warning reports */
    XML_PARSE_PEDANTIC	= 1<<7,	/* pedantic error reporting */
    XML_PARSE_NOBLANKS	= 1<<8,	/* remove blank nodes */
    XML_PARSE_SAX1	= 1<<9,	/* use the SAX1 interface internally */
    XML_PARSE_XINCLUDE	= 1<<10,/* Implement XInclude substitition  */
    XML_PARSE_NONET	= 1<<11,/* Forbid network access */
    XML_PARSE_NODICT	= 1<<12,/* Do not reuse the context dictionnary */
    XML_PARSE_NSCLEAN	= 1<<13,/* remove redundant namespaces declarations */
    XML_PARSE_NOCDATA	= 1<<14,/* merge CDATA as text nodes */
    XML_PARSE_NOXINCNODE= 1<<15,/* do not generate XINCLUDE START/END nodes */
    XML_PARSE_COMPACT   = 1<<16,/* compact small text nodes; no modification of
                                   the tree allowed afterwards (will possibly
				   crash if you try to modify the tree) */
    XML_PARSE_OLD10	= 1<<17,/* parse using XML-1.0 before update 5 */
    XML_PARSE_NOBASEFIX = 1<<18,/* do not fixup XINCLUDE xml:base uris */
    XML_PARSE_HUGE      = 1<<19, /* relax any hardcoded limit from the parser */
    XML_PARSE_OLDSAX    = 1<<20 /* parse using SAX2 interface from before 2.7.0 */
} xmlParserOption;

 void 
		xmlCtxtReset		(xmlParserCtxtPtr ctxt);
 int 
		xmlCtxtResetPush	(xmlParserCtxtPtr ctxt,
					 const char *chunk,
					 int size,
					 const char *filename,
					 const char *encoding);
 int 
		xmlCtxtUseOptions	(xmlParserCtxtPtr ctxt,
					 int options);
 xmlDocPtr 
		xmlReadDoc		(const xmlChar *cur,
					 const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlReadFile		(const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlReadMemory		(const char *buffer,
					 int size,
					 const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlReadFd		(int fd,
					 const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlReadIO		(xmlInputReadCallback ioread,
					 xmlInputCloseCallback ioclose,
					 void *ioctx,
					 const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlCtxtReadDoc		(xmlParserCtxtPtr ctxt,
					 const xmlChar *cur,
					 const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlCtxtReadFile		(xmlParserCtxtPtr ctxt,
					 const char *filename,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlCtxtReadMemory		(xmlParserCtxtPtr ctxt,
					 const char *buffer,
					 int size,
					 const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlCtxtReadFd		(xmlParserCtxtPtr ctxt,
					 int fd,
					 const char *URL,
					 const char *encoding,
					 int options);
 xmlDocPtr 
		xmlCtxtReadIO		(xmlParserCtxtPtr ctxt,
					 xmlInputReadCallback ioread,
					 xmlInputCloseCallback ioclose,
					 void *ioctx,
					 const char *URL,
					 const char *encoding,
					 int options);

/*
 * Library wide options
 */
/**
 * xmlFeature:
 *
 * Used to examine the existance of features that can be enabled
 * or disabled at compile-time.
 * They used to be called XML_FEATURE_xxx but this clashed with Expat
 */
typedef enum {
    XML_WITH_THREAD = 1,
    XML_WITH_TREE = 2,
    XML_WITH_OUTPUT = 3,
    XML_WITH_PUSH = 4,
    XML_WITH_READER = 5,
    XML_WITH_PATTERN = 6,
    XML_WITH_WRITER = 7,
    XML_WITH_SAX1 = 8,
    XML_WITH_FTP = 9,
    XML_WITH_HTTP = 10,
    XML_WITH_VALID = 11,
    XML_WITH_HTML = 12,
    XML_WITH_LEGACY = 13,
    XML_WITH_C14N = 14,
    XML_WITH_CATALOG = 15,
    XML_WITH_XPATH = 16,
    XML_WITH_XPTR = 17,
    XML_WITH_XINCLUDE = 18,
    XML_WITH_ICONV = 19,
    XML_WITH_ISO8859X = 20,
    XML_WITH_UNICODE = 21,
    XML_WITH_REGEXP = 22,
    XML_WITH_AUTOMATA = 23,
    XML_WITH_EXPR = 24,
    XML_WITH_SCHEMAS = 25,
    XML_WITH_SCHEMATRON = 26,
    XML_WITH_MODULES = 27,
    XML_WITH_DEBUG = 28,
    XML_WITH_DEBUG_MEM = 29,
    XML_WITH_DEBUG_RUN = 30,
    XML_WITH_ZLIB = 31,
    XML_WITH_ICU = 32,
    XML_WITH_NONE = 99999 /* just to be sure of allocation size */
} xmlFeature;

 int 
		xmlHasFeature		(xmlFeature feature);


}



#line 18 "/usr/include/libxml2/libxml/globals.h" 2

#line 1 "/usr/include/libxml2/libxml/globals.h" 1

#line 1 "/usr/include/libxml2/libxml/SAX.h" 1
/*
 * Summary: Old SAX version 1 handler, deprecated
 * Description: DEPRECATED set of SAX version 1 interfaces used to
 *              build the DOM tree.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */






#line 1 "/usr/include/libxml2/libxml/SAX.h" 1

#line 1 "/usr/include/stdlib.h" 1
/* Copyright (C) 1991-2007, 2009, 2010, 2011 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */




#line 1 "/usr/include/stdlib.h" 1

/* Get size_t, wchar_t and NULL from <stddef.h>.  */






#line 1 "/usr/include/stdlib.h" 1

__BEGIN_DECLS





/* XPG requires a few symbols from <sys/wait.h> being defined.  */

#line 1 "/usr/include/stdlib.h" 1

#line 1 "/usr/include/stdlib.h" 1



/* Lots of hair to allow traditional BSD use of `union wait'
   as well as POSIX.1 use of `int' for the status word.  */









/* This is the type of the argument to `wait'.  The funky union
   causes redeclarations with either `int *' or `union wait *' to be
   allowed without complaint.  __WAIT_STATUS_DEFN is the type used in
   the actual function definitions.  */







  
    
    
  











/* Define the macros <sys/wait.h> also would define this way.  */











__BEGIN_NAMESPACE_STD
/* Returned by `div'.  */
typedef struct
  {
    int quot;			/* Quotient.  */
    int rem;			/* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */

typedef struct
  {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
  } ldiv_t;


__END_NAMESPACE_STD


__BEGIN_NAMESPACE_C99
/* Returned by `lldiv'.  */
__extension__ typedef struct
  {
    long long int quot;		/* Quotient.  */
    long long int rem;		/* Remainder.  */
  } lldiv_t;

__END_NAMESPACE_C99



/* The largest number rand will return (same as INT_MAX).  */



/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */




/* Maximum length of a multibyte character in the current locale.  */

extern size_t __ctype_get_mb_cur_max (void) __THROW __wur;


__BEGIN_NAMESPACE_STD
/* Convert a string to a floating-point number.  */
extern double atof (__const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to an integer.  */
extern int atoi (__const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to a long integer.  */
extern long int atol (__const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
__END_NAMESPACE_STD


__BEGIN_NAMESPACE_C99
/* Convert a string to a long long integer.  */
__extension__ extern long long int atoll (__const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
__END_NAMESPACE_C99


__BEGIN_NAMESPACE_STD
/* Convert a string to a floating-point number.  */
extern double strtod (__const char *__restrict __nptr,
		      char **__restrict __endptr)
     __THROW __nonnull ((1)) __wur;
__END_NAMESPACE_STD


__BEGIN_NAMESPACE_C99
/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (__const char *__restrict __nptr,
		     char **__restrict __endptr) __THROW __nonnull ((1)) __wur;

extern long double strtold (__const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1)) __wur;
__END_NAMESPACE_C99


__BEGIN_NAMESPACE_STD
/* Convert a string to a long integer.  */
extern long int strtol (__const char *__restrict __nptr,
			char **__restrict __endptr, int __base)
     __THROW __nonnull ((1)) __wur;
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (__const char *__restrict __nptr,
				  char **__restrict __endptr, int __base)
     __THROW __nonnull ((1)) __wur;
__END_NAMESPACE_STD


/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoq (__const char *__restrict __nptr,
			     char **__restrict __endptr, int __base)
     __THROW __nonnull ((1)) __wur;
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
				       char **__restrict __endptr, int __base)
     __THROW __nonnull ((1)) __wur;



__BEGIN_NAMESPACE_C99
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoll (__const char *__restrict __nptr,
			      char **__restrict __endptr, int __base)
     __THROW __nonnull ((1)) __wur;
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
					char **__restrict __endptr, int __base)
     __THROW __nonnull ((1)) __wur;
__END_NAMESPACE_C99






















			  
			  


				    
				    
     



				
				
     



					  
					  
     


			
     


		       
     


			      
			      
     








  




  




  








  







/* Convert N to base 64 using the digits "./0-9A-Za-z", least-significant
   digit first.  Returns a pointer to static storage overwritten by the
   next call.  */
extern char *l64a (long int __n) __THROW __wur;

/* Read a number from a string S in base 64 as above.  */
extern long int a64l (__const char *__s)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;





#line 1 "/usr/include/stdlib.h" 1

/* These are the functions that actually do things.  The `random', `srandom',
   `initstate' and `setstate' functions are those from BSD Unices.
   The `rand' and `srand' functions are required by the ANSI standard.
   We provide both interfaces to the same random number generator.  */
/* Return a random long integer between 0 and RAND_MAX inclusive.  */
extern long int random (void) __THROW;

/* Seed the random number generator with the given number.  */
extern void srandom (unsigned int __seed) __THROW;

/* Initialize the random number generator to use state buffer STATEBUF,
   of length STATELEN, and seed it with SEED.  Optimal lengths are 8, 16,
   32, 64, 128 and 256, the bigger the better; values less than 8 will
   cause an error and values greater than 256 will be rounded down.  */
extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen) __THROW __nonnull ((2));

/* Switch the random number generator to state buffer STATEBUF,
   which should have been previously initialized by `initstate'.  */
extern char *setstate (char *__statebuf) __THROW __nonnull ((1));



/* Reentrant versions of the `random' family of functions.
   These functions all use the following data structure to contain
   state, rather than global state variables.  */

struct random_data
  {
    int32_t *fptr;		/* Front pointer.  */
    int32_t *rptr;		/* Rear pointer.  */
    int32_t *state;		/* Array of state values.  */
    int rand_type;		/* Type of random number generator.  */
    int rand_deg;		/* Degree of random number generator.  */
    int rand_sep;		/* Distance between front and rear.  */
    int32_t *end_ptr;		/* Pointer behind state table.  */
  };

extern int random_r (struct random_data *__restrict __buf,
		     int32_t *__restrict __result) __THROW __nonnull ((1, 2));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __THROW __nonnull ((2));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
			size_t __statelen,
			struct random_data *__restrict __buf)
     __THROW __nonnull ((2, 4));

extern int setstate_r (char *__restrict __statebuf,
		       struct random_data *__restrict __buf)
     __THROW __nonnull ((1, 2));




__BEGIN_NAMESPACE_STD
/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) __THROW;
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) __THROW;
__END_NAMESPACE_STD


/* Reentrant interface according to POSIX.1.  */
extern int rand_r (unsigned int *__seed) __THROW;




/* System V style 48-bit random number generator functions.  */

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern double drand48 (void) __THROW;
extern double erand48 (unsigned short int __xsubi[3]) __THROW __nonnull ((1));

/* Return non-negative, long integer in [0,2^31).  */
extern long int lrand48 (void) __THROW;
extern long int nrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Return signed, long integers in [-2^31,2^31).  */
extern long int mrand48 (void) __THROW;
extern long int jrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Seed random number generator.  */
extern void srand48 (long int __seedval) __THROW;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __THROW __nonnull ((1));
extern void lcong48 (unsigned short int __param[7]) __THROW __nonnull ((1));


/* Data structure for communication with thread safe versions.  This
   type is to be regarded as opaque.  It's only exported because users
   have to allocate objects of this type.  */
struct drand48_data
  {
    unsigned short int __x[3];	/* Current state.  */
    unsigned short int __old_x[3]; /* Old state.  */
    unsigned short int __c;	/* Additive const. in congruential formula.  */
    unsigned short int __init;	/* Flag for initializing.  */
    unsigned long long int __a;	/* Factor in congruential formula.  */
  };

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern int drand48_r (struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));

/* Return non-negative, long integer in [0,2^31).  */
extern int lrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Return signed, long integers in [-2^31,2^31).  */
extern int mrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Seed random number generator.  */
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __THROW __nonnull ((2));

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer) __THROW __nonnull ((1, 2));

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
     __THROW __nonnull ((1, 2));







__BEGIN_NAMESPACE_STD
/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size) __THROW __attribute_malloc__ __wur;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
     __THROW __attribute_malloc__ __wur;
__END_NAMESPACE_STD



__BEGIN_NAMESPACE_STD
/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
     __THROW __attribute_warn_unused_result__;
/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) __THROW;
__END_NAMESPACE_STD


/* Free a block.  An alias for `free'.	(Sun Unices).  */
extern void cfree (void *__ptr) __THROW;




#line 1 "/usr/include/alloca.h" 1
/* Copyright (C) 1992, 1996, 1997, 1998, 1999 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





#line 1 "/usr/include/alloca.h" 1



#line 1 "/usr/include/alloca.h" 1

__BEGIN_DECLS

/* Remove any previous definitions.  */


/* Allocate a block that will be freed when the calling function exits.  */
extern void *alloca (size_t __size) __THROW;





__END_DECLS



#line 404 "/usr/include/stdlib.h" 2




/* Allocate SIZE bytes on a page boundary.  The storage cannot be freed.  */
extern void *valloc (size_t __size) __THROW __attribute_malloc__ __wur;



/* Allocate memory of SIZE bytes with an alignment of ALIGNMENT.  */
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __THROW __nonnull ((1)) __wur;


__BEGIN_NAMESPACE_STD
/* Abort execution and generate a core-dump.  */
extern void abort (void) __THROW ;


/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) __THROW __nonnull ((1));







     




__END_NAMESPACE_STD


/* Register a function to be called with the status
   given to `exit' and the given argument.  */
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __THROW __nonnull ((1));


__BEGIN_NAMESPACE_STD
/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) __THROW ;









__END_NAMESPACE_STD


__BEGIN_NAMESPACE_C99
/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) __THROW ;
__END_NAMESPACE_C99



__BEGIN_NAMESPACE_STD
/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (__const char *__name) __THROW __nonnull ((1)) __wur;
__END_NAMESPACE_STD

/* This function is similar to the above but returns NULL if the
   programs is running with SUID or SGID enabled.  */
extern char *__secure_getenv (__const char *__name)
     __THROW __nonnull ((1)) __wur;


/* The SVID says this is in <stdio.h>, but this seems a better place.	*/
/* Put STRING, which is of the form "NAME=VALUE", in the environment.
   If there is no `=', remove NAME from the environment.  */
extern int putenv (char *__string) __THROW __nonnull ((1));



/* Set NAME to VALUE in the environment.
   If REPLACE is nonzero, overwrite an existing value.  */
extern int setenv (__const char *__name, __const char *__value, int __replace)
     __THROW __nonnull ((2));

/* Remove the variable NAME from the environment.  */
extern int unsetenv (__const char *__name) __THROW __nonnull ((1));



/* The `clearenv' was planned to be added to POSIX.1 but probably
   never made it.  Nevertheless the POSIX.9 standard (POSIX bindings
   for Fortran 77) requires this function.  */
extern int clearenv (void) __THROW;





/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the file name unique.
   Returns TEMPLATE, or a null pointer if it cannot get a unique file name.  */
extern char *mktemp (char *__template) __THROW __nonnull ((1)) __wur;




/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the filename unique.
   Returns a file descriptor open on the file for reading and writing,
   or -1 if it cannot create a uniquely-named file.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int mkstemp (char *__template) __nonnull ((1)) __wur;



     










/* Similar to mkstemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int mkstemps (char *__template, int __suffixlen) __nonnull ((1)) __wur;



		       






     




/* Create a unique temporary directory from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the directory name unique.
   Returns TEMPLATE, or a null pointer if it cannot get a unique name.
   The directory is created mode 700.  */
extern char *mkdtemp (char *__template) __THROW __nonnull ((1)) __wur;














     
















     



				   
     






     




__BEGIN_NAMESPACE_STD
/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (__const char *__command) __wur;
__END_NAMESPACE_STD






     



/* Return the canonical absolute name of file NAME.  If RESOLVED is
   null, the result is malloc'd; otherwise, if the canonical name is
   PATH_MAX chars or more, returns null with `errno' set to
   ENAMETOOLONG; if the name fits in fewer than PATH_MAX chars,
   returns the name in RESOLVED.  */
extern char *realpath (__const char *__restrict __name,
		       char *__restrict __resolved) __THROW __wur;



/* Shorthand for type of comparison functions.  */


typedef int (*__compar_fn_t) (__const void *, __const void *);









__BEGIN_NAMESPACE_STD
/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (__const void *__key, __const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __nonnull ((1, 2, 5)) __wur;

/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) __nonnull ((1, 4));


		     
  



/* Return the absolute value of X.  */
extern int abs (int __x) __THROW  __wur;
extern long int labs (long int __x) __THROW  __wur;
__END_NAMESPACE_STD


__extension__ extern long long int llabs (long long int __x)
     __THROW  __wur;



__BEGIN_NAMESPACE_STD
/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
     __THROW  __wur;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __THROW  __wur;
__END_NAMESPACE_STD


__BEGIN_NAMESPACE_C99
__extension__ extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
     __THROW  __wur;
__END_NAMESPACE_C99





/* Convert floating point numbers to strings.  The returned values are
   valid only until another call to the same function.  */

/* Convert VALUE to a string with NDIGIT digits and return a pointer to
   this.  Set *DECPT with the position of the decimal character and *SIGN
   with the sign of the number.  */
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* Convert VALUE to a string rounded to NDIGIT decimal digits.  Set *DECPT
   with the position of the decimal character and *SIGN with the sign of
   the number.  */
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* If possible convert VALUE to a string with NDIGIT significant digits.
   Otherwise use exponential representation.  The resulting string will
   be written to BUF.  */
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;



/* Long double versions of above functions.  */
extern char *qecvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qfcvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;


/* Reentrant version of the functions above which provide their own
   buffers.  */
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));

extern int qecvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));




__BEGIN_NAMESPACE_STD
/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (__const char *__s, size_t __n) __THROW __wur;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t *__restrict __pwc,
		   __const char *__restrict __s, size_t __n) __THROW __wur;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) __THROW __wur;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t *__restrict  __pwcs,
			__const char *__restrict __s, size_t __n) __THROW;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char *__restrict __s,
			__const wchar_t *__restrict __pwcs, size_t __n)
     __THROW;
__END_NAMESPACE_STD



/* Determine whether the string value of RESPONSE matches the affirmation
   or negative response expression as specified by the LC_MESSAGES category
   in the program's current locale.  Returns 1 if affirmative, 0 if
   negative, and -1 if not matching.  */
extern int rpmatch (__const char *__response) __THROW __nonnull ((1)) __wur;




/* Parse comma separated suboption from *OPTIONP and match against
   strings in TOKENS.  If found return index and set *VALUEP to
   optional value introduced by an equal sign.  If the suboption is
   not part of TOKENS return in *VALUEP beginning of unknown
   suboption.  On exit *OPTIONP is set to the beginning of the next
   token or at the terminating NUL character.  */
extern int getsubopt (char **__restrict __optionp,
		      char *__const *__restrict __tokens,
		      char **__restrict __valuep)
     __THROW __nonnull ((1, 2, 3)) __wur;









/* X/Open pseudo terminal handling.  */




























     






/* Put the 1 minute, 5 minute and 15 minute load averages into the first
   NELEM elements of LOADAVG.  Return the number written (never more than
   three, but may be less than NELEM), or -1 if an error occurred.  */
extern int getloadavg (double __loadavg[], int __nelem)
     __THROW __nonnull ((1));



/* Define some macros helping to catch buffer overflows.  */










__END_DECLS



#line 16 "/usr/include/libxml2/libxml/SAX.h" 2

#line 1 "/usr/include/libxml2/libxml/SAX.h" 1

#line 1 "/usr/include/libxml2/libxml/SAX.h" 1

#line 1 "/usr/include/libxml2/libxml/xlink.h" 1
/*
 * Summary: unfinished XLink detection module
 * Description: unfinished XLink detection module
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/xlink.h" 1

#line 1 "/usr/include/libxml2/libxml/xlink.h" 1




extern "C" {


/**
 * Various defines for the various Link properties.
 *
 * NOTE: the link detection layer will try to resolve QName expansion
 *       of namespaces. If "foo" is the prefix for "http://foo.com/"
 *       then the link detection layer will expand role="foo:myrole"
 *       to "http://foo.com/:myrole".
 * NOTE: the link detection layer will expand URI-Refences found on
 *       href attributes by using the base mechanism if found.
 */
typedef xmlChar *xlinkHRef;
typedef xmlChar *xlinkRole;
typedef xmlChar *xlinkTitle;

typedef enum {
    XLINK_TYPE_NONE = 0,
    XLINK_TYPE_SIMPLE,
    XLINK_TYPE_EXTENDED,
    XLINK_TYPE_EXTENDED_SET
} xlinkType;

typedef enum {
    XLINK_SHOW_NONE = 0,
    XLINK_SHOW_NEW,
    XLINK_SHOW_EMBED,
    XLINK_SHOW_REPLACE
} xlinkShow;

typedef enum {
    XLINK_ACTUATE_NONE = 0,
    XLINK_ACTUATE_AUTO,
    XLINK_ACTUATE_ONREQUEST
} xlinkActuate;

/**
 * xlinkNodeDetectFunc:
 * @ctx:  user data pointer
 * @node:  the node to check
 * 
 * This is the prototype for the link detection routine.
 * It calls the default link detection callbacks upon link detection.
 */
typedef void (*xlinkNodeDetectFunc) (void *ctx, xmlNodePtr node);

/*
 * The link detection module interact with the upper layers using
 * a set of callback registered at parsing time.
 */

/**
 * xlinkSimpleLinkFunk:
 * @ctx:  user data pointer
 * @node:  the node carrying the link
 * @href:  the target of the link
 * @role:  the role string
 * @title:  the link title
 *
 * This is the prototype for a simple link detection callback.
 */
typedef void
(*xlinkSimpleLinkFunk)	(void *ctx,
			 xmlNodePtr node,
			 const xlinkHRef href,
			 const xlinkRole role,
			 const xlinkTitle title);

/**
 * xlinkExtendedLinkFunk:
 * @ctx:  user data pointer
 * @node:  the node carrying the link
 * @nbLocators: the number of locators detected on the link
 * @hrefs:  pointer to the array of locator hrefs
 * @roles:  pointer to the array of locator roles
 * @nbArcs: the number of arcs detected on the link
 * @from:  pointer to the array of source roles found on the arcs
 * @to:  pointer to the array of target roles found on the arcs
 * @show:  array of values for the show attributes found on the arcs
 * @actuate:  array of values for the actuate attributes found on the arcs
 * @nbTitles: the number of titles detected on the link
 * @title:  array of titles detected on the link
 * @langs:  array of xml:lang values for the titles
 *
 * This is the prototype for a extended link detection callback.
 */
typedef void
(*xlinkExtendedLinkFunk)(void *ctx,
			 xmlNodePtr node,
			 int nbLocators,
			 const xlinkHRef *hrefs,
			 const xlinkRole *roles,
			 int nbArcs,
			 const xlinkRole *from,
			 const xlinkRole *to,
			 xlinkShow *show,
			 xlinkActuate *actuate,
			 int nbTitles,
			 const xlinkTitle *titles,
			 const xmlChar **langs);

/**
 * xlinkExtendedLinkSetFunk:
 * @ctx:  user data pointer
 * @node:  the node carrying the link
 * @nbLocators: the number of locators detected on the link
 * @hrefs:  pointer to the array of locator hrefs
 * @roles:  pointer to the array of locator roles
 * @nbTitles: the number of titles detected on the link
 * @title:  array of titles detected on the link
 * @langs:  array of xml:lang values for the titles
 *
 * This is the prototype for a extended link set detection callback.
 */
typedef void
(*xlinkExtendedLinkSetFunk)	(void *ctx,
				 xmlNodePtr node,
				 int nbLocators,
				 const xlinkHRef *hrefs,
				 const xlinkRole *roles,
				 int nbTitles,
				 const xlinkTitle *titles,
				 const xmlChar **langs);

/**
 * This is the structure containing a set of Links detection callbacks.
 *
 * There is no default xlink callbacks, if one want to get link
 * recognition activated, those call backs must be provided before parsing.
 */
typedef struct _xlinkHandler xlinkHandler;
typedef xlinkHandler *xlinkHandlerPtr;
struct _xlinkHandler {
    xlinkSimpleLinkFunk simple;
    xlinkExtendedLinkFunk extended;
    xlinkExtendedLinkSetFunk set;
};

/*
 * The default detection routine, can be overridden, they call the default
 * detection callbacks. 
 */

 xlinkNodeDetectFunc 	
		xlinkGetDefaultDetect	(void);
 void 			
		xlinkSetDefaultDetect	(xlinkNodeDetectFunc func);

/*
 * Routines to set/get the default handlers.
 */
 xlinkHandlerPtr 	
		xlinkGetDefaultHandler	(void);
 void 		
		xlinkSetDefaultHandler	(xlinkHandlerPtr handler);

/*
 * Link detection module itself.
 */
 xlinkType 	 
		xlinkIsLink		(xmlDocPtr doc,
					 xmlNodePtr node);


}






#line 19 "/usr/include/libxml2/libxml/SAX.h" 2




extern "C" {

 const xmlChar * 
		getPublicId			(void *ctx);
 const xmlChar * 	
		getSystemId			(void *ctx);
 void 		
		setDocumentLocator		(void *ctx,
						 xmlSAXLocatorPtr loc);
    
 int 		
		getLineNumber			(void *ctx);
 int 		
		getColumnNumber			(void *ctx);

 int 		
		isStandalone			(void *ctx);
 int 		
		hasInternalSubset		(void *ctx);
 int 		
		hasExternalSubset		(void *ctx);

 void 		
		internalSubset			(void *ctx,
						 const xmlChar *name,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID);
 void 		
		externalSubset			(void *ctx,
						 const xmlChar *name,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID);
 xmlEntityPtr 	
		getEntity			(void *ctx,
						 const xmlChar *name);
 xmlEntityPtr 	
		getParameterEntity		(void *ctx,
						 const xmlChar *name);
 xmlParserInputPtr  
		resolveEntity			(void *ctx,
						 const xmlChar *publicId,
						 const xmlChar *systemId);

 void 		
		entityDecl			(void *ctx,
						 const xmlChar *name,
						 int type,
						 const xmlChar *publicId,
						 const xmlChar *systemId,
						 xmlChar *content);
 void 		
		attributeDecl			(void *ctx,
						 const xmlChar *elem,
						 const xmlChar *fullname,
						 int type,
						 int def,
						 const xmlChar *defaultValue,
						 xmlEnumerationPtr tree);
 void 		
		elementDecl			(void *ctx,
						 const xmlChar *name,
						 int type,
						 xmlElementContentPtr content);
 void 		
		notationDecl			(void *ctx,
						 const xmlChar *name,
						 const xmlChar *publicId,
						 const xmlChar *systemId);
 void 		
		unparsedEntityDecl		(void *ctx,
						 const xmlChar *name,
						 const xmlChar *publicId,
						 const xmlChar *systemId,
						 const xmlChar *notationName);

 void 		
		startDocument			(void *ctx);
 void 		
		endDocument			(void *ctx);
 void 		
		attribute			(void *ctx,
						 const xmlChar *fullname,
						 const xmlChar *value);
 void 		
		startElement			(void *ctx,
						 const xmlChar *fullname,
						 const xmlChar **atts);
 void 		
		endElement			(void *ctx,
						 const xmlChar *name);
 void 		
		reference			(void *ctx,
						 const xmlChar *name);
 void 		
		characters			(void *ctx,
						 const xmlChar *ch,
						 int len);
 void 		
		ignorableWhitespace		(void *ctx,
						 const xmlChar *ch,
						 int len);
 void 		
		processingInstruction		(void *ctx,
						 const xmlChar *target,
						 const xmlChar *data);
 void 		
		globalNamespace			(void *ctx,
						 const xmlChar *href,
						 const xmlChar *prefix);
 void 		
		setNamespace			(void *ctx,
						 const xmlChar *name);
 xmlNsPtr 	
		getNamespace			(void *ctx);
 int 		
		checkNamespace			(void *ctx,
						 xmlChar *nameSpace);
 void 		
		namespaceDecl			(void *ctx,
						 const xmlChar *href,
						 const xmlChar *prefix);
 void 		
		comment				(void *ctx,
						 const xmlChar *value);
 void 		
		cdataBlock			(void *ctx,
						 const xmlChar *value,
						 int len);


 void 		
		initxmlDefaultSAXHandler	(xmlSAXHandlerV1 *hdlr,
						 int warning);

 void 		
		inithtmlDefaultSAXHandler	(xmlSAXHandlerV1 *hdlr);


 void 		
		initdocbDefaultSAXHandler	(xmlSAXHandlerV1 *hdlr);




}






#line 20 "/usr/include/libxml2/libxml/globals.h" 2

#line 1 "/usr/include/libxml2/libxml/SAX2.h" 1
/*
 * Summary: SAX2 parser interface used to build the DOM tree
 * Description: those are the default SAX2 interfaces used by
 *              the library when building DOM tree.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */






#line 1 "/usr/include/libxml2/libxml/SAX2.h" 1

#line 1 "/usr/include/libxml2/libxml/SAX2.h" 1

#line 1 "/usr/include/libxml2/libxml/SAX2.h" 1

#line 1 "/usr/include/libxml2/libxml/SAX2.h" 1

#line 1 "/usr/include/libxml2/libxml/SAX2.h" 1


extern "C" {

 const xmlChar * 
		xmlSAX2GetPublicId		(void *ctx);
 const xmlChar * 	
		xmlSAX2GetSystemId		(void *ctx);
 void 		
		xmlSAX2SetDocumentLocator	(void *ctx,
						 xmlSAXLocatorPtr loc);
    
 int 		
		xmlSAX2GetLineNumber		(void *ctx);
 int 		
		xmlSAX2GetColumnNumber		(void *ctx);

 int 		
		xmlSAX2IsStandalone		(void *ctx);
 int 		
		xmlSAX2HasInternalSubset	(void *ctx);
 int 		
		xmlSAX2HasExternalSubset	(void *ctx);

 void 		
		xmlSAX2InternalSubset		(void *ctx,
						 const xmlChar *name,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID);
 void 		
		xmlSAX2ExternalSubset		(void *ctx,
						 const xmlChar *name,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID);
 xmlEntityPtr 	
		xmlSAX2GetEntity		(void *ctx,
						 const xmlChar *name);
 xmlEntityPtr 	
		xmlSAX2GetParameterEntity	(void *ctx,
						 const xmlChar *name);
 xmlParserInputPtr  
		xmlSAX2ResolveEntity		(void *ctx,
						 const xmlChar *publicId,
						 const xmlChar *systemId);

 void 		
		xmlSAX2EntityDecl		(void *ctx,
						 const xmlChar *name,
						 int type,
						 const xmlChar *publicId,
						 const xmlChar *systemId,
						 xmlChar *content);
 void 		
		xmlSAX2AttributeDecl		(void *ctx,
						 const xmlChar *elem,
						 const xmlChar *fullname,
						 int type,
						 int def,
						 const xmlChar *defaultValue,
						 xmlEnumerationPtr tree);
 void 		
		xmlSAX2ElementDecl		(void *ctx,
						 const xmlChar *name,
						 int type,
						 xmlElementContentPtr content);
 void 		
		xmlSAX2NotationDecl		(void *ctx,
						 const xmlChar *name,
						 const xmlChar *publicId,
						 const xmlChar *systemId);
 void 		
		xmlSAX2UnparsedEntityDecl	(void *ctx,
						 const xmlChar *name,
						 const xmlChar *publicId,
						 const xmlChar *systemId,
						 const xmlChar *notationName);

 void 		
		xmlSAX2StartDocument		(void *ctx);
 void 		
		xmlSAX2EndDocument		(void *ctx);

 void 		
		xmlSAX2StartElement		(void *ctx,
						 const xmlChar *fullname,
						 const xmlChar **atts);
 void 		
		xmlSAX2EndElement		(void *ctx,
						 const xmlChar *name);

 void 
		xmlSAX2StartElementNs		(void *ctx,
						 const xmlChar *localname,
						 const xmlChar *prefix,
						 const xmlChar *URI,
						 int nb_namespaces,
						 const xmlChar **namespaces,
						 int nb_attributes,
						 int nb_defaulted,
						 const xmlChar **attributes);
 void 
		xmlSAX2EndElementNs		(void *ctx,
						 const xmlChar *localname,
						 const xmlChar *prefix,
						 const xmlChar *URI);
 void 		
		xmlSAX2Reference		(void *ctx,
						 const xmlChar *name);
 void 		
		xmlSAX2Characters		(void *ctx,
						 const xmlChar *ch,
						 int len);
 void 		
		xmlSAX2IgnorableWhitespace	(void *ctx,
						 const xmlChar *ch,
						 int len);
 void 		
		xmlSAX2ProcessingInstruction	(void *ctx,
						 const xmlChar *target,
						 const xmlChar *data);
 void 		
		xmlSAX2Comment			(void *ctx,
						 const xmlChar *value);
 void 		
		xmlSAX2CDataBlock		(void *ctx,
						 const xmlChar *value,
						 int len);


 int 
		xmlSAXDefaultVersion		(int version);


 int 
		xmlSAXVersion			(xmlSAXHandler *hdlr,
						 int version);
 void 		
		xmlSAX2InitDefaultSAXHandler    (xmlSAXHandler *hdlr,
						 int warning);

 void 		
		xmlSAX2InitHtmlDefaultSAXHandler(xmlSAXHandler *hdlr);
 void 		
		htmlDefaultSAXHandlerInit	(void);


 void 		
		xmlSAX2InitDocbDefaultSAXHandler(xmlSAXHandler *hdlr);
 void 		
		docbDefaultSAXHandlerInit	(void);

 void 		
		xmlDefaultSAXHandlerInit	(void);

}



#line 21 "/usr/include/libxml2/libxml/globals.h" 2

#line 1 "/usr/include/libxml2/libxml/globals.h" 1


extern "C" {


 void  xmlInitGlobals(void);
 void  xmlCleanupGlobals(void);

/**
 * xmlParserInputBufferCreateFilenameFunc:
 * @URI: the URI to read from
 * @enc: the requested source encoding
 *
 * Signature for the function doing the lookup for a suitable input method
 * corresponding to an URI.
 *
 * Returns the new xmlParserInputBufferPtr in case of success or NULL if no
 *         method was found.
 */
typedef xmlParserInputBufferPtr (*xmlParserInputBufferCreateFilenameFunc) (const char *URI, xmlCharEncoding enc);

/**
 * xmlOutputBufferCreateFilenameFunc:
 * @URI: the URI to write to
 * @enc: the requested target encoding
 *
 * Signature for the function doing the lookup for a suitable output method
 * corresponding to an URI.
 *
 * Returns the new xmlOutputBufferPtr in case of success or NULL if no
 *         method was found.
 */
typedef xmlOutputBufferPtr (*xmlOutputBufferCreateFilenameFunc) (const char *URI, xmlCharEncodingHandlerPtr encoder, int compression);

 xmlParserInputBufferCreateFilenameFunc
 xmlParserInputBufferCreateFilenameDefault (xmlParserInputBufferCreateFilenameFunc func);
 xmlOutputBufferCreateFilenameFunc
 xmlOutputBufferCreateFilenameDefault (xmlOutputBufferCreateFilenameFunc func);

/*
 * Externally global symbols which need to be protected for backwards
 * compatibility support.
 */



































/**
 * xmlRegisterNodeFunc:
 * @node: the current node
 *
 * Signature for the registration callback of a created node
 */
typedef void (*xmlRegisterNodeFunc) (xmlNodePtr node);
/**
 * xmlDeregisterNodeFunc:
 * @node: the current node
 *
 * Signature for the deregistration callback of a discarded node
 */
typedef void (*xmlDeregisterNodeFunc) (xmlNodePtr node);

typedef struct _xmlGlobalState xmlGlobalState;
typedef xmlGlobalState *xmlGlobalStatePtr;
struct _xmlGlobalState
{
	const char *xmlParserVersion;

	xmlSAXLocator xmlDefaultSAXLocator;
	xmlSAXHandlerV1 xmlDefaultSAXHandler;
	xmlSAXHandlerV1 docbDefaultSAXHandler;
	xmlSAXHandlerV1 htmlDefaultSAXHandler;

	xmlFreeFunc xmlFree;
	xmlMallocFunc xmlMalloc;
	xmlStrdupFunc xmlMemStrdup;
	xmlReallocFunc xmlRealloc;

	xmlGenericErrorFunc xmlGenericError;
	xmlStructuredErrorFunc xmlStructuredError;
	void *xmlGenericErrorContext;

	int oldXMLWDcompatibility;

	xmlBufferAllocationScheme xmlBufferAllocScheme;
	int xmlDefaultBufferSize;

	int xmlSubstituteEntitiesDefaultValue;
	int xmlDoValidityCheckingDefaultValue;
	int xmlGetWarningsDefaultValue;
	int xmlKeepBlanksDefaultValue;
	int xmlLineNumbersDefaultValue;
	int xmlLoadExtDtdDefaultValue;
	int xmlParserDebugEntities;
	int xmlPedanticParserDefaultValue;

	int xmlSaveNoEmptyTags;
	int xmlIndentTreeOutput;
	const char *xmlTreeIndentString;

	xmlRegisterNodeFunc xmlRegisterNodeDefaultValue;
	xmlDeregisterNodeFunc xmlDeregisterNodeDefaultValue;

	xmlMallocFunc xmlMallocAtomic;
	xmlError xmlLastError;

	xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameValue;
	xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameValue;

	void *xmlStructuredErrorContext;
};


}


#line 1 "/usr/include/libxml2/libxml/globals.h" 1

extern "C" {


 void 	xmlInitializeGlobalState(xmlGlobalStatePtr gs);

 void  xmlThrDefSetGenericErrorFunc(void *ctx, xmlGenericErrorFunc handler);

 void  xmlThrDefSetStructuredErrorFunc(void *ctx, xmlStructuredErrorFunc handler);

 xmlRegisterNodeFunc  xmlRegisterNodeDefault(xmlRegisterNodeFunc func);
 xmlRegisterNodeFunc  xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc func);
 xmlDeregisterNodeFunc  xmlDeregisterNodeDefault(xmlDeregisterNodeFunc func);
 xmlDeregisterNodeFunc  xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc func);

 xmlOutputBufferCreateFilenameFunc 
	xmlThrDefOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func);
 xmlParserInputBufferCreateFilenameFunc 
	xmlThrDefParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func);

/** DOC_DISABLE */
/*
 * In general the memory allocation entry points are not kept
 * thread specific but this can be overridden by LIBXML_THREAD_ALLOC_ENABLED
 *    - xmlMalloc
 *    - xmlMallocAtomic
 *    - xmlRealloc
 *    - xmlMemStrdup
 *    - xmlFree
 */











































extern xmlMallocFunc xmlMalloc;
extern xmlMallocFunc xmlMallocAtomic;
extern xmlReallocFunc xmlRealloc;
extern xmlFreeFunc xmlFree;
extern xmlStrdupFunc xmlMemStrdup;



  xmlSAXHandlerV1 *  __docbDefaultSAXHandler(void);









 xmlSAXHandlerV1 *  __htmlDefaultSAXHandler(void);








 xmlError *  __xmlLastError(void);







/*
 * Everything starting from the line below is
 * Automatically generated by build_glob.py.
 * Do not modify the previous line.
 */


 int *  __oldXMLWDcompatibility(void);







 xmlBufferAllocationScheme *  __xmlBufferAllocScheme(void);






 xmlBufferAllocationScheme  xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme v);

 int *  __xmlDefaultBufferSize(void);






 int  xmlThrDefDefaultBufferSize(int v);

 xmlSAXHandlerV1 *  __xmlDefaultSAXHandler(void);







 xmlSAXLocator *  __xmlDefaultSAXLocator(void);







 int *  __xmlDoValidityCheckingDefaultValue(void);






 int  xmlThrDefDoValidityCheckingDefaultValue(int v);

 xmlGenericErrorFunc *  __xmlGenericError(void);







 xmlStructuredErrorFunc *  __xmlStructuredError(void);







 void * *  __xmlGenericErrorContext(void);







 void * *  __xmlStructuredErrorContext(void);







 int *  __xmlGetWarningsDefaultValue(void);






 int  xmlThrDefGetWarningsDefaultValue(int v);

 int *  __xmlIndentTreeOutput(void);






 int  xmlThrDefIndentTreeOutput(int v);

 const char * *  __xmlTreeIndentString(void);






 const char *  xmlThrDefTreeIndentString(const char * v);

 int *  __xmlKeepBlanksDefaultValue(void);






 int  xmlThrDefKeepBlanksDefaultValue(int v);

 int *  __xmlLineNumbersDefaultValue(void);






 int  xmlThrDefLineNumbersDefaultValue(int v);

 int *  __xmlLoadExtDtdDefaultValue(void);






 int  xmlThrDefLoadExtDtdDefaultValue(int v);

 int *  __xmlParserDebugEntities(void);






 int  xmlThrDefParserDebugEntities(int v);

 const char * *  __xmlParserVersion(void);







 int *  __xmlPedanticParserDefaultValue(void);






 int  xmlThrDefPedanticParserDefaultValue(int v);

 int *  __xmlSaveNoEmptyTags(void);






 int  xmlThrDefSaveNoEmptyTags(int v);

 int *  __xmlSubstituteEntitiesDefaultValue(void);






 int  xmlThrDefSubstituteEntitiesDefaultValue(int v);

 xmlRegisterNodeFunc *  __xmlRegisterNodeDefaultValue(void);







 xmlDeregisterNodeFunc *  __xmlDeregisterNodeDefaultValue(void);







 xmlParserInputBufferCreateFilenameFunc *  __xmlParserInputBufferCreateFilenameValue(void);







 xmlOutputBufferCreateFilenameFunc *  __xmlOutputBufferCreateFilenameValue(void);








}




#line 31 "/usr/include/libxml2/libxml/threads.h" 2

extern "C" {

 xmlMutexPtr 
			xmlNewMutex	(void);
 void 
			xmlMutexLock	(xmlMutexPtr tok);
 void 
			xmlMutexUnlock	(xmlMutexPtr tok);
 void 
			xmlFreeMutex	(xmlMutexPtr tok);

 xmlRMutexPtr 
			xmlNewRMutex	(void);
 void 
			xmlRMutexLock	(xmlRMutexPtr tok);
 void 
			xmlRMutexUnlock	(xmlRMutexPtr tok);
 void 
			xmlFreeRMutex	(xmlRMutexPtr tok);

/*
 * Library wide APIs.
 */
 void 
			xmlInitThreads	(void);
 void 
			xmlLockLibrary	(void);
 void 
			xmlUnlockLibrary(void);
 int 
			xmlGetThreadId	(void);
 int 
			xmlIsMainThread	(void);
 void 
			xmlCleanupThreads(void);
 xmlGlobalStatePtr 
			xmlGetGlobalState(void);






}





#line 185 "/usr/include/libxml2/libxml/xmlmemory.h" 2

#line 1 "/usr/include/libxml2/libxml/xmlmemory.h" 1






#line 1044 "/usr/include/libxml2/libxml/tree.h" 2





#line 13 "/usr/include/libxslt/xslt.h" 2

#line 1 "/usr/include/libxslt/xsltexports.h" 1
/*
 * Summary: macros for marking symbols as exportable/importable.
 * Description: macros for marking symbols as exportable/importable.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Igor Zlatkovic <igor@zlatkovic.com>
 */




/**
 * XSLTPUBFUN:
 * XSLTPUBFUN, XSLTPUBVAR, XSLTCALL
 *
 * Macros which declare an exportable function, an exportable variable and
 * the calling convention used for functions.
 *
 * Please use an extra block for every platform/compiler combination when
 * modifying this, rather than overlong #ifdef lines. This helps
 * readability as well as the fact that different compilers on the same
 * platform might need different definitions.
 */

/**
 * XSLTPUBFUN:
 *
 * Macros which declare an exportable function
 */

/**
 * XSLTPUBVAR:
 *
 * Macros which declare an exportable variable
 */

/**
 * XSLTCALL:
 *
 * Macros which declare the called convention for exported functions
 */


/** DOC_DISABLE */

/* Windows platform with MS compiler */

  
  
  
  
    
    
  
    
    
      
    
      
    
  
  
  
    
  


/* Windows platform with Borland compiler */

  
  
  
  
    
    
  
    
    
      
    
      
    
  
  
  
    
  


/* Windows platform with GNU compiler (Mingw) */

  
  
  



  
    
    
  
    
    
      
    
      
    
  
  
  
    
  


/* Cygwin platform, GNU compiler */

  
  
  
  
    
    
  
    
    
      
    
      
    
  
  


/* Compatibility */








#line 14 "/usr/include/libxslt/xslt.h" 2


extern "C" {


/**
 * XSLT_DEFAULT_VERSION:
 *
 * The default version of XSLT supported.
 */


/**
 * XSLT_DEFAULT_VENDOR:
 *
 * The XSLT "vendor" string for this processor.
 */


/**
 * XSLT_DEFAULT_URL:
 *
 * The XSLT "vendor" URL for this processor.
 */


/**
 * XSLT_NAMESPACE:
 *
 * The XSLT specification namespace.
 */


/**
 * XSLT_PARSE_OPTIONS:
 *
 * The set of options to pass to an xmlReadxxx when loading files for
 * XSLT consumption.
 */



/**
 * xsltMaxDepth:
 *
 * This value is used to detect templates loops.
 */
extern int xsltMaxDepth;

/**
 * xsltEngineVersion:
 *
 * The version string for libxslt.
 */
extern const char *xsltEngineVersion;

/**
 * xsltLibxsltVersion:
 *
 * The version of libxslt compiled.
 */
extern const int xsltLibxsltVersion;

/**
 * xsltLibxmlVersion:
 *
 * The version of libxml libxslt was compiled against.
 */
extern const int xsltLibxmlVersion;

/*
 * Global initialization function.
 */

 void 
		xsltInit		(void);

/*
 * Global cleanup function.
 */
 void 	
		xsltCleanupGlobals	(void);


}





#line 6 "/vagrant/parsley/parsley.h" 2

#line 1 "/usr/include/libxslt/xsltInternals.h" 1
/*
 * Summary: internal data structures, constants and functions
 * Description: Internal data structures, constants and functions used
 *              by the XSLT engine. 
 *              They are not part of the API or ABI, i.e. they can change
 *              without prior notice, use carefully.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxslt/xsltInternals.h" 1

#line 1 "/usr/include/libxslt/xsltInternals.h" 1

#line 1 "/usr/include/libxml2/libxml/xpath.h" 1
/*
 * Summary: XML Path Language implementation
 * Description: API for the XML Path Language implementation
 *
 * XML Path Language implementation
 * XPath is a language for addressing parts of an XML document,
 * designed to be used by both XSLT and XPointer
 *     http://www.w3.org/TR/xpath
 *
 * Implements
 * W3C Recommendation 16 November 1999
 *     http://www.w3.org/TR/1999/REC-xpath-19991116
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxml2/libxml/xpath.h" 1




#line 1 "/usr/include/libxml2/libxml/xpath.h" 1

#line 1 "/usr/include/libxml2/libxml/xpath.h" 1

#line 1 "/usr/include/libxml2/libxml/xpath.h" 1




extern "C" {


	


typedef struct _xmlXPathContext xmlXPathContext;
typedef xmlXPathContext *xmlXPathContextPtr;
typedef struct _xmlXPathParserContext xmlXPathParserContext;
typedef xmlXPathParserContext *xmlXPathParserContextPtr;

/**
 * The set of XPath error codes.
 */

typedef enum {
    XPATH_EXPRESSION_OK = 0,
    XPATH_NUMBER_ERROR,
    XPATH_UNFINISHED_LITERAL_ERROR,
    XPATH_START_LITERAL_ERROR,
    XPATH_VARIABLE_REF_ERROR,
    XPATH_UNDEF_VARIABLE_ERROR,
    XPATH_INVALID_PREDICATE_ERROR,
    XPATH_EXPR_ERROR,
    XPATH_UNCLOSED_ERROR,
    XPATH_UNKNOWN_FUNC_ERROR,
    XPATH_INVALID_OPERAND,
    XPATH_INVALID_TYPE,
    XPATH_INVALID_ARITY,
    XPATH_INVALID_CTXT_SIZE,
    XPATH_INVALID_CTXT_POSITION,
    XPATH_MEMORY_ERROR,
    XPTR_SYNTAX_ERROR,
    XPTR_RESOURCE_ERROR,
    XPTR_SUB_RESOURCE_ERROR,
    XPATH_UNDEF_PREFIX_ERROR,
    XPATH_ENCODING_ERROR,
    XPATH_INVALID_CHAR_ERROR,
    XPATH_INVALID_CTXT,
    XPATH_STACK_ERROR
} xmlXPathError;

/*
 * A node-set (an unordered collection of nodes without duplicates).
 */
typedef struct _xmlNodeSet xmlNodeSet;
typedef xmlNodeSet *xmlNodeSetPtr;
struct _xmlNodeSet {
    int nodeNr;			/* number of nodes in the set */
    int nodeMax;		/* size of the array as allocated */
    xmlNodePtr *nodeTab;	/* array of nodes in no particular order */
    /* @@ with_ns to check wether namespace nodes should be looked at @@ */
};

/*
 * An expression is evaluated to yield an object, which
 * has one of the following four basic types:
 *   - node-set
 *   - boolean
 *   - number
 *   - string
 *
 * @@ XPointer will add more types !
 */

typedef enum {
    XPATH_UNDEFINED = 0,
    XPATH_NODESET = 1,
    XPATH_BOOLEAN = 2,
    XPATH_NUMBER = 3,
    XPATH_STRING = 4,
    XPATH_POINT = 5,
    XPATH_RANGE = 6,
    XPATH_LOCATIONSET = 7,
    XPATH_USERS = 8,
    XPATH_XSLT_TREE = 9  /* An XSLT value tree, non modifiable */
} xmlXPathObjectType;

typedef struct _xmlXPathObject xmlXPathObject;
typedef xmlXPathObject *xmlXPathObjectPtr;
struct _xmlXPathObject {
    xmlXPathObjectType type;
    xmlNodeSetPtr nodesetval;
    int boolval;
    double floatval;
    xmlChar *stringval;
    void *user;
    int index;
    void *user2;
    int index2;
};

/**
 * xmlXPathConvertFunc:
 * @obj:  an XPath object
 * @type:  the number of the target type
 *
 * A conversion function is associated to a type and used to cast
 * the new type to primitive values.
 *
 * Returns -1 in case of error, 0 otherwise
 */
typedef int (*xmlXPathConvertFunc) (xmlXPathObjectPtr obj, int type);

/*
 * Extra type: a name and a conversion function.
 */

typedef struct _xmlXPathType xmlXPathType;
typedef xmlXPathType *xmlXPathTypePtr;
struct _xmlXPathType {
    const xmlChar         *name;		/* the type name */
    xmlXPathConvertFunc func;		/* the conversion function */
};

/*
 * Extra variable: a name and a value.
 */

typedef struct _xmlXPathVariable xmlXPathVariable;
typedef xmlXPathVariable *xmlXPathVariablePtr;
struct _xmlXPathVariable {
    const xmlChar       *name;		/* the variable name */
    xmlXPathObjectPtr value;		/* the value */
};

/**
 * xmlXPathEvalFunc:
 * @ctxt: an XPath parser context
 * @nargs: the number of arguments passed to the function
 *
 * An XPath evaluation function, the parameters are on the XPath context stack.
 */

typedef void (*xmlXPathEvalFunc)(xmlXPathParserContextPtr ctxt,
	                         int nargs);

/*
 * Extra function: a name and a evaluation function.
 */

typedef struct _xmlXPathFunct xmlXPathFunct;
typedef xmlXPathFunct *xmlXPathFuncPtr;
struct _xmlXPathFunct {
    const xmlChar      *name;		/* the function name */
    xmlXPathEvalFunc func;		/* the evaluation function */
};

/**
 * xmlXPathAxisFunc:
 * @ctxt:  the XPath interpreter context
 * @cur:  the previous node being explored on that axis
 *
 * An axis traversal function. To traverse an axis, the engine calls
 * the first time with cur == NULL and repeat until the function returns
 * NULL indicating the end of the axis traversal.
 *
 * Returns the next node in that axis or NULL if at the end of the axis.
 */

typedef xmlXPathObjectPtr (*xmlXPathAxisFunc) (xmlXPathParserContextPtr ctxt,
				 xmlXPathObjectPtr cur);

/*
 * Extra axis: a name and an axis function.
 */

typedef struct _xmlXPathAxis xmlXPathAxis;
typedef xmlXPathAxis *xmlXPathAxisPtr;
struct _xmlXPathAxis {
    const xmlChar      *name;		/* the axis name */
    xmlXPathAxisFunc func;		/* the search function */
};

/**
 * xmlXPathFunction:
 * @ctxt:  the XPath interprestation context
 * @nargs:  the number of arguments
 *
 * An XPath function.
 * The arguments (if any) are popped out from the context stack
 * and the result is pushed on the stack.
 */

typedef void (*xmlXPathFunction) (xmlXPathParserContextPtr ctxt, int nargs);

/*
 * Function and Variable Lookup.
 */

/**
 * xmlXPathVariableLookupFunc:
 * @ctxt:  an XPath context
 * @name:  name of the variable
 * @ns_uri:  the namespace name hosting this variable
 *
 * Prototype for callbacks used to plug variable lookup in the XPath
 * engine.
 *
 * Returns the XPath object value or NULL if not found.
 */
typedef xmlXPathObjectPtr (*xmlXPathVariableLookupFunc) (void *ctxt,
                                         const xmlChar *name,
                                         const xmlChar *ns_uri);

/**
 * xmlXPathFuncLookupFunc:
 * @ctxt:  an XPath context
 * @name:  name of the function
 * @ns_uri:  the namespace name hosting this function
 *
 * Prototype for callbacks used to plug function lookup in the XPath
 * engine.
 *
 * Returns the XPath function or NULL if not found.
 */
typedef xmlXPathFunction (*xmlXPathFuncLookupFunc) (void *ctxt,
					 const xmlChar *name,
					 const xmlChar *ns_uri);

/**
 * xmlXPathFlags:
 * Flags for XPath engine compilation and runtime
 */
/**
 * XML_XPATH_CHECKNS:
 *
 * check namespaces at compilation
 */

/**
 * XML_XPATH_NOVAR:
 *
 * forbid variables in expression
 */


/**
 * xmlXPathContext:
 *
 * Expression evaluation occurs with respect to a context.
 * he context consists of:
 *    - a node (the context node) 
 *    - a node list (the context node list) 
 *    - a set of variable bindings 
 *    - a function library 
 *    - the set of namespace declarations in scope for the expression 
 * Following the switch to hash tables, this need to be trimmed up at
 * the next binary incompatible release.
 * The node may be modified when the context is passed to libxml2
 * for an XPath evaluation so you may need to initialize it again
 * before the next call.
 */

struct _xmlXPathContext {
    xmlDocPtr doc;			/* The current document */
    xmlNodePtr node;			/* The current node */

    int nb_variables_unused;		/* unused (hash table) */
    int max_variables_unused;		/* unused (hash table) */
    xmlHashTablePtr varHash;		/* Hash table of defined variables */

    int nb_types;			/* number of defined types */
    int max_types;			/* max number of types */
    xmlXPathTypePtr types;		/* Array of defined types */

    int nb_funcs_unused;		/* unused (hash table) */
    int max_funcs_unused;		/* unused (hash table) */
    xmlHashTablePtr funcHash;		/* Hash table of defined funcs */

    int nb_axis;			/* number of defined axis */
    int max_axis;			/* max number of axis */
    xmlXPathAxisPtr axis;		/* Array of defined axis */

    /* the namespace nodes of the context node */
    xmlNsPtr *namespaces;		/* Array of namespaces */
    int nsNr;				/* number of namespace in scope */
    void *user;				/* function to free */

    /* extra variables */
    int contextSize;			/* the context size */
    int proximityPosition;		/* the proximity position */

    /* extra stuff for XPointer */
    int xptr;				/* is this an XPointer context? */
    xmlNodePtr here;			/* for here() */
    xmlNodePtr origin;			/* for origin() */

    /* the set of namespace declarations in scope for the expression */
    xmlHashTablePtr nsHash;		/* The namespaces hash table */
    xmlXPathVariableLookupFunc varLookupFunc;/* variable lookup func */
    void *varLookupData;		/* variable lookup data */

    /* Possibility to link in an extra item */
    void *extra;                        /* needed for XSLT */

    /* The function name and URI when calling a function */
    const xmlChar *function;
    const xmlChar *functionURI;

    /* function lookup function and data */
    xmlXPathFuncLookupFunc funcLookupFunc;/* function lookup func */
    void *funcLookupData;		/* function lookup data */

    /* temporary namespace lists kept for walking the namespace axis */
    xmlNsPtr *tmpNsList;		/* Array of namespaces */
    int tmpNsNr;			/* number of namespaces in scope */

    /* error reporting mechanism */
    void *userData;                     /* user specific data block */
    xmlStructuredErrorFunc error;       /* the callback in case of errors */
    xmlError lastError;			/* the last error */
    xmlNodePtr debugNode;		/* the source node XSLT */

    /* dictionary */
    xmlDictPtr dict;			/* dictionary if any */

    int flags;				/* flags to control compilation */

    /* Cache for reusal of XPath objects */
    void *cache;
};

/*
 * The structure of a compiled expression form is not public.
 */

typedef struct _xmlXPathCompExpr xmlXPathCompExpr;
typedef xmlXPathCompExpr *xmlXPathCompExprPtr;

/**
 * xmlXPathParserContext:
 *
 * An XPath parser context. It contains pure parsing informations,
 * an xmlXPathContext, and the stack of objects.
 */
struct _xmlXPathParserContext {
    const xmlChar *cur;			/* the current char being parsed */
    const xmlChar *base;			/* the full expression */

    int error;				/* error code */

    xmlXPathContextPtr  context;	/* the evaluation context */
    xmlXPathObjectPtr     value;	/* the current value */
    int                 valueNr;	/* number of values stacked */
    int                valueMax;	/* max number of values stacked */
    xmlXPathObjectPtr *valueTab;	/* stack of values */

    xmlXPathCompExprPtr comp;		/* the precompiled expression */
    int xptr;				/* it this an XPointer expression */
    xmlNodePtr         ancestor;	/* used for walking preceding axis */

    int              valueFrame;        /* used to limit Pop on the stack */
};

/************************************************************************
 *									*
 *			Public API					*
 *									*
 ************************************************************************/

/**
 * Objects and Nodesets handling
 */

extern double xmlXPathNAN;
extern double xmlXPathPINF;
extern double xmlXPathNINF;

/* These macros may later turn into functions */
/**
 * xmlXPathNodeSetGetLength:
 * @ns:  a node-set
 *
 * Implement a functionality similar to the DOM NodeList.length.
 *
 * Returns the number of nodes in the node-set.
 */

/**
 * xmlXPathNodeSetItem:
 * @ns:  a node-set
 * @index:  index of a node in the set
 *
 * Implements a functionality similar to the DOM NodeList.item().
 *
 * Returns the xmlNodePtr at the given @index in @ns or NULL if
 *         @index is out of range (0 to length-1)
 */





/**
 * xmlXPathNodeSetIsEmpty:
 * @ns: a node-set
 *
 * Checks whether @ns is empty or not.
 *
 * Returns %TRUE if @ns is an empty node-set.
 */




 void 		   
		    xmlXPathFreeObject		(xmlXPathObjectPtr obj);
 xmlNodeSetPtr 	   
		    xmlXPathNodeSetCreate	(xmlNodePtr val);
 void 		   
		    xmlXPathFreeNodeSetList	(xmlXPathObjectPtr obj);
 void 		   
		    xmlXPathFreeNodeSet		(xmlNodeSetPtr obj);
 xmlXPathObjectPtr   
		    xmlXPathObjectCopy		(xmlXPathObjectPtr val);
 int 		   
		    xmlXPathCmpNodes		(xmlNodePtr node1,
						 xmlNodePtr node2);
/**
 * Conversion functions to basic types.
 */
 int 		   
		    xmlXPathCastNumberToBoolean	(double val);
 int 		   
		    xmlXPathCastStringToBoolean	(const xmlChar * val);
 int 		   
		    xmlXPathCastNodeSetToBoolean(xmlNodeSetPtr ns);
 int 		   
		    xmlXPathCastToBoolean	(xmlXPathObjectPtr val);

 double 		   
		    xmlXPathCastBooleanToNumber	(int val);
 double 		   
		    xmlXPathCastStringToNumber	(const xmlChar * val);
 double 		   
		    xmlXPathCastNodeToNumber	(xmlNodePtr node);
 double 		   
		    xmlXPathCastNodeSetToNumber	(xmlNodeSetPtr ns);
 double 		   
		    xmlXPathCastToNumber	(xmlXPathObjectPtr val);

 xmlChar * 	   
		    xmlXPathCastBooleanToString	(int val);
 xmlChar * 	   
		    xmlXPathCastNumberToString	(double val);
 xmlChar * 	   
		    xmlXPathCastNodeToString	(xmlNodePtr node);
 xmlChar * 	   
		    xmlXPathCastNodeSetToString	(xmlNodeSetPtr ns);
 xmlChar * 	   
		    xmlXPathCastToString	(xmlXPathObjectPtr val);

 xmlXPathObjectPtr   
		    xmlXPathConvertBoolean	(xmlXPathObjectPtr val);
 xmlXPathObjectPtr   
		    xmlXPathConvertNumber	(xmlXPathObjectPtr val);
 xmlXPathObjectPtr   
		    xmlXPathConvertString	(xmlXPathObjectPtr val);

/**
 * Context handling.
 */
 xmlXPathContextPtr  
		    xmlXPathNewContext		(xmlDocPtr doc);
 void 
		    xmlXPathFreeContext		(xmlXPathContextPtr ctxt);
 int 
		    xmlXPathContextSetCache(xmlXPathContextPtr ctxt,
				            int active,
					    int value,
					    int options);
/**
 * Evaluation functions.
 */
 long                
		    xmlXPathOrderDocElems	(xmlDocPtr doc);
 xmlXPathObjectPtr   
		    xmlXPathEval		(const xmlChar *str,
						 xmlXPathContextPtr ctx);
 xmlXPathObjectPtr   
		    xmlXPathEvalExpression	(const xmlChar *str,
						 xmlXPathContextPtr ctxt);
 int                 
		    xmlXPathEvalPredicate	(xmlXPathContextPtr ctxt,
						 xmlXPathObjectPtr res);
/**
 * Separate compilation/evaluation entry points.
 */
 xmlXPathCompExprPtr  
		    xmlXPathCompile		(const xmlChar *str);
 xmlXPathCompExprPtr  
		    xmlXPathCtxtCompile		(xmlXPathContextPtr ctxt,
		    				 const xmlChar *str);
 xmlXPathObjectPtr    
		    xmlXPathCompiledEval	(xmlXPathCompExprPtr comp,
						 xmlXPathContextPtr ctx);
 int    
		    xmlXPathCompiledEvalToBoolean(xmlXPathCompExprPtr comp,
						 xmlXPathContextPtr ctxt);
 void                 
		    xmlXPathFreeCompExpr	(xmlXPathCompExprPtr comp);


 void 		   
		    xmlXPathInit		(void);
 int 
		xmlXPathIsNaN	(double val);
 int 
		xmlXPathIsInf	(double val);


}





#line 18 "/usr/include/libxslt/xsltInternals.h" 2

#line 1 "/usr/include/libxslt/xsltInternals.h" 1

#line 1 "/usr/include/libxslt/xsltInternals.h" 1

#line 1 "/usr/include/libxslt/xsltInternals.h" 1

#line 1 "/usr/include/libxslt/xsltInternals.h" 1

#line 1 "/usr/include/libxslt/xsltInternals.h" 1

#line 1 "/usr/include/libxslt/xsltlocale.h" 1
/*
 * Summary: Locale handling
 * Description: Interfaces for locale handling. Needed for language dependent
 *              sorting.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Nick Wellnhofer
 */





#line 1 "/usr/include/libxslt/xsltlocale.h" 1
























/*
 * XSLT_LOCALE_NONE:
 * Macro indicating that locale are not supported
 */




typedef void *xsltLocale;
typedef xmlChar xsltLocaleChar;



xsltLocale xsltNewLocale(const xmlChar *langName);
void xsltFreeLocale(xsltLocale locale);
xsltLocaleChar *xsltStrxfrm(xsltLocale locale, const xmlChar *string);
int xsltLocaleStrcmp(xsltLocale locale, const xsltLocaleChar *str1, const xsltLocaleChar *str2);



#line 24 "/usr/include/libxslt/xsltInternals.h" 2

#line 1 "/usr/include/libxslt/numbersInternals.h" 1
/*
 * Summary: Implementation of the XSLT number functions
 * Description: Implementation of the XSLT number functions
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Bjorn Reese <breese@users.sourceforge.net> and Daniel Veillard
 */





#line 1 "/usr/include/libxslt/numbersInternals.h" 1

#line 1 "/usr/include/libxslt/numbersInternals.h" 1


extern "C" {


/**
 * xsltNumberData:
 *
 * This data structure is just a wrapper to pass xsl:number data in.
 */
typedef struct _xsltNumberData xsltNumberData;
typedef xsltNumberData *xsltNumberDataPtr;
    
struct _xsltNumberData {
    const xmlChar *level;
    const xmlChar *count;
    const xmlChar *from;
    const xmlChar *value;
    const xmlChar *format;
    int has_format;
    int digitsPerGroup;
    int groupingCharacter;
    int groupingCharacterLen;
    xmlDocPtr doc;
    xmlNodePtr node;

    /*
     * accelerators
     */
};

/**
 * xsltFormatNumberInfo,:
 *
 * This data structure lists the various parameters needed to format numbers.
 */
typedef struct _xsltFormatNumberInfo xsltFormatNumberInfo;
typedef xsltFormatNumberInfo *xsltFormatNumberInfoPtr;

struct _xsltFormatNumberInfo {
    int	    integer_hash;	/* Number of '#' in integer part */
    int	    integer_digits;	/* Number of '0' in integer part */
    int	    frac_digits;	/* Number of '0' in fractional part */
    int	    frac_hash;		/* Number of '#' in fractional part */
    int	    group;		/* Number of chars per display 'group' */
    int     multiplier;		/* Scaling for percent or permille */
    char    add_decimal;	/* Flag for whether decimal point appears in pattern */
    char    is_multiplier_set;	/* Flag to catch multiple occurences of percent/permille */
    char    is_negative_pattern;/* Flag for processing -ve prefix/suffix */
};


}



#line 25 "/usr/include/libxslt/xsltInternals.h" 2


extern "C" {


/* #define XSLT_DEBUG_PROFILE_CACHE */

/**
 * XSLT_IS_TEXT_NODE:
 *
 * check if the argument is a text node
 */





/**
 * XSLT_MARK_RES_TREE_FRAG:
 *
 * internal macro to set up tree fragments
 */



/**
 * XSLT_IS_RES_TREE_FRAG:
 *
 * internal macro to test tree fragments
 */




/**
 * XSLT_REFACTORED_KEYCOMP:
 *
 * Internal define to enable on-demand xsl:key computation.
 * That's the only mode now but the define is kept for compatibility
 */


/**
 * XSLT_FAST_IF:
 *
 * Internal define to enable usage of xmlXPathCompiledEvalToBoolean()
 * for XSLT "tests"; e.g. in <xsl:if test="/foo/bar">
 */


/**
 * XSLT_REFACTORED:
 *
 * Internal define to enable the refactored parts of Libxslt.
 */
/* #define XSLT_REFACTORED */
/* ==================================================================== */

/**
 * XSLT_REFACTORED_VARS:
 *
 * Internal define to enable the refactored variable part of libxslt
 */












































































































    
    
    




/**
 * XSLT_REFACTORED_PARSING:
 *
 * Internal define to enable the refactored parts of Libxslt
 * related to parsing.
 */
/* #define XSLT_REFACTORED_PARSING */

/**
 * XSLT_MAX_SORT:
 *
 * Max number of specified xsl:sort on an element.
 */


/**
 * XSLT_PAT_NO_PRIORITY:
 *
 * Specific value for pattern without priority expressed.
 */


/**
 * xsltRuntimeExtra:
 *
 * Extra information added to the transformation context.
 */
typedef struct _xsltRuntimeExtra xsltRuntimeExtra;
typedef xsltRuntimeExtra *xsltRuntimeExtraPtr;
struct _xsltRuntimeExtra {
    void       *info;		/* pointer to the extra data */
    xmlFreeFunc deallocate;	/* pointer to the deallocation routine */
    union {			/* dual-purpose field */
        void   *ptr;		/* data not needing deallocation */
	int    ival;		/* integer value storage */
    } val;
};

/**
 * XSLT_RUNTIME_EXTRA_LST:
 * @ctxt: the transformation context
 * @nr: the index
 *
 * Macro used to access extra information stored in the context
 */

/**
 * XSLT_RUNTIME_EXTRA_FREE:
 * @ctxt: the transformation context
 * @nr: the index
 *
 * Macro used to free extra information stored in the context
 */

/**
 * XSLT_RUNTIME_EXTRA:
 * @ctxt: the transformation context
 * @nr: the index
 *
 * Macro used to define extra information stored in the context
 */


/**
 * xsltTemplate:
 *
 * The in-memory structure corresponding to an XSLT Template.
 */
typedef struct _xsltTemplate xsltTemplate;
typedef xsltTemplate *xsltTemplatePtr;
struct _xsltTemplate {
    struct _xsltTemplate *next;/* chained list sorted by priority */
    struct _xsltStylesheet *style;/* the containing stylesheet */
    xmlChar *match;	/* the matching string */
    float priority;	/* as given from the stylesheet, not computed */
    const xmlChar *name; /* the local part of the name QName */
    const xmlChar *nameURI; /* the URI part of the name QName */
    const xmlChar *mode;/* the local part of the mode QName */
    const xmlChar *modeURI;/* the URI part of the mode QName */
    xmlNodePtr content;	/* the template replacement value */
    xmlNodePtr elem;	/* the source element */

    /*
    * TODO: @inheritedNsNr and @inheritedNs won't be used in the
    *  refactored code.
    */
    int inheritedNsNr;  /* number of inherited namespaces */
    xmlNsPtr *inheritedNs;/* inherited non-excluded namespaces */

    /* Profiling informations */
    int nbCalls;        /* the number of time the template was called */
    unsigned long time; /* the time spent in this template */
    void *params;       /* xsl:param instructions */
};

/**
 * xsltDecimalFormat:
 *
 * Data structure of decimal-format.
 */
typedef struct _xsltDecimalFormat xsltDecimalFormat;
typedef xsltDecimalFormat *xsltDecimalFormatPtr;
struct _xsltDecimalFormat {
    struct _xsltDecimalFormat *next; /* chained list */
    xmlChar *name;
    /* Used for interpretation of pattern */
    xmlChar *digit;
    xmlChar *patternSeparator;
    /* May appear in result */
    xmlChar *minusSign;
    xmlChar *infinity;
    xmlChar *noNumber; /* Not-a-number */
    /* Used for interpretation of pattern and may appear in result */
    xmlChar *decimalPoint;
    xmlChar *grouping;
    xmlChar *percent;
    xmlChar *permille;
    xmlChar *zeroDigit;
};

/**
 * xsltDocument:
 *
 * Data structure associated to a parsed document.
 */
typedef struct _xsltDocument xsltDocument;
typedef xsltDocument *xsltDocumentPtr;
struct _xsltDocument {
    struct _xsltDocument *next;	/* documents are kept in a chained list */
    int main;			/* is this the main document */
    xmlDocPtr doc;		/* the parsed document */
    void *keys;			/* key tables storage */
    struct _xsltDocument *includes; /* subsidiary includes */
    int preproc;		/* pre-processing already done */
    int nbKeysComputed;
};

/**
 * xsltKeyDef:
 *
 * Representation of an xsl:key.
 */
typedef struct _xsltKeyDef xsltKeyDef;
typedef xsltKeyDef *xsltKeyDefPtr;
struct _xsltKeyDef {
    struct _xsltKeyDef *next;
    xmlNodePtr inst;
    xmlChar *name;
    xmlChar *nameURI;
    xmlChar *match;
    xmlChar *use;
    xmlXPathCompExprPtr comp;
    xmlXPathCompExprPtr usecomp;
    xmlNsPtr *nsList;           /* the namespaces in scope */
    int nsNr;                   /* the number of namespaces in scope */
};

/**
 * xsltKeyTable:
 *
 * Holds the computed keys for key definitions of the same QName.
 * Is owned by an xsltDocument.
 */
typedef struct _xsltKeyTable xsltKeyTable;
typedef xsltKeyTable *xsltKeyTablePtr;
struct _xsltKeyTable {
    struct _xsltKeyTable *next;
    xmlChar *name;
    xmlChar *nameURI;
    xmlHashTablePtr keys;
};

/*
 * The in-memory structure corresponding to an XSLT Stylesheet.
 * NOTE: most of the content is simply linked from the doc tree
 *       structure, no specific allocation is made.
 */
typedef struct _xsltStylesheet xsltStylesheet;
typedef xsltStylesheet *xsltStylesheetPtr;

typedef struct _xsltTransformContext xsltTransformContext;
typedef xsltTransformContext *xsltTransformContextPtr;

/**
 * xsltElemPreComp:
 *
 * The in-memory structure corresponding to element precomputed data,
 * designed to be extended by extension implementors.
 */
typedef struct _xsltElemPreComp xsltElemPreComp;
typedef xsltElemPreComp *xsltElemPreCompPtr;

/**
 * xsltTransformFunction:
 * @ctxt: the XSLT transformation context
 * @node: the input node
 * @inst: the stylesheet node
 * @comp: the compiled information from the stylesheet
 *
 * Signature of the function associated to elements part of the
 * stylesheet language like xsl:if or xsl:apply-templates.
 */
typedef void (*xsltTransformFunction) (xsltTransformContextPtr ctxt,
	                               xmlNodePtr node,
				       xmlNodePtr inst,
			               xsltElemPreCompPtr comp);

/**
 * xsltSortFunc:
 * @ctxt:    a transformation context
 * @sorts:   the node-set to sort
 * @nbsorts: the number of sorts
 *
 * Signature of the function to use during sorting
 */
typedef void (*xsltSortFunc) (xsltTransformContextPtr ctxt, xmlNodePtr *sorts,
			      int nbsorts);

typedef enum {
    XSLT_FUNC_COPY=1,
    XSLT_FUNC_SORT,
    XSLT_FUNC_TEXT,
    XSLT_FUNC_ELEMENT,
    XSLT_FUNC_ATTRIBUTE,
    XSLT_FUNC_COMMENT,
    XSLT_FUNC_PI,
    XSLT_FUNC_COPYOF,
    XSLT_FUNC_VALUEOF,
    XSLT_FUNC_NUMBER,
    XSLT_FUNC_APPLYIMPORTS,
    XSLT_FUNC_CALLTEMPLATE,
    XSLT_FUNC_APPLYTEMPLATES,
    XSLT_FUNC_CHOOSE,
    XSLT_FUNC_IF,
    XSLT_FUNC_FOREACH,
    XSLT_FUNC_DOCUMENT,
    XSLT_FUNC_WITHPARAM,
    XSLT_FUNC_PARAM,
    XSLT_FUNC_VARIABLE,
    XSLT_FUNC_WHEN,
    XSLT_FUNC_EXTENSION

    
    
    
    
    
    
    
    

} xsltStyleType;

/**
 * xsltElemPreCompDeallocator:
 * @comp:  the #xsltElemPreComp to free up
 *
 * Deallocates an #xsltElemPreComp structure.
 */
typedef void (*xsltElemPreCompDeallocator) (xsltElemPreCompPtr comp);

/**
 * xsltElemPreComp:
 *
 * The basic structure for compiled items of the AST of the XSLT processor.
 * This structure is also intended to be extended by extension implementors.
 * TODO: This is somehow not nice, since it has a "free" field, which
 *   derived stylesheet-structs do not have.
 */
struct _xsltElemPreComp {
    xsltElemPreCompPtr next;		/* next item in the global chained
					   list hold by xsltStylesheet. */
    xsltStyleType type;		/* type of the element */
    xsltTransformFunction func; 	/* handling function */
    xmlNodePtr inst;			/* the node in the stylesheet's tree
					   corresponding to this item */

    /* end of common part */
    xsltElemPreCompDeallocator free;	/* the deallocator */
};

/**
 * xsltStylePreComp:
 *
 * The abstract basic structure for items of the XSLT processor.
 * This includes:
 * 1) compiled forms of XSLT instructions (xsl:if, xsl:attribute, etc.)
 * 2) compiled forms of literal result elements
 * 3) compiled forms of extension elements
 */
typedef struct _xsltStylePreComp xsltStylePreComp;
typedef xsltStylePreComp *xsltStylePreCompPtr;







		

		

		

		
						 
						 










    
    
    





























































    
    
    
    
    
    














    












    

    
    























    

    
    
    
    
    
    
    
















    
    
    
    
    
    















    
    


























    
    
    

























    

    
    
    
    
    















    

    
    
    
    
    
    















   
    
    















    

    
    

























    

    
    
    





















    
    

















































    
    











    
    
    
    
























    

    
    

    
    
    
    





























    

    
    

    
    
    
    






























    

    
    
    
    
    
    
    
    
    
    
    

    
    

    

    
















    

    
    














    






    
    











    
































    
    











    
    
    
    
    



    












    
    








    








    
    
    
    








    
    
    
    
    
    















    
    










    
    
    
    
    










    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    






    
    
    
    
    
    
    
    
    










    
    





    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    


    
    
    
    
    




    
    

    

    
    
    
    
    



/*
* The old structures before refactoring.
*/

/**
 * _xsltStylePreComp:
 *
 * The in-memory structure corresponding to XSLT stylesheet constructs
 * precomputed data.
 */
struct _xsltStylePreComp {
    xsltElemPreCompPtr next;	/* chained list */
    xsltStyleType type;		/* type of the element */
    xsltTransformFunction func; /* handling function */
    xmlNodePtr inst;		/* the instruction */

    /*
     * Pre computed values.
     */

    const xmlChar *stype;       /* sort */
    int      has_stype;		/* sort */
    int      number;		/* sort */
    const xmlChar *order;	/* sort */
    int      has_order;		/* sort */
    int      descending;	/* sort */
    const xmlChar *lang;	/* sort */
    int      has_lang;		/* sort */
    xsltLocale locale;		/* sort */
    const xmlChar *case_order;	/* sort */
    int      lower_first;	/* sort */

    const xmlChar *use;		/* copy, element */
    int      has_use;		/* copy, element */

    int      noescape;		/* text */

    const xmlChar *name;	/* element, attribute, pi */
    int      has_name;		/* element, attribute, pi */
    const xmlChar *ns;		/* element */
    int      has_ns;		/* element */

    const xmlChar *mode;	/* apply-templates */
    const xmlChar *modeURI;	/* apply-templates */

    const xmlChar *test;	/* if */

    xsltTemplatePtr templ;	/* call-template */

    const xmlChar *select;	/* sort, copy-of, value-of, apply-templates */

    int      ver11;		/* document */
    const xmlChar *filename;	/* document URL */
    int      has_filename;	/* document */

    xsltNumberData numdata;	/* number */

    xmlXPathCompExprPtr comp;	/* a precompiled XPath expression */
    xmlNsPtr *nsList;		/* the namespaces in scope */
    int nsNr;			/* the number of namespaces in scope */
};




/*
 * The in-memory structure corresponding to an XSLT Variable
 * or Param.
 */
typedef struct _xsltStackElem xsltStackElem;
typedef xsltStackElem *xsltStackElemPtr;
struct _xsltStackElem {
    struct _xsltStackElem *next;/* chained list */
    xsltStylePreCompPtr comp;   /* the compiled form */
    int computed;		/* was the evaluation done */
    const xmlChar *name;	/* the local part of the name QName */
    const xmlChar *nameURI;	/* the URI part of the name QName */
    const xmlChar *select;	/* the eval string */
    xmlNodePtr tree;		/* the sequence constructor if no eval
				    string or the location */
    xmlXPathObjectPtr value;	/* The value if computed */
    xmlDocPtr fragment;		/* The Result Tree Fragments (needed for XSLT 1.0)
				   which are bound to the variable's lifetime. */
    int level;                  /* the depth in the tree;
                                   -1 if persistent (e.g. a given xsl:with-param) */
    xsltTransformContextPtr context; /* The transformation context; needed to cache
                                        the variables */
    int flags;
};




    




    
    


    
    


    
    


    
    

    


    



    

/*
 * Note that we added a @compCtxt field to anchor an stylesheet compilation
 * context, since, due to historical reasons, various compile-time function
 * take only the stylesheet as argument and not a compilation context.
 */
struct _xsltStylesheet {
    /*
     * The stylesheet import relation is kept as a tree.
     */
    struct _xsltStylesheet *parent;
    struct _xsltStylesheet *next;
    struct _xsltStylesheet *imports;

    xsltDocumentPtr docList;		/* the include document list */

    /*
     * General data on the style sheet document.
     */
    xmlDocPtr doc;		/* the parsed XML stylesheet */
    xmlHashTablePtr stripSpaces;/* the hash table of the strip-space and
				   preserve space elements */
    int             stripAll;	/* strip-space * (1) preserve-space * (-1) */
    xmlHashTablePtr cdataSection;/* the hash table of the cdata-section */

    /*
     * Global variable or parameters.
     */
    xsltStackElemPtr variables; /* linked list of param and variables */

    /*
     * Template descriptions.
     */
    xsltTemplatePtr templates;	/* the ordered list of templates */
    void *templatesHash;	/* hash table or wherever compiled templates
				   informations are stored */
    void *rootMatch;		/* template based on / */
    void *keyMatch;		/* template based on key() */
    void *elemMatch;		/* template based on * */
    void *attrMatch;		/* template based on @* */
    void *parentMatch;		/* template based on .. */
    void *textMatch;		/* template based on text() */
    void *piMatch;		/* template based on processing-instruction() */
    void *commentMatch;		/* template based on comment() */
    
    /*
     * Namespace aliases.
     * NOTE: Not used in the refactored code.
     */
    xmlHashTablePtr nsAliases;	/* the namespace alias hash tables */

    /*
     * Attribute sets.
     */
    xmlHashTablePtr attributeSets;/* the attribute sets hash tables */

    /*
     * Namespaces.
     * TODO: Eliminate this.
     */
    xmlHashTablePtr nsHash;     /* the set of namespaces in use:
                                   ATTENTION: This is used for
                                   execution of XPath expressions; unfortunately
                                   it restricts the stylesheet to have distinct
                                   prefixes.
				   TODO: We need to get rid of this.    
				 */
    void           *nsDefs;     /* ATTENTION TODO: This is currently used to store
				   xsltExtDefPtr (in extensions.c) and
                                   *not* xmlNsPtr.
				 */

    /*
     * Key definitions.
     */
    void *keys;			/* key definitions */

    /*
     * Output related stuff.
     */
    xmlChar *method;		/* the output method */
    xmlChar *methodURI;		/* associated namespace if any */
    xmlChar *version;		/* version string */
    xmlChar *encoding;		/* encoding string */
    int omitXmlDeclaration;     /* omit-xml-declaration = "yes" | "no" */

    /* 
     * Number formatting.
     */
    xsltDecimalFormatPtr decimalFormat;
    int standalone;             /* standalone = "yes" | "no" */
    xmlChar *doctypePublic;     /* doctype-public string */
    xmlChar *doctypeSystem;     /* doctype-system string */
    int indent;			/* should output being indented */
    xmlChar *mediaType;		/* media-type string */

    /*
     * Precomputed blocks.
     */
    xsltElemPreCompPtr preComps;/* list of precomputed blocks */
    int warnings;		/* number of warnings found at compilation */
    int errors;			/* number of errors found at compilation */

    xmlChar  *exclPrefix;	/* last excluded prefixes */
    xmlChar **exclPrefixTab;	/* array of excluded prefixes */
    int       exclPrefixNr;	/* number of excluded prefixes in scope */
    int       exclPrefixMax;	/* size of the array */

    void     *_private;		/* user defined data */

    /*
     * Extensions.
     */
    xmlHashTablePtr extInfos;	/* the extension data */
    int		    extrasNr;	/* the number of extras required */

    /*
     * For keeping track of nested includes
     */
    xsltDocumentPtr includes;	/* points to last nested include */

    /*
     * dictionary: shared between stylesheet, context and documents.
     */
    xmlDictPtr dict;
    /*
     * precompiled attribute value templates.
     */
    void *attVTs;
    /*
     * if namespace-alias has an alias for the default stylesheet prefix
     * NOTE: Not used in the refactored code.
     */
    const xmlChar *defaultAlias;
    /*
     * bypass pre-processing (already done) (used in imports)
     */
    int nopreproc;
    /*
     * all document text strings were internalized
     */
    int internalized;
    /*
     * Literal Result Element as Stylesheet c.f. section 2.3
     */
    int literal_result;
    /*
    * The principal stylesheet
    */
    xsltStylesheetPtr principal;

    


    

    

};

typedef struct _xsltTransformCache xsltTransformCache;
typedef xsltTransformCache *xsltTransformCachePtr;
struct _xsltTransformCache {
    xmlDocPtr RVT;
    int nbRVT;
    xsltStackElemPtr stackItems;
    int nbStackItems;

    
    
    
    

};

/*
 * The in-memory structure corresponding to an XSLT Transformation.
 */
typedef enum {
    XSLT_OUTPUT_XML = 0,
    XSLT_OUTPUT_HTML,
    XSLT_OUTPUT_TEXT
} xsltOutputType;

typedef enum {
    XSLT_STATE_OK = 0,
    XSLT_STATE_ERROR,
    XSLT_STATE_STOPPED
} xsltTransformState;

struct _xsltTransformContext {
    xsltStylesheetPtr style;		/* the stylesheet used */
    xsltOutputType type;		/* the type of output */

    xsltTemplatePtr  templ;		/* the current template */
    int              templNr;		/* Nb of templates in the stack */
    int              templMax;		/* Size of the templtes stack */
    xsltTemplatePtr *templTab;		/* the template stack */

    xsltStackElemPtr  vars;		/* the current variable list */
    int               varsNr;		/* Nb of variable list in the stack */
    int               varsMax;		/* Size of the variable list stack */
    xsltStackElemPtr *varsTab;		/* the variable list stack */
    int               varsBase;		/* the var base for current templ */

    /*
     * Extensions
     */
    xmlHashTablePtr   extFunctions;	/* the extension functions */
    xmlHashTablePtr   extElements;	/* the extension elements */
    xmlHashTablePtr   extInfos;		/* the extension data */

    const xmlChar *mode;		/* the current mode */
    const xmlChar *modeURI;		/* the current mode URI */

    xsltDocumentPtr docList;		/* the document list */

    xsltDocumentPtr document;		/* the current source document; can be NULL if an RTF */
    xmlNodePtr node;			/* the current node being processed */
    xmlNodeSetPtr nodeList;		/* the current node list */
    /* xmlNodePtr current;			the node */

    xmlDocPtr output;			/* the resulting document */
    xmlNodePtr insert;			/* the insertion node */

    xmlXPathContextPtr xpathCtxt;	/* the XPath context */
    xsltTransformState state;		/* the current state */

    /*
     * Global variables
     */
    xmlHashTablePtr   globalVars;	/* the global variables and params */

    xmlNodePtr inst;			/* the instruction in the stylesheet */

    int xinclude;			/* should XInclude be processed */

    const char *      outputFile;	/* the output URI if known */

    int profile;                        /* is this run profiled */
    long             prof;		/* the current profiled value */
    int              profNr;		/* Nb of templates in the stack */
    int              profMax;		/* Size of the templtaes stack */
    long            *profTab;		/* the profile template stack */

    void            *_private;		/* user defined data */

    int              extrasNr;		/* the number of extras used */
    int              extrasMax;		/* the number of extras allocated */
    xsltRuntimeExtraPtr extras;		/* extra per runtime informations */

    xsltDocumentPtr  styleList;		/* the stylesheet docs list */
    void                 * sec;		/* the security preferences if any */

    xmlGenericErrorFunc  error;		/* a specific error handler */
    void              * errctx;		/* context for the error handler */

    xsltSortFunc      sortfunc;		/* a ctxt specific sort routine */

    /*
     * handling of temporary Result Value Tree
     * (XSLT 1.0 term: "Result Tree Fragment")
     */
    xmlDocPtr       tmpRVT;		/* list of RVT without persistance */
    xmlDocPtr       persistRVT;		/* list of persistant RVTs */
    int             ctxtflags;          /* context processing flags */

    /*
     * Speed optimization when coalescing text nodes
     */
    const xmlChar  *lasttext;		/* last text node content */
    unsigned int    lasttsize;		/* last text node size */
    unsigned int    lasttuse;		/* last text node use */
    /*
     * Per Context Debugging
     */
    int debugStatus;			/* the context level debug status */
    unsigned long* traceCode;		/* pointer to the variable holding the mask */

    int parserOptions;			/* parser options xmlParserOption */

    /*
     * dictionary: shared between stylesheet, context and documents.
     */
    xmlDictPtr dict;
    xmlDocPtr		tmpDoc; /* Obsolete; not used in the library. */
    /*
     * all document text strings are internalized
     */
    int internalized;
    int nbKeys;
    int hasTemplKeyPatterns;
    xsltTemplatePtr currentTemplateRule; /* the Current Template Rule */
    xmlNodePtr initialContextNode;
    xmlDocPtr initialContextDoc;
    xsltTransformCachePtr cache;
    void *contextVariable; /* the current variable item */
    xmlDocPtr localRVT; /* list of local tree fragments; will be freed when
			   the instruction which created the fragment
                           exits */
    xmlDocPtr localRVTBase;
    int keyInitLevel;   /* Needed to catch recursive keys issues */
    int funcLevel;      /* Needed to catch recursive functions issues */
};

/**
 * CHECK_STOPPED:
 *
 * Macro to check if the XSLT processing should be stopped.
 * Will return from the function.
 */


/**
 * CHECK_STOPPEDE:
 *
 * Macro to check if the XSLT processing should be stopped.
 * Will goto the error: label.
 */


/**
 * CHECK_STOPPED0:
 *
 * Macro to check if the XSLT processing should be stopped.
 * Will return from the function with a 0 value.
 */


/*
 * The macro XML_CAST_FPTR is a hack to avoid a gcc warning about
 * possible incompatibilities between function pointers and object
 * pointers.  It is defined in libxml/hash.h within recent versions
 * of libxml2, but is put here for compatibility.
 */
















/*
 * Functions associated to the internal types
xsltDecimalFormatPtr	xsltDecimalFormatGetByName(xsltStylesheetPtr sheet,
						   xmlChar *name);
 */
 xsltStylesheetPtr 	
			xsltNewStylesheet	(void);
 xsltStylesheetPtr 	
			xsltParseStylesheetFile	(const xmlChar* filename);
 void 			
			xsltFreeStylesheet	(xsltStylesheetPtr style);
 int 			
			xsltIsBlank		(xmlChar *str);
 void 			
			xsltFreeStackElemList	(xsltStackElemPtr elem);
 xsltDecimalFormatPtr 	
			xsltDecimalFormatGetByName(xsltStylesheetPtr style,
						 xmlChar *name);

 xsltStylesheetPtr 	
			xsltParseStylesheetProcess(xsltStylesheetPtr ret,
						 xmlDocPtr doc);
 void 			
			xsltParseStylesheetOutput(xsltStylesheetPtr style,
						 xmlNodePtr cur);
 xsltStylesheetPtr 	
			xsltParseStylesheetDoc	(xmlDocPtr doc);
 xsltStylesheetPtr 	
			xsltParseStylesheetImportedDoc(xmlDocPtr doc,
						xsltStylesheetPtr style);
 xsltStylesheetPtr 	
			xsltLoadStylesheetPI	(xmlDocPtr doc);
 void  			
			xsltNumberFormat	(xsltTransformContextPtr ctxt,
						 xsltNumberDataPtr data,
						 xmlNodePtr node);
 xmlXPathError 		 
			xsltFormatNumberConversion(xsltDecimalFormatPtr self,
						 xmlChar *format,
						 double number,
						 xmlChar **result);

 void 			
			xsltParseTemplateContent(xsltStylesheetPtr style,
						 xmlNodePtr templ);
 int 			
			xsltAllocateExtra	(xsltStylesheetPtr style);
 int 			
			xsltAllocateExtraCtxt	(xsltTransformContextPtr ctxt);
/*
 * Extra functions for Result Value Trees
 */
 xmlDocPtr 		
			xsltCreateRVT		(xsltTransformContextPtr ctxt);
 int 			
			xsltRegisterTmpRVT	(xsltTransformContextPtr ctxt,
						 xmlDocPtr RVT);
 int 			
			xsltRegisterLocalRVT	(xsltTransformContextPtr ctxt,
						 xmlDocPtr RVT);
 int 			
			xsltRegisterPersistRVT	(xsltTransformContextPtr ctxt,
						 xmlDocPtr RVT);
 int 
			xsltExtensionInstructionResultRegister(
						 xsltTransformContextPtr ctxt,
						 xmlXPathObjectPtr obj);
 int 
			xsltExtensionInstructionResultFinalize(
						 xsltTransformContextPtr ctxt);
 void 
			xsltFreeRVTs		(xsltTransformContextPtr ctxt);
 void 
			xsltReleaseRVT		(xsltTransformContextPtr ctxt,
						 xmlDocPtr RVT);
 int 
			xsltTransStorageAdd	(xsltTransformContextPtr ctxt,
						 void *id,
						 void *data);
 void * 
			xsltTransStorageRemove	(xsltTransformContextPtr ctxt,
						 void *id);

/*
 * Extra functions for Attribute Value Templates
 */
 void 
			xsltCompileAttr		(xsltStylesheetPtr style,
						 xmlAttrPtr attr);
 xmlChar * 
			xsltEvalAVT		(xsltTransformContextPtr ctxt,
						 void *avt,
						 xmlNodePtr node);
 void 
			xsltFreeAVTList		(void *avt);

/*
 * Extra function for successful xsltCleanupGlobals / xsltInit sequence.
 */

 void 
			xsltUninit		(void);

/************************************************************************
 *									*
 *  Compile-time functions for *internal* use only                      *
 *									*
 ************************************************************************/



			
						 
						 

			
						 


			
						 
						 



/************************************************************************
 *									*
 *  Transformation-time functions for *internal* use only               *
 *									*
 ************************************************************************/
 int 
			xsltInitCtxtKey		(xsltTransformContextPtr ctxt,
						 xsltDocumentPtr doc,
						 xsltKeyDefPtr keyd);
 int 
			xsltInitAllDocKeys	(xsltTransformContextPtr ctxt);

}





#line 7 "/vagrant/parsley/parsley.h" 2

#line 1 "/usr/include/libxslt/transform.h" 1
/*
 * Summary: the XSLT engine transformation part.
 * Description: This module implements the bulk of the actual
 *              transformation processing. Most of the xsl: element
 *              constructs are implemented in this module.
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Daniel Veillard
 */





#line 1 "/usr/include/libxslt/transform.h" 1

#line 1 "/usr/include/libxslt/transform.h" 1

#line 1 "/usr/include/libxslt/transform.h" 1

#line 1 "/usr/include/libxslt/transform.h" 1


extern "C" {


/**
 * XInclude default processing.
 */
 void 
		xsltSetXIncludeDefault	(int xinclude);
 int 
		xsltGetXIncludeDefault	(void);

/**
 * Export context to users.
 */
 xsltTransformContextPtr 
		xsltNewTransformContext	(xsltStylesheetPtr style,
					 xmlDocPtr doc);

 void 
		xsltFreeTransformContext(xsltTransformContextPtr ctxt);

 xmlDocPtr 
		xsltApplyStylesheetUser	(xsltStylesheetPtr style,
					 xmlDocPtr doc,
					 const char **params,
					 const char *output,
					 FILE * profile,
					 xsltTransformContextPtr userCtxt);
 void 
                xsltProcessOneNode      (xsltTransformContextPtr ctxt,
                                         xmlNodePtr node,
                                         xsltStackElemPtr params);
/**
 * Private Interfaces.
 */
 void 
		xsltApplyStripSpaces	(xsltTransformContextPtr ctxt,
					 xmlNodePtr node);
 xmlDocPtr 
		xsltApplyStylesheet	(xsltStylesheetPtr style,
					 xmlDocPtr doc,
					 const char **params);
 xmlDocPtr 
		xsltProfileStylesheet	(xsltStylesheetPtr style,
					 xmlDocPtr doc,
					 const char **params,
					 FILE * output);
 int 
		xsltRunStylesheet	(xsltStylesheetPtr style,
					 xmlDocPtr doc,
					 const char **params,
					 const char *output,
					 xmlSAXHandlerPtr SAX,
					 xmlOutputBufferPtr IObuf);
 int 
		xsltRunStylesheetUser	(xsltStylesheetPtr style,
					 xmlDocPtr doc,
					 const char **params,
					 const char *output,
					 xmlSAXHandlerPtr SAX,
					 xmlOutputBufferPtr IObuf,
					 FILE * profile,
					 xsltTransformContextPtr userCtxt);
 void 
		xsltApplyOneTemplate	(xsltTransformContextPtr ctxt,
					 xmlNodePtr node,
					 xmlNodePtr list,
					 xsltTemplatePtr templ,
					 xsltStackElemPtr params);
 void 
		xsltDocumentElem	(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltSort		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltCopy		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltText		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltElement		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltComment		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltAttribute		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltProcessingInstruction(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltCopyOf		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltValueOf		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltNumber		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltApplyImports	(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltCallTemplate	(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltApplyTemplates	(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltChoose		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltIf			(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltForEach		(xsltTransformContextPtr ctxt,
	                                 xmlNodePtr node,
					 xmlNodePtr inst,
					 xsltStylePreCompPtr comp);
 void 
		xsltRegisterAllElement	(xsltTransformContextPtr ctxt);

 xmlNodePtr 
		xsltCopyTextString	(xsltTransformContextPtr ctxt,
					 xmlNodePtr target,
					 const xmlChar *string,
					 int noescape);

/* Following 2 functions needed for libexslt/functions.c */
 void 
		xsltLocalVariablePop	(xsltTransformContextPtr ctxt,
					 int limitNr,
					 int level);
 int 
		xsltLocalVariablePush	(xsltTransformContextPtr ctxt,
					 xsltStackElemPtr variable,
					 int level);
/*
 * Hook for the debugger if activated.
 */
 void 
		xslHandleDebugger	(xmlNodePtr cur,
					 xmlNodePtr node,
					 xsltTemplatePtr templ,
					 xsltTransformContextPtr ctxt);


}





#line 8 "/vagrant/parsley/parsley.h" 2

#line 1 "./json/json.h" 1
/*
 * $Id: json.h,v 1.6 2006/01/26 02:16:28 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */





extern "C" {



#line 1 "./json/bits.h" 1
/*
 * $Id: bits.h,v 1.10 2006/01/30 23:07:57 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */


















#line 17 "./json/json.h" 2

#line 1 "./json/debug.h" 1
/*
 * $Id: debug.h,v 1.5 2006/01/30 23:07:57 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */




extern void mc_set_debug(int debug);
extern int mc_get_debug(void);

extern void mc_set_syslog(int syslog);
extern void mc_abort(const char *msg, ...);
extern void mc_debug(const char *msg, ...);
extern void mc_error(const char *msg, ...);
extern void mc_info(const char *msg, ...);





















#line 18 "./json/json.h" 2

#line 1 "./json/linkhash.h" 1
/*
 * $Id: linkhash.h,v 1.6 2006/01/30 23:07:57 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */
 



/**
 * golden prime used in hash functions
 */


/**
 * sentinel pointer value for empty slots
 */


/**
 * sentinel pointer value for freed slots
 */


struct lh_entry;

/**
 * callback function prototypes
 */
typedef void (lh_entry_free_fn) (struct lh_entry *e);
/**
 * callback function prototypes
 */
typedef unsigned long (lh_hash_fn) (void *k);
/**
 * callback function prototypes
 */
typedef int (lh_equal_fn) (void *k1, void *k2);

/**
 * An entry in the hash table
 */
struct lh_entry {
	/**
	 * The key.
	 */
	void *k;
	/**
	 * The value.
	 */
	void *v;
	/**
	 * The next entry
	 */
	struct lh_entry *next;
	/**
	 * The previous entry.
	 */
	struct lh_entry *prev;
};


/**
 * The hash table structure.
 */
struct lh_table {
	/**
	 * Size of our hash.
	 */
	int size;
	/**
	 * Numbers of entries.
	 */
	int count;

	/**
	 * Number of collisions.
	 */
	int collisions;

	/**
	 * Number of resizes.
	 */
	int resizes;

	/**
	 * Number of lookups.
	 */
	int lookups;

	/**
	 * Number of inserts.
	 */
	int inserts;

	/**
	 * Number of deletes.
	 */
	int deletes;

	/**
	 * Name of the hash table.
	 */
	char *name;

	/**
	 * The first entry.
	 */
	struct lh_entry *head;

	/**
	 * The last entry.
	 */
	struct lh_entry *tail;

	struct lh_entry *table;

	/**
	 * A pointer onto the function responsible for freeing an entry.
	 */
	lh_entry_free_fn *free_fn;
	lh_hash_fn *hash_fn;
	lh_equal_fn *equal_fn;
};


/**
 * Pre-defined hash and equality functions
 */
extern unsigned long lh_ptr_hash(void *k);
extern int lh_ptr_equal(void *k1, void *k2);

extern unsigned long lh_char_hash(void *k);
extern int lh_char_equal(void *k1, void *k2);


/**
 * Convenience list iterator.
 */



/**
 * lh_foreach_safe allows calling of deletion routine while iterating.
 */





/**
 * Create a new linkhash table.
 * @param size initial table size. The table is automatically resized
 * although this incurs a performance penalty.
 * @param name the table name.
 * @param free_fn callback function used to free memory for entries
 * when lh_table_free or lh_table_delete is called.
 * If NULL is provided, then memory for keys and values
 * must be freed by the caller.
 * @param hash_fn  function used to hash keys. 2 standard ones are defined:
 * lh_ptr_hash and lh_char_hash for hashing pointer values
 * and C strings respectively.
 * @param equal_fn comparison function to compare keys. 2 standard ones defined:
 * lh_ptr_hash and lh_char_hash for comparing pointer values
 * and C strings respectively.
 * @return a pointer onto the linkhash table.
 */
extern struct lh_table* lh_table_new(int size, char *name,
				     lh_entry_free_fn *free_fn,
				     lh_hash_fn *hash_fn,
				     lh_equal_fn *equal_fn);

/**
 * Convenience function to create a new linkhash
 * table with char keys.
 * @param size initial table size.
 * @param name table name.
 * @param free_fn callback function used to free memory for entries.
 * @return a pointer onto the linkhash table.
 */
extern struct lh_table* lh_kchar_table_new(int size, char *name,
					   lh_entry_free_fn *free_fn);


/**
 * Convenience function to create a new linkhash
 * table with ptr keys.
 * @param size initial table size.
 * @param name table name.
 * @param free_fn callback function used to free memory for entries.
 * @return a pointer onto the linkhash table.
 */
extern struct lh_table* lh_kptr_table_new(int size, char *name,
					  lh_entry_free_fn *free_fn);


/**
 * Free a linkhash table.
 * If a callback free function is provided then it is called for all
 * entries in the table.
 * @param t table to free.
 */
extern void lh_table_free(struct lh_table *t);


/**
 * Insert a record into the table.
 * @param t the table to insert into.
 * @param k a pointer to the key to insert.
 * @param v a pointer to the value to insert.
 */
extern int lh_table_insert(struct lh_table *t, void *k, void *v);


/**
 * Lookup a record into the table.
 * @param t the table to lookup
 * @param k a pointer to the key to lookup
 * @return a pointer to the record structure of the value or NULL if it does not exist.
 */
extern struct lh_entry* lh_table_lookup_entry(struct lh_table *t, void *k);

/**
 * Lookup a record into the table
 * @param t the table to lookup
 * @param k a pointer to the key to lookup
 * @return a pointer to the found value or NULL if it does not exist.
 */
extern void* lh_table_lookup(struct lh_table *t, void *k);


/**
 * Delete a record from the table.
 * If a callback free function is provided then it is called for the
 * for the item being deleted.
 * @param t the table to delete from.
 * @param e a pointer to the entry to delete.
 * @return 0 if the item was deleted.
 * @return -1 if it was not found.
 */
extern int lh_table_delete_entry(struct lh_table *t, struct lh_entry *e);


/**
 * Delete a record from the table.
 * If a callback free function is provided then it is called for the
 * for the item being deleted.
 * @param t the table to delete from.
 * @param k a pointer to the key to delete.
 * @return 0 if the item was deleted.
 * @return -1 if it was not found.
 */
extern int lh_table_delete(struct lh_table *t, void *k);


void lh_abort(const char *msg, ...);
void lh_table_resize(struct lh_table *t, int new_size);



#line 19 "./json/json.h" 2

#line 1 "./json/arraylist.h" 1
/*
 * $Id: arraylist.h,v 1.4 2006/01/26 02:16:28 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */






typedef void (array_list_free_fn) (void *data);

struct array_list
{
  void **array;
  int length;
  int size;
  array_list_free_fn *free_fn;
};

extern struct array_list*
array_list_new(array_list_free_fn *free_fn);

extern void
array_list_free(struct array_list *al);

extern void*
array_list_get_idx(struct array_list *al, int i);

extern int
array_list_put_idx(struct array_list *al, int i, void *data);

extern int
array_list_add(struct array_list *al, void *data);

extern int
array_list_length(struct array_list *al);



#line 20 "./json/json.h" 2

#line 1 "./json/json_util.h" 1
/*
 * $Id: json_util.h,v 1.4 2006/01/30 23:07:57 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */





#line 1 "./json/json_object.h" 1
/*
 * $Id: json_object.h,v 1.12 2006/01/30 23:07:57 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */












extern char *json_number_chars;
extern char *json_hex_chars;

/* forward structure definitions */

typedef int boolean;
struct printbuf;
struct lh_table;
struct array_list;
struct json_object;
struct json_object_iter;

/* supported object types */

enum json_type {
  json_type_null,
  json_type_boolean,
  json_type_double,
  json_type_int,
  json_type_object,
  json_type_array,
  json_type_string
};

/* reference counting functions */

/**
 * Increment the reference count of json_object
 * @param obj the json_object instance
 */
extern struct json_object* json_object_get(struct json_object *obj);

/**
 * Decrement the reference count of json_object and free if it reaches zero
 * @param obj the json_object instance
 */
extern void json_object_put(struct json_object *obj);


/**
 * Check if the json_object is of a given type
 * @param obj the json_object instance
 * @param type one of:
     json_type_boolean,
     json_type_double,
     json_type_int,
     json_type_object,
     json_type_array,
     json_type_string,
 */
extern int json_object_is_type(struct json_object *obj, enum json_type type);

/**
 * Get the type of the json_object
 * @param obj the json_object instance
 * @returns type being one of:
     json_type_boolean,
     json_type_double,
     json_type_int,
     json_type_object,
     json_type_array,
     json_type_string,
 */
extern enum json_type json_object_get_type(struct json_object *obj);


/** Stringify object to json format
 * @param obj the json_object instance
 * @returns a string in JSON format
 */
extern char* json_object_to_json_string(struct json_object *obj);


/* object type methods */

/** Create a new empty object
 * @returns a json_object of type json_type_object
 */
extern struct json_object* json_object_new_object(void);

/** Get the hashtable of a json_object of type json_type_object
 * @param obj the json_object instance
 * @returns a linkhash
 */
extern struct lh_table* json_object_get_object(struct json_object *obj);

/** Add an object field to a json_object of type json_type_object
 *
 * The reference count will *not* be incremented. This is to make adding
 * fields to objects in code more compact. If you want to retain a reference
 * to an added object you must wrap the passed object with json_object_get
 *
 * @param obj the json_object instance
 * @param key the object field name (a private copy will be duplicated)
 * @param val a json_object or NULL member to associate with the given field
 */
extern void json_object_object_add(struct json_object* obj, char *key,
				   struct json_object *val);

/** Get the json_object associate with a given object field
 * @param obj the json_object instance
 * @param key the object field name
 * @returns the json_object associated with the given field name
 */
extern struct json_object* json_object_object_get(struct json_object* obj,
						  char *key);

/** Delete the given json_object field
 *
 * The reference count will be decremented for the deleted object
 *
 * @param obj the json_object instance
 * @param key the object field name
 */
extern void json_object_object_del(struct json_object* obj, char *key);

/** Iterate through all keys and values of an object
 * @param obj the json_object instance
 * @param key the local name for the char* key variable defined in the body
 * @param val the local name for the json_object* object variable defined in the body
 */














/** Iterate through all keys and values of an object (ANSI C Safe)
 * @param obj the json_object instance
 * @param iter the object iterator
 */



/* Array type methods */

/** Create a new empty json_object of type json_type_array
 * @returns a json_object of type json_type_array
 */
extern struct json_object* json_object_new_array(void);

/** Get the arraylist of a json_object of type json_type_array
 * @param obj the json_object instance
 * @returns an arraylist
 */
extern struct array_list* json_object_get_array(struct json_object *obj);

/** Get the length of a json_object of type json_type_array
 * @param obj the json_object instance
 * @returns an int
 */
extern int json_object_array_length(struct json_object *obj);

/** Add an element to the end of a json_object of type json_type_array
 *
 * The reference count will *not* be incremented. This is to make adding
 * fields to objects in code more compact. If you want to retain a reference
 * to an added object you must wrap the passed object with json_object_get
 *
 * @param obj the json_object instance
 * @param val the json_object to be added
 */
extern int json_object_array_add(struct json_object *obj,
				 struct json_object *val);

/** Insert or replace an element at a specified index in an array (a json_object of type json_type_array)
 *
 * The reference count will *not* be incremented. This is to make adding
 * fields to objects in code more compact. If you want to retain a reference
 * to an added object you must wrap the passed object with json_object_get
 *
 * The reference count of a replaced object will be decremented.
 *
 * The array size will be automatically be expanded to the size of the
 * index if the index is larger than the current size.
 *
 * @param obj the json_object instance
 * @param idx the index to insert the element at
 * @param val the json_object to be added
 */
extern int json_object_array_put_idx(struct json_object *obj, int idx,
				     struct json_object *val);

/** Get the element at specificed index of the array (a json_object of type json_type_array)
 * @param obj the json_object instance
 * @param idx the index to get the element at
 * @returns the json_object at the specified index (or NULL)
 */
extern struct json_object* json_object_array_get_idx(struct json_object *obj,
						     int idx);

/* boolean type methods */

/** Create a new empty json_object of type json_type_boolean
 * @param b a boolean TRUE or FALSE (0 or 1)
 * @returns a json_object of type json_type_boolean
 */
extern struct json_object* json_object_new_boolean(boolean b);

/** Get the boolean value of a json_object
 *
 * The type is coerced to a boolean if the passed object is not a boolean.
 * integer and double objects will return FALSE if there value is zero
 * or TRUE otherwise. If the passed object is a string it will return
 * TRUE if it has a non zero length. If any other object type is passed
 * TRUE will be returned if the object is not NULL.
 *
 * @param obj the json_object instance
 * @returns a boolean
 */
extern boolean json_object_get_boolean(struct json_object *obj);


/* int type methods */

/** Create a new empty json_object of type json_type_int
 * @param i the integer
 * @returns a json_object of type json_type_int
 */
extern struct json_object* json_object_new_int(int i);

/** Get the int value of a json_object
 *
 * The type is coerced to a int if the passed object is not a int.
 * double objects will return their integer conversion. Strings will be
 * parsed as an integer. If no conversion exists then 0 is returned.
 *
 * @param obj the json_object instance
 * @returns an int
 */
extern int json_object_get_int(struct json_object *obj);


/* double type methods */

/** Create a new empty json_object of type json_type_double
 * @param d the double
 * @returns a json_object of type json_type_double
 */
extern struct json_object* json_object_new_double(double d);

/** Get the double value of a json_object
 *
 * The type is coerced to a double if the passed object is not a double.
 * integer objects will return their dboule conversion. Strings will be
 * parsed as a double. If no conversion exists then 0.0 is returned.
 *
 * @param obj the json_object instance
 * @returns an double
 */
extern double json_object_get_double(struct json_object *obj);


/* string type methods */

/** Create a new empty json_object of type json_type_string
 *
 * A copy of the string is made and the memory is managed by the json_object
 *
 * @param s the string
 * @returns a json_object of type json_type_string
 */
extern struct json_object* json_object_new_string(char *s);

extern struct json_object* json_object_new_string_len(char *s, int len);

/** Get the string value of a json_object
 *
 * If the passed object is not of type json_type_string then the JSON
 * representation of the object is returned.
 *
 * The returned string memory is managed by the json_object and will
 * be freed when the reference count of the json_object drops to zero.
 *
 * @param obj the json_object instance
 * @returns a string
 */
extern char* json_object_get_string(struct json_object *obj);



#line 15 "./json/json_util.h" 2



/* utlitiy functions */
extern struct json_object* json_object_from_file(char *filename);
extern int json_object_to_file(char *filename, struct json_object *obj);



#line 21 "./json/json.h" 2

#line 1 "./json/json.h" 1

#line 1 "./json/json_tokener.h" 1
/*
 * $Id: json_tokener.h,v 1.10 2006/07/25 03:24:50 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */





#line 1 "./json/json_tokener.h" 1

#line 1 "./json/json_tokener.h" 1

enum json_tokener_error {
  json_tokener_success,
  json_tokener_continue,
  json_tokener_error_depth,
  json_tokener_error_parse_eof,
  json_tokener_error_parse_unexpected,
  json_tokener_error_parse_null,
  json_tokener_error_parse_boolean,
  json_tokener_error_parse_number,
  json_tokener_error_parse_array,
  json_tokener_error_parse_object_key_name,
  json_tokener_error_parse_object_key_sep,
  json_tokener_error_parse_object_value_sep,
  json_tokener_error_parse_string,
  json_tokener_error_parse_comment
};

enum json_tokener_state {
  json_tokener_state_eatws,
  json_tokener_state_start,
  json_tokener_state_finish,
  json_tokener_state_null,
  json_tokener_state_comment_start,
  json_tokener_state_comment,
  json_tokener_state_comment_eol,
  json_tokener_state_comment_end,
  json_tokener_state_string,
  json_tokener_state_string_escape,
  json_tokener_state_escape_unicode,
  json_tokener_state_boolean,
  json_tokener_state_number,
  json_tokener_state_array,
  json_tokener_state_array_add,
  json_tokener_state_array_sep,
  json_tokener_state_object_field_start,
  json_tokener_state_object_field,
  json_tokener_state_object_field_end,
  json_tokener_state_object_value,
  json_tokener_state_object_value_add,
  json_tokener_state_object_sep
};

struct json_tokener_srec
{
  enum json_tokener_state state, saved_state;
  struct json_object *obj;
  struct json_object *current;
  char *obj_field_name;
};



struct json_tokener
{
  char *str;
  struct printbuf *pb;
  int depth, is_double, st_pos, char_offset;
  ptrdiff_t err;
  unsigned int ucs_char;
  char quote_char;
  struct json_tokener_srec stack[32];
};

extern const char* json_tokener_errors[];

extern struct json_tokener* json_tokener_new(void);
extern void json_tokener_free(struct json_tokener *tok);
extern void json_tokener_reset(struct json_tokener *tok);
extern struct json_object* json_tokener_parse(char *str);
extern struct json_object* json_tokener_parse_ex(struct json_tokener *tok,
						 char *str, int len);



#line 23 "./json/json.h" 2


}




#line 9 "/vagrant/parsley/parsley.h" 2

#line 1 "/vagrant/parsley/parsed_xpath.h" 1




#line 1 "/vagrant/parsley/parsed_xpath.h" 1

typedef struct __pxpath_node {
	int type;
	char* value;
 	struct __pxpath_node * next;
 	struct __pxpath_node * child;
} pxpath_node;

typedef pxpath_node * pxpathPtr;

enum {
   PXPATH_FUNCTION = 1,
	 PXPATH_PATH = 2,
	 PXPATH_LITERAL = 3,
	 PXPATH_LIT_EXPR = 4,
	 PXPATH_OPERATOR = 3
};

pxpathPtr pxpath_new(int type, char* value);
pxpathPtr pxpath_new_func(char* value, pxpathPtr child);
pxpathPtr pxpath_cat_paths(int n, ...);
pxpathPtr pxpath_cat_literals(int n, ...);
pxpathPtr pxpath_new_path(int n, ...);
pxpathPtr pxpath_dup(pxpathPtr p);
pxpathPtr pxpath_new_literal(int n, ...);
pxpathPtr pxpath_new_operator(int n, ...);
void pxpath_free(pxpathPtr ptr);
char* pxpath_to_string(pxpathPtr ptr);



#line 10 "/vagrant/parsley/parsley.h" 2


static int parsley_debug_mode = 0;
static char* last_parsley_error;


typedef struct __compiled_parsley {
	xsltStylesheetPtr stylesheet;
	char* error;
} compiled_parsley;

typedef struct __parsed_parsley {
  xmlDocPtr xml;
	char *error;
  compiled_parsley *parsley;
} parsed_parsley;

typedef compiled_parsley * parsleyPtr;
typedef parsed_parsley * parsedParsleyPtr;

typedef struct __key_node {
	char* name;
	char* use;
	struct __key_node * next;
} key_node;

typedef key_node * keyPtr;

typedef struct __parsley_context {
	xmlNsPtr ns;
 	xmlNodePtr node;
	struct json_object * json;
	char* tag;
	pxpathPtr filter;
	pxpathPtr expr;
	bool magic;
	bool array;
	bool string;
  int flags;  //bitmask over following enum
	struct __parsley_context * parent;
	struct __parsley_context *child;
	struct __parsley_context *next;
} parsley_context;

enum {
  PARSLEY_OPTIONAL    = 1,
  PARSLEY_BANG        = 2
};

enum {
	PARSLEY_OPTIONS_HTML 					 = 1,
	PARSLEY_OPTIONS_PRUNE   			 = 2,
	PARSLEY_OPTIONS_ALLOW_NET  		 = 4,
	PARSLEY_OPTIONS_ALLOW_LOCAL    = 8,
	PARSLEY_OPTIONS_COLLATE        = 16,
	PARSLEY_OPTIONS_SGWRAP         = 32,
	PARSLEY_OPTIONS_FORCE_UTF8     = 64
};

typedef parsley_context * contextPtr;

void parsed_parsley_free(parsedParsleyPtr);

void killDefaultNS(xmlDocPtr doc);
void parsley_free(parsleyPtr);
parsleyPtr parsley_compile(char* parsley, char* incl);
parsedParsleyPtr parsley_parse_file(parsleyPtr parsley, char* file, int flags);
parsedParsleyPtr parsley_parse_string(parsleyPtr parsley, char* string, size_t size, char* base_uri, int flags);
parsedParsleyPtr parsley_parse_doc(parsleyPtr, xmlDocPtr, int);

void parsleyXsltError(void * ctx, const char * msg, ...);

void parsley_set_user_agent(char const *agent);
static contextPtr parsley_parsing_context;

//tycho's functions
parsedParsleyPtr parsley_parse_html_string_simple(parsleyPtr parsley, char* string);
parsedParsleyPtr parsley_parse_both(char* parselet, char* html);
char* parsley_to_json(parsedParsleyPtr ptr);
char* strings_to_json(char* parselet, char* html);
char* compiled_to_json(parsleyPtr parsley, char* html);


