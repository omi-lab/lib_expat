/* expat_config.h.cmake.  Based upon generated expat_config.h.in.  */

/* 1234 = LIL_ENDIAN, 4321 = BIGENDIAN */
#define BYTEORDER 1234

/* Define to 1 if you have the `arc4random' function. */
//#define HAVE_ARC4RANDOM 1

/* Define to 1 if you have the `arc4random_buf' function. */
//#define HAVE_ARC4RANDOM_BUF 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getrandom' function. */
// #define HAVE_GETRANDOM 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `bsd' library (-lbsd). */
//#define HAVE_LIBBSD 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
//#define HAVE_MMAP 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have `syscall' and `SYS_getrandom'. */
// #define HAVE_SYSCALL_GETRANDOM 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* whether byteorder is bigendian */
//#define WORDS_BIGENDIAN 1

/* Define to allow retrieving the byte offsets for attribute names and values.
 */
//#define XML_ATTR_INFO 1

/* Define to specify how much context to retain around the current parse
   point. */
#define XML_CONTEXT_BYTES 1024

#if ! defined(TP_WIN32)
/* Define to include code reading entropy from `/dev/urandom'. */
  #define XML_DEV_URANDOM 1
#endif

/* Define to make parameter entity parsing functionality available. */
//#define XML_DTD 1

/* Define to make XML Namespaces functionality available. */
//#define XML_NS 1

/* Define to __FUNCTION__ or "" if `__func__' does not conform to ANSI C. */
#ifdef _MSC_VER
#  define __func__ __FUNCTION__
#endif

/* Define to `long' if <sys/types.h> does not define. */
//#define off_t long

/* Define to `unsigned' if <sys/types.h> does not define. */
//#define size_t unsigned
