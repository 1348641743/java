
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
    "crtzdkfh.pc"
};


static unsigned int sqlctx = 152475;


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
   unsigned char  *sqhstv[115];
   unsigned long  sqhstl[115];
            int   sqhsts[115];
            short *sqindv[115];
            int   sqinds[115];
   unsigned long  sqharm[115];
   unsigned long  *sqharc[115];
   unsigned short  sqadto[115];
   unsigned short  sqtdso[115];
} sqlstm = {12,115};

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

 static const char *sq0002 = 
"SELECT * FROM ZCZXX WHERE frdm_u = :b0 AND zhkhjg = :b1 AND zhhubz = '01' A\
ND zhckqx = '0D'            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,852,0,0,
5,0,0,0,0,0,27,5008,0,0,4,4,0,1,0,1,97,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,103,0,9,5021,0,2049,2,2,0,1,0,1,97,0,0,1,97,0,0,
59,0,0,2,0,0,15,5024,0,0,0,0,0,1,0,
74,0,0,2,0,0,13,5031,0,0,115,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,
0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,
97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,4,0,0,2,
97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,97,0,
0,2,4,0,0,2,4,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,97,0,
0,2,97,0,0,2,3,0,0,2,4,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,
0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,
97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,0,2,97,0,0,2,97,
0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,
97,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,97,0,0,
549,0,0,2,0,0,15,5037,0,0,0,0,0,1,0,
564,0,0,2,0,0,15,5086,0,0,0,0,0,1,0,
579,0,0,3,58,0,4,5101,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
};


#line 1 "crtzdkfh.pc"
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

#line 2197 "crtzdkfh.pc"
namespace
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2199 "crtzdkfh.pc"

 char sFRDM_U_1[4 +1]="9999";
 char sFRDM_U_2[4 +1]="9999";
 char sFRDM_U_3[4 +1]="9999";
/* EXEC SQL END DECLARE SECTION; */ 
#line 2203 "crtzdkfh.pc"

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
#line 2218 "crtzdkfh.pc"

typedef struct _TBL_ZCZXX
{
  char frdm_u[4 +1];
  char fzzh_u[50 +1];
  char zhmc_u[200 +1];
  char glkhbh[12 +1];
  char zhhubz[2 +1];
  char zhchbz[1 +1];
  char zhckqx[6 +1];
  char zhdqr_[8 +1];
  char ywdh_u[4 +1];
  char zhkhjg[9 +1];
  char zhkhr_[8 +1];
  char zhkhgy[10 +1];
  char zhxhjg[9 +1];
  char zhxhrq[8 +1];
  char zhxhgy[10 +1];
  char zhyxq_[8 +1];
  char rlmc_u[20 +1];
  long dqwyxh;
  char dfzrkh[50 +1];
  char dfzhao[50 +1];
  double dqye_u;
  double srye_u;
  char zjgxrq[8 +1];
  char zhbzzf[64 +1];
  char cpdh_u[10 +1];
  char fzcplx[1 +1];
  char ssdx_u[3 +1];
  char cpfl2_[3 +1];
  char cpfl3_[3 +1];
  char cpfl4_[3 +1];
  char cpfl5_[3 +1];
  char kjhsdm[10 +1];
  char zhfl_u[3 +1];
  char flsx_u[3 +1];
  char zhfldm[3 +1];
  char fenldm[3 +1];
  char fleidm[3 +1];
  char kzbiz_[2 +1];
  double qcjesz;
  char jyxz_u[10 +1];
  double zhlczd;
  double zhlczx;
  char kzfngs[1 +1];
  char zqfs_u[1 +1];
  char lsbqbz[1 +1];
  char khzh_u[50 +1];
  char zcfans[1 +1];
  double byje_u;
  char scywrq[8 +1];
  char scdsfr[8 +1];
  long zqjg_u;
  double khje_u;
  char yqxr_u[8 +1];
  char ydqr_u[8 +1];
  char ckzl_u[8 +1];
  char zhzt_u[1 +1];
  char sfdzbz[1 +1];
  char dzzq_u[8 +1];
  char dzfw_u[1 +1];
  char zhdanr[8 +1];
  char zjdzrq[8 +1];
  char zhhcbz[1 +1];
  char zjzhhc[8 +1];
  char yeyzzt[1 +1];
  char zhcpdh[10 +1];
  char zhzxh_[8 +1];
  char zhzhh_[50 +1];
  char khzjly[1 +1];
  char xhzjsf[1 +1];
  char zdzczh[1 +1];
  char zjzczh[50 +1];
  char zdrzh2[1 +1];
  char zjsrzh[50 +1];
  char sfzhxz[1 +1];
  char zhdjbz[1 +1];
  char zhfbdj[1 +1];
  char zhzsbf[1 +1];
  char zhzfbs[1 +1];
  char glxhdk[1 +1];
  char sfyzhb[1 +1];
  char sfxtz1[1 +1];
  char sfjbh_[1 +1];
  char jkzhbz[1 +1];
  char sfdgyb[1 +1];
  char dgzplm[1 +1];
  char sfzph_[1 +1];
  char yxtzbz[1 +1];
  char dqrjsh[1 +1];
  char sfwhjg[1 +1];
  char whhcbz[1 +1];
  char zchsf_[1 +1];
  char bdhsf_[1 +1];
  char jshubz[1 +1];
  char bzjckb[1 +1];
  char czckbz[1 +1];
  char lcqybz[1 +1];
  char byzd1_[200 +1];
  char byzd2_[200 +1];
  char byzd3_[200 +1];
  double byye1_;
  char byrq1_[8 +1];
  char dfjxrq[8 +1];
  char sshbob[1 +1];
  char gltzbz[1 +1];
  char yegjbz[1 +1];
  char huizfs[2 +1];
  char ljfypl[1 +1];
  char plhsfp[8 +1];
  char whgy_u[10 +1];
  char whjg_u[9 +1];
  char whrq_u[8 +1];
  long whsj_u;
  long sjc_uu;
  long xlho_u;
  char jilzt_[1 +1];
};
typedef struct _TBL_ZCZXX TBL_ZCZXX;
/* EXEC SQL END DECLARE SECTION; */ 
#line 2338 "crtzdkfh.pc"

typedef struct _ZCZXX_UPDFLAG
{
 int FRDM_U_FLAG;
 int FZZH_U_FLAG;
 int ZHMC_U_FLAG;
 int GLKHBH_FLAG;
 int ZHHUBZ_FLAG;
 int ZHCHBZ_FLAG;
 int ZHCKQX_FLAG;
 int ZHDQR__FLAG;
 int YWDH_U_FLAG;
 int ZHKHJG_FLAG;
 int ZHKHR__FLAG;
 int ZHKHGY_FLAG;
 int ZHXHJG_FLAG;
 int ZHXHRQ_FLAG;
 int ZHXHGY_FLAG;
 int ZHYXQ__FLAG;
 int RLMC_U_FLAG;
 int DQWYXH_FLAG;
 int DFZRKH_FLAG;
 int DFZHAO_FLAG;
 int DQYE_U_FLAG;
 int SRYE_U_FLAG;
 int ZJGXRQ_FLAG;
 int ZHBZZF_FLAG;
 int CPDH_U_FLAG;
 int FZCPLX_FLAG;
 int SSDX_U_FLAG;
 int CPFL2__FLAG;
 int CPFL3__FLAG;
 int CPFL4__FLAG;
 int CPFL5__FLAG;
 int KJHSDM_FLAG;
 int ZHFL_U_FLAG;
 int FLSX_U_FLAG;
 int ZHFLDM_FLAG;
 int FENLDM_FLAG;
 int FLEIDM_FLAG;
 int KZBIZ__FLAG;
 int QCJESZ_FLAG;
 int JYXZ_U_FLAG;
 int ZHLCZD_FLAG;
 int ZHLCZX_FLAG;
 int KZFNGS_FLAG;
 int ZQFS_U_FLAG;
 int LSBQBZ_FLAG;
 int KHZH_U_FLAG;
 int ZCFANS_FLAG;
 int BYJE_U_FLAG;
 int SCYWRQ_FLAG;
 int SCDSFR_FLAG;
 int ZQJG_U_FLAG;
 int KHJE_U_FLAG;
 int YQXR_U_FLAG;
 int YDQR_U_FLAG;
 int CKZL_U_FLAG;
 int ZHZT_U_FLAG;
 int SFDZBZ_FLAG;
 int DZZQ_U_FLAG;
 int DZFW_U_FLAG;
 int ZHDANR_FLAG;
 int ZJDZRQ_FLAG;
 int ZHHCBZ_FLAG;
 int ZJZHHC_FLAG;
 int YEYZZT_FLAG;
 int ZHCPDH_FLAG;
 int ZHZXH__FLAG;
 int ZHZHH__FLAG;
 int KHZJLY_FLAG;
 int XHZJSF_FLAG;
 int ZDZCZH_FLAG;
 int ZJZCZH_FLAG;
 int ZDRZH2_FLAG;
 int ZJSRZH_FLAG;
 int SFZHXZ_FLAG;
 int ZHDJBZ_FLAG;
 int ZHFBDJ_FLAG;
 int ZHZSBF_FLAG;
 int ZHZFBS_FLAG;
 int GLXHDK_FLAG;
 int SFYZHB_FLAG;
 int SFXTZ1_FLAG;
 int SFJBH__FLAG;
 int JKZHBZ_FLAG;
 int SFDGYB_FLAG;
 int DGZPLM_FLAG;
 int SFZPH__FLAG;
 int YXTZBZ_FLAG;
 int DQRJSH_FLAG;
 int SFWHJG_FLAG;
 int WHHCBZ_FLAG;
 int ZCHSF__FLAG;
 int BDHSF__FLAG;
 int JSHUBZ_FLAG;
 int BZJCKB_FLAG;
 int CZCKBZ_FLAG;
 int LCQYBZ_FLAG;
 int BYZD1__FLAG;
 int BYZD2__FLAG;
 int BYZD3__FLAG;
 int BYYE1__FLAG;
 int BYRQ1__FLAG;
 int DFJXRQ_FLAG;
 int SSHBOB_FLAG;
 int GLTZBZ_FLAG;
 int YEGJBZ_FLAG;
 int HUIZFS_FLAG;
 int LJFYPL_FLAG;
 int PLHSFP_FLAG;
 int WHGY_U_FLAG;
 int WHJG_U_FLAG;
 int WHRQ_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int XLHO_U_FLAG;
 int JILZT__FLAG;
};
class CDzczxx
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
 TBL_ZCZXX stZCZXX;
 TBL_ZCZXX midZCZXX;
 TBL_ZCZXX preZCZXX;
 TBL_ZCZXX pstZCZXX;
 TBL_ZCZXX TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2482 "crtzdkfh.pc"

  char zczxx_FRDM_U[4 +1];
  char zczxx_FZZH_U[50 +1];
  char zczxx_ZHMC_U[200 +1];
  char zczxx_GLKHBH[12 +1];
  char zczxx_ZHHUBZ[2 +1];
  char zczxx_ZHCHBZ[1 +1];
  char zczxx_ZHCKQX[6 +1];
  char zczxx_ZHDQR_[8 +1];
  char zczxx_YWDH_U[4 +1];
  char zczxx_ZHKHJG[9 +1];
  char zczxx_ZHKHR_[8 +1];
  char zczxx_ZHKHGY[10 +1];
  char zczxx_ZHXHJG[9 +1];
  char zczxx_ZHXHRQ[8 +1];
  char zczxx_ZHXHGY[10 +1];
  char zczxx_ZHYXQ_[8 +1];
  char zczxx_RLMC_U[20 +1];
  long zczxx_DQWYXH;
  char zczxx_DFZRKH[50 +1];
  char zczxx_DFZHAO[50 +1];
  double zczxx_DQYE_U;
  double zczxx_SRYE_U;
  char zczxx_ZJGXRQ[8 +1];
  char zczxx_ZHBZZF[64 +1];
  char zczxx_CPDH_U[10 +1];
  char zczxx_FZCPLX[1 +1];
  char zczxx_SSDX_U[3 +1];
  char zczxx_CPFL2_[3 +1];
  char zczxx_CPFL3_[3 +1];
  char zczxx_CPFL4_[3 +1];
  char zczxx_CPFL5_[3 +1];
  char zczxx_KJHSDM[10 +1];
  char zczxx_ZHFL_U[3 +1];
  char zczxx_FLSX_U[3 +1];
  char zczxx_ZHFLDM[3 +1];
  char zczxx_FENLDM[3 +1];
  char zczxx_FLEIDM[3 +1];
  char zczxx_KZBIZ_[2 +1];
  double zczxx_QCJESZ;
  char zczxx_JYXZ_U[10 +1];
  double zczxx_ZHLCZD;
  double zczxx_ZHLCZX;
  char zczxx_KZFNGS[1 +1];
  char zczxx_ZQFS_U[1 +1];
  char zczxx_LSBQBZ[1 +1];
  char zczxx_KHZH_U[50 +1];
  char zczxx_ZCFANS[1 +1];
  double zczxx_BYJE_U;
  char zczxx_SCYWRQ[8 +1];
  char zczxx_SCDSFR[8 +1];
  long zczxx_ZQJG_U;
  double zczxx_KHJE_U;
  char zczxx_YQXR_U[8 +1];
  char zczxx_YDQR_U[8 +1];
  char zczxx_CKZL_U[8 +1];
  char zczxx_ZHZT_U[1 +1];
  char zczxx_SFDZBZ[1 +1];
  char zczxx_DZZQ_U[8 +1];
  char zczxx_DZFW_U[1 +1];
  char zczxx_ZHDANR[8 +1];
  char zczxx_ZJDZRQ[8 +1];
  char zczxx_ZHHCBZ[1 +1];
  char zczxx_ZJZHHC[8 +1];
  char zczxx_YEYZZT[1 +1];
  char zczxx_ZHCPDH[10 +1];
  char zczxx_ZHZXH_[8 +1];
  char zczxx_ZHZHH_[50 +1];
  char zczxx_KHZJLY[1 +1];
  char zczxx_XHZJSF[1 +1];
  char zczxx_ZDZCZH[1 +1];
  char zczxx_ZJZCZH[50 +1];
  char zczxx_ZDRZH2[1 +1];
  char zczxx_ZJSRZH[50 +1];
  char zczxx_SFZHXZ[1 +1];
  char zczxx_ZHDJBZ[1 +1];
  char zczxx_ZHFBDJ[1 +1];
  char zczxx_ZHZSBF[1 +1];
  char zczxx_ZHZFBS[1 +1];
  char zczxx_GLXHDK[1 +1];
  char zczxx_SFYZHB[1 +1];
  char zczxx_SFXTZ1[1 +1];
  char zczxx_SFJBH_[1 +1];
  char zczxx_JKZHBZ[1 +1];
  char zczxx_SFDGYB[1 +1];
  char zczxx_DGZPLM[1 +1];
  char zczxx_SFZPH_[1 +1];
  char zczxx_YXTZBZ[1 +1];
  char zczxx_DQRJSH[1 +1];
  char zczxx_SFWHJG[1 +1];
  char zczxx_WHHCBZ[1 +1];
  char zczxx_ZCHSF_[1 +1];
  char zczxx_BDHSF_[1 +1];
  char zczxx_JSHUBZ[1 +1];
  char zczxx_BZJCKB[1 +1];
  char zczxx_CZCKBZ[1 +1];
  char zczxx_LCQYBZ[1 +1];
  char zczxx_BYZD1_[200 +1];
  char zczxx_BYZD2_[200 +1];
  char zczxx_BYZD3_[200 +1];
  double zczxx_BYYE1_;
  char zczxx_BYRQ1_[8 +1];
  char zczxx_DFJXRQ[8 +1];
  char zczxx_SSHBOB[1 +1];
  char zczxx_GLTZBZ[1 +1];
  char zczxx_YEGJBZ[1 +1];
  char zczxx_HUIZFS[2 +1];
  char zczxx_LJFYPL[1 +1];
  char zczxx_PLHSFP[8 +1];
  char zczxx_WHGY_U[10 +1];
  char zczxx_WHJG_U[9 +1];
  char zczxx_WHRQ_U[8 +1];
  long zczxx_WHSJ_U;
  long zczxx_SJC_UU;
  long zczxx_XLHO_U;
  char zczxx_JILZT_[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 2598 "crtzdkfh.pc"

 struct _ZCZXX_UPDFLAG ZCZXX_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_ZCZXX *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_ZCZXX *stTbl);
  void LOGS(TBL_ZCZXX *stTbl);
  void INITD(TBL_ZCZXX *stmpTbl);
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
  int MSEL2();
  int MSEL2R();
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
 CDzczxx zczxx;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2637 "crtzdkfh.pc"

 char FRDM_ZCZXX[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 2639 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2641 "crtzdkfh.pc"

typedef struct _TBL_ZDKFH
{
  char frdm_u[4 +1];
  char dkzh_u[50 +1];
  char dkjjbm[30 +1];
  char hth_uu[30 +1];
  char khbh_u[12 +1];
  char khzwm_[200 +1];
  char yyjg_u[9 +1];
  char zwjg_u[9 +1];
  char canpdm[10 +1];
  char cpmc_u[200 +1];
  char kjlb_u[10 +1];
  char khrq_u[8 +1];
  char qxrq_u[8 +1];
  char dqrq_u[8 +1];
  char qx_uuu[6 +1];
  char dkxt_u[1 +1];
  char yjfyj_[1 +1];
  char dkzhzt[1 +1];
  long ddkksx;
  char hbdh_u[2 +1];
  double htje_u;
  double jjje_u;
  double yiffje;
  double djkfje;
  double kffje_;
  double zcbj_u;
  double yqbj_u;
  double dzhibj;
  double dzhnbj;
  double dkjj_u;
  double yylx_u;
  double csyjlx;
  double ysqx_u;
  double csqx_u;
  double ysyjfx;
  double csyjfx;
  double ysfx_u;
  double csfx_u;
  double yjfx_u;
  double fx_uuu;
  double yjtx_u;
  double ystx_u;
  double dtlx_u;
  double hxbj_u;
  double hxlx_u;
  double lxsr_u;
  double ysfy_u;
  double fysr_u;
  double ysfj_u;
  double fjsr_u;
  double zbj_uu;
  char zhcwrq[8 +1];
  char bz_uuu[200 +1];
  long mxxh_u;
  char khjg_u[9 +1];
  char khgy_u[10 +1];
  char whrq_u[8 +1];
  char whgy_u[10 +1];
  char xhrq_u[8 +1];
  char xhgy_u[10 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_ZDKFH TBL_ZDKFH;
/* EXEC SQL END DECLARE SECTION; */ 
#line 2710 "crtzdkfh.pc"

typedef struct _ZDKFH_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKZH_U_FLAG;
 int DKJJBM_FLAG;
 int HTH_UU_FLAG;
 int KHBH_U_FLAG;
 int KHZWM__FLAG;
 int YYJG_U_FLAG;
 int ZWJG_U_FLAG;
 int CANPDM_FLAG;
 int CPMC_U_FLAG;
 int KJLB_U_FLAG;
 int KHRQ_U_FLAG;
 int QXRQ_U_FLAG;
 int DQRQ_U_FLAG;
 int QX_UUU_FLAG;
 int DKXT_U_FLAG;
 int YJFYJ__FLAG;
 int DKZHZT_FLAG;
 int DDKKSX_FLAG;
 int HBDH_U_FLAG;
 int HTJE_U_FLAG;
 int JJJE_U_FLAG;
 int YIFFJE_FLAG;
 int DJKFJE_FLAG;
 int KFFJE__FLAG;
 int ZCBJ_U_FLAG;
 int YQBJ_U_FLAG;
 int DZHIBJ_FLAG;
 int DZHNBJ_FLAG;
 int DKJJ_U_FLAG;
 int YYLX_U_FLAG;
 int CSYJLX_FLAG;
 int YSQX_U_FLAG;
 int CSQX_U_FLAG;
 int YSYJFX_FLAG;
 int CSYJFX_FLAG;
 int YSFX_U_FLAG;
 int CSFX_U_FLAG;
 int YJFX_U_FLAG;
 int FX_UUU_FLAG;
 int YJTX_U_FLAG;
 int YSTX_U_FLAG;
 int DTLX_U_FLAG;
 int HXBJ_U_FLAG;
 int HXLX_U_FLAG;
 int LXSR_U_FLAG;
 int YSFY_U_FLAG;
 int FYSR_U_FLAG;
 int YSFJ_U_FLAG;
 int FJSR_U_FLAG;
 int ZBJ_UU_FLAG;
 int ZHCWRQ_FLAG;
 int BZ_UUU_FLAG;
 int MXXH_U_FLAG;
 int KHJG_U_FLAG;
 int KHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHGY_U_FLAG;
 int XHRQ_U_FLAG;
 int XHGY_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDzdkfh
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
 TBL_ZDKFH stZDKFH;
 TBL_ZDKFH midZDKFH;
 TBL_ZDKFH preZDKFH;
 TBL_ZDKFH pstZDKFH;
 TBL_ZDKFH TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2803 "crtzdkfh.pc"

  char zdkfh_FRDM_U[4 +1];
  char zdkfh_DKZH_U[50 +1];
  char zdkfh_DKJJBM[30 +1];
  char zdkfh_HTH_UU[30 +1];
  char zdkfh_KHBH_U[12 +1];
  char zdkfh_KHZWM_[200 +1];
  char zdkfh_YYJG_U[9 +1];
  char zdkfh_ZWJG_U[9 +1];
  char zdkfh_CANPDM[10 +1];
  char zdkfh_CPMC_U[200 +1];
  char zdkfh_KJLB_U[10 +1];
  char zdkfh_KHRQ_U[8 +1];
  char zdkfh_QXRQ_U[8 +1];
  char zdkfh_DQRQ_U[8 +1];
  char zdkfh_QX_UUU[6 +1];
  char zdkfh_DKXT_U[1 +1];
  char zdkfh_YJFYJ_[1 +1];
  char zdkfh_DKZHZT[1 +1];
  long zdkfh_DDKKSX;
  char zdkfh_HBDH_U[2 +1];
  double zdkfh_HTJE_U;
  double zdkfh_JJJE_U;
  double zdkfh_YIFFJE;
  double zdkfh_DJKFJE;
  double zdkfh_KFFJE_;
  double zdkfh_ZCBJ_U;
  double zdkfh_YQBJ_U;
  double zdkfh_DZHIBJ;
  double zdkfh_DZHNBJ;
  double zdkfh_DKJJ_U;
  double zdkfh_YYLX_U;
  double zdkfh_CSYJLX;
  double zdkfh_YSQX_U;
  double zdkfh_CSQX_U;
  double zdkfh_YSYJFX;
  double zdkfh_CSYJFX;
  double zdkfh_YSFX_U;
  double zdkfh_CSFX_U;
  double zdkfh_YJFX_U;
  double zdkfh_FX_UUU;
  double zdkfh_YJTX_U;
  double zdkfh_YSTX_U;
  double zdkfh_DTLX_U;
  double zdkfh_HXBJ_U;
  double zdkfh_HXLX_U;
  double zdkfh_LXSR_U;
  double zdkfh_YSFY_U;
  double zdkfh_FYSR_U;
  double zdkfh_YSFJ_U;
  double zdkfh_FJSR_U;
  double zdkfh_ZBJ_UU;
  char zdkfh_ZHCWRQ[8 +1];
  char zdkfh_BZ_UUU[200 +1];
  long zdkfh_MXXH_U;
  char zdkfh_KHJG_U[9 +1];
  char zdkfh_KHGY_U[10 +1];
  char zdkfh_WHRQ_U[8 +1];
  char zdkfh_WHGY_U[10 +1];
  char zdkfh_XHRQ_U[8 +1];
  char zdkfh_XHGY_U[10 +1];
  char zdkfh_WHJG_U[9 +1];
  long zdkfh_WHSJ_U;
  long zdkfh_SJC_UU;
  char zdkfh_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 2868 "crtzdkfh.pc"

 struct _ZDKFH_UPDFLAG ZDKFH_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_ZDKFH *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_ZDKFH *stTbl);
  void LOGS(TBL_ZDKFH *stTbl);
  void INITD(TBL_ZDKFH *stmpTbl);
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
  int MDEL3();
  int MSEL3R();
  int MDEL3R();
  int MSEL4();
  int MDEL4();
  int MSEL4R();
  int MDEL4R();
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
 CDzdkfh zdkfh;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2921 "crtzdkfh.pc"

 char FRDM_ZDKFH[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 2923 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2925 "crtzdkfh.pc"

typedef struct _TBL_DDKZK
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char dkdx_u[1 +1];
  char cndk_u[1 +1];
  char xhdkbz[1 +1];
  char lhdk_u[1 +1];
  char ysdk_u[1 +1];
  char dldk_u[1 +1];
  char ayjfyj[1 +1];
  char ayyldh[1 +1];
  char dkxtfk[1 +1];
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKZK TBL_DDKZK;
/* EXEC SQL END DECLARE SECTION; */ 
#line 2947 "crtzdkfh.pc"

typedef struct _DDKZK_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int DKDX_U_FLAG;
 int CNDK_U_FLAG;
 int XHDKBZ_FLAG;
 int LHDK_U_FLAG;
 int YSDK_U_FLAG;
 int DLDK_U_FLAG;
 int AYJFYJ_FLAG;
 int AYYLDH_FLAG;
 int DKXTFK_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddkzk
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
 TBL_DDKZK stDDKZK;
 TBL_DDKZK midDDKZK;
 TBL_DDKZK preDDKZK;
 TBL_DDKZK pstDDKZK;
 TBL_DDKZK TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 2993 "crtzdkfh.pc"

  char ddkzk_FRDM_U[4 +1];
  char ddkzk_DKJJBM[30 +1];
  char ddkzk_DKDX_U[1 +1];
  char ddkzk_CNDK_U[1 +1];
  char ddkzk_XHDKBZ[1 +1];
  char ddkzk_LHDK_U[1 +1];
  char ddkzk_YSDK_U[1 +1];
  char ddkzk_DLDK_U[1 +1];
  char ddkzk_AYJFYJ[1 +1];
  char ddkzk_AYYLDH[1 +1];
  char ddkzk_DKXTFK[1 +1];
  char ddkzk_WHGY_U[10 +1];
  char ddkzk_WHRQ_U[8 +1];
  char ddkzk_WHJG_U[9 +1];
  long ddkzk_WHSJ_U;
  long ddkzk_SJC_UU;
  char ddkzk_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3011 "crtzdkfh.pc"

 struct _DDKZK_UPDFLAG DDKZK_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKZK *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKZK *stTbl);
  void LOGS(TBL_DDKZK *stTbl);
  void INITD(TBL_DDKZK *stmpTbl);
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
 CDddkzk ddkzk;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3048 "crtzdkfh.pc"

 char FRDM_DDKZK[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3050 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3052 "crtzdkfh.pc"

typedef struct _TBL_DDKTZ
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char zctqtz[1 +1];
  long tqts_u;
  char tonzrq[8 +1];
  char yqcstz[1 +1];
  long tzjgts;
  char xctzrq[8 +1];
  char llbgtz[1 +1];
  char yebgtz[1 +1];
  char khhddy[1 +1];
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKTZ TBL_DDKTZ;
/* EXEC SQL END DECLARE SECTION; */ 
#line 3074 "crtzdkfh.pc"

typedef struct _DDKTZ_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int ZCTQTZ_FLAG;
 int TQTS_U_FLAG;
 int TONZRQ_FLAG;
 int YQCSTZ_FLAG;
 int TZJGTS_FLAG;
 int XCTZRQ_FLAG;
 int LLBGTZ_FLAG;
 int YEBGTZ_FLAG;
 int KHHDDY_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddktz
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
 TBL_DDKTZ stDDKTZ;
 TBL_DDKTZ midDDKTZ;
 TBL_DDKTZ preDDKTZ;
 TBL_DDKTZ pstDDKTZ;
 TBL_DDKTZ TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3120 "crtzdkfh.pc"

  char ddktz_FRDM_U[4 +1];
  char ddktz_DKJJBM[30 +1];
  char ddktz_ZCTQTZ[1 +1];
  long ddktz_TQTS_U;
  char ddktz_TONZRQ[8 +1];
  char ddktz_YQCSTZ[1 +1];
  long ddktz_TZJGTS;
  char ddktz_XCTZRQ[8 +1];
  char ddktz_LLBGTZ[1 +1];
  char ddktz_YEBGTZ[1 +1];
  char ddktz_KHHDDY[1 +1];
  char ddktz_WHGY_U[10 +1];
  char ddktz_WHRQ_U[8 +1];
  char ddktz_WHJG_U[9 +1];
  long ddktz_WHSJ_U;
  long ddktz_SJC_UU;
  char ddktz_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3138 "crtzdkfh.pc"

 struct _DDKTZ_UPDFLAG DDKTZ_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKTZ *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKTZ *stTbl);
  void LOGS(TBL_DDKTZ *stTbl);
  void INITD(TBL_DDKTZ *stmpTbl);
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
 CDddktz ddktz;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3175 "crtzdkfh.pc"

 char FRDM_DDKTZ[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3177 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3179 "crtzdkfh.pc"

typedef struct _TBL_DDKJX
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char jxgz_u[2 +1];
  char ltjxgz[1 +1];
  char llfd_u[1 +1];
  char lllx_u[1 +1];
  char nyll_u[1 +1];
  double zxll_u;
  char whllzl[1 +1];
  char whllqx[6 +1];
  double zxnll_;
  char lltzfs[1 +1];
  char lltzzq[8 +1];
  char llfdfs[1 +1];
  double llfdz_;
  char zcllbh[10 +1];
  char llqx_u[6 +1];
  char xcjtr_[8 +1];
  char ysxfs_[1 +1];
  char lxtxzq[8 +1];
  char mctxfs[1 +1];
  double mctxbl;
  double ysxze_;
  char xctxrq[8 +1];
  long kxq_uu;
  char kxyqgz[1 +1];
  char kxsxgz[1 +1];
  char kxjrgz[1 +1];
  char yxycdd[1 +1];
  char ddzh_u[50 +1];
  char jx_uuu[1 +1];
  char jfx_uu[1 +1];
  char fxjx_u[1 +1];
  char txbzdm[1 +1];
  char yqjxfs[1 +1];
  char yqllbh[10 +1];
  char yqfxfs[1 +1];
  double yqfxfd;
  double sryqll;
  char yqnyll[1 +1];
  double zdyqll;
  char txbzw_[1 +1];
  char sctxr_[8 +1];
  char xctxr_[8 +1];
  char scjxr_[8 +1];
  long jxmxxh;
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKJX TBL_DDKJX;
/* EXEC SQL END DECLARE SECTION; */ 
#line 3236 "crtzdkfh.pc"

typedef struct _DDKJX_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int JXGZ_U_FLAG;
 int LTJXGZ_FLAG;
 int LLFD_U_FLAG;
 int LLLX_U_FLAG;
 int NYLL_U_FLAG;
 int ZXLL_U_FLAG;
 int WHLLZL_FLAG;
 int WHLLQX_FLAG;
 int ZXNLL__FLAG;
 int LLTZFS_FLAG;
 int LLTZZQ_FLAG;
 int LLFDFS_FLAG;
 int LLFDZ__FLAG;
 int ZCLLBH_FLAG;
 int LLQX_U_FLAG;
 int XCJTR__FLAG;
 int YSXFS__FLAG;
 int LXTXZQ_FLAG;
 int MCTXFS_FLAG;
 int MCTXBL_FLAG;
 int YSXZE__FLAG;
 int XCTXRQ_FLAG;
 int KXQ_UU_FLAG;
 int KXYQGZ_FLAG;
 int KXSXGZ_FLAG;
 int KXJRGZ_FLAG;
 int YXYCDD_FLAG;
 int DDZH_U_FLAG;
 int JX_UUU_FLAG;
 int JFX_UU_FLAG;
 int FXJX_U_FLAG;
 int TXBZDM_FLAG;
 int YQJXFS_FLAG;
 int YQLLBH_FLAG;
 int YQFXFS_FLAG;
 int YQFXFD_FLAG;
 int SRYQLL_FLAG;
 int YQNYLL_FLAG;
 int ZDYQLL_FLAG;
 int TXBZW__FLAG;
 int SCTXR__FLAG;
 int XCTXR__FLAG;
 int SCJXR__FLAG;
 int JXMXXH_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddkjx
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
 TBL_DDKJX stDDKJX;
 TBL_DDKJX midDDKJX;
 TBL_DDKJX preDDKJX;
 TBL_DDKJX pstDDKJX;
 TBL_DDKJX TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3317 "crtzdkfh.pc"

  char ddkjx_FRDM_U[4 +1];
  char ddkjx_DKJJBM[30 +1];
  char ddkjx_JXGZ_U[2 +1];
  char ddkjx_LTJXGZ[1 +1];
  char ddkjx_LLFD_U[1 +1];
  char ddkjx_LLLX_U[1 +1];
  char ddkjx_NYLL_U[1 +1];
  double ddkjx_ZXLL_U;
  char ddkjx_WHLLZL[1 +1];
  char ddkjx_WHLLQX[6 +1];
  double ddkjx_ZXNLL_;
  char ddkjx_LLTZFS[1 +1];
  char ddkjx_LLTZZQ[8 +1];
  char ddkjx_LLFDFS[1 +1];
  double ddkjx_LLFDZ_;
  char ddkjx_ZCLLBH[10 +1];
  char ddkjx_LLQX_U[6 +1];
  char ddkjx_XCJTR_[8 +1];
  char ddkjx_YSXFS_[1 +1];
  char ddkjx_LXTXZQ[8 +1];
  char ddkjx_MCTXFS[1 +1];
  double ddkjx_MCTXBL;
  double ddkjx_YSXZE_;
  char ddkjx_XCTXRQ[8 +1];
  long ddkjx_KXQ_UU;
  char ddkjx_KXYQGZ[1 +1];
  char ddkjx_KXSXGZ[1 +1];
  char ddkjx_KXJRGZ[1 +1];
  char ddkjx_YXYCDD[1 +1];
  char ddkjx_DDZH_U[50 +1];
  char ddkjx_JX_UUU[1 +1];
  char ddkjx_JFX_UU[1 +1];
  char ddkjx_FXJX_U[1 +1];
  char ddkjx_TXBZDM[1 +1];
  char ddkjx_YQJXFS[1 +1];
  char ddkjx_YQLLBH[10 +1];
  char ddkjx_YQFXFS[1 +1];
  double ddkjx_YQFXFD;
  double ddkjx_SRYQLL;
  char ddkjx_YQNYLL[1 +1];
  double ddkjx_ZDYQLL;
  char ddkjx_TXBZW_[1 +1];
  char ddkjx_SCTXR_[8 +1];
  char ddkjx_XCTXR_[8 +1];
  char ddkjx_SCJXR_[8 +1];
  long ddkjx_JXMXXH;
  char ddkjx_WHGY_U[10 +1];
  char ddkjx_WHRQ_U[8 +1];
  char ddkjx_WHJG_U[9 +1];
  long ddkjx_WHSJ_U;
  long ddkjx_SJC_UU;
  char ddkjx_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3370 "crtzdkfh.pc"

 struct _DDKJX_UPDFLAG DDKJX_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKJX *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKJX *stTbl);
  void LOGS(TBL_DDKJX *stTbl);
  void INITD(TBL_DDKJX *stmpTbl);
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
 CDddkjx ddkjx;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3407 "crtzdkfh.pc"

 char FRDM_DDKJX[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3409 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3411 "crtzdkfh.pc"

typedef struct _TBL_DDKFK
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char dkrzzh[50 +1];
  char ajxmbh[16 +1];
  char ajxmmc[200 +1];
  char mfkhh_[12 +1];
  char mfkhm_[200 +1];
  char mfzh_u[50 +1];
  char mfbzzh[50 +1];
  double bl_uuu;
  char zqxfk_[1 +1];
  char fkzq_u[8 +1];
  char fkfsbm[1 +1];
  double bcfkje;
  double mcfkje;
  char dzfkjh[1 +1];
  char scfkr_[8 +1];
  long yfkcs_;
  char jxhjyd[1 +1];
  char jxhjhk[1 +1];
  char ydkjjh[30 +1];
  char fkzjcl[1 +1];
  double zhbl_u;
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKFK TBL_DDKFK;
/* EXEC SQL END DECLARE SECTION; */ 
#line 3445 "crtzdkfh.pc"

typedef struct _DDKFK_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int DKRZZH_FLAG;
 int AJXMBH_FLAG;
 int AJXMMC_FLAG;
 int MFKHH__FLAG;
 int MFKHM__FLAG;
 int MFZH_U_FLAG;
 int MFBZZH_FLAG;
 int BL_UUU_FLAG;
 int ZQXFK__FLAG;
 int FKZQ_U_FLAG;
 int FKFSBM_FLAG;
 int BCFKJE_FLAG;
 int MCFKJE_FLAG;
 int DZFKJH_FLAG;
 int SCFKR__FLAG;
 int YFKCS__FLAG;
 int JXHJYD_FLAG;
 int JXHJHK_FLAG;
 int YDKJJH_FLAG;
 int FKZJCL_FLAG;
 int ZHBL_U_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddkfk
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
 TBL_DDKFK stDDKFK;
 TBL_DDKFK midDDKFK;
 TBL_DDKFK preDDKFK;
 TBL_DDKFK pstDDKFK;
 TBL_DDKFK TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3503 "crtzdkfh.pc"

  char ddkfk_FRDM_U[4 +1];
  char ddkfk_DKJJBM[30 +1];
  char ddkfk_DKRZZH[50 +1];
  char ddkfk_AJXMBH[16 +1];
  char ddkfk_AJXMMC[200 +1];
  char ddkfk_MFKHH_[12 +1];
  char ddkfk_MFKHM_[200 +1];
  char ddkfk_MFZH_U[50 +1];
  char ddkfk_MFBZZH[50 +1];
  double ddkfk_BL_UUU;
  char ddkfk_ZQXFK_[1 +1];
  char ddkfk_FKZQ_U[8 +1];
  char ddkfk_FKFSBM[1 +1];
  double ddkfk_BCFKJE;
  double ddkfk_MCFKJE;
  char ddkfk_DZFKJH[1 +1];
  char ddkfk_SCFKR_[8 +1];
  long ddkfk_YFKCS_;
  char ddkfk_JXHJYD[1 +1];
  char ddkfk_JXHJHK[1 +1];
  char ddkfk_YDKJJH[30 +1];
  char ddkfk_FKZJCL[1 +1];
  double ddkfk_ZHBL_U;
  char ddkfk_WHGY_U[10 +1];
  char ddkfk_WHRQ_U[8 +1];
  char ddkfk_WHJG_U[9 +1];
  long ddkfk_WHSJ_U;
  long ddkfk_SJC_UU;
  char ddkfk_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3533 "crtzdkfh.pc"

 struct _DDKFK_UPDFLAG DDKFK_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKFK *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKFK *stTbl);
  void LOGS(TBL_DDKFK *stTbl);
  void INITD(TBL_DDKFK *stmpTbl);
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
 CDddkfk ddkfk;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3570 "crtzdkfh.pc"

 char FRDM_DDKFK[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3572 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3574 "crtzdkfh.pc"

typedef struct _TBL_DDKHK
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char hkfs_u[1 +1];
  double ljz_uu;
  long ljqjqs;
  char hkzq_u[8 +1];
  char dplhk_[1 +1];
  char hbzq_u[8 +1];
  char declgz[1 +1];
  char yqhkzq[8 +1];
  double sylxlv;
  char schkr_[8 +1];
  char xyhkr_[8 +1];
  char hkqx_u[6 +1];
  double blje_u;
  double mqhkze;
  double mqhbje;
  char bjfd_u[1 +1];
  char dzhkjh[1 +1];
  long zqs_uu;
  long bqqs_u;
  long bqzqs_;
  long jxzqs_;
  long jxqs_u;
  double jxbj_u;
  long dqbjds;
  char hksxxh[10 +1];
  char yxtqhk[1 +1];
  char tqhkhx[1 +1];
  char thkhtx[1 +1];
  char tqhkcd[1 +1];
  double ytqhkj;
  char qxbgjh[1 +1];
  char llbgjh[1 +1];
  char dcfkjh[1 +1];
  char tqhkjh[1 +1];
  char zdkk_u[1 +1];
  char zdjqdk[1 +1];
  char dghkzh[1 +1];
  char hkzh_u[50 +1];
  char qyxhdk[1 +1];
  char xdqyzh[50 +1];
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKHK TBL_DDKHK;
/* EXEC SQL END DECLARE SECTION; */ 
#line 3627 "crtzdkfh.pc"

typedef struct _DDKHK_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int HKFS_U_FLAG;
 int LJZ_UU_FLAG;
 int LJQJQS_FLAG;
 int HKZQ_U_FLAG;
 int DPLHK__FLAG;
 int HBZQ_U_FLAG;
 int DECLGZ_FLAG;
 int YQHKZQ_FLAG;
 int SYLXLV_FLAG;
 int SCHKR__FLAG;
 int XYHKR__FLAG;
 int HKQX_U_FLAG;
 int BLJE_U_FLAG;
 int MQHKZE_FLAG;
 int MQHBJE_FLAG;
 int BJFD_U_FLAG;
 int DZHKJH_FLAG;
 int ZQS_UU_FLAG;
 int BQQS_U_FLAG;
 int BQZQS__FLAG;
 int JXZQS__FLAG;
 int JXQS_U_FLAG;
 int JXBJ_U_FLAG;
 int DQBJDS_FLAG;
 int HKSXXH_FLAG;
 int YXTQHK_FLAG;
 int TQHKHX_FLAG;
 int THKHTX_FLAG;
 int TQHKCD_FLAG;
 int YTQHKJ_FLAG;
 int QXBGJH_FLAG;
 int LLBGJH_FLAG;
 int DCFKJH_FLAG;
 int TQHKJH_FLAG;
 int ZDKK_U_FLAG;
 int ZDJQDK_FLAG;
 int DGHKZH_FLAG;
 int HKZH_U_FLAG;
 int QYXHDK_FLAG;
 int XDQYZH_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddkhk
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
 TBL_DDKHK stDDKHK;
 TBL_DDKHK midDDKHK;
 TBL_DDKHK preDDKHK;
 TBL_DDKHK pstDDKHK;
 TBL_DDKHK TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3704 "crtzdkfh.pc"

  char ddkhk_FRDM_U[4 +1];
  char ddkhk_DKJJBM[30 +1];
  char ddkhk_HKFS_U[1 +1];
  double ddkhk_LJZ_UU;
  long ddkhk_LJQJQS;
  char ddkhk_HKZQ_U[8 +1];
  char ddkhk_DPLHK_[1 +1];
  char ddkhk_HBZQ_U[8 +1];
  char ddkhk_DECLGZ[1 +1];
  char ddkhk_YQHKZQ[8 +1];
  double ddkhk_SYLXLV;
  char ddkhk_SCHKR_[8 +1];
  char ddkhk_XYHKR_[8 +1];
  char ddkhk_HKQX_U[6 +1];
  double ddkhk_BLJE_U;
  double ddkhk_MQHKZE;
  double ddkhk_MQHBJE;
  char ddkhk_BJFD_U[1 +1];
  char ddkhk_DZHKJH[1 +1];
  long ddkhk_ZQS_UU;
  long ddkhk_BQQS_U;
  long ddkhk_BQZQS_;
  long ddkhk_JXZQS_;
  long ddkhk_JXQS_U;
  double ddkhk_JXBJ_U;
  long ddkhk_DQBJDS;
  char ddkhk_HKSXXH[10 +1];
  char ddkhk_YXTQHK[1 +1];
  char ddkhk_TQHKHX[1 +1];
  char ddkhk_THKHTX[1 +1];
  char ddkhk_TQHKCD[1 +1];
  double ddkhk_YTQHKJ;
  char ddkhk_QXBGJH[1 +1];
  char ddkhk_LLBGJH[1 +1];
  char ddkhk_DCFKJH[1 +1];
  char ddkhk_TQHKJH[1 +1];
  char ddkhk_ZDKK_U[1 +1];
  char ddkhk_ZDJQDK[1 +1];
  char ddkhk_DGHKZH[1 +1];
  char ddkhk_HKZH_U[50 +1];
  char ddkhk_QYXHDK[1 +1];
  char ddkhk_XDQYZH[50 +1];
  char ddkhk_WHGY_U[10 +1];
  char ddkhk_WHRQ_U[8 +1];
  char ddkhk_WHJG_U[9 +1];
  long ddkhk_WHSJ_U;
  long ddkhk_SJC_UU;
  char ddkhk_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3753 "crtzdkfh.pc"

 struct _DDKHK_UPDFLAG DDKHK_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKHK *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKHK *stTbl);
  void LOGS(TBL_DDKHK *stTbl);
  void INITD(TBL_DDKHK *stmpTbl);
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
 CDddkhk ddkhk;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3790 "crtzdkfh.pc"

 char FRDM_DDKHK[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3792 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3794 "crtzdkfh.pc"

typedef struct _TBL_DDKFJ
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char hkfjbh[10 +1];
  char hkfjmc[200 +1];
  double hkfjje;
  char yqfjbh[10 +1];
  char yqfjmc[200 +1];
  double yqfjfj;
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKFJ TBL_DDKFJ;
/* EXEC SQL END DECLARE SECTION; */ 
#line 3813 "crtzdkfh.pc"

typedef struct _DDKFJ_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int HKFJBH_FLAG;
 int HKFJMC_FLAG;
 int HKFJJE_FLAG;
 int YQFJBH_FLAG;
 int YQFJMC_FLAG;
 int YQFJFJ_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddkfj
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
 TBL_DDKFJ stDDKFJ;
 TBL_DDKFJ midDDKFJ;
 TBL_DDKFJ preDDKFJ;
 TBL_DDKFJ pstDDKFJ;
 TBL_DDKFJ TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3856 "crtzdkfh.pc"

  char ddkfj_FRDM_U[4 +1];
  char ddkfj_DKJJBM[30 +1];
  char ddkfj_HKFJBH[10 +1];
  char ddkfj_HKFJMC[200 +1];
  double ddkfj_HKFJJE;
  char ddkfj_YQFJBH[10 +1];
  char ddkfj_YQFJMC[200 +1];
  double ddkfj_YQFJFJ;
  char ddkfj_WHGY_U[10 +1];
  char ddkfj_WHRQ_U[8 +1];
  char ddkfj_WHJG_U[9 +1];
  long ddkfj_WHSJ_U;
  long ddkfj_SJC_UU;
  char ddkfj_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3871 "crtzdkfh.pc"

 struct _DDKFJ_UPDFLAG DDKFJ_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKFJ *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKFJ *stTbl);
  void LOGS(TBL_DDKFJ *stTbl);
  void INITD(TBL_DDKFJ *stmpTbl);
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
 CDddkfj ddkfj;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3908 "crtzdkfh.pc"

 char FRDM_DDKFJ[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3910 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3912 "crtzdkfh.pc"

typedef struct _TBL_DDKXT
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char zdxtzy[1 +1];
  char xtzybh[10 +1];
  char lxzcgz[1 +1];
  char lxzhgz[1 +1];
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKXT TBL_DDKXT;
/* EXEC SQL END DECLARE SECTION; */ 
#line 3929 "crtzdkfh.pc"

typedef struct _DDKXT_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int ZDXTZY_FLAG;
 int XTZYBH_FLAG;
 int LXZCGZ_FLAG;
 int LXZHGZ_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddkxt
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
 TBL_DDKXT stDDKXT;
 TBL_DDKXT midDDKXT;
 TBL_DDKXT preDDKXT;
 TBL_DDKXT pstDDKXT;
 TBL_DDKXT TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 3970 "crtzdkfh.pc"

  char ddkxt_FRDM_U[4 +1];
  char ddkxt_DKJJBM[30 +1];
  char ddkxt_ZDXTZY[1 +1];
  char ddkxt_XTZYBH[10 +1];
  char ddkxt_LXZCGZ[1 +1];
  char ddkxt_LXZHGZ[1 +1];
  char ddkxt_WHGY_U[10 +1];
  char ddkxt_WHRQ_U[8 +1];
  char ddkxt_WHJG_U[9 +1];
  long ddkxt_WHSJ_U;
  long ddkxt_SJC_UU;
  char ddkxt_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 3983 "crtzdkfh.pc"

 struct _DDKXT_UPDFLAG DDKXT_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKXT *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKXT *stTbl);
  void LOGS(TBL_DDKXT *stTbl);
  void INITD(TBL_DDKXT *stmpTbl);
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
 CDddkxt ddkxt;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4020 "crtzdkfh.pc"

 char FRDM_DDKXT[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4022 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4024 "crtzdkfh.pc"

typedef struct _TBL_DTJXX
{
  char frdm_u[4 +1];
  char dkzh_u[50 +1];
  char dkjjbm[30 +1];
  double ljfkje;
  double snljfk;
  double bnljfk;
  double zgdkye;
  double snzgzh;
  double bnzgzh;
  double ljyhbj;
  double snljhb;
  double bnyhbj;
  double yshhxb;
  double yshhxx;
  double ljyhlx;
  double snljhx;
  double bnyhlx;
  double syljyh;
  double byljyh;
  double ljcslx;
  double snljlx;
  double bnljlx;
  char whrq_u[8 +1];
  char whgy_u[10 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DTJXX TBL_DTJXX;
/* EXEC SQL END DECLARE SECTION; */ 
#line 4057 "crtzdkfh.pc"

typedef struct _DTJXX_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKZH_U_FLAG;
 int DKJJBM_FLAG;
 int LJFKJE_FLAG;
 int SNLJFK_FLAG;
 int BNLJFK_FLAG;
 int ZGDKYE_FLAG;
 int SNZGZH_FLAG;
 int BNZGZH_FLAG;
 int LJYHBJ_FLAG;
 int SNLJHB_FLAG;
 int BNYHBJ_FLAG;
 int YSHHXB_FLAG;
 int YSHHXX_FLAG;
 int LJYHLX_FLAG;
 int SNLJHX_FLAG;
 int BNYHLX_FLAG;
 int SYLJYH_FLAG;
 int BYLJYH_FLAG;
 int LJCSLX_FLAG;
 int SNLJLX_FLAG;
 int BNLJLX_FLAG;
 int WHRQ_U_FLAG;
 int WHGY_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDdtjxx
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
 TBL_DTJXX stDTJXX;
 TBL_DTJXX midDTJXX;
 TBL_DTJXX preDTJXX;
 TBL_DTJXX pstDTJXX;
 TBL_DTJXX TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4114 "crtzdkfh.pc"

  char dtjxx_FRDM_U[4 +1];
  char dtjxx_DKZH_U[50 +1];
  char dtjxx_DKJJBM[30 +1];
  double dtjxx_LJFKJE;
  double dtjxx_SNLJFK;
  double dtjxx_BNLJFK;
  double dtjxx_ZGDKYE;
  double dtjxx_SNZGZH;
  double dtjxx_BNZGZH;
  double dtjxx_LJYHBJ;
  double dtjxx_SNLJHB;
  double dtjxx_BNYHBJ;
  double dtjxx_YSHHXB;
  double dtjxx_YSHHXX;
  double dtjxx_LJYHLX;
  double dtjxx_SNLJHX;
  double dtjxx_BNYHLX;
  double dtjxx_SYLJYH;
  double dtjxx_BYLJYH;
  double dtjxx_LJCSLX;
  double dtjxx_SNLJLX;
  double dtjxx_BNLJLX;
  char dtjxx_WHRQ_U[8 +1];
  char dtjxx_WHGY_U[10 +1];
  char dtjxx_WHJG_U[9 +1];
  long dtjxx_WHSJ_U;
  long dtjxx_SJC_UU;
  char dtjxx_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4143 "crtzdkfh.pc"

 struct _DTJXX_UPDFLAG DTJXX_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DTJXX *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DTJXX *stTbl);
  void LOGS(TBL_DTJXX *stTbl);
  void INITD(TBL_DTJXX *stmpTbl);
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
 CDdtjxx dtjxx;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4180 "crtzdkfh.pc"

 char FRDM_DTJXX[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4182 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4184 "crtzdkfh.pc"

typedef struct _TBL_DZLXX
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char wjflbz[1 +1];
  char wjflrq[8 +1];
  char wtdkbz[1 +1];
  double wtdksl;
  char khjl_u[10 +1];
  char dkgljg[9 +1];
  char fhjg_u[9 +1];
  char lmdk_u[1 +1];
  char glh_uu[30 +1];
  char whrq_u[8 +1];
  char whgy_u[10 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DZLXX TBL_DZLXX;
/* EXEC SQL END DECLARE SECTION; */ 
#line 4206 "crtzdkfh.pc"

typedef struct _DZLXX_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int WJFLBZ_FLAG;
 int WJFLRQ_FLAG;
 int WTDKBZ_FLAG;
 int WTDKSL_FLAG;
 int KHJL_U_FLAG;
 int DKGLJG_FLAG;
 int FHJG_U_FLAG;
 int LMDK_U_FLAG;
 int GLH_UU_FLAG;
 int WHRQ_U_FLAG;
 int WHGY_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDdzlxx
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
 TBL_DZLXX stDZLXX;
 TBL_DZLXX midDZLXX;
 TBL_DZLXX preDZLXX;
 TBL_DZLXX pstDZLXX;
 TBL_DZLXX TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4252 "crtzdkfh.pc"

  char dzlxx_FRDM_U[4 +1];
  char dzlxx_DKJJBM[30 +1];
  char dzlxx_WJFLBZ[1 +1];
  char dzlxx_WJFLRQ[8 +1];
  char dzlxx_WTDKBZ[1 +1];
  double dzlxx_WTDKSL;
  char dzlxx_KHJL_U[10 +1];
  char dzlxx_DKGLJG[9 +1];
  char dzlxx_FHJG_U[9 +1];
  char dzlxx_LMDK_U[1 +1];
  char dzlxx_GLH_UU[30 +1];
  char dzlxx_WHRQ_U[8 +1];
  char dzlxx_WHGY_U[10 +1];
  char dzlxx_WHJG_U[9 +1];
  long dzlxx_WHSJ_U;
  long dzlxx_SJC_UU;
  char dzlxx_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4270 "crtzdkfh.pc"

 struct _DZLXX_UPDFLAG DZLXX_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DZLXX *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DZLXX *stTbl);
  void LOGS(TBL_DZLXX *stTbl);
  void INITD(TBL_DZLXX *stmpTbl);
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
 CDdzlxx dzlxx;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4307 "crtzdkfh.pc"

 char FRDM_DZLXX[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4309 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4311 "crtzdkfh.pc"

typedef struct _TBL_DQGJH
{
  char frdm_u[4 +1];
  char dkzh_u[50 +1];
  char dkjjbm[30 +1];
  long bqqs_u;
  long bqzqs_;
  char qsrq_u[8 +1];
  char dqrq_u[8 +1];
  char kxqdqr[8 +1];
  char schkr_[8 +1];
  char xyhkr_[8 +1];
  double csbj_u;
  double cslx_u;
  double bj_uuu;
  double yylx_u;
  double csyjlx;
  double ysqx_u;
  double csqx_u;
  double ysyjfx;
  double csyjfx;
  double ysfx_u;
  double csfx_u;
  double yjfx_u;
  double fx_uuu;
  double hxlx_u;
  double sjyjlx;
  double sjyjfa;
  double sjyjf1;
  double yjtx_u;
  double ystx_u;
  double ysfy_u;
  double ysfj_u;
  char qgzt_u[1 +1];
  char yjfyj_[1 +1];
  char qgzl_u[1 +1];
  char jzqsr_[8 +1];
  char jzdqr_[8 +1];
  long mxxh_u;
  char whrq_u[8 +1];
  char whgy_u[10 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DQGJH TBL_DQGJH;
/* EXEC SQL END DECLARE SECTION; */ 
#line 4359 "crtzdkfh.pc"

typedef struct _DQGJH_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKZH_U_FLAG;
 int DKJJBM_FLAG;
 int BQQS_U_FLAG;
 int BQZQS__FLAG;
 int QSRQ_U_FLAG;
 int DQRQ_U_FLAG;
 int KXQDQR_FLAG;
 int SCHKR__FLAG;
 int XYHKR__FLAG;
 int CSBJ_U_FLAG;
 int CSLX_U_FLAG;
 int BJ_UUU_FLAG;
 int YYLX_U_FLAG;
 int CSYJLX_FLAG;
 int YSQX_U_FLAG;
 int CSQX_U_FLAG;
 int YSYJFX_FLAG;
 int CSYJFX_FLAG;
 int YSFX_U_FLAG;
 int CSFX_U_FLAG;
 int YJFX_U_FLAG;
 int FX_UUU_FLAG;
 int HXLX_U_FLAG;
 int SJYJLX_FLAG;
 int SJYJFA_FLAG;
 int SJYJF1_FLAG;
 int YJTX_U_FLAG;
 int YSTX_U_FLAG;
 int YSFY_U_FLAG;
 int YSFJ_U_FLAG;
 int QGZT_U_FLAG;
 int YJFYJ__FLAG;
 int QGZL_U_FLAG;
 int JZQSR__FLAG;
 int JZDQR__FLAG;
 int MXXH_U_FLAG;
 int WHRQ_U_FLAG;
 int WHGY_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDdqgjh
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
 TBL_DQGJH stDQGJH;
 TBL_DQGJH midDQGJH;
 TBL_DQGJH preDQGJH;
 TBL_DQGJH pstDQGJH;
 TBL_DQGJH TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4431 "crtzdkfh.pc"

  char dqgjh_FRDM_U[4 +1];
  char dqgjh_DKZH_U[50 +1];
  char dqgjh_DKJJBM[30 +1];
  long dqgjh_BQQS_U;
  long dqgjh_BQZQS_;
  char dqgjh_QSRQ_U[8 +1];
  char dqgjh_DQRQ_U[8 +1];
  char dqgjh_KXQDQR[8 +1];
  char dqgjh_SCHKR_[8 +1];
  char dqgjh_XYHKR_[8 +1];
  double dqgjh_CSBJ_U;
  double dqgjh_CSLX_U;
  double dqgjh_BJ_UUU;
  double dqgjh_YYLX_U;
  double dqgjh_CSYJLX;
  double dqgjh_YSQX_U;
  double dqgjh_CSQX_U;
  double dqgjh_YSYJFX;
  double dqgjh_CSYJFX;
  double dqgjh_YSFX_U;
  double dqgjh_CSFX_U;
  double dqgjh_YJFX_U;
  double dqgjh_FX_UUU;
  double dqgjh_HXLX_U;
  double dqgjh_SJYJLX;
  double dqgjh_SJYJFA;
  double dqgjh_SJYJF1;
  double dqgjh_YJTX_U;
  double dqgjh_YSTX_U;
  double dqgjh_YSFY_U;
  double dqgjh_YSFJ_U;
  char dqgjh_QGZT_U[1 +1];
  char dqgjh_YJFYJ_[1 +1];
  char dqgjh_QGZL_U[1 +1];
  char dqgjh_JZQSR_[8 +1];
  char dqgjh_JZDQR_[8 +1];
  long dqgjh_MXXH_U;
  char dqgjh_WHRQ_U[8 +1];
  char dqgjh_WHGY_U[10 +1];
  char dqgjh_WHJG_U[9 +1];
  long dqgjh_WHSJ_U;
  long dqgjh_SJC_UU;
  char dqgjh_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4475 "crtzdkfh.pc"

 struct _DQGJH_UPDFLAG DQGJH_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DQGJH *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DQGJH *stTbl);
  void LOGS(TBL_DQGJH *stTbl);
  void INITD(TBL_DQGJH *stmpTbl);
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
  int MSEL3();
  int MDEL3();
  int MSEL3R();
  int MDEL3R();
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
 CDdqgjh dqgjh;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4516 "crtzdkfh.pc"

 char FRDM_DQGJH[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4518 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4520 "crtzdkfh.pc"

typedef struct _TBL_DDKDQ
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char dqkxgz[1 +1];
  char yxdkzq[1 +1];
  char zqxzek[1 +1];
  long zqzdcs;
  char zqgzbh[10 +1];
  long yzqcs_;
  char ydkdqr[8 +1];
  long zqxh_u;
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKDQ TBL_DDKDQ;
/* EXEC SQL END DECLARE SECTION; */ 
#line 4541 "crtzdkfh.pc"

typedef struct _DDKDQ_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int DQKXGZ_FLAG;
 int YXDKZQ_FLAG;
 int ZQXZEK_FLAG;
 int ZQZDCS_FLAG;
 int ZQGZBH_FLAG;
 int YZQCS__FLAG;
 int YDKDQR_FLAG;
 int ZQXH_U_FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddkdq
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
 TBL_DDKDQ stDDKDQ;
 TBL_DDKDQ midDDKDQ;
 TBL_DDKDQ preDDKDQ;
 TBL_DDKDQ pstDDKDQ;
 TBL_DDKDQ TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4586 "crtzdkfh.pc"

  char ddkdq_FRDM_U[4 +1];
  char ddkdq_DKJJBM[30 +1];
  char ddkdq_DQKXGZ[1 +1];
  char ddkdq_YXDKZQ[1 +1];
  char ddkdq_ZQXZEK[1 +1];
  long ddkdq_ZQZDCS;
  char ddkdq_ZQGZBH[10 +1];
  long ddkdq_YZQCS_;
  char ddkdq_YDKDQR[8 +1];
  long ddkdq_ZQXH_U;
  char ddkdq_WHGY_U[10 +1];
  char ddkdq_WHRQ_U[8 +1];
  char ddkdq_WHJG_U[9 +1];
  long ddkdq_WHSJ_U;
  long ddkdq_SJC_UU;
  char ddkdq_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4603 "crtzdkfh.pc"

 struct _DDKDQ_UPDFLAG DDKDQ_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKDQ *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKDQ *stTbl);
  void LOGS(TBL_DDKDQ *stTbl);
  void INITD(TBL_DDKDQ *stmpTbl);
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
 CDddkdq ddkdq;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4640 "crtzdkfh.pc"

 char FRDM_DDKDQ[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4642 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4644 "crtzdkfh.pc"

typedef struct _TBL_ZZHMX
{
  char frdm_u[4 +1];
  char zh_uuu[50 +1];
  char zhyyjg[9 +1];
  char zhkjjg[9 +1];
  char hbdh_u[2 +1];
  char mk_uuu[4 +1];
  char zmk_uu[4 +1];
  char cpbh_u[10 +1];
  char khzhoo[50 +1];
  char khzhlx[1 +1];
  char khbh_u[12 +1];
  char khrq_u[8 +1];
  char khgy_u[10 +1];
  char sqgy_u[10 +1];
  double khje_u;
  char khgyls[20 +1];
  char xhjg_u[9 +1];
  char xhrq_u[8 +1];
  double lx_uuu;
  char xhgy_u[10 +1];
  char sqqxgy[6 +1];
  char xhgyls[20 +1];
  char dgdsbz[1 +1];
  char whgy_u[10 +1];
  char whjg_u[9 +1];
  char whrq_u[8 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_ZZHMX TBL_ZZHMX;
/* EXEC SQL END DECLARE SECTION; */ 
#line 4678 "crtzdkfh.pc"

typedef struct _ZZHMX_UPDFLAG
{
 int FRDM_U_FLAG;
 int ZH_UUU_FLAG;
 int ZHYYJG_FLAG;
 int ZHKJJG_FLAG;
 int HBDH_U_FLAG;
 int MK_UUU_FLAG;
 int ZMK_UU_FLAG;
 int CPBH_U_FLAG;
 int KHZHOO_FLAG;
 int KHZHLX_FLAG;
 int KHBH_U_FLAG;
 int KHRQ_U_FLAG;
 int KHGY_U_FLAG;
 int SQGY_U_FLAG;
 int KHJE_U_FLAG;
 int KHGYLS_FLAG;
 int XHJG_U_FLAG;
 int XHRQ_U_FLAG;
 int LX_UUU_FLAG;
 int XHGY_U_FLAG;
 int SQQXGY_FLAG;
 int XHGYLS_FLAG;
 int DGDSBZ_FLAG;
 int WHGY_U_FLAG;
 int WHJG_U_FLAG;
 int WHRQ_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDzzhmx
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
 TBL_ZZHMX stZZHMX;
 TBL_ZZHMX midZZHMX;
 TBL_ZZHMX preZZHMX;
 TBL_ZZHMX pstZZHMX;
 TBL_ZZHMX TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4736 "crtzdkfh.pc"

  char zzhmx_FRDM_U[4 +1];
  char zzhmx_ZH_UUU[50 +1];
  char zzhmx_ZHYYJG[9 +1];
  char zzhmx_ZHKJJG[9 +1];
  char zzhmx_HBDH_U[2 +1];
  char zzhmx_MK_UUU[4 +1];
  char zzhmx_ZMK_UU[4 +1];
  char zzhmx_CPBH_U[10 +1];
  char zzhmx_KHZHOO[50 +1];
  char zzhmx_KHZHLX[1 +1];
  char zzhmx_KHBH_U[12 +1];
  char zzhmx_KHRQ_U[8 +1];
  char zzhmx_KHGY_U[10 +1];
  char zzhmx_SQGY_U[10 +1];
  double zzhmx_KHJE_U;
  char zzhmx_KHGYLS[20 +1];
  char zzhmx_XHJG_U[9 +1];
  char zzhmx_XHRQ_U[8 +1];
  double zzhmx_LX_UUU;
  char zzhmx_XHGY_U[10 +1];
  char zzhmx_SQQXGY[6 +1];
  char zzhmx_XHGYLS[20 +1];
  char zzhmx_DGDSBZ[1 +1];
  char zzhmx_WHGY_U[10 +1];
  char zzhmx_WHJG_U[9 +1];
  char zzhmx_WHRQ_U[8 +1];
  long zzhmx_WHSJ_U;
  long zzhmx_SJC_UU;
  char zzhmx_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4766 "crtzdkfh.pc"

 struct _ZZHMX_UPDFLAG ZZHMX_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_ZZHMX *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_ZZHMX *stTbl);
  void LOGS(TBL_ZZHMX *stTbl);
  void INITD(TBL_ZZHMX *stmpTbl);
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
  int MSEL4();
  int MDEL4();
  int MSEL4R();
  int MDEL4R();
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
 CDzzhmx zzhmx;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4807 "crtzdkfh.pc"

 char FRDM_ZZHMX[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4809 "crtzdkfh.pc"

};
/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4811 "crtzdkfh.pc"

typedef struct _TBL_DDKED
{
  char frdm_u[4 +1];
  char dkjjbm[30 +1];
  char syed_u[1 +1];
  char edbzgz[1 +1];
  char edzdbz[2 +1];
  char edsygz[1 +1];
  double edsybl;
  char sydkcn[1 +1];
  char cndkjj[30 +1];
  char gljjbz[1 +1];
  char gljjh_[30 +1];
  char whgy_u[10 +1];
  char whrq_u[8 +1];
  char whjg_u[9 +1];
  long whsj_u;
  long sjc_uu;
  char jlzt_u[1 +1];
};
typedef struct _TBL_DDKED TBL_DDKED;
/* EXEC SQL END DECLARE SECTION; */ 
#line 4833 "crtzdkfh.pc"

typedef struct _DDKED_UPDFLAG
{
 int FRDM_U_FLAG;
 int DKJJBM_FLAG;
 int SYED_U_FLAG;
 int EDBZGZ_FLAG;
 int EDZDBZ_FLAG;
 int EDSYGZ_FLAG;
 int EDSYBL_FLAG;
 int SYDKCN_FLAG;
 int CNDKJJ_FLAG;
 int GLJJBZ_FLAG;
 int GLJJH__FLAG;
 int WHGY_U_FLAG;
 int WHRQ_U_FLAG;
 int WHJG_U_FLAG;
 int WHSJ_U_FLAG;
 int SJC_UU_FLAG;
 int JLZT_U_FLAG;
};
class CDddked
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
 TBL_DDKED stDDKED;
 TBL_DDKED midDDKED;
 TBL_DDKED preDDKED;
 TBL_DDKED pstDDKED;
 TBL_DDKED TBL_Array[100];
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4879 "crtzdkfh.pc"

  char ddked_FRDM_U[4 +1];
  char ddked_DKJJBM[30 +1];
  char ddked_SYED_U[1 +1];
  char ddked_EDBZGZ[1 +1];
  char ddked_EDZDBZ[2 +1];
  char ddked_EDSYGZ[1 +1];
  double ddked_EDSYBL;
  char ddked_SYDKCN[1 +1];
  char ddked_CNDKJJ[30 +1];
  char ddked_GLJJBZ[1 +1];
  char ddked_GLJJH_[30 +1];
  char ddked_WHGY_U[10 +1];
  char ddked_WHRQ_U[8 +1];
  char ddked_WHJG_U[9 +1];
  long ddked_WHSJ_U;
  long ddked_SJC_UU;
  char ddked_JLZT_U[1 +1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4897 "crtzdkfh.pc"

 struct _DDKED_UPDFLAG DDKED_UPDFLAG;
 public:
  int DBProc();
  int INITA();
  int ROUND(TBL_DDKED *pstBuf);
  int OPENCURSOR();
  int FETCHCURSOR();
  int CLOSECURSOR();
  int PRINTSQL();
  int JLYwRz();
  void LOG();
  void TRIM();
  void TRIMS(TBL_DDKED *stTbl);
  void LOGS(TBL_DDKED *stTbl);
  void INITD(TBL_DDKED *stmpTbl);
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
 CDddked ddked;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4934 "crtzdkfh.pc"

 char FRDM_DDKED[4 + 1];
 /* EXEC SQL END DECLARE SECTION; */ 
#line 4936 "crtzdkfh.pc"

};
typedef struct
{
    char sYSYWZL[1 +1];
    char sGLYWH1[30 +1];
    char sKHBH_U[12 +1];
    char sHTH_UU[30 +1];
    char sRZJG_U[9 +1];
    char sQUXRQ_[8 +1];
    char sDQRQ_U[8 +1];
    double dHTJE_U;
    double dJJJE_U;
    double dZXLL_U;
    double dYSYJFX;
    double dYSQX_U;
    char sNYLL_U[1 +1];
    char sHBDH_U[2 +1];
    char sHKZH_U[50 +1];
} BLNDianKuanKaihu_IN;
typedef struct
{
 char sDKJJBM[30 +1];
 char sDKZH_U[50 +1];
} BLNDianKuanKaihu_OUT;
int BLNDianKuanKaihu_CrtZdkfh(BLNDianKuanKaihu_IN stDianKuan_IN,BLNDianKuanKaihu_OUT *stDianKuan_OUT,int i);
int printDDKZK(TBL_DDKZK stDDKZK,char *sYYJG_U);
int printZDKFH(TBL_ZDKFH stZDKFH,char *sYYJG_U);
int printDDKTZ(TBL_DDKTZ stDDKTZ,char *sYYJG_U);
int printDDKJX(TBL_DDKJX stDDKJX,char *sYYJG_U);
int printDDKFK(TBL_DDKFK stDDKFK,char *sYYJG_U);
int printDDKHK(TBL_DDKHK stDDKHK,char *sYYJG_U);
int printDDKFJ(TBL_DDKFJ stDDKFJ,char *sYYJG_U);
int printDDKXT(TBL_DDKXT stDDKXT,char *sYYJG_U);
int printDTJXX(TBL_DTJXX stDTJXX,char *sYYJG_U);
int printDZLXX(TBL_DZLXX stDZLXX,char *sYYJG_U);
int printDQGJH(TBL_DQGJH stDQGJH,char *sYYJG_U);
int printDDKDQ(TBL_DDKDQ stDDKDQ,char *sYYJG_U);
int printZZHMX_FORZDKFH(TBL_ZZHMX stZZHMX,char *sYYJG_U);
int printDDKED(TBL_DDKED stDDKED,char *sYYJG_U);
 TBL_DDKZK stDDKZK;
 TBL_ZDKFH stZDKFH;
 TBL_DDKTZ stDDKTZ;
 TBL_DDKJX stDDKJX;
 TBL_DDKFK stDDKFK;
 TBL_DDKHK stDDKHK;
 TBL_DDKFJ stDDKFJ;
 TBL_DDKXT stDDKXT;
 TBL_DTJXX stDTJXX;
 TBL_DZLXX stDZLXX;
 TBL_DQGJH stDQGJH;
 TBL_DDKDQ stDDKDQ;
 TBL_ZZHMX stZZHMX;
 TBL_DDKED stDDKED;
int main(int argc, char *argv[])
{
 char sYYJG_U[9 +1];
 int iResult = 0;
 int i = 0;
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 4995 "crtzdkfh.pc"

        char sZHKHJG[9 +1]="";
        char sFRDM_U[4 +1]="";
  char sSOPAPDBS[20];
  TBL_ZCZXX stZCZXX;
  /* EXEC SQL END DECLARE SECTION; */ 
#line 5000 "crtzdkfh.pc"

 memset(sFRDM_U, 0, sizeof(sFRDM_U));
 memset(sYYJG_U, 0, sizeof(sYYJG_U));
 strcpy(sFRDM_U, argv[1]);
 strcpy(sYYJG_U, argv[2]);
    strcpy(sSOPAPDBS,getenv("DB_USER"));
    strcat(sSOPAPDBS,"/");
    strcat(sSOPAPDBS,getenv("DB_PASSWD"));
    /* EXEC SQL connect :sSOPAPDBS; */ 
#line 5008 "crtzdkfh.pc"

{
#line 5008 "crtzdkfh.pc"
    struct sqlexd sqlstm;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlvsn = 12;
#line 5008 "crtzdkfh.pc"
    sqlstm.arrsiz = 4;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqladtp = &sqladt;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqltdsp = &sqltds;
#line 5008 "crtzdkfh.pc"
    sqlstm.iters = (unsigned int  )10;
#line 5008 "crtzdkfh.pc"
    sqlstm.offset = (unsigned int  )5;
#line 5008 "crtzdkfh.pc"
    sqlstm.cud = sqlcud0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 5008 "crtzdkfh.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqhstv[0] = (unsigned char  *)sSOPAPDBS;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqhstl[0] = (unsigned long )20;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqhsts[0] = (         int  )20;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqindv[0] = (         short *)0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqharm[0] = (unsigned long )0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlcmax = (unsigned int )100;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlcmin = (unsigned int )2;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlcincr = (unsigned int )1;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlctimeout = (unsigned int )0;
#line 5008 "crtzdkfh.pc"
    sqlstm.sqlcnowait = (unsigned int )0;
#line 5008 "crtzdkfh.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 5008 "crtzdkfh.pc"
}

#line 5008 "crtzdkfh.pc"

    if( (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405) )
    {
        printf("open database error!!![%d]",sqlca.sqlcode);
        iResult = -1;
        goto Err_exit;
    }
   strcpy(sFRDM_U,argv[1]);
   strcpy(sZHKHJG,argv[2]);
   BLNDianKuanKaihu_IN In_BLNDianKuan;
   BLNDianKuanKaihu_OUT Out_BLNDianKuan;
  printf("sFRDM_U is [%s], sYYJG_U is [%s]\n", sFRDM_U, sZHKHJG);
 /* EXEC SQL DECLARE cur_crtzdkfh cursor FOR SELECT * FROM ZCZXX WHERE frdm_u =:sFRDM_U AND zhkhjg=:sZHKHJG AND zhhubz='01' AND zhckqx='0D'; */ 
#line 5020 "crtzdkfh.pc"

 /* EXEC SQL OPEN cur_crtzdkfh; */ 
#line 5021 "crtzdkfh.pc"

{
#line 5021 "crtzdkfh.pc"
 struct sqlexd sqlstm;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqlvsn = 12;
#line 5021 "crtzdkfh.pc"
 sqlstm.arrsiz = 4;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqladtp = &sqladt;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqltdsp = &sqltds;
#line 5021 "crtzdkfh.pc"
 sqlstm.stmt = sq0002;
#line 5021 "crtzdkfh.pc"
 sqlstm.iters = (unsigned int  )1;
#line 5021 "crtzdkfh.pc"
 sqlstm.offset = (unsigned int  )36;
#line 5021 "crtzdkfh.pc"
 sqlstm.selerr = (unsigned short)1;
#line 5021 "crtzdkfh.pc"
 sqlstm.cud = sqlcud0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqlety = (unsigned short)4352;
#line 5021 "crtzdkfh.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqhstv[0] = (unsigned char  *)sFRDM_U;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqhstl[0] = (unsigned long )5;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqindv[0] = (         short *)0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqharm[0] = (unsigned long )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqhstv[1] = (unsigned char  *)sZHKHJG;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqhstl[1] = (unsigned long )10;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqhsts[1] = (         int  )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqindv[1] = (         short *)0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqinds[1] = (         int  )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqharm[1] = (unsigned long )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqadto[1] = (unsigned short )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqtdso[1] = (unsigned short )0;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 5021 "crtzdkfh.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 5021 "crtzdkfh.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 5021 "crtzdkfh.pc"
}

#line 5021 "crtzdkfh.pc"

 if((sqlca.sqlcode != 0 && sqlca.sqlcode != -1405))
   {
      /* EXEC SQL close cur_crtzdkfh; */ 
#line 5024 "crtzdkfh.pc"

{
#line 5024 "crtzdkfh.pc"
      struct sqlexd sqlstm;
#line 5024 "crtzdkfh.pc"
      sqlstm.sqlvsn = 12;
#line 5024 "crtzdkfh.pc"
      sqlstm.arrsiz = 4;
#line 5024 "crtzdkfh.pc"
      sqlstm.sqladtp = &sqladt;
#line 5024 "crtzdkfh.pc"
      sqlstm.sqltdsp = &sqltds;
#line 5024 "crtzdkfh.pc"
      sqlstm.iters = (unsigned int  )1;
#line 5024 "crtzdkfh.pc"
      sqlstm.offset = (unsigned int  )59;
#line 5024 "crtzdkfh.pc"
      sqlstm.cud = sqlcud0;
#line 5024 "crtzdkfh.pc"
      sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 5024 "crtzdkfh.pc"
      sqlstm.sqlety = (unsigned short)4352;
#line 5024 "crtzdkfh.pc"
      sqlstm.occurs = (unsigned int  )0;
#line 5024 "crtzdkfh.pc"
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 5024 "crtzdkfh.pc"
}

#line 5024 "crtzdkfh.pc"

   printf("打开游标错误,SQLCODE===[%d]",sqlca.sqlcode);
      goto ERR_QUIT;
   }
 for(i = 0; i<atol(argv[3]); i++)
 {
    memset((char *)&stZCZXX, 0, sizeof(stZCZXX));
  /* EXEC SQL FETCH cur_crtzdkfh INTO :stZCZXX; */ 
#line 5031 "crtzdkfh.pc"

{
#line 5031 "crtzdkfh.pc"
  struct sqlexd sqlstm;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqlvsn = 12;
#line 5031 "crtzdkfh.pc"
  sqlstm.arrsiz = 115;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqladtp = &sqladt;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqltdsp = &sqltds;
#line 5031 "crtzdkfh.pc"
  sqlstm.iters = (unsigned int  )1;
#line 5031 "crtzdkfh.pc"
  sqlstm.offset = (unsigned int  )74;
#line 5031 "crtzdkfh.pc"
  sqlstm.selerr = (unsigned short)1;
#line 5031 "crtzdkfh.pc"
  sqlstm.cud = sqlcud0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 5031 "crtzdkfh.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqfoff = (         int )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)stZCZXX.frdm_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[0] = (unsigned long )5;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[1] = (unsigned char  *)stZCZXX.fzzh_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[1] = (unsigned long )51;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[1] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[1] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[1] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[2] = (unsigned char  *)stZCZXX.zhmc_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[2] = (unsigned long )201;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[2] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[2] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[2] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[2] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[3] = (unsigned char  *)stZCZXX.glkhbh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[3] = (unsigned long )13;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[3] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[3] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[3] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[3] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[4] = (unsigned char  *)stZCZXX.zhhubz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[4] = (unsigned long )3;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[4] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[4] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[4] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[4] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[4] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[4] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[5] = (unsigned char  *)stZCZXX.zhchbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[5] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[5] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[5] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[5] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[5] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[5] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[5] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[6] = (unsigned char  *)stZCZXX.zhckqx;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[6] = (unsigned long )7;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[6] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[6] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[6] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[6] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[6] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[6] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[7] = (unsigned char  *)stZCZXX.zhdqr_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[7] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[7] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[7] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[7] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[7] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[7] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[7] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[8] = (unsigned char  *)stZCZXX.ywdh_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[8] = (unsigned long )5;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[8] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[8] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[8] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[8] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[8] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[8] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[9] = (unsigned char  *)stZCZXX.zhkhjg;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[9] = (unsigned long )10;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[9] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[9] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[9] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[9] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[9] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[9] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[10] = (unsigned char  *)stZCZXX.zhkhr_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[10] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[10] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[10] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[10] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[10] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[10] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[10] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[11] = (unsigned char  *)stZCZXX.zhkhgy;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[11] = (unsigned long )11;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[11] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[11] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[11] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[11] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[11] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[11] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[12] = (unsigned char  *)stZCZXX.zhxhjg;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[12] = (unsigned long )10;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[12] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[12] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[12] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[12] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[12] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[12] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[13] = (unsigned char  *)stZCZXX.zhxhrq;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[13] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[13] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[13] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[13] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[13] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[13] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[13] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[14] = (unsigned char  *)stZCZXX.zhxhgy;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[14] = (unsigned long )11;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[14] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[14] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[14] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[14] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[14] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[14] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[15] = (unsigned char  *)stZCZXX.zhyxq_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[15] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[15] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[15] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[15] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[15] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[15] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[15] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[16] = (unsigned char  *)stZCZXX.rlmc_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[16] = (unsigned long )21;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[16] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[16] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[16] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[16] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[16] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[16] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[17] = (unsigned char  *)&stZCZXX.dqwyxh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[17] = (unsigned long )sizeof(long);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[17] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[17] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[17] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[17] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[17] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[17] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[18] = (unsigned char  *)stZCZXX.dfzrkh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[18] = (unsigned long )51;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[18] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[18] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[18] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[18] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[18] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[18] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[19] = (unsigned char  *)stZCZXX.dfzhao;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[19] = (unsigned long )51;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[19] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[19] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[19] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[19] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[19] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[19] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[20] = (unsigned char  *)&stZCZXX.dqye_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[20] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[20] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[20] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[20] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[20] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[20] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[20] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[21] = (unsigned char  *)&stZCZXX.srye_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[21] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[21] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[21] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[21] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[21] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[21] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[21] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[22] = (unsigned char  *)stZCZXX.zjgxrq;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[22] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[22] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[22] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[22] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[22] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[22] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[22] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[23] = (unsigned char  *)stZCZXX.zhbzzf;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[23] = (unsigned long )65;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[23] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[23] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[23] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[23] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[23] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[23] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[24] = (unsigned char  *)stZCZXX.cpdh_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[24] = (unsigned long )11;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[24] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[24] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[24] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[24] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[24] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[24] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[25] = (unsigned char  *)stZCZXX.fzcplx;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[25] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[25] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[25] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[25] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[25] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[25] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[25] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[26] = (unsigned char  *)stZCZXX.ssdx_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[26] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[26] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[26] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[26] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[26] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[26] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[26] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[27] = (unsigned char  *)stZCZXX.cpfl2_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[27] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[27] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[27] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[27] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[27] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[27] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[27] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[28] = (unsigned char  *)stZCZXX.cpfl3_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[28] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[28] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[28] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[28] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[28] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[28] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[28] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[29] = (unsigned char  *)stZCZXX.cpfl4_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[29] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[29] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[29] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[29] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[29] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[29] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[29] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[30] = (unsigned char  *)stZCZXX.cpfl5_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[30] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[30] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[30] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[30] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[30] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[30] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[30] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[31] = (unsigned char  *)stZCZXX.kjhsdm;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[31] = (unsigned long )11;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[31] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[31] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[31] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[31] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[31] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[31] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[32] = (unsigned char  *)stZCZXX.zhfl_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[32] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[32] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[32] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[32] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[32] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[32] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[32] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[33] = (unsigned char  *)stZCZXX.flsx_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[33] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[33] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[33] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[33] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[33] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[33] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[33] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[34] = (unsigned char  *)stZCZXX.zhfldm;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[34] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[34] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[34] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[34] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[34] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[34] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[34] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[35] = (unsigned char  *)stZCZXX.fenldm;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[35] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[35] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[35] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[35] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[35] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[35] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[35] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[36] = (unsigned char  *)stZCZXX.fleidm;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[36] = (unsigned long )4;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[36] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[36] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[36] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[36] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[36] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[36] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[37] = (unsigned char  *)stZCZXX.kzbiz_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[37] = (unsigned long )3;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[37] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[37] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[37] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[37] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[37] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[37] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[38] = (unsigned char  *)&stZCZXX.qcjesz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[38] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[38] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[38] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[38] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[38] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[38] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[38] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[39] = (unsigned char  *)stZCZXX.jyxz_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[39] = (unsigned long )11;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[39] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[39] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[39] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[39] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[39] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[39] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[40] = (unsigned char  *)&stZCZXX.zhlczd;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[40] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[40] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[40] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[40] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[40] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[40] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[40] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[41] = (unsigned char  *)&stZCZXX.zhlczx;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[41] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[41] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[41] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[41] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[41] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[41] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[41] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[42] = (unsigned char  *)stZCZXX.kzfngs;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[42] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[42] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[42] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[42] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[42] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[42] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[42] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[43] = (unsigned char  *)stZCZXX.zqfs_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[43] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[43] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[43] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[43] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[43] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[43] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[43] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[44] = (unsigned char  *)stZCZXX.lsbqbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[44] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[44] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[44] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[44] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[44] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[44] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[44] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[45] = (unsigned char  *)stZCZXX.khzh_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[45] = (unsigned long )51;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[45] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[45] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[45] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[45] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[45] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[45] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[46] = (unsigned char  *)stZCZXX.zcfans;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[46] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[46] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[46] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[46] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[46] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[46] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[46] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[47] = (unsigned char  *)&stZCZXX.byje_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[47] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[47] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[47] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[47] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[47] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[47] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[47] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[48] = (unsigned char  *)stZCZXX.scywrq;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[48] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[48] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[48] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[48] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[48] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[48] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[48] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[49] = (unsigned char  *)stZCZXX.scdsfr;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[49] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[49] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[49] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[49] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[49] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[49] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[49] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[50] = (unsigned char  *)&stZCZXX.zqjg_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[50] = (unsigned long )sizeof(long);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[50] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[50] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[50] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[50] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[50] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[50] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[51] = (unsigned char  *)&stZCZXX.khje_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[51] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[51] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[51] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[51] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[51] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[51] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[51] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[52] = (unsigned char  *)stZCZXX.yqxr_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[52] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[52] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[52] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[52] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[52] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[52] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[52] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[53] = (unsigned char  *)stZCZXX.ydqr_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[53] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[53] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[53] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[53] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[53] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[53] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[53] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[54] = (unsigned char  *)stZCZXX.ckzl_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[54] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[54] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[54] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[54] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[54] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[54] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[54] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[55] = (unsigned char  *)stZCZXX.zhzt_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[55] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[55] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[55] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[55] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[55] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[55] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[55] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[56] = (unsigned char  *)stZCZXX.sfdzbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[56] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[56] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[56] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[56] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[56] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[56] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[56] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[57] = (unsigned char  *)stZCZXX.dzzq_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[57] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[57] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[57] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[57] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[57] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[57] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[57] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[58] = (unsigned char  *)stZCZXX.dzfw_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[58] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[58] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[58] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[58] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[58] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[58] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[58] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[59] = (unsigned char  *)stZCZXX.zhdanr;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[59] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[59] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[59] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[59] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[59] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[59] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[59] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[60] = (unsigned char  *)stZCZXX.zjdzrq;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[60] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[60] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[60] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[60] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[60] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[60] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[60] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[61] = (unsigned char  *)stZCZXX.zhhcbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[61] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[61] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[61] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[61] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[61] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[61] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[61] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[62] = (unsigned char  *)stZCZXX.zjzhhc;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[62] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[62] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[62] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[62] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[62] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[62] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[62] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[63] = (unsigned char  *)stZCZXX.yeyzzt;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[63] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[63] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[63] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[63] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[63] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[63] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[63] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[64] = (unsigned char  *)stZCZXX.zhcpdh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[64] = (unsigned long )11;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[64] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[64] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[64] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[64] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[64] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[64] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[65] = (unsigned char  *)stZCZXX.zhzxh_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[65] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[65] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[65] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[65] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[65] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[65] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[65] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[66] = (unsigned char  *)stZCZXX.zhzhh_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[66] = (unsigned long )51;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[66] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[66] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[66] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[66] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[66] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[66] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[67] = (unsigned char  *)stZCZXX.khzjly;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[67] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[67] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[67] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[67] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[67] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[67] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[67] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[68] = (unsigned char  *)stZCZXX.xhzjsf;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[68] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[68] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[68] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[68] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[68] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[68] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[68] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[69] = (unsigned char  *)stZCZXX.zdzczh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[69] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[69] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[69] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[69] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[69] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[69] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[69] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[70] = (unsigned char  *)stZCZXX.zjzczh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[70] = (unsigned long )51;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[70] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[70] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[70] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[70] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[70] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[70] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[71] = (unsigned char  *)stZCZXX.zdrzh2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[71] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[71] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[71] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[71] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[71] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[71] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[71] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[72] = (unsigned char  *)stZCZXX.zjsrzh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[72] = (unsigned long )51;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[72] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[72] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[72] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[72] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[72] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[72] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[73] = (unsigned char  *)stZCZXX.sfzhxz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[73] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[73] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[73] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[73] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[73] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[73] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[73] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[74] = (unsigned char  *)stZCZXX.zhdjbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[74] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[74] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[74] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[74] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[74] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[74] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[74] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[75] = (unsigned char  *)stZCZXX.zhfbdj;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[75] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[75] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[75] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[75] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[75] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[75] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[75] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[76] = (unsigned char  *)stZCZXX.zhzsbf;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[76] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[76] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[76] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[76] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[76] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[76] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[76] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[77] = (unsigned char  *)stZCZXX.zhzfbs;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[77] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[77] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[77] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[77] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[77] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[77] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[77] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[78] = (unsigned char  *)stZCZXX.glxhdk;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[78] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[78] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[78] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[78] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[78] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[78] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[78] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[79] = (unsigned char  *)stZCZXX.sfyzhb;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[79] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[79] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[79] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[79] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[79] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[79] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[79] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[80] = (unsigned char  *)stZCZXX.sfxtz1;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[80] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[80] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[80] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[80] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[80] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[80] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[80] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[81] = (unsigned char  *)stZCZXX.sfjbh_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[81] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[81] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[81] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[81] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[81] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[81] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[81] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[82] = (unsigned char  *)stZCZXX.jkzhbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[82] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[82] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[82] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[82] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[82] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[82] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[82] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[83] = (unsigned char  *)stZCZXX.sfdgyb;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[83] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[83] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[83] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[83] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[83] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[83] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[83] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[84] = (unsigned char  *)stZCZXX.dgzplm;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[84] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[84] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[84] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[84] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[84] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[84] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[84] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[85] = (unsigned char  *)stZCZXX.sfzph_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[85] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[85] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[85] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[85] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[85] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[85] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[85] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[86] = (unsigned char  *)stZCZXX.yxtzbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[86] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[86] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[86] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[86] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[86] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[86] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[86] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[87] = (unsigned char  *)stZCZXX.dqrjsh;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[87] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[87] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[87] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[87] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[87] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[87] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[87] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[88] = (unsigned char  *)stZCZXX.sfwhjg;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[88] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[88] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[88] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[88] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[88] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[88] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[88] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[89] = (unsigned char  *)stZCZXX.whhcbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[89] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[89] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[89] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[89] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[89] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[89] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[89] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[90] = (unsigned char  *)stZCZXX.zchsf_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[90] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[90] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[90] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[90] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[90] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[90] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[90] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[91] = (unsigned char  *)stZCZXX.bdhsf_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[91] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[91] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[91] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[91] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[91] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[91] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[91] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[92] = (unsigned char  *)stZCZXX.jshubz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[92] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[92] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[92] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[92] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[92] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[92] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[92] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[93] = (unsigned char  *)stZCZXX.bzjckb;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[93] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[93] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[93] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[93] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[93] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[93] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[93] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[94] = (unsigned char  *)stZCZXX.czckbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[94] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[94] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[94] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[94] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[94] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[94] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[94] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[95] = (unsigned char  *)stZCZXX.lcqybz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[95] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[95] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[95] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[95] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[95] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[95] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[95] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[96] = (unsigned char  *)stZCZXX.byzd1_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[96] = (unsigned long )201;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[96] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[96] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[96] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[96] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[96] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[96] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[97] = (unsigned char  *)stZCZXX.byzd2_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[97] = (unsigned long )201;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[97] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[97] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[97] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[97] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[97] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[97] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[98] = (unsigned char  *)stZCZXX.byzd3_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[98] = (unsigned long )201;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[98] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[98] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[98] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[98] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[98] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[98] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[99] = (unsigned char  *)&stZCZXX.byye1_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[99] = (unsigned long )sizeof(double);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[99] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[99] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[99] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[99] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[99] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[99] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[100] = (unsigned char  *)stZCZXX.byrq1_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[100] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[100] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[100] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[100] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[100] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[100] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[100] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[101] = (unsigned char  *)stZCZXX.dfjxrq;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[101] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[101] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[101] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[101] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[101] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[101] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[101] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[102] = (unsigned char  *)stZCZXX.sshbob;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[102] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[102] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[102] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[102] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[102] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[102] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[102] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[103] = (unsigned char  *)stZCZXX.gltzbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[103] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[103] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[103] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[103] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[103] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[103] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[103] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[104] = (unsigned char  *)stZCZXX.yegjbz;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[104] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[104] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[104] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[104] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[104] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[104] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[104] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[105] = (unsigned char  *)stZCZXX.huizfs;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[105] = (unsigned long )3;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[105] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[105] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[105] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[105] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[105] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[105] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[106] = (unsigned char  *)stZCZXX.ljfypl;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[106] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[106] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[106] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[106] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[106] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[106] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[106] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[107] = (unsigned char  *)stZCZXX.plhsfp;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[107] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[107] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[107] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[107] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[107] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[107] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[107] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[108] = (unsigned char  *)stZCZXX.whgy_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[108] = (unsigned long )11;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[108] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[108] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[108] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[108] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[108] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[108] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[109] = (unsigned char  *)stZCZXX.whjg_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[109] = (unsigned long )10;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[109] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[109] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[109] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[109] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[109] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[109] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[110] = (unsigned char  *)stZCZXX.whrq_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[110] = (unsigned long )9;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[110] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[110] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[110] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[110] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[110] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[110] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[111] = (unsigned char  *)&stZCZXX.whsj_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[111] = (unsigned long )sizeof(long);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[111] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[111] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[111] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[111] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[111] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[111] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[112] = (unsigned char  *)&stZCZXX.sjc_uu;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[112] = (unsigned long )sizeof(long);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[112] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[112] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[112] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[112] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[112] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[112] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[113] = (unsigned char  *)&stZCZXX.xlho_u;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[113] = (unsigned long )sizeof(long);
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[113] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[113] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[113] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[113] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[113] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[113] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstv[114] = (unsigned char  *)stZCZXX.jilzt_;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhstl[114] = (unsigned long )2;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqhsts[114] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqindv[114] = (         short *)0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqinds[114] = (         int  )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqharm[114] = (unsigned long )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqadto[114] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqtdso[114] = (unsigned short )0;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 5031 "crtzdkfh.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 5031 "crtzdkfh.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 5031 "crtzdkfh.pc"
}

#line 5031 "crtzdkfh.pc"

  if((sqlca.sqlcode != 0 && sqlca.sqlcode != -1405))
     {
     printf("FETCH 游标,SQLCODE===[%d]",sqlca.sqlcode);
         if(1403 != sqlca.sqlcode)
         {
             /* EXEC SQL close cur_crtzdkfh; */ 
#line 5037 "crtzdkfh.pc"

{
#line 5037 "crtzdkfh.pc"
             struct sqlexd sqlstm;
#line 5037 "crtzdkfh.pc"
             sqlstm.sqlvsn = 12;
#line 5037 "crtzdkfh.pc"
             sqlstm.arrsiz = 115;
#line 5037 "crtzdkfh.pc"
             sqlstm.sqladtp = &sqladt;
#line 5037 "crtzdkfh.pc"
             sqlstm.sqltdsp = &sqltds;
#line 5037 "crtzdkfh.pc"
             sqlstm.iters = (unsigned int  )1;
#line 5037 "crtzdkfh.pc"
             sqlstm.offset = (unsigned int  )549;
#line 5037 "crtzdkfh.pc"
             sqlstm.cud = sqlcud0;
#line 5037 "crtzdkfh.pc"
             sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 5037 "crtzdkfh.pc"
             sqlstm.sqlety = (unsigned short)4352;
#line 5037 "crtzdkfh.pc"
             sqlstm.occurs = (unsigned int  )0;
#line 5037 "crtzdkfh.pc"
             sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 5037 "crtzdkfh.pc"
}

#line 5037 "crtzdkfh.pc"

             goto ERR_QUIT;
         }
     }
  memset((char *)&In_BLNDianKuan,0,sizeof(In_BLNDianKuan));
  memset((char *)&Out_BLNDianKuan,0,sizeof(Out_BLNDianKuan));
  memset(&stDDKZK, 0, sizeof(stDDKZK));
  memset(&stZDKFH, 0, sizeof(stZDKFH));
  memset(&stDDKTZ, 0, sizeof(stDDKTZ));
  memset(&stDDKJX, 0, sizeof(stDDKJX));
  memset(&stDDKFK, 0, sizeof(stDDKFK));
  memset(&stDDKHK, 0, sizeof(stDDKHK));
  memset(&stDDKFJ, 0, sizeof(stDDKFJ));
  memset(&stDDKXT, 0, sizeof(stDDKXT));
  memset(&stDTJXX, 0, sizeof(stDTJXX));
  memset(&stDZLXX, 0, sizeof(stDZLXX));
  memset(&stDQGJH, 0, sizeof(stDQGJH));
  memset(&stDDKDQ, 0, sizeof(stDDKDQ));
  memset(&stDDKED, 0, sizeof(stDDKED));
        printf("==============================!!![%s,%s]",stZCZXX.glkhbh,stZCZXX.khzh_u);
  strcpy(In_BLNDianKuan.sYSYWZL,"2");
  strcpy(In_BLNDianKuan.sGLYWH1,"XXXXXXX");
  strcpy(In_BLNDianKuan.sKHBH_U,stZCZXX.glkhbh);
  strcpy(In_BLNDianKuan.sRZJG_U,sZHKHJG);
  In_BLNDianKuan.dZXLL_U = 5.6;
  In_BLNDianKuan.dHTJE_U = 100000;
  In_BLNDianKuan.dJJJE_U = 100000;
  strcpy(In_BLNDianKuan.sHBDH_U,"01");
  strcpy(In_BLNDianKuan.sHKZH_U,stZCZXX.khzh_u);
  if (-1 == BLNDianKuanKaihu_CrtZdkfh(In_BLNDianKuan,&Out_BLNDianKuan,i))
   return -1;
   printf("写文件 begin i===[%d]\n",i+1);
   printDDKZK(stDDKZK,sZHKHJG);
   printZDKFH(stZDKFH,sZHKHJG);
   printDDKTZ(stDDKTZ,sZHKHJG);
   printDDKJX(stDDKJX,sZHKHJG);
   printDDKFK(stDDKFK,sZHKHJG);
   printDDKHK(stDDKHK,sZHKHJG);
   printDDKFJ(stDDKFJ,sZHKHJG);
   printDDKXT(stDDKXT,sZHKHJG);
   printDTJXX(stDTJXX,sZHKHJG);
   printDZLXX(stDZLXX,sZHKHJG);
   printDQGJH(stDQGJH,sZHKHJG);
   printDDKDQ(stDDKDQ,sZHKHJG);
   printZZHMX_FORZDKFH(stZZHMX,sZHKHJG);
   printDDKED(stDDKED,sZHKHJG);
   printf("写文件 end i===[%d]\n",i+1);
 }
ERR_QUIT:
     /* EXEC SQL close cur_crtzdkfh; */ 
#line 5086 "crtzdkfh.pc"

{
#line 5086 "crtzdkfh.pc"
     struct sqlexd sqlstm;
#line 5086 "crtzdkfh.pc"
     sqlstm.sqlvsn = 12;
#line 5086 "crtzdkfh.pc"
     sqlstm.arrsiz = 115;
#line 5086 "crtzdkfh.pc"
     sqlstm.sqladtp = &sqladt;
#line 5086 "crtzdkfh.pc"
     sqlstm.sqltdsp = &sqltds;
#line 5086 "crtzdkfh.pc"
     sqlstm.iters = (unsigned int  )1;
#line 5086 "crtzdkfh.pc"
     sqlstm.offset = (unsigned int  )564;
#line 5086 "crtzdkfh.pc"
     sqlstm.cud = sqlcud0;
#line 5086 "crtzdkfh.pc"
     sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 5086 "crtzdkfh.pc"
     sqlstm.sqlety = (unsigned short)4352;
#line 5086 "crtzdkfh.pc"
     sqlstm.occurs = (unsigned int  )0;
#line 5086 "crtzdkfh.pc"
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 5086 "crtzdkfh.pc"
}

#line 5086 "crtzdkfh.pc"

Err_exit:
 return iResult;
}
int BLNDianKuanKaihu_CrtZdkfh(BLNDianKuanKaihu_IN stDianKuan_IN,
         BLNDianKuanKaihu_OUT *stDianKuan_OUT,
         int i)
{
 /* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 5094 "crtzdkfh.pc"

        char sZWJG_U[9 +1]="";
        long inum = 0;
   /* EXEC SQL END DECLARE SECTION; */ 
#line 5097 "crtzdkfh.pc"

    char sDKZH_U[50 + 1];
    memset(sDKZH_U, 0 ,sizeof(sDKZH_U));
    strcpy(sZWJG_U,stDianKuan_IN.sRZJG_U);
    /* EXEC SQL select count(*) into :inum from zdkfh where ZWJG_U = :sZWJG_U; */ 
#line 5101 "crtzdkfh.pc"

{
#line 5101 "crtzdkfh.pc"
    struct sqlexd sqlstm;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqlvsn = 12;
#line 5101 "crtzdkfh.pc"
    sqlstm.arrsiz = 115;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqladtp = &sqladt;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqltdsp = &sqltds;
#line 5101 "crtzdkfh.pc"
    sqlstm.stmt = "select count ( * ) into :b0 from zdkfh where ZWJG_U = :b\
1 ";
#line 5101 "crtzdkfh.pc"
    sqlstm.iters = (unsigned int  )1;
#line 5101 "crtzdkfh.pc"
    sqlstm.offset = (unsigned int  )579;
#line 5101 "crtzdkfh.pc"
    sqlstm.selerr = (unsigned short)1;
#line 5101 "crtzdkfh.pc"
    sqlstm.cud = sqlcud0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 5101 "crtzdkfh.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqhstv[0] = (unsigned char  *)&inum;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
#line 5101 "crtzdkfh.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqindv[0] = (         short *)0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqharm[0] = (unsigned long )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqhstv[1] = (unsigned char  *)sZWJG_U;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqhstl[1] = (unsigned long )10;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqhsts[1] = (         int  )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqindv[1] = (         short *)0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqinds[1] = (         int  )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqharm[1] = (unsigned long )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqadto[1] = (unsigned short )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqtdso[1] = (unsigned short )0;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 5101 "crtzdkfh.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 5101 "crtzdkfh.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 5101 "crtzdkfh.pc"
}

#line 5101 "crtzdkfh.pc"

    sprintf(sDKZH_U,"%s%s%08d",sZWJG_U,stDianKuan_IN.sHBDH_U,inum+1+i);
 strcpy(stDDKZK.frdm_u,"9999");
 strcpy(stZDKFH.frdm_u,"9999");
 strcpy(stDDKTZ.frdm_u,"9999");
 strcpy(stDDKJX.frdm_u,"9999");
 strcpy(stDDKFK.frdm_u,"9999");
 strcpy(stDDKHK.frdm_u,"9999");
 strcpy(stDDKFJ.frdm_u,"9999");
 strcpy(stDDKXT.frdm_u,"9999");
 strcpy(stDTJXX.frdm_u,"9999");
 strcpy(stDZLXX.frdm_u,"9999");
 strcpy(stDQGJH.frdm_u,"9999");
 strcpy(stDDKDQ.frdm_u,"9999");
 strcpy(stDDKED.frdm_u,"9999");
 strcpy(stZZHMX.frdm_u,"9999");
 strcpy(stZZHMX.zh_uuu,sDKZH_U);
 strcpy(stZZHMX.zhyyjg,stDianKuan_IN.sRZJG_U);
 strcpy(stZZHMX.zhkjjg,stDianKuan_IN.sRZJG_U);
 strcpy(stZZHMX.hbdh_u,"01");
 strcpy(stZZHMX.mk_uuu,"LN");
 strcpy(stZZHMX.whjg_u,stDianKuan_IN.sRZJG_U);
 strcpy(stZZHMX.whrq_u,"20160324");
 strcpy(stZZHMX.jlzt_u,"0");
    if(stDianKuan_IN.sKHBH_U[1] == '1')
    {
       strcpy(stDDKZK.dkjjbm, sDKZH_U);
      strcpy(stDDKZK.dkdx_u, "1");
      strcpy(stDDKZK.cndk_u, "0");
      strcpy(stDDKZK.xhdkbz, "0");
      strcpy(stDDKZK.lhdk_u, "0");
      strcpy(stDDKZK.ysdk_u, "0");
      strcpy(stDDKZK.dldk_u, "0");
      strcpy(stDDKZK.ayjfyj, "1");
      strcpy(stDDKZK.ayyldh, "1");
      strcpy(stDDKZK.dkxtfk, "1");
      strcpy(stDDKZK.jlzt_u, "0");
  strcpy(stDDKED.dkjjbm, sDKZH_U);
      strcpy(stDDKED.syed_u, "0");
      strcpy(stDDKED.sydkcn, "0");
      strcpy(stDDKED.edbzgz, "");
      strcpy(stDDKED.edzdbz, "");
      strcpy(stDDKED.edsygz, "");
      stDDKED.edsybl = 100;
      strcpy(stDDKED.sydkcn, "0");
      strcpy(stDDKED.gljjbz, "0");
      strcpy(stDDKED.jlzt_u, "0");
      strcpy(stDDKFK.dkjjbm, sDKZH_U);
      strcpy(stDDKFK.dkrzzh, stDianKuan_IN.sHKZH_U);
      strcpy(stDDKFK.ajxmbh, "");
      strcpy(stDDKFK.ajxmmc, "");
      strcpy(stDDKFK.mfkhh_, "");
      strcpy(stDDKFK.mfkhm_, "");
      strcpy(stDDKFK.mfzh_u, "");
      strcpy(stDDKFK.zqxfk_, "0");
      strcpy(stDDKFK.fkzq_u, "");
      strcpy(stDDKFK.fkfsbm, "");
      stDDKFK.mcfkje = 0;
      strcpy(stDDKFK.dzfkjh, "0");
      strcpy(stDDKFK.scfkr_, "");
      strcpy(stDDKFK.jxhjyd, "1");
      strcpy(stDDKFK.jxhjhk, "1");
      strcpy(stDDKFK.jlzt_u, "0");
      strcpy(stDDKJX.dkjjbm, sDKZH_U);
      strcpy(stDDKJX.jxgz_u, "00");
      strcpy(stDDKJX.lllx_u, "2");
      strcpy(stDDKJX.ltjxgz, "1");
      strcpy(stDDKJX.llfd_u, "0");
      stDDKJX.zxll_u= 5.6;
      strcpy(stDDKJX.whllzl, "");
      strcpy(stDDKJX.whllqx, "");
      strcpy(stDDKJX.kxyqgz, "1");
      strcpy(stDDKJX.nyll_u, "Y");
      stDDKJX.zxll_u = 5.6;
      strcpy(stDDKJX.lltzfs, "2");
      strcpy(stDDKJX.lltzzq, "1YA0101");
      strcpy(stDDKJX.llfdfs, "2");
      stDDKJX.llfdz_ = 0.00;
      strcpy(stDDKJX.zcllbh, "D01");
      strcpy(stDDKJX.ysxfs_, "0");
      strcpy(stDDKJX.lxtxzq, "");
      strcpy(stDDKJX.mctxfs, "2");
      stDDKJX.mctxbl = 0.00;
      strcpy(stDDKJX.ysxfs_, "0");
      strcpy(stDDKJX.mctxfs, "2");
      stDDKJX.mctxbl = 0.00;
      strcpy(stDDKJX.kxsxgz, "1");
      strcpy(stDDKJX.kxjrgz, "1");
      strcpy(stDDKJX.yxycdd, "0");
      strcpy(stDDKJX.jx_uuu, "0");
      strcpy(stDDKJX.jfx_uu, "0");
      strcpy(stDDKJX.fxjx_u, "0");
      strcpy(stDDKJX.txbzdm, "0");
      strcpy(stDDKJX.yqjxfs, "2");
      strcpy(stDDKJX.yqllbh, "");
      strcpy(stDDKJX.yqfxfs, "2");
      stDDKJX.yqfxfd = 50;
      strcpy(stDDKJX.yqnyll, "Y");
      stDDKJX.zdyqll = 50;
      strcpy(stDDKJX.txbzw_, "0");
      strcpy(stDDKJX.sctxr_, "20160324");
      strcpy(stDDKJX.lxtxzq, "1YA0101");
      strcpy(stDDKJX.scjxr_, "20160324");
      strcpy(stDDKJX.jlzt_u, "0");
      strcpy(stDDKHK.dkjjbm, sDKZH_U);
      strcpy(stDDKHK.hkfs_u, "3");
      if (0 == strcmp(stDDKHK.hkfs_u,"3"))
          strcpy(stDDKHK.declgz, "1");
      strcpy(stDDKHK.qxbgjh, "0");
      strcpy(stDDKHK.llbgjh, "0");
      strcpy(stDDKHK.dcfkjh, "0");
      stDDKHK.sylxlv = 0;
      stDDKHK.ljz_uu = 0;
      stDDKHK.ljqjqs = 0;
      strcpy(stDDKHK.hkzq_u, "1MA21");
      strcpy(stDDKHK.dplhk_, "0");
      strcpy(stDDKHK.hbzq_u, "");
      strcpy(stDDKHK.yqhkzq, "");
      stDDKHK.bqzqs_ = 1000;
      stDDKHK.sylxlv = 0;
      strcpy(stDDKHK.schkr_, "20160324");
      strcpy(stDDKHK.hkqx_u, "12M");
      stDDKHK.blje_u = 0;
      stDDKHK.mqhkze = 0;
      stDDKHK.mqhbje = 0;
      strcpy(stDDKHK.bjfd_u, "0");
      strcpy(stDDKHK.dzhkjh, "0");
      stDDKHK.zqs_uu = 12;
      stDDKHK.bqqs_u = 1;
      stDDKHK.jxzqs_ = stDDKHK.zqs_uu;
      stDDKHK.jxqs_u = 1;
      stDDKHK.jxbj_u = 100000;
      stDDKHK.dqbjds = 0;
      strcpy(stDDKHK.hksxxh, "LNKKSX001");
      strcpy(stDDKHK.yxtqhk, "1");
      strcpy(stDDKHK.tqhkhx, "3");
      strcpy(stDDKHK.thkhtx, "0");
      strcpy(stDDKHK.tqhkcd, "0");
      stDDKHK.ytqhkj = 0;
      strcpy(stDDKHK.tqhkjh, "0");
      strcpy(stDDKHK.zdkk_u, "1");
      strcpy(stDDKHK.zdjqdk, "1");
      strcpy(stDDKHK.dghkzh, "0");
      strcpy(stDDKHK.hkzh_u, stDianKuan_IN.sHKZH_U);
      strcpy(stDDKHK.qyxhdk, "0");
      strcpy(stDDKHK.jlzt_u, "0");
      strcpy(stDDKDQ.dkjjbm, sDKZH_U);
      strcpy(stDDKDQ.dqkxgz, "1");
      strcpy(stDDKDQ.yxdkzq, "0");
      strcpy(stDDKDQ.zqxzek, "0");
      stDDKDQ.zqzdcs = 3;
      strcpy(stDDKDQ.zqgzbh, "");
      stDDKDQ.yzqcs_ = 0;
      strcpy(stDDKDQ.ydkdqr, "20170324");
      strcpy(stDDKDQ.jlzt_u, "0");
      strcpy(stDDKXT.dkjjbm, sDKZH_U);
      strcpy(stDDKXT.zdxtzy, "1");
      strcpy(stDDKXT.lxzcgz, "1");
      strcpy(stDDKXT.lxzhgz, "1");
      strcpy(stDDKXT.xtzybh, "9999");
      strcpy(stDDKXT.jlzt_u, "0");
      strcpy(stDDKFJ.dkjjbm, sDKZH_U);
      strcpy(stDDKFJ.hkfjbh, "");
      strcpy(stDDKFJ.hkfjmc, "");
      stDDKFJ.hkfjje = 0;
      strcpy(stDDKFJ.yqfjbh, "");
      strcpy(stDDKFJ.yqfjmc, "");
      stDDKFJ.yqfjfj = 0;
      strcpy(stDDKFJ.jlzt_u, "0");
      strcpy(stDDKTZ.dkjjbm, sDKZH_U);
      strcpy(stDDKTZ.zctqtz, "0");
      stDDKTZ.tqts_u= 0;
      strcpy(stDDKTZ.yqcstz, "0");
      stDDKTZ.tzjgts= 0;
      strcpy(stDDKTZ.xctzrq ,"18991231");
      strcpy(stDDKTZ.llbgtz, "0");
      strcpy(stDDKTZ.yebgtz, "0");
      strcpy(stDDKTZ.khhddy, "0");
      strcpy(stDDKTZ.jlzt_u, "0");
        strcpy(stZDKFH.dkjjbm, sDKZH_U);
      strcpy(stZDKFH.dkzh_u, sDKZH_U);
      strcpy(stZDKFH.hth_uu, sDKZH_U);
      strcpy(stZDKFH.khbh_u, stDianKuan_IN.sKHBH_U);
      strcpy(stZDKFH.khzwm_, stDianKuan_IN.sKHBH_U);
      strcpy(stZDKFH.yyjg_u,stDianKuan_IN.sRZJG_U);
      strcpy(stZDKFH.zwjg_u,stDianKuan_IN.sRZJG_U);
      strcpy(stZDKFH.khjg_u,stDianKuan_IN.sRZJG_U);
      strcpy(stZDKFH.canpdm, "3000");
      strcpy(stZDKFH.kjlb_u, "2040");
      strcpy(stZDKFH.cpmc_u, "个人住房短期消费贷款");
      strcpy(stZDKFH.qxrq_u, "20160324");
      strcpy(stZDKFH.dqrq_u, "20170324");
      strcpy(stZDKFH.qx_uuu, "12M");
      strcpy(stZDKFH.hbdh_u, "01");
      stZDKFH.htje_u = 100000;
      stZDKFH.jjje_u = 100000;
      stZDKFH.yiffje = 100000;
      stZDKFH.kffje_ = 0;
      stZDKFH.zcbj_u = 100000;
      stZDKFH.ddkksx = 1000;
      stZDKFH.mxxh_u = 0;
      strcpy(stZDKFH.dkxt_u, "0");
      strcpy(stZDKFH.yjfyj_, "0");
      strcpy(stZDKFH.dkzhzt, "0");
      strcpy(stZDKFH.jlzt_u, "0");
      strcpy(stZDKFH.khrq_u, "20160324");
      strcpy(stZDKFH.zhcwrq, "20160324");
      strcpy(stDQGJH.dkzh_u, sDKZH_U);
      strcpy(stDQGJH.dkjjbm, sDKZH_U);
      stDQGJH.bqqs_u = 1;
      stDQGJH.bqzqs_ = 1000;
      strcpy(stDQGJH.qsrq_u, "20160324");
      strcpy(stDQGJH.dqrq_u, "20170324");
       strcpy(stDQGJH.kxqdqr,"20160421");
      strcpy(stDQGJH.xyhkr_, "20160421");
      stDQGJH.csbj_u = 0;
      stDQGJH.cslx_u = 0;
      stDQGJH.bj_uuu = 0;
      stDQGJH.yylx_u = 0;
      stDQGJH.csyjlx = 0;
      stDQGJH.ysqx_u = 0;
      stDQGJH.csqx_u = 0;
      stDQGJH.ysyjfx = 0;
      stDQGJH.csyjfx = 0;
      stDQGJH.ysfx_u = 0;
      stDQGJH.csfx_u = 0;
      stDQGJH.yjfx_u = 0;
      stDQGJH.fx_uuu = 0;
      stDQGJH.yjtx_u = 0;
      stDQGJH.ystx_u = 0;
      stDQGJH.ysfy_u = 0;
      stDQGJH.ysfj_u = 0;
      strcpy(stDQGJH.qgzl_u, "1");
      strcpy(stDQGJH.jzqsr_, "20160324");
      strcpy(stDQGJH.jzdqr_, "20170324");
      strcpy(stDQGJH.qgzt_u, "0");
      strcpy(stDQGJH.yjfyj_, "0");
      strcpy(stDQGJH.jlzt_u, "0");
      strcpy(stDTJXX.dkzh_u, sDKZH_U);
      strcpy(stDTJXX.dkjjbm, sDKZH_U);
      stDTJXX.ljfkje = 100000;
      stDTJXX.snljfk = 0;
      stDTJXX.bnljfk = 100000;
      stDTJXX.zgdkye = 0;
      stDTJXX.snzgzh = 0;
      stDTJXX.bnzgzh = 0;
      stDTJXX.ljyhbj = 0;
      stDTJXX.snljhb = 0;
      stDTJXX.bnyhbj = 0;
      stDTJXX.yshhxb = 0;
      stDTJXX.yshhxx = 0;
      stDTJXX.ljyhlx = 0;
      stDTJXX.snljhx = 0;
      stDTJXX.bnyhlx = 0;
      stDTJXX.syljyh = 0;
      stDTJXX.byljyh = 0;
      strcpy(stDTJXX.jlzt_u, "0");
      strcpy(stDZLXX.dkjjbm, sDKZH_U);
      strcpy(stDZLXX.wjflbz, "0");
      strcpy(stDZLXX.wjflrq, "20160324");
      strcpy(stDZLXX.wtdkbz, "0");
      stDZLXX.wtdksl= 0;
      strcpy(stDZLXX.khjl_u, "");
      strcpy(stDZLXX.dkgljg, stDianKuan_IN.sRZJG_U);
      strcpy(stDZLXX.lmdk_u, "0");
      strcpy(stDZLXX.jlzt_u, "0");
    }
    else
    {
        strcpy(stDDKZK.dkjjbm, sDKZH_U);
      strcpy(stDDKZK.dkdx_u, "0");
      strcpy(stDDKZK.cndk_u, "0");
      strcpy(stDDKZK.xhdkbz, "0");
      strcpy(stDDKZK.lhdk_u, "0");
      strcpy(stDDKZK.ysdk_u, "0");
      strcpy(stDDKZK.dldk_u, "0");
      strcpy(stDDKZK.ayjfyj, "1");
      strcpy(stDDKZK.ayyldh, "1");
      strcpy(stDDKZK.dkxtfk, "1");
      strcpy(stDDKZK.jlzt_u, "0");
      strcpy(stDDKED.dkjjbm, sDKZH_U);
            strcpy(stDDKED.syed_u, "0");
            strcpy(stDDKED.sydkcn, "0");
            strcpy(stDDKED.edbzgz, "");
            strcpy(stDDKED.edzdbz, "");
            strcpy(stDDKED.edsygz, "");
            stDDKED.edsybl = 100;
            strcpy(stDDKED.sydkcn, "0");
            strcpy(stDDKED.gljjbz, "0");
            strcpy(stDDKED.jlzt_u, "0");
      strcpy(stDDKFK.dkjjbm, sDKZH_U);
      strcpy(stDDKFK.dkrzzh, stDianKuan_IN.sHKZH_U);
      strcpy(stDDKFK.ajxmbh, "");
      strcpy(stDDKFK.ajxmmc, "");
      strcpy(stDDKFK.mfkhh_, "");
      strcpy(stDDKFK.mfkhm_, "");
      strcpy(stDDKFK.mfzh_u, "");
      strcpy(stDDKFK.zqxfk_, "0");
      strcpy(stDDKFK.fkzq_u, "");
      strcpy(stDDKFK.fkfsbm, "");
      stDDKFK.mcfkje = 0;
      strcpy(stDDKFK.dzfkjh, "0");
      strcpy(stDDKFK.scfkr_, "");
      strcpy(stDDKFK.jxhjyd, "4");
      strcpy(stDDKFK.jxhjhk, "1");
      strcpy(stDDKFK.jlzt_u, "0");
      strcpy(stDDKJX.dkjjbm, sDKZH_U);
      strcpy(stDDKJX.jxgz_u, "10");
      strcpy(stDDKJX.lllx_u, "2");
      strcpy(stDDKJX.ltjxgz, "1");
      strcpy(stDDKJX.llfd_u, "0");
      stDDKJX.zxll_u= 5.6;
      strcpy(stDDKJX.whllzl, "");
      strcpy(stDDKJX.whllqx, "");
      strcpy(stDDKJX.kxyqgz, "1");
      strcpy(stDDKJX.nyll_u, "Y");
      stDDKJX.zxll_u = 5.6;
      strcpy(stDDKJX.lltzfs, "2");
      strcpy(stDDKJX.lltzzq, "1YA0101");
      strcpy(stDDKJX.llfdfs, "2");
      stDDKJX.llfdz_ = 0.00;
      strcpy(stDDKJX.zcllbh, "D01");
      strcpy(stDDKJX.ysxfs_, "0");
      strcpy(stDDKJX.lxtxzq, "");
      strcpy(stDDKJX.mctxfs, "2");
      stDDKJX.mctxbl = 0.00;
      strcpy(stDDKJX.ysxfs_, "0");
      strcpy(stDDKJX.mctxfs, "2");
      stDDKJX.mctxbl = 0.00;
      strcpy(stDDKJX.kxsxgz, "1");
      strcpy(stDDKJX.kxjrgz, "1");
      strcpy(stDDKJX.yxycdd, "0");
      strcpy(stDDKJX.jx_uuu, "0");
      strcpy(stDDKJX.jfx_uu, "0");
      strcpy(stDDKJX.fxjx_u, "0");
      strcpy(stDDKJX.txbzdm, "0");
      strcpy(stDDKJX.yqjxfs, "2");
      strcpy(stDDKJX.yqllbh, "");
      strcpy(stDDKJX.yqfxfs, "2");
      stDDKJX.yqfxfd = 0.0;
      strcpy(stDDKJX.yqnyll, "Y");
      stDDKJX.zdyqll = 50;
      strcpy(stDDKJX.txbzw_, "0");
      strcpy(stDDKJX.sctxr_, "20160324");
      strcpy(stDDKJX.lxtxzq, "1YA0101");
      strcpy(stDDKJX.scjxr_, "20160324");
      strcpy(stDDKJX.jlzt_u, "0");
      strcpy(stDDKHK.dkjjbm, sDKZH_U);
      strcpy(stDDKHK.hkfs_u, "2");
      if (0 == strcmp(stDDKHK.hkfs_u,"3"))
          strcpy(stDDKHK.declgz, "1");
      strcpy(stDDKHK.qxbgjh, "0");
      strcpy(stDDKHK.llbgjh, "0");
      strcpy(stDDKHK.dcfkjh, "0");
      stDDKHK.sylxlv = 0;
      stDDKHK.ljz_uu = 0;
      stDDKHK.ljqjqs = 0;
      strcpy(stDDKHK.hkzq_u, "1MA21");
      strcpy(stDDKHK.dplhk_, "0");
      strcpy(stDDKHK.hbzq_u, "");
      strcpy(stDDKHK.yqhkzq, "");
      stDDKHK.bqzqs_ = 1000;
      stDDKHK.sylxlv = 0;
      strcpy(stDDKHK.schkr_, "20160324");
      strcpy(stDDKHK.hkqx_u, "600M");
      stDDKHK.blje_u = 0;
      stDDKHK.mqhkze = 0;
      stDDKHK.mqhbje = 0;
      strcpy(stDDKHK.bjfd_u, "0");
      strcpy(stDDKHK.dzhkjh, "0");
      stDDKHK.zqs_uu = 600;
      stDDKHK.bqqs_u = 1;
      stDDKHK.jxzqs_ = stDDKHK.zqs_uu;
      stDDKHK.jxqs_u = 1;
      stDDKHK.jxbj_u = 100000;
      stDDKHK.dqbjds = 0;
      strcpy(stDDKHK.hksxxh, "LNKKSX001");
      strcpy(stDDKHK.yxtqhk, "1");
      strcpy(stDDKHK.tqhkhx, "1");
      strcpy(stDDKHK.thkhtx, "0");
      strcpy(stDDKHK.tqhkcd, "0");
      stDDKHK.ytqhkj = 0;
      strcpy(stDDKHK.tqhkjh, "0");
      strcpy(stDDKHK.zdkk_u, "1");
      strcpy(stDDKHK.zdjqdk, "1");
      strcpy(stDDKHK.dghkzh, "0");
      strcpy(stDDKHK.hkzh_u, stDianKuan_IN.sHKZH_U);
      strcpy(stDDKHK.qyxhdk, "0");
      strcpy(stDDKHK.jlzt_u, "0");
      strcpy(stDDKDQ.dkjjbm, sDKZH_U);
      strcpy(stDDKDQ.dqkxgz, "0");
      strcpy(stDDKDQ.yxdkzq, "0");
      strcpy(stDDKDQ.zqxzek, "0");
      stDDKDQ.zqzdcs = 3;
      strcpy(stDDKDQ.zqgzbh, "");
      stDDKDQ.yzqcs_ = 0;
      strcpy(stDDKDQ.ydkdqr, "20170324");
      strcpy(stDDKDQ.jlzt_u, "0");
      strcpy(stDDKXT.dkjjbm, sDKZH_U);
      strcpy(stDDKXT.zdxtzy, "1");
      strcpy(stDDKXT.lxzcgz, "1");
      strcpy(stDDKXT.lxzhgz, "1");
      strcpy(stDDKXT.xtzybh, "");
      strcpy(stDDKXT.jlzt_u, "0");
      strcpy(stDDKFJ.dkjjbm, sDKZH_U);
      strcpy(stDDKFJ.hkfjbh, "");
      strcpy(stDDKFJ.hkfjmc, "");
      stDDKFJ.hkfjje = 0;
      strcpy(stDDKFJ.yqfjbh, "");
      strcpy(stDDKFJ.yqfjmc, "");
      stDDKFJ.yqfjfj = 0;
      strcpy(stDDKFJ.jlzt_u, "0");
      strcpy(stDDKTZ.dkjjbm, sDKZH_U);
      strcpy(stDDKTZ.zctqtz, "0");
      stDDKTZ.tqts_u= 0;
      strcpy(stDDKTZ.yqcstz, "0");
      stDDKTZ.tzjgts= 0;
      strcpy(stDDKTZ.xctzrq ,"18991231");
      strcpy(stDDKTZ.llbgtz, "0");
      strcpy(stDDKTZ.yebgtz, "0");
      strcpy(stDDKTZ.khhddy, "0");
      strcpy(stDDKTZ.jlzt_u, "0");
       strcpy(stZDKFH.dkjjbm, sDKZH_U);
      strcpy(stZDKFH.dkzh_u, sDKZH_U);
      strcpy(stZDKFH.hth_uu, sDKZH_U);
      strcpy(stZDKFH.khbh_u, stDianKuan_IN.sKHBH_U);
      strcpy(stZDKFH.khzwm_, stDianKuan_IN.sKHBH_U);
      strcpy(stZDKFH.yyjg_u,stDianKuan_IN.sRZJG_U);
      strcpy(stZDKFH.zwjg_u,stDianKuan_IN.sRZJG_U);
      strcpy(stZDKFH.khjg_u,stDianKuan_IN.sRZJG_U);
      strcpy(stZDKFH.canpdm, "4000");
      strcpy(stZDKFH.kjlb_u, "2213");
      strcpy(stZDKFH.cpmc_u, "机构类长期普通贷款");
      strcpy(stZDKFH.qxrq_u, "20160324");
      strcpy(stZDKFH.dqrq_u, "20170324");
      strcpy(stZDKFH.qx_uuu, "600M");
      strcpy(stZDKFH.hbdh_u, "01");
      stZDKFH.htje_u = 100000;
      stZDKFH.jjje_u = 100000;
      stZDKFH.yiffje = 100000;
      stZDKFH.kffje_ = 0;
      stZDKFH.zcbj_u = 100000;
      stZDKFH.ddkksx = 1000;
      stZDKFH.mxxh_u = 0;
      strcpy(stZDKFH.dkxt_u, "0");
      strcpy(stZDKFH.yjfyj_, "0");
      strcpy(stZDKFH.dkzhzt, "0");
      strcpy(stZDKFH.jlzt_u, "0");
      strcpy(stZDKFH.khrq_u, "20160324");
      strcpy(stZDKFH.zhcwrq, "20160324");
      strcpy(stDQGJH.dkzh_u, sDKZH_U);
      strcpy(stDQGJH.dkjjbm, sDKZH_U);
      stDQGJH.bqqs_u = 1;
      stDQGJH.bqzqs_ = 1000;
      strcpy(stDQGJH.qsrq_u, "20160324");
      strcpy(stDQGJH.dqrq_u, "20170324");
       strcpy(stDQGJH.kxqdqr,"20160421");
      strcpy(stDQGJH.xyhkr_, "20160421");
      stDQGJH.csbj_u = 0;
      stDQGJH.cslx_u = 0;
      stDQGJH.bj_uuu = 0;
      stDQGJH.yylx_u = 0;
      stDQGJH.csyjlx = 0;
      stDQGJH.ysqx_u = 0;
      stDQGJH.csqx_u = 0;
      stDQGJH.ysyjfx = 0;
      stDQGJH.csyjfx = 0;
      stDQGJH.ysfx_u = 0;
      stDQGJH.csfx_u = 0;
      stDQGJH.yjfx_u = 0;
      stDQGJH.fx_uuu = 0;
      stDQGJH.yjtx_u = 0;
      stDQGJH.ystx_u = 0;
      stDQGJH.ysfy_u = 0;
      stDQGJH.ysfj_u = 0;
      strcpy(stDQGJH.qgzl_u, "1");
      strcpy(stDQGJH.jzqsr_, "20160324");
      strcpy(stDQGJH.jzdqr_, "20170324");
      strcpy(stDQGJH.qgzt_u, "0");
      strcpy(stDQGJH.yjfyj_, "0");
      strcpy(stDQGJH.jlzt_u, "0");
      strcpy(stDTJXX.dkzh_u, sDKZH_U);
      strcpy(stDTJXX.dkjjbm, sDKZH_U);
      stDTJXX.ljfkje = 100000;
      stDTJXX.snljfk = 0;
      stDTJXX.bnljfk = 100000;
      stDTJXX.zgdkye = 0;
      stDTJXX.snzgzh = 0;
      stDTJXX.bnzgzh = 0;
      stDTJXX.ljyhbj = 0;
      stDTJXX.snljhb = 0;
      stDTJXX.bnyhbj = 0;
      stDTJXX.yshhxb = 0;
      stDTJXX.yshhxx = 0;
      stDTJXX.ljyhlx = 0;
      stDTJXX.snljhx = 0;
      stDTJXX.bnyhlx = 0;
      stDTJXX.syljyh = 0;
      stDTJXX.byljyh = 0;
      strcpy(stDTJXX.jlzt_u, "0");
      strcpy(stDZLXX.dkjjbm, sDKZH_U);
      strcpy(stDZLXX.wjflbz, "0");
      strcpy(stDZLXX.wjflrq, "20160324");
      strcpy(stDZLXX.wtdkbz, "0");
      stDZLXX.wtdksl= 0;
      strcpy(stDZLXX.khjl_u, "");
      strcpy(stDZLXX.dkgljg, stDianKuan_IN.sRZJG_U);
      strcpy(stDZLXX.lmdk_u, "0");
      strcpy(stDZLXX.jlzt_u, "0");
    }
    return 0;
}
