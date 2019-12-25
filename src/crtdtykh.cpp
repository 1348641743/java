
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    "crtdtykh.pc"
};


static unsigned int sqlctx = 151211;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned char  *sqhstv[1];
   unsigned long  sqhstl[1];
            int   sqhsts[1];
            short *sqindv[1];
            int   sqinds[1];
   unsigned long  sqharm[1];
   unsigned long  *sqharc[1];
   unsigned short  sqadto[1];
   unsigned short  sqtdso[1];
} sqlstm = {12,1};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned int *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(unsigned char *, signed int *); }

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,852,0,0,
};


#line 1 "crtdtykh.pc"
typedef long unsigned int size_t;
extern "C" {
union wait
  {
    int w_status;
    struct
      {
 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;
      } __wait_terminated;
    struct
      {
 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;
      } __wait_stopped;
  };

typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;


__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;

extern size_t __ctype_get_mb_cur_max (void) throw () ;

extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;


extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;
extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

typedef struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;
extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;
__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;
__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;
extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;
extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;
extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;
extern char *l64a (long int __n) throw () ;
extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern "C" {
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;

typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __off64_t off64_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;

typedef __clock_t clock_t;



typedef __time_t time_t;


typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));
typedef int register_t __attribute__ ((__mode__ (__word__)));
typedef int __sig_atomic_t;
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;
extern "C" {
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
}
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw ();
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long int pthread_t;
typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
  } __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
}
extern long int random (void) throw ();
extern void srandom (unsigned int __seed) throw ();
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));
extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int rand (void) throw ();
extern void srand (unsigned int __seed) throw ();

extern int rand_r (unsigned int *__seed) throw ();
extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));
extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;
extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));
extern void free (void *__ptr) throw ();
extern void cfree (void *__ptr) throw ();
extern "C" {
extern void *alloca (size_t __size) throw ();
}
extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern void abort (void) throw () __attribute__ ((__noreturn__));
extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));
extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));
extern void exit (int __status) throw () __attribute__ ((__noreturn__));
extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));
extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));
extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;
extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));
extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));
extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
extern int clearenv (void) throw ();
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int system (__const char *__command) ;
extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;
typedef int (*__compar_fn_t) (__const void *, __const void *);
typedef __compar_fn_t comparison_fn_t;
typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);
extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;
__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;
extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;
__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int mblen (__const char *__s, size_t __n) throw () ;
extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;
extern int wctomb (char *__s, wchar_t __wchar) throw () ;
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();
extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));
extern int posix_openpt (int __oflag) ;
extern int grantpt (int __fd) throw ();
extern int unlockpt (int __fd) throw ();
extern char *ptsname (int __fd) throw () ;
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));
extern int getpt (void);
extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
}
extern "C" {
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
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
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;
  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn (void *__cookie);
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;
typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;
struct _IO_cookie_file;
extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);
extern "C" {
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();
extern int _IO_peekc_locked (_IO_FILE *__fp);
extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) throw ();
}
typedef __gnuc_va_list va_list;
typedef _G_fpos_t fpos_t;
typedef _G_fpos64_t fpos64_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove (__const char *__filename) throw ();
extern int rename (__const char *__old, __const char *__new) throw ();
extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();
extern FILE *tmpfile (void) ;
extern FILE *tmpfile64 (void) ;
extern char *tmpnam (char *__s) throw () ;
extern char *tmpnam_r (char *__s) throw () ;
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern int fcloseall (void);
extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;
extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, __const char *__modes) throw () ;
extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();
extern void setlinebuf (FILE *__stream) throw ();
extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);
extern int printf (__const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();
extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();
extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;
extern int scanf (__const char *__restrict __format, ...) ;
extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern char *gets (char *__s) ;
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);
extern int puts (__const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);
extern void clearerr (FILE *__stream) throw ();
extern int feof (FILE *__stream) throw () ;
extern int ferror (FILE *__stream) throw () ;
extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
extern void perror (__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
extern int fileno (FILE *__stream) throw () ;
extern int fileno_unlocked (FILE *__stream) throw () ;
extern FILE *popen (__const char *__command, __const char *__modes) ;
extern int pclose (FILE *__stream);
extern char *ctermid (char *__s) throw ();
extern char *cuserid (char *__s);
struct obstack;
extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));
extern void flockfile (FILE *__stream) throw ();
extern int ftrylockfile (FILE *__stream) throw () ;
extern void funlockfile (FILE *__stream) throw ();
}
extern "C" {
extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));
extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
}
extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
        __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
}
extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));
extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
           __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));
extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) throw ();
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) throw ();
extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern int ffs (int __i) throw () __attribute__ ((__const__));
extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));
extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) throw ();
extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));
extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
}
extern "C" {
typedef float float_t;
typedef double double_t;
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();
extern double asin (double __x) throw (); extern double __asin (double __x) throw ();
extern double atan (double __x) throw (); extern double __atan (double __x) throw ();
extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();
extern double cos (double __x) throw (); extern double __cos (double __x) throw ();
extern double sin (double __x) throw (); extern double __sin (double __x) throw ();
extern double tan (double __x) throw (); extern double __tan (double __x) throw ();
extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();
extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();
extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();
extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();
extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();
extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();
extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();
extern double exp (double __x) throw (); extern double __exp (double __x) throw ();
extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();
extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();
extern double log (double __x) throw (); extern double __log (double __x) throw ();
extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();
extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ();
extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();
extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();
extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();
extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();
extern double logb (double __x) throw (); extern double __logb (double __x) throw ();
extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();
extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();
extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();
extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();
extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));
extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));
extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));
extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();
extern int __isinf (double __value) throw () __attribute__ ((__const__));
extern int __finite (double __value) throw () __attribute__ ((__const__));
extern int isinf (double __value) throw () __attribute__ ((__const__));
extern int finite (double __value) throw () __attribute__ ((__const__));
extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();
extern double significand (double __x) throw (); extern double __significand (double __x) throw ();
extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));
extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));
extern int __isnan (double __value) throw () __attribute__ ((__const__));
extern int isnan (double __value) throw () __attribute__ ((__const__));
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();
extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();
extern double tgamma (double) throw (); extern double __tgamma (double) throw ();
extern double gamma (double) throw (); extern double __gamma (double) throw ();
extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();
extern double rint (double __x) throw (); extern double __rint (double __x) throw ();
extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));
extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));
extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();
extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();
extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();
extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();
extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();
extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));
extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();
extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();
extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();
extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();
extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();
extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));
extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();
extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();
extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();
extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();
extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();
extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();
extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();
extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();
extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();
extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();
extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();
extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();
extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();
extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();
extern float expf (float __x) throw (); extern float __expf (float __x) throw ();
extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();
extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();
extern float logf (float __x) throw (); extern float __logf (float __x) throw ();
extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();
extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ();
extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();
extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();
extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();
extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();
extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();
extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();
extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();
extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();
extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();
extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));
extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));
extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));
extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();
extern int __isinff (float __value) throw () __attribute__ ((__const__));
extern int __finitef (float __value) throw () __attribute__ ((__const__));
extern int isinff (float __value) throw () __attribute__ ((__const__));
extern int finitef (float __value) throw () __attribute__ ((__const__));
extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();
extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();
extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));
extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));
extern int __isnanf (float __value) throw () __attribute__ ((__const__));
extern int isnanf (float __value) throw () __attribute__ ((__const__));
extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();
extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();
extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();
extern float gammaf (float) throw (); extern float __gammaf (float) throw ();
extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();
extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();
extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));
extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));
extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();
extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();
extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();
extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();
extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();
extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));
extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();
extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();
extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();
extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();
extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();
extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));
extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();
extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();
extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();
extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();
extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();
extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();
extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();
extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();
extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();
extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();
extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();
extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();
extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();
extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();
extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();
extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();
extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();
extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();
extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();
extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ();
extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();
extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();
extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();
extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();
extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();
extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();
extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();
extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();
extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();
extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));
extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));
extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();
extern int __isinfl (long double __value) throw () __attribute__ ((__const__));
extern int __finitel (long double __value) throw () __attribute__ ((__const__));
extern int isinfl (long double __value) throw () __attribute__ ((__const__));
extern int finitel (long double __value) throw () __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();
extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();
extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));
extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));
extern int __isnanl (long double __value) throw () __attribute__ ((__const__));
extern int isnanl (long double __value) throw () __attribute__ ((__const__));
extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();
extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();
extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();
extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();
extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();
extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();
extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));
extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));
extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();
extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();
extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();
extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();
extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();
extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));
extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();
extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();
extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();
extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();
extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();
extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));
extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
extern int signgam;
enum
  {
    FP_NAN,
    FP_INFINITE,
    FP_ZERO,
    FP_SUBNORMAL,
    FP_NORMAL
  };
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;
extern _LIB_VERSION_TYPE _LIB_VERSION;
struct __exception
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };
extern int matherr (struct __exception *__exc) throw ();
}
extern "C" {
struct stat
  {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long int __unused[3];
  };
struct stat64
  {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long int __unused[3];
  };
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int fstat (int __fd, struct stat *__buf) throw () __attribute__ ((__nonnull__ (2)));
extern int stat64 (__const char *__restrict __file,
     struct stat64 *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) throw () __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));
extern int fstatat64 (int __fd, __const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int lstat64 (__const char *__restrict __file,
      struct stat64 *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (__const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));
extern int lchmod (__const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));
extern int fchmod (int __fd, __mode_t __mode) throw ();
extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
extern __mode_t umask (__mode_t __mask) throw ();
extern __mode_t getumask (void) throw ();
extern int mkdir (__const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));
extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));
extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     throw () __attribute__ ((__nonnull__ (1)));
extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) throw () __attribute__ ((__nonnull__ (2)));
extern int mkfifo (__const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));
extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));
extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     throw () __attribute__ ((__nonnull__ (2)));
extern int futimens (int __fd, __const struct timespec __times[2]) throw ();
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, __const char *__filename,
        struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, __const char *__filename,
         struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, __const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));
extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) throw () __attribute__ ((__nonnull__ (2, 4)));
extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     throw () __attribute__ ((__nonnull__ (3, 5)));
}
extern "C" {
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));
extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));
extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();
extern int close (int __fd);
extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;
extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;
extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;
extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;
extern int pipe (int __pipedes[2]) throw () ;
extern int pipe2 (int __pipedes[2], int __flags) throw () ;
extern unsigned int alarm (unsigned int __seconds) throw ();
extern unsigned int sleep (unsigned int __seconds);
extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();
extern int usleep (__useconds_t __useconds);
extern int pause (void);
extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;
extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;
extern int fchdir (int __fd) throw () ;
extern char *getcwd (char *__buf, size_t __size) throw () ;
extern char *get_current_dir_name (void) throw ();
extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;
extern int dup (int __fd) throw () ;
extern int dup2 (int __fd, int __fd2) throw ();
extern int dup3 (int __fd, int __fd2, int __flags) throw ();
extern char **__environ;
extern char **environ;
extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));
extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) throw () ;
extern void _exit (int __status) __attribute__ ((__noreturn__));
enum
  {
    _PC_LINK_MAX,
    _PC_MAX_CANON,
    _PC_MAX_INPUT,
    _PC_NAME_MAX,
    _PC_PATH_MAX,
    _PC_PIPE_BUF,
    _PC_CHOWN_RESTRICTED,
    _PC_NO_TRUNC,
    _PC_VDISABLE,
    _PC_SYNC_IO,
    _PC_ASYNC_IO,
    _PC_PRIO_IO,
    _PC_SOCK_MAXBUF,
    _PC_FILESIZEBITS,
    _PC_REC_INCR_XFER_SIZE,
    _PC_REC_MAX_XFER_SIZE,
    _PC_REC_MIN_XFER_SIZE,
    _PC_REC_XFER_ALIGN,
    _PC_ALLOC_SIZE_MIN,
    _PC_SYMLINK_MAX,
    _PC_2_SYMLINKS
  };
enum
  {
    _SC_ARG_MAX,
    _SC_CHILD_MAX,
    _SC_CLK_TCK,
    _SC_NGROUPS_MAX,
    _SC_OPEN_MAX,
    _SC_STREAM_MAX,
    _SC_TZNAME_MAX,
    _SC_JOB_CONTROL,
    _SC_SAVED_IDS,
    _SC_REALTIME_SIGNALS,
    _SC_PRIORITY_SCHEDULING,
    _SC_TIMERS,
    _SC_ASYNCHRONOUS_IO,
    _SC_PRIORITIZED_IO,
    _SC_SYNCHRONIZED_IO,
    _SC_FSYNC,
    _SC_MAPPED_FILES,
    _SC_MEMLOCK,
    _SC_MEMLOCK_RANGE,
    _SC_MEMORY_PROTECTION,
    _SC_MESSAGE_PASSING,
    _SC_SEMAPHORES,
    _SC_SHARED_MEMORY_OBJECTS,
    _SC_AIO_LISTIO_MAX,
    _SC_AIO_MAX,
    _SC_AIO_PRIO_DELTA_MAX,
    _SC_DELAYTIMER_MAX,
    _SC_MQ_OPEN_MAX,
    _SC_MQ_PRIO_MAX,
    _SC_VERSION,
    _SC_PAGESIZE,
    _SC_RTSIG_MAX,
    _SC_SEM_NSEMS_MAX,
    _SC_SEM_VALUE_MAX,
    _SC_SIGQUEUE_MAX,
    _SC_TIMER_MAX,
    _SC_BC_BASE_MAX,
    _SC_BC_DIM_MAX,
    _SC_BC_SCALE_MAX,
    _SC_BC_STRING_MAX,
    _SC_COLL_WEIGHTS_MAX,
    _SC_EQUIV_CLASS_MAX,
    _SC_EXPR_NEST_MAX,
    _SC_LINE_MAX,
    _SC_RE_DUP_MAX,
    _SC_CHARCLASS_NAME_MAX,
    _SC_2_VERSION,
    _SC_2_C_BIND,
    _SC_2_C_DEV,
    _SC_2_FORT_DEV,
    _SC_2_FORT_RUN,
    _SC_2_SW_DEV,
    _SC_2_LOCALEDEF,
    _SC_PII,
    _SC_PII_XTI,
    _SC_PII_SOCKET,
    _SC_PII_INTERNET,
    _SC_PII_OSI,
    _SC_POLL,
    _SC_SELECT,
    _SC_UIO_MAXIOV,
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
    _SC_PII_INTERNET_STREAM,
    _SC_PII_INTERNET_DGRAM,
    _SC_PII_OSI_COTS,
    _SC_PII_OSI_CLTS,
    _SC_PII_OSI_M,
    _SC_T_IOV_MAX,
    _SC_THREADS,
    _SC_THREAD_SAFE_FUNCTIONS,
    _SC_GETGR_R_SIZE_MAX,
    _SC_GETPW_R_SIZE_MAX,
    _SC_LOGIN_NAME_MAX,
    _SC_TTY_NAME_MAX,
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
    _SC_THREAD_KEYS_MAX,
    _SC_THREAD_STACK_MIN,
    _SC_THREAD_THREADS_MAX,
    _SC_THREAD_ATTR_STACKADDR,
    _SC_THREAD_ATTR_STACKSIZE,
    _SC_THREAD_PRIORITY_SCHEDULING,
    _SC_THREAD_PRIO_INHERIT,
    _SC_THREAD_PRIO_PROTECT,
    _SC_THREAD_PROCESS_SHARED,
    _SC_NPROCESSORS_CONF,
    _SC_NPROCESSORS_ONLN,
    _SC_PHYS_PAGES,
    _SC_AVPHYS_PAGES,
    _SC_ATEXIT_MAX,
    _SC_PASS_MAX,
    _SC_XOPEN_VERSION,
    _SC_XOPEN_XCU_VERSION,
    _SC_XOPEN_UNIX,
    _SC_XOPEN_CRYPT,
    _SC_XOPEN_ENH_I18N,
    _SC_XOPEN_SHM,
    _SC_2_CHAR_TERM,
    _SC_2_C_VERSION,
    _SC_2_UPE,
    _SC_XOPEN_XPG2,
    _SC_XOPEN_XPG3,
    _SC_XOPEN_XPG4,
    _SC_CHAR_BIT,
    _SC_CHAR_MAX,
    _SC_CHAR_MIN,
    _SC_INT_MAX,
    _SC_INT_MIN,
    _SC_LONG_BIT,
    _SC_WORD_BIT,
    _SC_MB_LEN_MAX,
    _SC_NZERO,
    _SC_SSIZE_MAX,
    _SC_SCHAR_MAX,
    _SC_SCHAR_MIN,
    _SC_SHRT_MAX,
    _SC_SHRT_MIN,
    _SC_UCHAR_MAX,
    _SC_UINT_MAX,
    _SC_ULONG_MAX,
    _SC_USHRT_MAX,
    _SC_NL_ARGMAX,
    _SC_NL_LANGMAX,
    _SC_NL_MSGMAX,
    _SC_NL_NMAX,
    _SC_NL_SETMAX,
    _SC_NL_TEXTMAX,
    _SC_XBS5_ILP32_OFF32,
    _SC_XBS5_ILP32_OFFBIG,
    _SC_XBS5_LP64_OFF64,
    _SC_XBS5_LPBIG_OFFBIG,
    _SC_XOPEN_LEGACY,
    _SC_XOPEN_REALTIME,
    _SC_XOPEN_REALTIME_THREADS,
    _SC_ADVISORY_INFO,
    _SC_BARRIERS,
    _SC_BASE,
    _SC_C_LANG_SUPPORT,
    _SC_C_LANG_SUPPORT_R,
    _SC_CLOCK_SELECTION,
    _SC_CPUTIME,
    _SC_THREAD_CPUTIME,
    _SC_DEVICE_IO,
    _SC_DEVICE_SPECIFIC,
    _SC_DEVICE_SPECIFIC_R,
    _SC_FD_MGMT,
    _SC_FIFO,
    _SC_PIPE,
    _SC_FILE_ATTRIBUTES,
    _SC_FILE_LOCKING,
    _SC_FILE_SYSTEM,
    _SC_MONOTONIC_CLOCK,
    _SC_MULTI_PROCESS,
    _SC_SINGLE_PROCESS,
    _SC_NETWORKING,
    _SC_READER_WRITER_LOCKS,
    _SC_SPIN_LOCKS,
    _SC_REGEXP,
    _SC_REGEX_VERSION,
    _SC_SHELL,
    _SC_SIGNALS,
    _SC_SPAWN,
    _SC_SPORADIC_SERVER,
    _SC_THREAD_SPORADIC_SERVER,
    _SC_SYSTEM_DATABASE,
    _SC_SYSTEM_DATABASE_R,
    _SC_TIMEOUTS,
    _SC_TYPED_MEMORY_OBJECTS,
    _SC_USER_GROUPS,
    _SC_USER_GROUPS_R,
    _SC_2_PBS,
    _SC_2_PBS_ACCOUNTING,
    _SC_2_PBS_LOCATE,
    _SC_2_PBS_MESSAGE,
    _SC_2_PBS_TRACK,
    _SC_SYMLOOP_MAX,
    _SC_STREAMS,
    _SC_2_PBS_CHECKPOINT,
    _SC_V6_ILP32_OFF32,
    _SC_V6_ILP32_OFFBIG,
    _SC_V6_LP64_OFF64,
    _SC_V6_LPBIG_OFFBIG,
    _SC_HOST_NAME_MAX,
    _SC_TRACE,
    _SC_TRACE_EVENT_FILTER,
    _SC_TRACE_INHERIT,
    _SC_TRACE_LOG,
    _SC_LEVEL1_ICACHE_SIZE,
    _SC_LEVEL1_ICACHE_ASSOC,
    _SC_LEVEL1_ICACHE_LINESIZE,
    _SC_LEVEL1_DCACHE_SIZE,
    _SC_LEVEL1_DCACHE_ASSOC,
    _SC_LEVEL1_DCACHE_LINESIZE,
    _SC_LEVEL2_CACHE_SIZE,
    _SC_LEVEL2_CACHE_ASSOC,
    _SC_LEVEL2_CACHE_LINESIZE,
    _SC_LEVEL3_CACHE_SIZE,
    _SC_LEVEL3_CACHE_ASSOC,
    _SC_LEVEL3_CACHE_LINESIZE,
    _SC_LEVEL4_CACHE_SIZE,
    _SC_LEVEL4_CACHE_ASSOC,
    _SC_LEVEL4_CACHE_LINESIZE,
    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
    _SC_RAW_SOCKETS,
    _SC_V7_ILP32_OFF32,
    _SC_V7_ILP32_OFFBIG,
    _SC_V7_LP64_OFF64,
    _SC_V7_LPBIG_OFFBIG,
    _SC_SS_REPL_MAX,
    _SC_TRACE_EVENT_NAME_MAX,
    _SC_TRACE_NAME_MAX,
    _SC_TRACE_SYS_MAX,
    _SC_TRACE_USER_EVENT_MAX,
    _SC_XOPEN_STREAMS,
    _SC_THREAD_ROBUST_PRIO_INHERIT,
    _SC_THREAD_ROBUST_PRIO_PROTECT
  };
enum
  {
    _CS_PATH,
    _CS_V6_WIDTH_RESTRICTED_ENVS,
    _CS_GNU_LIBC_VERSION,
    _CS_GNU_LIBPTHREAD_VERSION,
    _CS_V5_WIDTH_RESTRICTED_ENVS,
    _CS_V7_WIDTH_RESTRICTED_ENVS,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS,
    _CS_LFS_LIBS,
    _CS_LFS_LINTFLAGS,
    _CS_LFS64_CFLAGS,
    _CS_LFS64_LDFLAGS,
    _CS_LFS64_LIBS,
    _CS_LFS64_LINTFLAGS,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
    _CS_XBS5_ILP32_OFF32_LIBS,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LIBS,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
    _CS_XBS5_LP64_OFF64_CFLAGS,
    _CS_XBS5_LP64_OFF64_LDFLAGS,
    _CS_XBS5_LP64_OFF64_LIBS,
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LIBS,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LIBS,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
    _CS_V6_ENV,
    _CS_V7_ENV
  };
extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));
extern long int fpathconf (int __fd, int __name) throw ();
extern long int sysconf (int __name) throw ();
extern size_t confstr (int __name, char *__buf, size_t __len) throw ();
extern __pid_t getpid (void) throw ();
extern __pid_t getppid (void) throw ();
extern __pid_t getpgrp (void) throw ();
extern __pid_t __getpgid (__pid_t __pid) throw ();
extern __pid_t getpgid (__pid_t __pid) throw ();
extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
extern int setpgrp (void) throw ();
extern __pid_t setsid (void) throw ();
extern __pid_t getsid (__pid_t __pid) throw ();
extern __uid_t getuid (void) throw ();
extern __uid_t geteuid (void) throw ();
extern __gid_t getgid (void) throw ();
extern __gid_t getegid (void) throw ();
extern int getgroups (int __size, __gid_t __list[]) throw () ;
extern int group_member (__gid_t __gid) throw ();
extern int setuid (__uid_t __uid) throw ();
extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();
extern int seteuid (__uid_t __uid) throw ();
extern int setgid (__gid_t __gid) throw ();
extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();
extern int setegid (__gid_t __gid) throw ();
extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();
extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();
extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();
extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();
extern __pid_t fork (void) throw ();
extern __pid_t vfork (void) throw ();
extern char *ttyname (int __fd) throw ();
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;
extern int isatty (int __fd) throw ();
extern int ttyslot (void) throw ();
extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;
extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;
extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;
extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;
extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;
extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;
extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));
extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));
extern __pid_t tcgetpgrp (int __fd) throw ();
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();
extern char *getlogin (void);
extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));
extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
extern "C" {
extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
}
extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));
extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int sethostid (long int __id) throw () ;
extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int vhangup (void) throw ();
extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;
extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));
extern int acct (__const char *__name) throw ();
extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();
extern int daemon (int __nochdir, int __noclose) throw () ;
extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;
extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
extern int fsync (int __fd);
extern long int gethostid (void);
extern void sync (void) throw ();
extern int getpagesize (void) throw () __attribute__ ((__const__));
extern int getdtablesize (void) throw ();
extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) throw () ;
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
extern int brk (void *__addr) throw () ;
extern void *sbrk (intptr_t __delta) throw ();
extern long int syscall (long int __sysno, ...) throw ();
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
extern int fdatasync (int __fildes);
extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void encrypt (char *__block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));
extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *ctermid (char *__s) throw ();
}
class CBASE
{
  public:
   int RmSpace(char *target);
   int CmpStr(const char *cs,const char *ct);
   int CmpnStr(const char *cs,const char *ct,int count);
   int RmASpace(char *target);
   int RmLSpace(char *target);
   int RmRSpace(char *target);
   int DateToChn(char *date1, char *year, char *month, char *day);
   int RmCtrl(char *target);
   int GetDate(char *str);
   int GetTime(long *pTime);
   int GetIntTime(long *pIntTime);
   int GetLongDate(long *pldate);
   int GetStrDate(char *str);
   int GetStrDateTime(char *pStrDateTime);
   int GetStrDateAndTime(char *pStrDateTime);
   int GetStrTime(char *pStrTime);
   int GetStampTime(long lOldTime,long *pTime);
   int aps_rleapyear(int year);
         int aps_rmdyjul(short mdy[3], long *jdate);
         int aps_rjulmdy(long jdate, short mdy[3]);
         int aps_rfmtdate(long jdate, char *fmt, char *str);
         int aps_rdefmtdate(long *jdate, char *fmt, char *str);
         int aps_rfmtstr(char *num, char *fmt, char *obj);
         int aps_rfmtlong(long lng, char *fmt, char *obj);
         int aps_rfmtdouble(double dbv, char *fmt, char *obj);
         int aps_risnull(int type,char *cvar);
         int aps_dbltoasc(double from, char *to,int len,int rt);
         int aps_dbltrunc(double *dec,int scale);
         int aps_dblround(double *dec,int scale);
         int aps_rdayofweek(long jdate);
   int MoneyCtoE(double InTRAM,char *OutTRAM);
   int MoneyLtoU(double dTRAM,char *outstr);
   int CrtMoney(double InTRAM,char *OutTRAM);
   int Hex2Asc(char *Hex, char *asc, int HexLen);
};
namespace
{
 CBASE cbase;
}
class CDB
{
 public:
   int iOpen(char *dbname);
   int iClose(void);
   int _Conn(void);
   int GetSid(int *pSid);
   void DisConn(void);
   void DisConn1(void);
   int GetDBNum(void);
   int SetDBNum(int iCode);
   void CommitWork(void);
   void RolllBackWork(void);
   int BeginWork(void);
   int GetMinNo(long *lXuHao);
   int iCheckConStat(void);
};
namespace
{
 CDB cdb;
}
class GRD
{
 public:
   int iCrt(char *aczName);
   int iPut(char *formname,short recordno,char *fldname,void *value);
   int iWrt(char *formname,short recordno,char *fldname,void *value);
   int iGet(char *formname,short recordno,char *fldname,void *value);
   int iRead(char *formname,short recordno,char *fldname,void *value);
   int GetRcdNum(char *aczObjName,char *aczFormName,short *psRcdNo);
   int RecNo(char *formname,short *num);
   int iPutFeed(char *aczObjName,char *aczUnitName,short sRcdNo);
   int iPutFeedPage(char *aczObjName,char *aczUnitName,short sRcdNo,short sLine);
   int iPutLine(char *aczObjName,char *aczFormName,short sRcdNo);
   int iGetRcdNo(char *formname,short *num);
};
class OBJ
{
 public:
   int Read(char *aczObjName,char *aczFormName,short sRcdNo,char *aczFldName,void *pbyValue);
   int iGet(char *aczObjName,char *aczFormName,short sRcdNo,char *aczFldName,void *pbyValue);
   int iPut(char *aczObjName,char *aczFormName,short sRcdNo,char *aczFldName,void *pbyValue);
   int iWrt(char *aczObjName,char *aczFormName,short sRcdNo,char *aczFldName,void *pbyValue);
   int GetTrnFLD(int iType,char *pJIOYRQ,char *pGUIYLS,int iIoType,char *pObjName,char *pFieldName,void *pData);
   int iSetStat(char *aczName,char cStatus);
   int iSetPost(char *aczName,char cStatus);
   int iPutPos(char *aczObjName,char *aczUnitName,short sRow,short sCol);
   int iGetPos(char *aczObjName,char *aczUnitName,short *psRow,short *psCol);
   int iCrt(char *aczName);
   int LoadByBuf(char *sObjName,char *pBuff,int iBuffLen);
 public:
   GRD grd;
};
class CDATA
{
    public:
  int iRunTran(char *pFaredm,char *pTranCode,int iOutLen,void *pstOut,int iInLen,void *pstIn);
};
class CIO
{
 public:
   int PutHzh(char *fmt, ...);
 public:
   OBJ obj;
   CDATA cdata;
};
namespace
{
 CIO io;
}
class CLOG {
 public:
   int Tlog(int iLogLevel,char *strFile,int line,char *sFmt,...);
   void vTHex(const int iLogFlag,const char *pData,const int iLen);
};
namespace
{
 CLOG clog;
}
class CSYS
{
 public:
   int SqlDiv(void);
};
namespace
{
 CSYS csys;
}
class WARN
{
    public:
         void InitAppMsg(void);
         int Report(char *FileName,int iLine,char *warnmsg);
         int Msg( char *FileName,int iLine,char *errid,...);
         int iClr(void);
         int Clr(void);
         int Read( char *errmsg);
         unsigned short WrtObj(unsigned short sOutPos,char *aczOutput);
};
class CERR
{
 public:
  int Read(char *errmgid,char *errmsg);
  int Msg(char *FileName,int iLine,char *errid,...);
  int RnTHMsg(char *FileName,int iLine,char *errid,...);
  int Get(char *errmgid,char *errmsg);
  int ClrTh(void);
        int Clr(void);
  void InitThMsg(void);
  int retMsg( char *errid, char *fmt,...);
  WARN warn;
};
namespace
{
 CERR err;
}
class PDA
{
 public:
  int iLINE;
  char sFILE[100];
  char sFUNC[100];
 public:
   int TranGet(char *aczName,void *pbyValue);
   int TranPut(char *aczName,void *pbyValue);
   int ComGet(char* aczName,void* pbyValue);
   int ComPut(char* aczName,void* pbyValue);
   int SysPut(char *aczName,unsigned char *cValue);
   int SysGet(char *aczName,unsigned char *pcValue);
};
namespace
{
 PDA pda;
}
class CHASHTBL
{
  public:
   char *getDDTitle(char *pDDName);
   char getDDType(char *pDDName);
};
class PUB
{
 public:
  CHASHTBL hashtbl;
};
namespace
{
 PUB pub;
}
class Cyyth
{
 public:
  int TCrtListFile(char *sSourceFile, char *sObjectFile);
  int TGetFldNum(char *sstr, char *sdel, int *inum);
  int TPrintSysTime(char *sMsg);
  int trimchar(char *s, char *chrs);
  int StrToFile(char *filename,char *sBIGSTR);
  int rtrimchar(char *s, char *chrs);
  char *TSWDouble2x(double d, int prec);
  int TSW_2Space(char *s);
  int TSleep(long usec);
  int TStrFld(char* dstr, char* sstr, char* sdel, int fnum);
  int tstrtok(char *Str, char *str, char *delim);
  void TStrToUpper(char* str);
};
namespace {
 Cyyth yyth;
}
class CTRAN
{
    public:
         char *iGetDDZTit(char *aczName);
         char iGetDDType(char *aczName);
   int iRunAsyTsf(char *pFaredm,char *pTranCode,int iOutLen,void *pstOut,int iInLen,void *pstIn);
};
namespace
{
    CTRAN tran;
}
class CSVR
{
    public:
         void InitDaemon(void);
         int ChkArgv(int iFlag,int argc,char **argv);
         int InitTcp(char *ServerName,int ServerPort);
         void vAscToHex(const char *str,unsigned char *hex);
         int Asc2Hex(char *asc,char *Hex,int AscLen);
};
namespace
{
    CSVR csvr;
}
class CTASK1
{
    public:
    public:
         int GetTimerID(long *lTaskID);
         int iReadID(long *lTaskID);
         int iReadClnID(long *lTaskID);
         int iUpdClnStat(long lTaskID,char *Wt);
         int iCheckRun(long iTaskID);
         int iSingOnTer(char *pGUIYDH,char *pYNGYJG,char *pZHNGJG);
         int iSingOffTer(char *pGUIYDH);
         int iReadTer(char *pGUIYDH,char *pYNGYJG);
};
namespace
{
    CTASK1 ctask1;
}
class CL_FRDM
{
 public:
  int Set_BM(char *sjkb_u);
  int Set_FRGXBZ(int flag);
  int Set_GYDH(char *gydh_u);
  int Set_YYJG(char *yyjg_u);
  void Get_FRDM(char *frdm_u);
  void Get_FRGXDM(char *frgxdm);
 protected:
  char sjkb_u[12 +1];
  char gydh_u[10 +1];
  char yyjg_u[9 +1];
  char frdm_u[4 +1];
  char frgxdm[4 +1];
};
namespace
{
 CL_FRDM frdm;
}
#define SQLCA_STORAGE_CLASS extern
/* EXEC SQL include sqlca;
 */ 
#line 1 "/oracle/app/oracle/product/11gR2/dbhome/precomp/public/sqlca.h"
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */

#line 2197 "crtdtykh.pc"
namespace
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2199 "crtdtykh.pc"

 char sFRDM_U_1[4 +1]="9999";
 char sFRDM_U_2[4 +1]="9999";
 char sFRDM_U_3[4 +1]="9999";
/* EXEC SQL END DECLARE SECTION; */ 
#line 2203 "crtdtykh.pc"

}
extern char AUTH_SFBZ_U[1 +1];
extern char AUTH_SQJB_U[1 +1];
extern char AUTH_SOUQFS[1 +1];
extern char AUTH_SQJGJB[1 +1];
extern char AUTH_SQJG_U[9 +1];
extern char AUTH_SQGY_U[10 +1];
extern char AUTH_SFYCSQ[1 +1];
extern char AUTH_OBJNAM[32];
extern long AUTH_XE_COUNT;
extern char AUTH_XE_HBDH_U[16][2 +1];
extern char AUTH_XE_XZBZ_U[16][1 +1];
extern char AUTH_XE_JDBJ_U[16][1 +1];
extern double AUTH_XE_JYJE_U[16];
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2218 "crtdtykh.pc"

typedef struct _TBL_DTYKH
{
  char frdm_u[4 +1];
  char khbh_u[12 +1];
  char zmwjzl[2 +1];
  char zmwjbh[32 +1];
  char khzwm_[200 +1];
  char ywmc_u[200 +1];
  char khjm_u[50 +1];
  char khjp_u[20 +1];
  char cym_uu[200 +1];
  char khcyym[200 +1];
  char dzdm_u[2 +1];
  char gbdm_u[3 +1];
  char sdm_uu[6 +1];
  char shidm_[6 +1];
  char xdm_uu[6 +1];
  char clrq_u[8 +1];
  char ksrq_u[8 +1];
  char jsrq_u[8 +1];
  char njrq_u[8 +1];
  char zczjbz[2 +1];
  double zczj_u;
  double sszb_u;
  char pzjgbh[12 +1];
  char zgbmh_[12 +1];
  char sfrkhh[12 +1];
  char kggdkh[12 +1];
  char frdbkh[12 +1];
  char dszkhh[12 +1];
  char jszkhh[12 +1];
  char dmkhh_[12 +1];
  char zjlkhh[12 +1];
  char cwzkhh[12 +1];
  char zcdzbh[32 +1];
  char zcywdz[32 +1];
  char yydzbh[32 +1];
  char yyywdz[32 +1];
  char bgdhbh[32 +1];
  char czdhbh[32 +1];
  char cwdhbh[32 +1];
  char dzyjbh[32 +1];
  char syzlx_[3 +1];
  char zuzxz_[4 +1];
  char hydm_u[7 +1];
  char zxqyhy[7 +1];
  char qyls_u[2 +1];
  char frbz_u[1 +1];
  char kjzzlx[1 +1];
  char sjbz_u[1 +1];
  char sjyj_u[1 +1];
  char nsrgm_[1 +1];
  char nsqk_u[2 +1];
  char qygmsb[2 +1];
  char qygmrh[2 +1];
  char qygmhn[2 +1];
  char jycdsy[2 +1];
  double jycdmj;
  long qyrs_u;
  double xse_uu;
  char jyfs_u[1 +1];
  char jyzt3_[2 +1];
  char hnkhbz[1 +1];
  char jtkhbz[1 +1];
  char jtsxbz[1 +1];
  char jckqbz[1 +1];
  char ssqybz[1 +1];
  char yqhzbz[1 +1];
  char hbdbbz[1 +1];
  char zzgkhb[1 +1];
  char smfrbz[1 +1];
  char khjglx[6 +1];
  char khzdlx[2 +1];
  char khlb_u[5 +1];
  char jiglx_[4 +1];
  char qygm_u[1 +1];
  char zcgm_u[1 +1];
  char yggm_u[1 +1];
  char jkgm_u[1 +1];
  char ckgm_u[1 +1];
  char nxsgm_[1 +1];
  char dwmyjy[1 +1];
  char qywgdm[6 +1];
  char szsbbs[1 +1];
  char tsjjql[2 +1];
  char qysx_u[2 +1];
  char iso900[1 +1];
  char iso140[1 +1];
  char jssp_u[1 +1];
  char gmjjbm[3 +1];
  char tsjjlx[2 +1];
  char khbchy[2 +1];
  char cyjgtz[4 +1];
  char sfgyzx[1 +1];
  char zlxxcy[4 +1];
  char gtlqy_[1 +1];
  char sfgldw[1 +1];
  char gxbs_u[1 +1];
  char sfcszd[1 +1];
  char hbdh_u[2 +1];
  char sfkhcx[1 +1];
  char sfsmkh[1 +1];
  char sfdjbz[1 +1];
  char sfswbz[1 +1];
  char sfhcbz[1 +1];
  char ywfyj_[1 +1];
  char khsdbz[1 +1];
  char khqcbz[1 +1];
  char hmdbz_[1 +1];
  char huimdb[1 +1];
  char wgbz_u[1 +1];
  char khyxzt[2 +1];
  char khzt_u[1 +1];
  char shnxrq[8 +1];
  char sckhrq[8 +1];
  char scdkrq[8 +1];
  char khfwjb[1 +1];
  char khjzxx[40 +1];
  char wwktyw[20 +1];
  char khxxly[1 +1];
  char biccod[11 +1];
  char swiftd[300 +1];
  char jhhh_u[12 +1];
  char lhhh_u[12 +1];
  char xtnwlm[20 +1];
  char jshkhh[12 +1];
  char jshmc_[60 +1];
  char jshdz_[300 +1];
  char khjszh[50 +1];
  char fwddaq[9 +1];
  char cpabaq[4 +1];
  char chuidq[6 +1];
  char qybzbm[1 +1];
  char tyjgdm[62 +1];
  long jrjgyj;
  char sfcsfd[1 +1];
  char sfxedk[1 +1];
  char gsjg_u[9 +1];
  char zbjg_u[9 +1];
  char zbjlbh[10 +1];
  char xdjg_u[9 +1];
  char xdjlbh[10 +1];
  char yxjg_u[9 +1];
  char yxr_uu[10 +1];
  char bm_uuu[2 +1];
  char jgh_uu[9 +1];
  char sybbh_[9 +1];
  char bzxx_u[200 +1];
  char bybz1_[1 +1];
  char bybz2_[1 +1];
  char byzd4w[4 +1];
  char byzd40[40 +1];
  char ylzd1_[50 +1];
  char byzd1_[200 +1];
  char byzd4_[120 +1];
  char scjyr_[8 +1];
  char khrq_u[8 +1];
  long khsj_u;
  char khgyls[20 +1];
  char khjg_u[9 +1];
  char khgy_u[10 +1];
  char sqgy_u[10 +1];
  char fqqd_u[3 +1];
  char whrq_u[8 +1];
  long whsj_u;
  char whgyls[20 +1];
  char whjg_u[9 +1];
  char whgy_u[10 +1];
  char whsqgy[10 +1];
  char whqd_u[3 +1];
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DTYKH TBL_DTYKH;
/* EXEC SQL END DECLARE SECTION; */ 
#line 2393 "crtdtykh.pc"

typedef struct _DTYKH_UPDFLAG
{
 int FRDM_U_FLAG;
 int KHBH_U_FLAG;
 int ZMWJZL_FLAG;
 int ZMWJBH_FLAG;
 int KHZWM__FLAG;
 int YWMC_U_FLAG;
 int KHJM_U_FLAG;
 int KHJP_U_FLAG;
 int CYM_UU_FLAG;
 int KHCYYM_FLAG;
 int DZDM_U_FLAG;
 int GBDM_U_FLAG;
 int SDM_UU_FLAG;
 int SHIDM__FLAG;
 int XDM_UU_FLAG;
 int CLRQ_U_FLAG;
 int KSRQ_U_FLAG;
 int JSRQ_U_FLAG;
 int NJRQ_U_FLAG;
 int ZCZJBZ_FLAG;
 int ZCZJ_U_FLAG;
 int SSZB_U_FLAG;
 int PZJGBH_FLAG;
 int ZGBMH__FLAG;
 int SFRKHH_FLAG;
 int KGGDKH_FLAG;
 int FRDBKH_FLAG;
 int DSZKHH_FLAG;
 int JSZKHH_FLAG;
 int DMKHH__FLAG;
 int ZJLKHH_FLAG;
 int CWZKHH_FLAG;
 int ZCDZBH_FLAG;
 int ZCYWDZ_FLAG;
 int YYDZBH_FLAG;
 int YYYWDZ_FLAG;
 int BGDHBH_FLAG;
 int CZDHBH_FLAG;
 int CWDHBH_FLAG;
 int DZYJBH_FLAG;
 int SYZLX__FLAG;
 int ZUZXZ__FLAG;
 int HYDM_U_FLAG;
 int ZXQYHY_FLAG;
 int QYLS_U_FLAG;
 int FRBZ_U_FLAG;
 int KJZZLX_FLAG;
 int SJBZ_U_FLAG;
 int SJYJ_U_FLAG;
 int NSRGM__FLAG;
 int NSQK_U_FLAG;
 int QYGMSB_FLAG;
 int QYGMRH_FLAG;
 int QYGMHN_FLAG;
 int JYCDSY_FLAG;
 int JYCDMJ_FLAG;
 int QYRS_U_FLAG;
 int XSE_UU_FLAG;
 int JYFS_U_FLAG;
 int JYZT3__FLAG;
 int HNKHBZ_FLAG;
 int JTKHBZ_FLAG;
 int JTSXBZ_FLAG;
 int JCKQBZ_FLAG;
 int SSQYBZ_FLAG;
 int YQHZBZ_FLAG;
 int HBDBBZ_FLAG;
 int ZZGKHB_FLAG;
 int SMFRBZ_FLAG;
 int KHJGLX_FLAG;
 int KHZDLX_FLAG;
 int KHLB_U_FLAG;
 int JIGLX__FLAG;
 int QYGM_U_FLAG;
 int ZCGM_U_FLAG;
 int YGGM_U_FLAG;
 int JKGM_U_FLAG;
 int CKGM_U_FLAG;
 int NXSGM__FLAG;
 int DWMYJY_FLAG;
 int QYWGDM_FLAG;
 int SZSBBS_FLAG;
 int TSJJQL_FLAG;
 int QYSX_U_FLAG;
 int ISO900_FLAG;
 int ISO140_FLAG;
 int JSSP_U_FLAG;
 int GMJJBM_FLAG;
 int TSJJLX_FLAG;
 int KHBCHY_FLAG;
 int CYJGTZ_FLAG;
 int SFGYZX_FLAG;
 int ZLXXCY_FLAG;
 int GTLQY__FLAG;
 int SFGLDW_FLAG;
 int GXBS_U_FLAG;
 int SFCSZD_FLAG;
 int HBDH_U_FLAG;
 int SFKHCX_FLAG;
 int SFSMKH_FLAG;
 int SFDJBZ_FLAG;
 int SFSWBZ_FLAG;
 int SFHCBZ_FLAG;
 int YWFYJ__FLAG;
 int KHSDBZ_FLAG;
 int KHQCBZ_FLAG;
 int HMDBZ__FLAG;
 int HUIMDB_FLAG;
 int WGBZ_U_FLAG;
 int KHYXZT_FLAG;
 int KHZT_U_FLAG;
 int SHNXRQ_FLAG;
 int SCKHRQ_FLAG;
 int SCDKRQ_FLAG;
 int KHFWJB_FLAG;
 int KHJZXX_FLAG;
 int WWKTYW_FLAG;
 int KHXXLY_FLAG;
 int BICCOD_FLAG;
 int SWIFTD_FLAG;
 int JHHH_U_FLAG;
 int LHHH_U_FLAG;
 int XTNWLM_FLAG;
 int JSHKHH_FLAG;
 int JSHMC__FLAG;
 int JSHDZ__FLAG;
 int KHJSZH_FLAG;
 int FWDDAQ_FLAG;
 int CPABAQ_FLAG;
 int CHUIDQ_FLAG;
 int QYBZBM_FLAG;
 int TYJGDM_FLAG;
 int JRJGYJ_FLAG;
 int SFCSFD_FLAG;
 int SFXEDK_FLAG;
 int GSJG_U_FLAG;
 int ZBJG_U_FLAG;
 int ZBJLBH_FLAG;
 int XDJG_U_FLAG;
 int XDJLBH_FLAG;
 int YXJG_U_FLAG;
 int YXR_UU_FLAG;
 int BM_UUU_FLAG;
 int JGH_UU_FLAG;
 int SYBBH__FLAG;
 int BZXX_U_FLAG;
 int BYBZ1__FLAG;
 int BYBZ2__FLAG;
 int BYZD4W_FLAG;
 int BYZD40_FLAG;
 int YLZD1__FLAG;
 int BYZD1__FLAG;
 int BYZD4__FLAG;
 int SCJYR__FLAG;
 int KHRQ_U_FLAG;
 int KHSJ_U_FLAG;
 int KHGYLS_FLAG;
 int KHJG_U_FLAG;
 int KHGY_U_FLAG;
 int SQGY_U_FLAG;
 int FQQD_U_FLAG;
 int WHRQ_U_FLAG;
 int WHSJ_U_FLAG;
 int WHGYLS_FLAG;
 int WHJG_U_FLAG;
 int WHGY_U_FLAG;
 int WHSQGY_FLAG;
 int WHQD_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDdtykh
{
 public:
 int iIDX;
 int iOPER;
 int iSTRU;
 int iLOCK;
 int iJLZT;
 int iEFND;
 int iMUL;
 int iNRSL;
 int iUPDN;
 long lSTART_NO;
 long lFIND_RCD;
 long lSUCC_RCD;
 char sFUNCNAME[1024 + 1];
 char sFILENAME[1024 + 1];
 int iLine;
 char sWhereString[1024 + 1];
 char sFRDM[4 + 1];
 TBL_DTYKH stDTYKH;
 TBL_DTYKH midDTYKH;
 TBL_DTYKH preDTYKH;
 TBL_DTYKH pstDTYKH;
 TBL_DTYKH TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2592 "crtdtykh.pc"

  char dtykh_FRDM_U[4 +1];
  char dtykh_KHBH_U[12 +1];
  char dtykh_ZMWJZL[2 +1];
  char dtykh_ZMWJBH[32 +1];
  char dtykh_KHZWM_[200 +1];
  char dtykh_YWMC_U[200 +1];
  char dtykh_KHJM_U[50 +1];
  char dtykh_KHJP_U[20 +1];
  char dtykh_CYM_UU[200 +1];
  char dtykh_KHCYYM[200 +1];
  char dtykh_DZDM_U[2 +1];
  char dtykh_GBDM_U[3 +1];
  char dtykh_SDM_UU[6 +1];
  char dtykh_SHIDM_[6 +1];
  char dtykh_XDM_UU[6 +1];
  char dtykh_CLRQ_U[8 +1];
  char dtykh_KSRQ_U[8 +1];
  char dtykh_JSRQ_U[8 +1];
  char dtykh_NJRQ_U[8 +1];
  char dtykh_ZCZJBZ[2 +1];
  double dtykh_ZCZJ_U;
  double dtykh_SSZB_U;
  char dtykh_PZJGBH[12 +1];
  char dtykh_ZGBMH_[12 +1];
  char dtykh_SFRKHH[12 +1];
  char dtykh_KGGDKH[12 +1];
  char dtykh_FRDBKH[12 +1];
  char dtykh_DSZKHH[12 +1];
  char dtykh_JSZKHH[12 +1];
  char dtykh_DMKHH_[12 +1];
  char dtykh_ZJLKHH[12 +1];
  char dtykh_CWZKHH[12 +1];
  char dtykh_ZCDZBH[32 +1];
  char dtykh_ZCYWDZ[32 +1];
  char dtykh_YYDZBH[32 +1];
  char dtykh_YYYWDZ[32 +1];
  char dtykh_BGDHBH[32 +1];
  char dtykh_CZDHBH[32 +1];
  char dtykh_CWDHBH[32 +1];
  char dtykh_DZYJBH[32 +1];
  char dtykh_SYZLX_[3 +1];
  char dtykh_ZUZXZ_[4 +1];
  char dtykh_HYDM_U[7 +1];
  char dtykh_ZXQYHY[7 +1];
  char dtykh_QYLS_U[2 +1];
  char dtykh_FRBZ_U[1 +1];
  char dtykh_KJZZLX[1 +1];
  char dtykh_SJBZ_U[1 +1];
  char dtykh_SJYJ_U[1 +1];
  char dtykh_NSRGM_[1 +1];
  char dtykh_NSQK_U[2 +1];
  char dtykh_QYGMSB[2 +1];
  char dtykh_QYGMRH[2 +1];
  char dtykh_QYGMHN[2 +1];
  char dtykh_JYCDSY[2 +1];
  double dtykh_JYCDMJ;
  long dtykh_QYRS_U;
  double dtykh_XSE_UU;
  char dtykh_JYFS_U[1 +1];
  char dtykh_JYZT3_[2 +1];
  char dtykh_HNKHBZ[1 +1];
  char dtykh_JTKHBZ[1 +1];
  char dtykh_JTSXBZ[1 +1];
  char dtykh_JCKQBZ[1 +1];
  char dtykh_SSQYBZ[1 +1];
  char dtykh_YQHZBZ[1 +1];
  char dtykh_HBDBBZ[1 +1];
  char dtykh_ZZGKHB[1 +1];
  char dtykh_SMFRBZ[1 +1];
  char dtykh_KHJGLX[6 +1];
  char dtykh_KHZDLX[2 +1];
  char dtykh_KHLB_U[5 +1];
  char dtykh_JIGLX_[4 +1];
  char dtykh_QYGM_U[1 +1];
  char dtykh_ZCGM_U[1 +1];
  char dtykh_YGGM_U[1 +1];
  char dtykh_JKGM_U[1 +1];
  char dtykh_CKGM_U[1 +1];
  char dtykh_NXSGM_[1 +1];
  char dtykh_DWMYJY[1 +1];
  char dtykh_QYWGDM[6 +1];
  char dtykh_SZSBBS[1 +1];
  char dtykh_TSJJQL[2 +1];
  char dtykh_QYSX_U[2 +1];
  char dtykh_ISO900[1 +1];
  char dtykh_ISO140[1 +1];
  char dtykh_JSSP_U[1 +1];
  char dtykh_GMJJBM[3 +1];
  char dtykh_TSJJLX[2 +1];
  char dtykh_KHBCHY[2 +1];
  char dtykh_CYJGTZ[4 +1];
  char dtykh_SFGYZX[1 +1];
  char dtykh_ZLXXCY[4 +1];
  char dtykh_GTLQY_[1 +1];
  char dtykh_SFGLDW[1 +1];
  char dtykh_GXBS_U[1 +1];
  char dtykh_SFCSZD[1 +1];
  char dtykh_HBDH_U[2 +1];
  char dtykh_SFKHCX[1 +1];
  char dtykh_SFSMKH[1 +1];
  char dtykh_SFDJBZ[1 +1];
  char dtykh_SFSWBZ[1 +1];
  char dtykh_SFHCBZ[1 +1];
  char dtykh_YWFYJ_[1 +1];
  char dtykh_KHSDBZ[1 +1];
  char dtykh_KHQCBZ[1 +1];
  char dtykh_HMDBZ_[1 +1];
  char dtykh_HUIMDB[1 +1];
  char dtykh_WGBZ_U[1 +1];
  char dtykh_KHYXZT[2 +1];
  char dtykh_KHZT_U[1 +1];
  char dtykh_SHNXRQ[8 +1];
  char dtykh_SCKHRQ[8 +1];
  char dtykh_SCDKRQ[8 +1];
  char dtykh_KHFWJB[1 +1];
  char dtykh_KHJZXX[40 +1];
  char dtykh_WWKTYW[20 +1];
  char dtykh_KHXXLY[1 +1];
  char dtykh_BICCOD[11 +1];
  char dtykh_SWIFTD[300 +1];
  char dtykh_JHHH_U[12 +1];
  char dtykh_LHHH_U[12 +1];
  char dtykh_XTNWLM[20 +1];
  char dtykh_JSHKHH[12 +1];
  char dtykh_JSHMC_[60 +1];
  char dtykh_JSHDZ_[300 +1];
  char dtykh_KHJSZH[50 +1];
  char dtykh_FWDDAQ[9 +1];
  char dtykh_CPABAQ[4 +1];
  char dtykh_CHUIDQ[6 +1];
  char dtykh_QYBZBM[1 +1];
  char dtykh_TYJGDM[62 +1];
  long dtykh_JRJGYJ;
  char dtykh_SFCSFD[1 +1];
  char dtykh_SFXEDK[1 +1];
  char dtykh_GSJG_U[9 +1];
  char dtykh_ZBJG_U[9 +1];
  char dtykh_ZBJLBH[10 +1];
  char dtykh_XDJG_U[9 +1];
  char dtykh_XDJLBH[10 +1];
  char dtykh_YXJG_U[9 +1];
  char dtykh_YXR_UU[10 +1];
  char dtykh_BM_UUU[2 +1];
  char dtykh_JGH_UU[9 +1];
  char dtykh_SYBBH_[9 +1];
  char dtykh_BZXX_U[200 +1];
  char dtykh_BYBZ1_[1 +1];
  char dtykh_BYBZ2_[1 +1];
  char dtykh_BYZD4W[4 +1];
  char dtykh_BYZD40[40 +1];
  char dtykh_YLZD1_[50 +1];
  char dtykh_BYZD1_[200 +1];
  char dtykh_BYZD4_[120 +1];
  char dtykh_SCJYR_[8 +1];
  char dtykh_KHRQ_U[8 +1];
  long dtykh_KHSJ_U;
  char dtykh_KHGYLS[20 +1];
  char dtykh_KHJG_U[9 +1];
  char dtykh_KHGY_U[10 +1];
  char dtykh_SQGY_U[10 +1];
  char dtykh_FQQD_U[3 +1];
  char dtykh_WHRQ_U[8 +1];
  long dtykh_WHSJ_U;
  char dtykh_WHGYLS[20 +1];
  char dtykh_WHJG_U[9 +1];
  char dtykh_WHGY_U[10 +1];
  char dtykh_WHSQGY[10 +1];
  char dtykh_WHQD_U[3 +1];
  long dtykh_SJC_UU;
  char dtykh_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 2763 "crtdtykh.pc"

 struct _DTYKH_UPDFLAG DTYKH_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DTYKH *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DTYKH *stTbl);
  void LOGS(TBL_DTYKH *stTbl);
  void INITD(TBL_DTYKH *stmpTbl);
 private:
  int INS();
  int SEL1();
  int SEL1L();
  int UPD1();
  int DEL1();
  int SEL1R();
  int SEL1LR();
  int UPD1R();
  int DEL1R();
  int SEL2();
  int SEL2L();
  int UPD2();
  int DEL2();
  int SEL2R();
  int SEL2LR();
  int UPD2R();
  int DEL2R();
  void MAC2TMP();
  void TMP2MAC();
  int PRE_UPD();
  void INST2TMP();
  void TMP2OUST();
  int CSEL();
  void INITFLAG();
};
namespace
{
 CDdtykh dtykh;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2808 "crtdtykh.pc"

 char FRDM_DTYKH[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 2810 "crtdtykh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2812 "crtdtykh.pc"

typedef struct _TBL_DZJXX
{
  char frdm_u[4 +1];
  char khbh_u[12 +1];
  char khlx_u[2 +1];
  char khzwm_[200 +1];
  char zjzl_u[2 +1];
  char zjzlms[60 +1];
  char zmwjbh[32 +1];
  char qfrq_u[8 +1];
  char zjyxq_[8 +1];
  char shixrq[8 +1];
  char dqdm_u[4 +1];
  char ssdqdm[6 +1];
  char ssdq_u[40 +1];
  char fzjggj[40 +1];
  char fzjg_u[62 +1];
  char zjdjdz[300 +1];
  char ywdz_u[300 +1];
  char fzh1sm[60 +1];
  char zjfzh1[30 +1];
  char fzh2sm[60 +1];
  char zjfzh2[30 +1];
  char fzh3sm[60 +1];
  char zjfzh3[30 +1];
  char zxxbz_[1 +1];
  char khyxzj[1 +1];
  char bssfzj[1 +1];
  char sm_uuu[128 +1];
  char byzd1_[200 +1];
  char jyrq_u[8 +1];
  long jysj_u;
  char jygy_u[10 +1];
  char jyjg_u[9 +1];
  char sqgy_u[10 +1];
  char gylshm[20 +1];
  char fqqd_u[3 +1];
  char whrq_u[8 +1];
  long whsj_u;
  char whgy_u[10 +1];
  char whjg_u[9 +1];
  char whsqgy[10 +1];
  char whgyls[20 +1];
  char whqd_u[3 +1];
  char scjyr_[8 +1];
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DZJXX TBL_DZJXX;
/* EXEC SQL END DECLARE SECTION; */ 
#line 2862 "crtdtykh.pc"

typedef struct _DZJXX_UPDFLAG
{
 int FRDM_U_FLAG;
 int KHBH_U_FLAG;
 int KHLX_U_FLAG;
 int KHZWM__FLAG;
 int ZJZL_U_FLAG;
 int ZJZLMS_FLAG;
 int ZMWJBH_FLAG;
 int QFRQ_U_FLAG;
 int ZJYXQ__FLAG;
 int SHIXRQ_FLAG;
 int DQDM_U_FLAG;
 int SSDQDM_FLAG;
 int SSDQ_U_FLAG;
 int FZJGGJ_FLAG;
 int FZJG_U_FLAG;
 int ZJDJDZ_FLAG;
 int YWDZ_U_FLAG;
 int FZH1SM_FLAG;
 int ZJFZH1_FLAG;
 int FZH2SM_FLAG;
 int ZJFZH2_FLAG;
 int FZH3SM_FLAG;
 int ZJFZH3_FLAG;
 int ZXXBZ__FLAG;
 int KHYXZJ_FLAG;
 int BSSFZJ_FLAG;
 int SM_UUU_FLAG;
 int BYZD1__FLAG;
 int JYRQ_U_FLAG;
 int JYSJ_U_FLAG;
 int JYGY_U_FLAG;
 int JYJG_U_FLAG;
 int SQGY_U_FLAG;
 int GYLSHM_FLAG;
 int FQQD_U_FLAG;
 int WHRQ_U_FLAG;
 int WHSJ_U_FLAG;
 int WHGY_U_FLAG;
 int WHJG_U_FLAG;
 int WHSQGY_FLAG;
 int WHGYLS_FLAG;
 int WHQD_U_FLAG;
 int SCJYR__FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDdzjxx
{
 public:
 int iIDX;
 int iOPER;
 int iSTRU;
 int iLOCK;
 int iJLZT;
 int iEFND;
 int iMUL;
 int iNRSL;
 int iUPDN;
 long lSTART_NO;
 long lFIND_RCD;
 long lSUCC_RCD;
 char sFUNCNAME[1024 + 1];
 char sFILENAME[1024 + 1];
 int iLine;
 char sWhereString[1024 + 1];
 char sFRDM[4 + 1];
 TBL_DZJXX stDZJXX;
 TBL_DZJXX midDZJXX;
 TBL_DZJXX preDZJXX;
 TBL_DZJXX pstDZJXX;
 TBL_DZJXX TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2936 "crtdtykh.pc"

  char dzjxx_FRDM_U[4 +1];
  char dzjxx_KHBH_U[12 +1];
  char dzjxx_KHLX_U[2 +1];
  char dzjxx_KHZWM_[200 +1];
  char dzjxx_ZJZL_U[2 +1];
  char dzjxx_ZJZLMS[60 +1];
  char dzjxx_ZMWJBH[32 +1];
  char dzjxx_QFRQ_U[8 +1];
  char dzjxx_ZJYXQ_[8 +1];
  char dzjxx_SHIXRQ[8 +1];
  char dzjxx_DQDM_U[4 +1];
  char dzjxx_SSDQDM[6 +1];
  char dzjxx_SSDQ_U[40 +1];
  char dzjxx_FZJGGJ[40 +1];
  char dzjxx_FZJG_U[62 +1];
  char dzjxx_ZJDJDZ[300 +1];
  char dzjxx_YWDZ_U[300 +1];
  char dzjxx_FZH1SM[60 +1];
  char dzjxx_ZJFZH1[30 +1];
  char dzjxx_FZH2SM[60 +1];
  char dzjxx_ZJFZH2[30 +1];
  char dzjxx_FZH3SM[60 +1];
  char dzjxx_ZJFZH3[30 +1];
  char dzjxx_ZXXBZ_[1 +1];
  char dzjxx_KHYXZJ[1 +1];
  char dzjxx_BSSFZJ[1 +1];
  char dzjxx_SM_UUU[128 +1];
  char dzjxx_BYZD1_[200 +1];
  char dzjxx_JYRQ_U[8 +1];
  long dzjxx_JYSJ_U;
  char dzjxx_JYGY_U[10 +1];
  char dzjxx_JYJG_U[9 +1];
  char dzjxx_SQGY_U[10 +1];
  char dzjxx_GYLSHM[20 +1];
  char dzjxx_FQQD_U[3 +1];
  char dzjxx_WHRQ_U[8 +1];
  long dzjxx_WHSJ_U;
  char dzjxx_WHGY_U[10 +1];
  char dzjxx_WHJG_U[9 +1];
  char dzjxx_WHSQGY[10 +1];
  char dzjxx_WHGYLS[20 +1];
  char dzjxx_WHQD_U[3 +1];
  char dzjxx_SCJYR_[8 +1];
  long dzjxx_SJC_UU;
  char dzjxx_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 2982 "crtdtykh.pc"

 struct _DZJXX_UPDFLAG DZJXX_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DZJXX *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DZJXX *stTbl);
  void LOGS(TBL_DZJXX *stTbl);
  void INITD(TBL_DZJXX *stmpTbl);
 private:
  int INS();
  int SEL1();
  int SEL1L();
  int UPD1();
  int DEL1();
  int SEL1R();
  int SEL1LR();
  int UPD1R();
  int DEL1R();
  int SEL2();
  int SEL2L();
  int UPD2();
  int DEL2();
  int SEL2R();
  int SEL2LR();
  int UPD2R();
  int DEL2R();
  int MSEL3();
  int MSEL3R();
  int MSEL4();
  int MSEL4R();
  void MAC2TMP();
  void TMP2MAC();
  int PRE_UPD();
  void INST2TMP();
  void TMP2OUST();
  int CSEL();
  void INITFLAG();
};
namespace
{
 CDdzjxx dzjxx;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3031 "crtdtykh.pc"

 char FRDM_DZJXX[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3033 "crtdtykh.pc"

};
int printDTYKH(TBL_DTYKH stDTYKH,char *sYYJG_U);
int printDZJXX(TBL_DZJXX stDZJXX,char *sYYJG_U);
int main(int argc, char *argv[])
{
 char sFRDM_U[4 +1];
 char sYYJG_U[9 +1];
 int iResult = 0;
 long i=0,j=1;
 TBL_DTYKH stDTYKH;
 TBL_DZJXX stDZJXX;
 memset(sFRDM_U, 0, sizeof(sFRDM_U));
 memset(sYYJG_U, 0, sizeof(sYYJG_U));
 strcpy(sFRDM_U, argv[1]);
 strcpy(sYYJG_U, argv[2]);
 printf("sFRDM_U is [%s], sYYJG_U is [%s]\n", sFRDM_U, sYYJG_U);
    for ( i = 0; i < atol(argv[3]); i++ )
    {
     memset(&stDTYKH, 0, sizeof(stDTYKH));
 memset(&stDZJXX, 0, sizeof(stDZJXX));
 strcpy(stDTYKH.frdm_u, sFRDM_U);
  sprintf(stDTYKH.khbh_u, "00%s%06d",sYYJG_U,j);
  sprintf(stDTYKH.khzwm_, "同业测试客户%s",stDTYKH.khbh_u);
  strcpy(stDTYKH.ywmc_u, "");
  strcpy(stDTYKH.khjm_u, "");
  strcpy(stDTYKH.khjp_u, "");
  strcpy(stDTYKH.cym_uu, "");
  strcpy(stDTYKH.qybzbm, "");
  strcpy(stDTYKH.khjglx, "");
  strcpy(stDTYKH.tyjgdm, "");
  strcpy(stDTYKH.zmwjzl, "1");
  strcpy(stDTYKH.zbjg_u, "组织机构代码");
  strcpy(stDTYKH.zmwjbh, stDTYKH.khbh_u);
  strcpy(stDTYKH.clrq_u, "");
  strcpy(stDTYKH.pzjgbh, "");
  strcpy(stDTYKH.hnkhbz, "");
  strcpy(stDTYKH.jgh_uu, "");
  strcpy(stDTYKH.bm_uuu, "");
  strcpy(stDTYKH.gbdm_u, "");
  strcpy(stDTYKH.dzdm_u, "");
  strcpy(stDTYKH.khlb_u, "");
  strcpy(stDTYKH.syzlx_, "");
  strcpy(stDTYKH.zuzxz_, "");
  strcpy(stDTYKH.hydm_u, "");
  strcpy(stDTYKH.yydzbh, "");
  strcpy(stDTYKH.yyywdz, "");
  strcpy(stDTYKH.bgdhbh, "");
  strcpy(stDTYKH.czdhbh, "");
  strcpy(stDTYKH.dzyjbh, "");
  stDTYKH.qyrs_u = 0;
  strcpy(stDTYKH.cwzkhh, "");
  strcpy(stDTYKH.kggdkh, "");
  strcpy(stDTYKH.dwmyjy, "");
  strcpy(stDTYKH.qywgdm, "");
  strcpy(stDTYKH.qysx_u, "");
  strcpy(stDTYKH.szsbbs, "");
  strcpy(stDTYKH.tsjjql, "");
  strcpy(stDTYKH.zczjbz, "");
  stDTYKH.sszb_u = 0;
  strcpy(stDTYKH.biccod, "");
  strcpy(stDTYKH.swiftd, "");
  strcpy(stDTYKH.jhhh_u, "");
  strcpy(stDTYKH.lhhh_u, "");
  strcpy(stDTYKH.xtnwlm, "");
  strcpy(stDTYKH.jshkhh, "");
  strcpy(stDTYKH.jshmc_, "");
  strcpy(stDTYKH.jshdz_, "");
  strcpy(stDTYKH.khjszh, "");
  strcpy(stDTYKH.fwddaq, "");
  strcpy(stDTYKH.cpabaq, "");
  strcpy(stDTYKH.chuidq, "");
  strcpy(stDTYKH.ssqybz, "");
  strcpy(stDTYKH.frdbkh, "");
  strcpy(stDTYKH.sfrkhh, "");
  strcpy(stDTYKH.sfgldw, "");
  strcpy(stDTYKH.gxbs_u, "");
  strcpy(stDTYKH.khjzxx, "");
  strcpy(stDTYKH.khfwjb, "");
  strcpy(stDTYKH.sfcszd, "");
  strcpy(stDTYKH.hbdh_u, "");
  strcpy(stDTYKH.sfkhcx, "");
  strcpy(stDTYKH.sfsmkh, "");
  strcpy(stDTYKH.sfdjbz, "");
  strcpy(stDTYKH.sfswbz, "");
  strcpy(stDTYKH.sfhcbz, "");
  strcpy(stDTYKH.ywfyj_, "");
  strcpy(stDTYKH.khsdbz, "");
  strcpy(stDTYKH.khqcbz, "");
  strcpy(stDTYKH.khzt_u, "");
  strcpy(stDTYKH.bzxx_u, "");
  strcpy(stDTYKH.shnxrq, "");
  strcpy(stDTYKH.khxxly, "");
  strcpy(stDTYKH.wwktyw, "");
  strcpy(stDTYKH.gsjg_u, "");
  strcpy(stDTYKH.yxr_uu, "");
  strcpy(stDTYKH.yxjg_u, "");
  strcpy(stDTYKH.khrq_u, "");
  stDTYKH.khsj_u = 0;
  strcpy(stDTYKH.khgyls, "");
  strcpy(stDTYKH.khjg_u, "");
  strcpy(stDTYKH.khgy_u, "");
  strcpy(stDTYKH.sqgy_u, "");
  strcpy(stDTYKH.fqqd_u, "");
  strcpy(stDTYKH.whrq_u, "");
  stDTYKH.whsj_u = 0;
  strcpy(stDTYKH.whgy_u, "");
  strcpy(stDTYKH.whjg_u, "");
  strcpy(stDTYKH.whsqgy, "");
  strcpy(stDTYKH.whgyls, "");
  strcpy(stDTYKH.whqd_u, "");
  strcpy(stDTYKH.scjyr_, "");
  strcpy(stDTYKH.bybz1_, "");
  strcpy(stDTYKH.bybz2_, "");
  strcpy(stDTYKH.byzd4w, "");
  strcpy(stDTYKH.byzd40, "");
  strcpy(stDTYKH.ylzd1_, "");
  strcpy(stDTYKH.byzd1_, "");
  strcpy(stDTYKH.byzd4_, "");
  stDTYKH.sjc_uu = 0;
  strcpy(stDTYKH.jlzt_u, "0");
  strcpy(stDZJXX.frdm_u, sFRDM_U);
  strcpy(stDZJXX.khbh_u, stDTYKH.khbh_u);
  strcpy(stDZJXX.khlx_u, "00");
  strcpy(stDZJXX.khzwm_, stDTYKH.khzwm_);
  strcpy(stDZJXX.zjzl_u, stDTYKH.zmwjzl);
  strcpy(stDZJXX.zjzlms, stDTYKH.zbjg_u);
  strcpy(stDZJXX.zmwjbh, stDTYKH.zmwjbh);
  strcpy(stDZJXX.qfrq_u, "");
  strcpy(stDZJXX.zjyxq_, "");
  strcpy(stDZJXX.shixrq, "");
  strcpy(stDZJXX.dqdm_u, "");
  strcpy(stDZJXX.ssdqdm, "");
  strcpy(stDZJXX.ssdq_u, "");
  strcpy(stDZJXX.fzjggj, "");
  strcpy(stDZJXX.fzjg_u, "");
  strcpy(stDZJXX.zjdjdz, "");
  strcpy(stDZJXX.ywdz_u, "");
  strcpy(stDZJXX.fzh1sm, "");
  strcpy(stDZJXX.zjfzh1, "");
  strcpy(stDZJXX.fzh2sm, "");
  strcpy(stDZJXX.zjfzh2, "");
  strcpy(stDZJXX.fzh3sm, "");
  strcpy(stDZJXX.zjfzh3, "");
  strcpy(stDZJXX.zxxbz_, "");
  strcpy(stDZJXX.khyxzj, "");
  strcpy(stDZJXX.bssfzj, "");
  strcpy(stDZJXX.sm_uuu, "");
  strcpy(stDZJXX.byzd1_, "");
  strcpy(stDZJXX.jyrq_u, "");
  stDZJXX.jysj_u = 0;
  strcpy(stDZJXX.jygy_u, "");
  strcpy(stDZJXX.jyjg_u, "");
  strcpy(stDZJXX.sqgy_u, "");
  strcpy(stDZJXX.gylshm, "");
  strcpy(stDZJXX.fqqd_u, "");
  strcpy(stDZJXX.whrq_u, "");
  stDZJXX.whsj_u = 0;
  strcpy(stDZJXX.whgy_u, "");
  strcpy(stDZJXX.whjg_u, "");
  strcpy(stDZJXX.whsqgy, "");
  strcpy(stDZJXX.whgyls, "");
  strcpy(stDZJXX.whqd_u, "");
  strcpy(stDZJXX.scjyr_, "");
  stDZJXX.sjc_uu = 0;
  strcpy(stDZJXX.jlzt_u, "0");
     printDTYKH(stDTYKH,sYYJG_U);
  printDZJXX(stDZJXX,sYYJG_U);
  j++;
    }
 return iResult;
}
