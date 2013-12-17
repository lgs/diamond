/* lib/config.h.  Generated from config.hin by configure.  */
/* lib/config.hin.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Define if you wish *printf() functions that have a safe handling of
   non-IEEE-754 'long double' values. */
#define CHECK_PRINTF_SAFE 1

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1

/* Define as the bit index in the word where to find the sign of 'double'. */
/* #undef DBL_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'double'. */
/* #undef DBL_SIGNBIT_WORD */

/* Define to 1 if // is a file system root distinct from /. */
/* #undef DOUBLE_SLASH_IS_DISTINCT_ROOT */

/* Define to 1 if the changeword(REGEXP) functionality is wanted */
/* #undef ENABLE_CHANGEWORD */

/* Define to 1 if an invalid memory address access may yield a SIGBUS. */
#define FAULT_YIELDS_SIGBUS 0

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
/* #undef FCNTL_DUPFD_BUGGY */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'float'. */
#define FLT_EXPBIT0_BIT 23

/* Define as the word index where to find the exponent of 'float'. */
#define FLT_EXPBIT0_WORD 0

/* Define as the bit index in the word where to find the sign of 'float'. */
/* #undef FLT_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'float'. */
/* #undef FLT_SIGNBIT_WORD */

/* Define to 1 if fopen() fails to recognize a trailing slash. */
/* #undef FOPEN_TRAILING_SLASH_BUG */

/* Define to 1 if the system's ftello function has the Solaris bug. */
/* #undef FTELLO_BROKEN_AFTER_SWITCHING_FROM_READ_TO_WRITE */

/* Define to 1 if nl_langinfo (YESEXPR) returns a non-empty string. */
#define FUNC_NL_LANGINFO_YESEXPR_WORKS 1

/* Define to 1 if realpath() can malloc memory, always gives an absolute path,
   and handles trailing slash correctly. */
#define FUNC_REALPATH_WORKS 1

/* Define to 1 if ungetc is broken when used on arbitrary bytes. */
/* #undef FUNC_UNGETC_BROKEN */

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE struct timezone

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module canonicalize-lgpl shall be considered present. */
#define GNULIB_CANONICALIZE_LGPL 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module close-stream shall be considered present. */
#define GNULIB_CLOSE_STREAM 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module dirname shall be considered present. */
#define GNULIB_DIRNAME 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fd-safer-flag shall be considered present. */
#define GNULIB_FD_SAFER_FLAG 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module filenamecat shall be considered present. */
#define GNULIB_FILENAMECAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fopen-safer shall be considered present. */
#define GNULIB_FOPEN_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#define GNULIB_MALLOC_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module pipe2-safer shall be considered present. */
#define GNULIB_PIPE2_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module snprintf shall be considered present. */
#define GNULIB_SNPRINTF 1

/* Define to 1 when the gnulib module btowc should be tested. */
#define GNULIB_TEST_BTOWC 1

/* Define to 1 when the gnulib module canonicalize_file_name should be tested.
   */
#define GNULIB_TEST_CANONICALIZE_FILE_NAME 1

/* Define to 1 when the gnulib module cloexec should be tested. */
#define GNULIB_TEST_CLOEXEC 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module fclose should be tested. */
#define GNULIB_TEST_FCLOSE 1

/* Define to 1 when the gnulib module fcntl should be tested. */
#define GNULIB_TEST_FCNTL 1

/* Define to 1 when the gnulib module fflush should be tested. */
#define GNULIB_TEST_FFLUSH 1

/* Define to 1 when the gnulib module fopen should be tested. */
#define GNULIB_TEST_FOPEN 1

/* Define to 1 when the gnulib module fpurge should be tested. */
#define GNULIB_TEST_FPURGE 1

/* Define to 1 when the gnulib module frexp should be tested. */
#define GNULIB_TEST_FREXP 1

/* Define to 1 when the gnulib module frexpl should be tested. */
#define GNULIB_TEST_FREXPL 1

/* Define to 1 when the gnulib module fseeko should be tested. */
#define GNULIB_TEST_FSEEKO 1

/* Define to 1 when the gnulib module ftell should be tested. */
#define GNULIB_TEST_FTELL 1

/* Define to 1 when the gnulib module ftello should be tested. */
#define GNULIB_TEST_FTELLO 1

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#define GNULIB_TEST_GETDTABLESIZE 1

/* Define to 1 when the gnulib module getopt-gnu should be tested. */
#define GNULIB_TEST_GETOPT_GNU 1

/* Define to 1 when the gnulib module getpagesize should be tested. */
#define GNULIB_TEST_GETPAGESIZE 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module link should be tested. */
#define GNULIB_TEST_LINK 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#define GNULIB_TEST_MBRTOWC 1

/* Define to 1 when the gnulib module mbsinit should be tested. */
#define GNULIB_TEST_MBSINIT 1

/* Define to 1 when the gnulib module mbtowc should be tested. */
#define GNULIB_TEST_MBTOWC 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mkdtemp should be tested. */
#define GNULIB_TEST_MKDTEMP 1

/* Define to 1 when the gnulib module mkstemp should be tested. */
#define GNULIB_TEST_MKSTEMP 1

/* Define to 1 when the gnulib module nl_langinfo should be tested. */
#define GNULIB_TEST_NL_LANGINFO 1

/* Define to 1 when the gnulib module open should be tested. */
#define GNULIB_TEST_OPEN 1

/* Define to 1 when the gnulib module pipe2 should be tested. */
#define GNULIB_TEST_PIPE2 1

/* Define to 1 when the gnulib module posix_spawnattr_destroy should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWNATTR_DESTROY 1

/* Define to 1 when the gnulib module posix_spawnattr_init should be tested.
   */
#define GNULIB_TEST_POSIX_SPAWNATTR_INIT 1

/* Define to 1 when the gnulib module posix_spawnattr_setflags should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWNATTR_SETFLAGS 1

/* Define to 1 when the gnulib module posix_spawnattr_setsigmask should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWNATTR_SETSIGMASK 1

/* Define to 1 when the gnulib module posix_spawnp should be tested. */
#define GNULIB_TEST_POSIX_SPAWNP 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_addclose should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_adddup2 should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_addopen should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_destroy should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_DESTROY 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_init should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_INIT 1

/* Define to 1 when the gnulib module putenv should be tested. */
#define GNULIB_TEST_PUTENV 1

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#define GNULIB_TEST_RAWMEMCHR 1

/* Define to 1 when the gnulib module readlink should be tested. */
#define GNULIB_TEST_READLINK 1

/* Define to 1 when the gnulib module realpath should be tested. */
#define GNULIB_TEST_REALPATH 1

/* Define to 1 when the gnulib module rename should be tested. */
#define GNULIB_TEST_RENAME 1

/* Define to 1 when the gnulib module rmdir should be tested. */
#define GNULIB_TEST_RMDIR 1

/* Define to 1 when the gnulib module setenv should be tested. */
#define GNULIB_TEST_SETENV 1

/* Define to 1 when the gnulib module setlocale should be tested. */
#define GNULIB_TEST_SETLOCALE 1

/* Define to 1 when the gnulib module sigaction should be tested. */
#define GNULIB_TEST_SIGACTION 1

/* Define to 1 when the gnulib module signbit should be tested. */
#define GNULIB_TEST_SIGNBIT 1

/* Define to 1 when the gnulib module sigprocmask should be tested. */
#define GNULIB_TEST_SIGPROCMASK 1

/* Define to 1 when the gnulib module snprintf should be tested. */
#define GNULIB_TEST_SNPRINTF 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module strchrnul should be tested. */
#define GNULIB_TEST_STRCHRNUL 1

/* Define to 1 when the gnulib module strdup should be tested. */
#define GNULIB_TEST_STRDUP 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strndup should be tested. */
#define GNULIB_TEST_STRNDUP 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module strsignal should be tested. */
#define GNULIB_TEST_STRSIGNAL 1

/* Define to 1 when the gnulib module strstr should be tested. */
#define GNULIB_TEST_STRSTR 1

/* Define to 1 when the gnulib module strtod should be tested. */
#define GNULIB_TEST_STRTOD 1

/* Define to 1 when the gnulib module symlink should be tested. */
#define GNULIB_TEST_SYMLINK 1

/* Define to 1 when the gnulib module unsetenv should be tested. */
#define GNULIB_TEST_UNSETENV 1

/* Define to 1 when the gnulib module vasprintf should be tested. */
#define GNULIB_TEST_VASPRINTF 1

/* Define to 1 when the gnulib module waitpid should be tested. */
#define GNULIB_TEST_WAITPID 1

/* Define to 1 when the gnulib module wcrtomb should be tested. */
#define GNULIB_TEST_WCRTOMB 1

/* Define to 1 when the gnulib module wctob should be tested. */
#define GNULIB_TEST_WCTOB 1

/* Define to 1 when the gnulib module wctomb should be tested. */
#define GNULIB_TEST_WCTOMB 1

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the `btowc' function. */
#define HAVE_BTOWC 1

/* Define to 1 if you have the `canonicalize_file_name' function. */
#define HAVE_CANONICALIZE_FILE_NAME 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `confstr' function. */
/* #undef HAVE_CONFSTR */

/* Define if the copysignf function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGNF_IN_LIBC */

/* Define if the copysignl function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGNL_IN_LIBC */

/* Define if the copysign function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGN_IN_LIBC */

/* Define to 1 if you have the declaration of `alarm', and to 0 if you don't.
   */
#define HAVE_DECL_ALARM 1

/* Define to 1 if you have the declaration of `clearerr_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_CLEARERR_UNLOCKED 1

/* Define to 1 if you have the declaration of `copysign', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGN */

/* Define to 1 if you have the declaration of `copysignf', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGNF */

/* Define to 1 if you have the declaration of `copysignl', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGNL */

/* Define to 1 if you have the declaration of `feof_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_FEOF_UNLOCKED 1

/* Define to 1 if you have the declaration of `ferror_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FERROR_UNLOCKED 1

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 1

/* Define to 1 if you have the declaration of `fgets_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FGETS_UNLOCKED 1

/* Define to 1 if you have the declaration of `fpurge', and to 0 if you don't.
   */
#define HAVE_DECL_FPURGE 0

/* Define to 1 if you have the declaration of `fputc_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 1

/* Define to 1 if you have the declaration of `fread_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FREAD_UNLOCKED 1

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#define HAVE_DECL_FSEEKO 1

/* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
   */
#define HAVE_DECL_FTELLO 1

/* Define to 1 if you have the declaration of `fwrite_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FWRITE_UNLOCKED 1

/* Define to 1 if you have the declaration of `getchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_GETCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 1

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
#define HAVE_DECL_GETENV 1

/* Define to 1 if you have the declaration of `isblank', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ISBLANK */

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 1

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 1

/* Define to 1 if you have the declaration of `putchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_PUTCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `setenv', and to 0 if you don't.
   */
#define HAVE_DECL_SETENV 1

/* Define to 1 if you have the declaration of `sigaltstack', and to 0 if you
   don't. */
#define HAVE_DECL_SIGALTSTACK 1

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
   */
#define HAVE_DECL_STRDUP 1

/* Define to 1 if you have the declaration of `strerror', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRERROR */

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#define HAVE_DECL_STRNDUP 1

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `strsignal', and to 0 if you
   don't. */
#define HAVE_DECL_STRSIGNAL 1

/* Define to 1 if you have the declaration of `strtod', and to 0 if you don't.
   */
#define HAVE_DECL_STRTOD 1

/* Define to 1 if you have the declaration of `sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SIGLIST 1

/* Define to 1 if you have the declaration of `unsetenv', and to 0 if you
   don't. */
#define HAVE_DECL_UNSETENV 1

/* Define to 1 if you have the declaration of `wctob', and to 0 if you don't.
   */
#define HAVE_DECL_WCTOB 1

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 0

/* Define to 1 if you have the declaration of `_sys_siglist', and to 0 if you
   don't. */
/* #undef HAVE_DECL__SYS_SIGLIST */

/* Define to 1 if you have the declaration of `__fpending', and to 0 if you
   don't. */
#define HAVE_DECL___FPENDING 1

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define if you have the declaration of environ. */
#define HAVE_ENVIRON_DECL 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the `fpurge' function. */
/* #undef HAVE_FPURGE */

/* Define if the frexpl function is available in libc. */
#define HAVE_FREXPL_IN_LIBC 1

/* Define if the frexp function is available in libc. */
#define HAVE_FREXP_IN_LIBC 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if the compiler supports one of the keywords 'inline',
   '__inline__', '__inline' and effectively inlines functions marked as such.
   */
#define HAVE_INLINE 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define if the isnan(double) function is available in libc. */
#define HAVE_ISNAND_IN_LIBC 1

/* Define if the isnan(float) function is available in libc. */
#define HAVE_ISNANF_IN_LIBC 1

/* Define if the isnan(long double) function is available in libc. */
/* #undef HAVE_ISNANL_IN_LIBC */

/* Define to 1 if you have the `iswcntrl' function. */
#define HAVE_ISWCNTRL 1

/* Define to 1 if you have the `iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define if the ldexpl function is available in libc. */
#define HAVE_LDEXPL_IN_LIBC 1

/* Define if the ldexp function is available in libc. */
#define HAVE_LDEXP_IN_LIBC 1

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* Define if you have the libsigsegv library. */
/* #undef HAVE_LIBSIGSEGV */

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if the system has the type `long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC_GNU 1

/* Define if the 'malloc' function is POSIX compliant. */
#define HAVE_MALLOC_POSIX 1

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#define HAVE_MAP_ANONYMOUS 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the `mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the `memchr' function. */
#define HAVE_MEMCHR 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the `newlocale' function. */
#define HAVE_NEWLOCALE 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if libc includes obstacks. */
#define HAVE_OBSTACK 1

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define to 1 if you have the `pathconf' function. */
#define HAVE_PATHCONF 1

/* Define to 1 if you have the <paths.h> header file. */
/* #undef HAVE_PATHS_H */

/* Define to 1 if you have the `pipe' function. */
#define HAVE_PIPE 1

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the `posix_spawn' function. */
#define HAVE_POSIX_SPAWN 1

/* Define to 1 if the system has the type `posix_spawnattr_t'. */
#define HAVE_POSIX_SPAWNATTR_T 1

/* Define to 1 if the system has the type `posix_spawn_file_actions_t'. */
#define HAVE_POSIX_SPAWN_FILE_ACTIONS_T 1

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
/* #undef HAVE_PTHREAD_MUTEX_RECURSIVE */

/* Define if the POSIX multithreading library has read/write locks. */
/* #undef HAVE_PTHREAD_RWLOCK */

/* Define to 1 if you have the `rawmemchr' function. */
#define HAVE_RAWMEMCHR 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `sched_setparam' function. */
/* #undef HAVE_SCHED_SETPARAM */

/* Define to 1 if you have the `sched_setscheduler' function. */
/* #undef HAVE_SCHED_SETSCHEDULER */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the `setegid' function. */
/* #undef HAVE_SETEGID */

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `seteuid' function. */
/* #undef HAVE_SETEUID */

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigaltstack' function. */
#define HAVE_SIGALTSTACK 1

/* Define to 1 if the system has the type `siginfo_t'. */
/* #undef HAVE_SIGINFO_T */

/* Define to 1 if you have the `siginterrupt' function. */
#define HAVE_SIGINTERRUPT 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
/* #undef HAVE_SIGSET_T */

/* Define to 1 if the system has the type `sig_atomic_t'. */
#define HAVE_SIG_ATOMIC_T 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

/* Define to 1 if you have the <spawn.h> header file. */
#define HAVE_SPAWN_H 1

/* Define to 1 if extending the stack slightly past the limit causes a SIGSEGV
   which can be handled on an alternate stack established with sigaltstack. */
#define HAVE_STACK_OVERFLOW_HANDLING 1

/* Define to 1 if the system has the type `stack_t'. */
#define HAVE_STACK_T 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
#define HAVE_STDIO_EXT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchrnul' function. */
#define HAVE_STRCHRNUL 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if `sa_sigaction' is a member of `struct sigaction'. */
#define HAVE_STRUCT_SIGACTION_SA_SIGACTION 1

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tsearch' function. */
#define HAVE_TSEARCH 1

/* Define to 1 if you have the <ucontext.h> header file. */
#define HAVE_UCONTEXT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if the system has the type `unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `uselocale' function. */
#define HAVE_USELOCALE 1

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the `waitid' function. */
#define HAVE_WAITID 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcscoll' function. */
#define HAVE_WCSCOLL 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
#define HAVE_WCSNLEN 1

/* Define to 1 if you have the `wctob' function. */
#define HAVE_WCTOB 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 1

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 1

/* Define to 1 if you have the <xlocale.h> header file. */
#define HAVE_XLOCALE_H 1

/* Define to 1 if extending the stack slightly past the limit causes a
   SIGSEGV, and an alternate stack can be established with sigaltstack, and
   the signal handler is passed a context that specifies the run time stack.
   This behavior is defined by POSIX 1003.1-2001 with the X/Open System
   Interface (XSI) option and is a standardized way to implement a SEGV-based
   stack overflow detection heuristic. */
/* #undef HAVE_XSI_STACK_OVERFLOW_HEURISTIC */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_ftime' function. */
/* #undef HAVE__FTIME */

/* Define to 1 if you have the `__fpending' function. */
#define HAVE___FPENDING 1

/* Define to 1 if you have the `__fpurge' function. */
#define HAVE___FPURGE 1

/* Define to 1 if you have the `__freading' function. */
#define HAVE___FREADING 1

/* Define to 1 if you have the `__secure_getenv' function. */
/* #undef HAVE___SECURE_GETENV */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'long double'. */
#define LDBL_EXPBIT0_BIT 0

/* Define as the word index where to find the exponent of 'long double'. */
#define LDBL_EXPBIT0_WORD 2

/* Define as the bit index in the word where to find the sign of 'long
   double'. */
/* #undef LDBL_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'long double'. */
/* #undef LDBL_SIGNBIT_WORD */

/* Define to 1 if lseek does not detect pipes. */
/* #undef LSEEK_PIPE_BROKEN */

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define if the mbrtowc function has the NULL pwc argument bug. */
/* #undef MBRTOWC_NULL_ARG1_BUG */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG2_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
/* #undef MBRTOWC_RETVAL_BUG */

/* Define to 1 if assertions should be disabled. */
/* #undef NDEBUG */

/* Define if the vasnprintf implementation needs special code for the 'a' and
   'A' directives. */
/* #undef NEED_PRINTF_DIRECTIVE_A */

/* Define if the vasnprintf implementation needs special code for the 'F'
   directive. */
/* #undef NEED_PRINTF_DIRECTIVE_F */

/* Define if the vasnprintf implementation needs special code for the 'ls'
   directive. */
/* #undef NEED_PRINTF_DIRECTIVE_LS */

/* Define if the vasnprintf implementation needs special code for 'double'
   arguments. */
/* #undef NEED_PRINTF_DOUBLE */

/* Define if the vasnprintf implementation needs special code for surviving
   out-of-memory conditions. */
/* #undef NEED_PRINTF_ENOMEM */

/* Define if the vasnprintf implementation needs special code for the ' flag.
   */
/* #undef NEED_PRINTF_FLAG_GROUPING */

/* Define if the vasnprintf implementation needs special code for the '-'
   flag. */
/* #undef NEED_PRINTF_FLAG_LEFTADJUST */

/* Define if the vasnprintf implementation needs special code for the 0 flag.
   */
/* #undef NEED_PRINTF_FLAG_ZERO */

/* Define if the vasnprintf implementation needs special code for infinite
   'double' arguments. */
/* #undef NEED_PRINTF_INFINITE_DOUBLE */

/* Define if the vasnprintf implementation needs special code for infinite
   'long double' arguments. */
#define NEED_PRINTF_INFINITE_LONG_DOUBLE 1

/* Define if the vasnprintf implementation needs special code for 'long
   double' arguments. */
/* #undef NEED_PRINTF_LONG_DOUBLE */

/* Define if the vasnprintf implementation needs special code for supporting
   large precisions without arbitrary bounds. */
/* #undef NEED_PRINTF_UNBOUNDED_PRECISION */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to 1 if open() fails to recognize a trailing slash. */
/* #undef OPEN_TRAILING_SLASH_BUG */

/* Name of package */
#define PACKAGE "m4"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-m4@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU M4"

/* String identifying the packager of this software */
/* #undef PACKAGE_PACKAGER */

/* Packager info for bug reports (URL/e-mail/...) */
/* #undef PACKAGE_PACKAGER_BUG_REPORTS */

/* Packager-specific version information */
/* #undef PACKAGE_PACKAGER_VERSION */

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU M4 1.4.16"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "m4"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.gnu.org/software/m4/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.4.16"

/* the number of pending output bytes on stream `fp' */
/* #undef PENDING_OUTPUT_N_BYTES */

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#define PROMOTED_MODE_T mode_t

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to 1 if readlink fails to recognize a trailing slash. */
/* #undef READLINK_TRAILING_SLASH_BUG */

/* Define if rename does not work when the destination file exists, as on
   Cygwin 1.5 or Windows. */
/* #undef RENAME_DEST_EXISTS_BUG */

/* Define if rename fails to leave hard links alone, as on NetBSD 1.6 or
   Cygwin 1.5. */
/* #undef RENAME_HARD_LINK_BUG */

/* Define to 1 if a file can be renamed while open, or to 0 if not. */
#define RENAME_OPEN_FILE_WORKS 1

/* Define if rename does not correctly handle slashes on the destination
   argument, such as on Solaris 10 or NetBSD 1.6. */
/* #undef RENAME_TRAILING_SLASH_DEST_BUG */

/* Define if rename does not correctly handle slashes on the source argument,
   such as on Solaris 9 or cygwin 1.5. */
/* #undef RENAME_TRAILING_SLASH_SOURCE_BUG */

/* Define to 1 if stat needs help when passed a directory name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_DIR */

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_FILE */

/* Define if nl_langinfo exists but is overridden by gnulib. */
/* #undef REPLACE_NL_LANGINFO */

/* Define this to 1 if strerror is broken. */
/* #undef REPLACE_STRERROR */

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define if sigaltstack() interprets the stack_t.ss_sp field incorrectly, as
   the highest address of the alternate stack range rather than as the lowest
   address. */
/* #undef SIGALTSTACK_SS_REVERSED */

/* Define if lists must be signal-safe. */
#define SIGNAL_SAFE_LIST 1

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Shell used by syscmd and esyscmd, must accept -c argument. */
#define SYSCMD_SHELL "/bin/sh"

/* Define if the POSIX multithreading library can be used. */
/* #undef USE_POSIX_THREADS */

/* Define if references to the POSIX multithreading library should be made
   weak. */
/* #undef USE_POSIX_THREADS_WEAK */

/* Define if the GNU Pth multithreading library can be used. */
/* #undef USE_PTH_THREADS */

/* Define if references to the GNU Pth multithreading library should be made
   weak. */
/* #undef USE_PTH_THREADS_WEAK */

/* Define if the old Solaris multithreading library can be used. */
/* #undef USE_SOLARIS_THREADS */

/* Define if references to the old Solaris multithreading library should be
   made weak. */
/* #undef USE_SOLARIS_THREADS_WEAK */

/* Define to 1 if you want getc etc. to use unlocked I/O if available.
   Unlocked I/O can improve performance in unithreaded apps, but it is not
   safe for multithreaded apps. */
#define USE_UNLOCKED_IO 1

/* Define if the Win32 multithreading API can be used. */
/* #undef USE_WIN32_THREADS */

/* Version number of package */
#define VERSION "1.4.16"

/* Define to 1 if unsetenv returns void instead of int. */
/* #undef VOID_UNSETENV */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define to 1 if malloc debugging is enabled */
/* #undef WITH_DMALLOC */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* enable compile-time and run-time bounds-checking, and some warnings */
/* #undef _FORTIFY_SOURCE */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define if you want regoff_t to be at least as wide POSIX requires. */
/* #undef _REGEX_LARGE_OFFSETS */

/* Define to 500 only on HP-UX. */
/* #undef _XOPEN_SOURCE */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
/* #undef __GETOPT_PREFIX */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* A replacement for va_copy, if needed.  */
#define gl_va_copy(a,b) ((a) = (b))

/* Define to rpl_gmtime if the replacement function should be used. */
/* #undef gmtime */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for MacOS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to rpl_localtime if the replacement function should be used. */
/* #undef localtime */

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to rpl_re_comp if the replacement should be used. */
/* #undef re_comp */

/* Define to rpl_re_compile_fastmap if the replacement should be used. */
/* #undef re_compile_fastmap */

/* Define to rpl_re_compile_pattern if the replacement should be used. */
/* #undef re_compile_pattern */

/* Define to rpl_re_exec if the replacement should be used. */
/* #undef re_exec */

/* Define to rpl_re_match if the replacement should be used. */
/* #undef re_match */

/* Define to rpl_re_match_2 if the replacement should be used. */
/* #undef re_match_2 */

/* Define to rpl_re_search if the replacement should be used. */
/* #undef re_search */

/* Define to rpl_re_search_2 if the replacement should be used. */
/* #undef re_search_2 */

/* Define to rpl_re_set_registers if the replacement should be used. */
/* #undef re_set_registers */

/* Define to rpl_re_set_syntax if the replacement should be used. */
/* #undef re_set_syntax */

/* Define to rpl_re_syntax_options if the replacement should be used. */
/* #undef re_syntax_options */

/* Define to rpl_regcomp if the replacement should be used. */
/* #undef regcomp */

/* Define to rpl_regerror if the replacement should be used. */
/* #undef regerror */

/* Define to rpl_regexec if the replacement should be used. */
/* #undef regexec */

/* Define to rpl_regfree if the replacement should be used. */
/* #undef regfree */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define as an integer type suitable for memory locations that can be
   accessed atomically even in the presence of asynchnonous signals. */
/* #undef sig_atomic_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED


/* Define as a macro for copying va_list variables. */
/* #undef va_copy */
