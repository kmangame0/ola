/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if the `closedir' function returns void instead of `int'. */
/* #undef CLOSEDIR_VOID */

/* the name of <hash_map> */
#define HASH_MAP_CLASS unordered_map

/* the location of <unordered_map> or <hash_map> */
#define HASH_MAP_H <unordered_map>

/* the namespace of hash_map/hash_set */
#define HASH_NAMESPACE std

/* the name of <hash_set> */
#define HASH_SET_CLASS unordered_set

/* the location of <unordered_set> or <hash_set> */
#define HASH_SET_H <unordered_set>

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define to 1 if you have the <asm/termios.h> header file. */
/* #undef HAVE_ASM_TERMIOS_H */

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Defined to use Avahi */
/* #undef HAVE_AVAHI */

/* Define to 1 if you have the <bits/sockaddr.h> header file. */
/* #undef HAVE_BITS_SOCKADDR_H */

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if you have the declaration of `MSG_NOSIGNAL', and to 0 if you
   don't. */
#define HAVE_DECL_MSG_NOSIGNAL 0

/* Define to 1 if you have the declaration of `NET_RT_DUMP', and to 0 if you
   don't. */
#define HAVE_DECL_NET_RT_DUMP 1

/* Define to 1 if you have the declaration of `PF_ROUTE', and to 0 if you
   don't. */
#define HAVE_DECL_PF_ROUTE 1

/* Define to 1 if you have the declaration of `res_ninit', and to 0 if you
   don't. */
#define HAVE_DECL_RES_NINIT 1

/* Define to 1 if you have the declaration of `RLIMIT_RTPRIO', and to 0 if you
   don't. */
#define HAVE_DECL_RLIMIT_RTPRIO 0

/* Define to 1 if you have the declaration of `RLIMIT_RTTIME', and to 0 if you
   don't. */
#define HAVE_DECL_RLIMIT_RTTIME 0

/* Define to 1 if you have the declaration of `SO_NOSIGPIPE', and to 0 if you
   don't. */
#define HAVE_DECL_SO_NOSIGPIPE 1

/* Define to 1 if you have the declaration of `SO_REUSEADDR', and to 0 if you
   don't. */
#define HAVE_DECL_SO_REUSEADDR 1

/* Define to 1 if you have the declaration of `SO_REUSEPORT', and to 0 if you
   don't. */
#define HAVE_DECL_SO_REUSEPORT 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* define if dmx4linux is installed */
/* #undef HAVE_DMX4LINUX */

/* Defined to use Bonjour DNS_SD */
#define HAVE_DNSSD 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Defined if epoll exists */
/* #undef HAVE_EPOLL */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `getgrgid_r' function. */
#define HAVE_GETGRGID_R 1

/* Define to 1 if you have the `getgrnam_r' function. */
#define HAVE_GETGRNAM_R 1

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the `getloadavg' function. */
#define HAVE_GETLOADAVG 1

/* Define to 1 if you have the `getpwnam_r' function. */
#define HAVE_GETPWNAM_R 1

/* Define to 1 if you have the `getpwuid_r' function. */
#define HAVE_GETPWUID_R 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* define if the compiler has hash_map */
#define HAVE_HASH_MAP 1

/* define if the compiler has hash_set */
#define HAVE_HASH_SET 1

/* Define to 1 if you have the `if_nametoindex' function. */
#define HAVE_IF_NAMETOINDEX 1

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define to 1 if you have the `inet_ntoa' function. */
#define HAVE_INET_NTOA 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `kqueue' function. */
#define HAVE_KQUEUE 1

/* define if libftdi is installed */
/* #undef HAVE_LIBFTDI */

/* define if liblo is installed */
#define HAVE_LIBLO 1

/* define if libmicrohttpd is installed */
#define HAVE_LIBMICROHTTPD 1

/* define if libusb is installed */
#define HAVE_LIBUSB 1

/* define if libusb is installed and has libusb_error_name */
#define HAVE_LIBUSB_ERROR_NAME 1

/* define if libusb is installed and the libusb */
#define HAVE_LIBUSB_HOTPLUG_API 1

/* Define to 1 if you have the `uuid' library (-luuid). */
/* #undef HAVE_LIBUUID */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/if_packet.h> header file. */
/* #undef HAVE_LINUX_IF_PACKET_H */

/* Define to 1 if you have the <linux/netlink.h> header file. */
/* #undef HAVE_LINUX_NETLINK_H */

/* Define to 1 if you have the <linux/rtnetlink.h> header file. */
/* #undef HAVE_LINUX_RTNETLINK_H */

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `MHD_create_response_from_buffer' function. */
#define HAVE_MHD_CREATE_RESPONSE_FROM_BUFFER 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/if_ether.h> header file. */
#define HAVE_NETINET_IF_ETHER_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <net/ethernet.h> header file. */
#define HAVE_NET_ETHERNET_H 1

/* Define to 1 if you have the <net/if_arp.h> header file. */
#define HAVE_NET_IF_ARP_H 1

/* Define to 1 if you have the <net/if_ether.h> header file. */
/* #undef HAVE_NET_IF_ETHER_H */

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <net/route.h> header file. */
#define HAVE_NET_ROUTE_H 1

/* Define to 1 if you have the <ossp/uuid.h> header file. */
/* #undef HAVE_OSSP_UUID_H */

/* Define if you have POSIX threads libraries and header files. */
/* #undef HAVE_PTHREAD */

/* Define to 1 if you have the <pthread_np.h> header file. */
/* #undef HAVE_PTHREAD_NP_H */

/* 1-arg pthread_setname_np */
#define HAVE_PTHREAD_SETNAME_NP_1 1

/* 2-arg pthread_setname_np */
/* #undef HAVE_PTHREAD_SETNAME_NP_2 */

/* 3-arg pthread_setname_np */
/* #undef HAVE_PTHREAD_SETNAME_NP_3 */

/* 2-arg pthread_set_name_np */
/* #undef HAVE_PTHREAD_SET_NAME_NP_2 */

/* Define to 1 if you have the <random> header file. */
#define HAVE_RANDOM 1

/* Define to 1 if your system has a GNU libc compatible `realloc' function,
   and to 0 otherwise. */
#define HAVE_REALLOC 1

/* Define to 1 if you have the <resolv.h> header file. */
#define HAVE_RESOLV_H 1

/* Define to 1 if you have the <SaleaeDeviceApi.h> header file. */
/* #undef HAVE_SALEAEDEVICEAPI_H */

/* Define to 1 if you have the `secure_getenv' function. */
/* #undef HAVE_SECURE_GETENV */

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* define if we have sockaddr_dl */
#define HAVE_SOCKADDR_DL_STRUCT 1

/* Define if socket address structures have length fields */
#define HAVE_SOCKADDR_SA_LEN 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_STAT_EMPTY_STRING_BUG */

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* define if we have suseconds_t */
#define HAVE_SUSECONDS_T 1

/* Define to 1 if you have the <sysexits.h> header file. */
#define HAVE_SYSEXITS_H 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/timeb.h> header file. */
#define HAVE_SYS_TIMEB_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* define if we have termios2 */
/* #undef HAVE_TERMIOS2 */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* define if we have time_t */
#define HAVE_TIME_T 1

/* define if native UART support exists */
/* #undef HAVE_UART */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* define if the hash_map class is unordered_map */
#define HAVE_UNORDERED_MAP 1

/* Define to 1 if you have the <uuid/uuid.h> header file. */
#define HAVE_UUID_UUID_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* Define to 1 if the system supports IPv6 */
/* #undef IPV6 */

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Defined if olad is allowed to run as root */
/* #undef OLAD_SKIP_ROOT_CHECK */

/* Name of package */
#define PACKAGE "ola"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "open-lighting@googlegroups.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "OLA"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "OLA 0.10.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ola"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.10.0"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to the type of arg 1 for `select'. */
#define SELECT_TYPE_ARG1 int

/* Define to the type of args 2, 3 and 4 for `select'. */
#define SELECT_TYPE_ARG234 (fd_set *)

/* Define to the type of arg 5 for `select'. */
#define SELECT_TYPE_ARG5 (struct timeval *)

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* define if artnet is to be used */
#define USE_ARTNET 1

/* define if dmx4linux is to be used */
/* #undef USE_DMX4LINUX */

/* define if dummy is to be used */
#define USE_DUMMY 1

/* define if e131 is to be used */
#define USE_E131 1

/* define if espnet is to be used */
#define USE_ESPNET 1

/* define if ftdidmx is to be used */
/* #undef USE_FTDI */

/* define if gpio is to be used */
#define USE_GPIO 1

/* define if karate is to be used */
#define USE_KARATE 1

/* define if kinet is to be used */
#define USE_KINET 1

/* define if usbdmx is to be used */
#define USE_LIBUSB 1

/* define if milinst is to be used */
#define USE_MILINST 1

/* define if opendmx is to be used */
#define USE_OPENDMX 1

/* define if openpixelcontrol is to be used */
#define USE_OPENPIXELCONTROL 1

/* define if osc is to be used */
#define USE_OSC 1

/* Defined if we should use the ossp uuid lib */
/* #undef USE_OSSP_UUID */

/* define if pathport is to be used */
#define USE_PATHPORT 1

/* define if renard is to be used */
#define USE_RENARD 1

/* define if sandnet is to be used */
#define USE_SANDNET 1

/* define if shownet is to be used */
#define USE_SHOWNET 1

/* define if spi is to be used */
/* #undef USE_SPI */

/* define if stageprofi is to be used */
#define USE_STAGEPROFI 1

/* define if uartdmx is to be used */
/* #undef USE_UART */

/* define if usbpro is to be used */
#define USE_USBPRO 1

/* Define to the path of the UUCP lock directory */
#define UUCP_LOCK_DIR "/tmp"

/* Version number of package */
#define VERSION "0.10.0"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to rpl_realloc if the replacement function should be used. */
/* #undef realloc */

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

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */
