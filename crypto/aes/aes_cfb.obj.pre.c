#line 1 "crypto\\aes\\aes_cfb.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/aes.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 31 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 34 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 40 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 43 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 46 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 49 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 52 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 55 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 58 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 61 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 64 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 67 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 70 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 73 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 76 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 79 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 82 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 85 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 88 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 91 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 94 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 97 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 114 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 116 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 118 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 127 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 128 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 132 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 137 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 143 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 149 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 155 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 176 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 14 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/aes.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 42 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 46 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#pragma once
#line 151 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 190 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 193 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 195 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 201 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 205 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 212 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 219 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 224 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 1549 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 1580 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 1605 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 1618 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 1658 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 1781 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 1884 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2053 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2155 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2372 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2373 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2601 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2640 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2874 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2884 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2889 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2896 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2897 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2904 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2905 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2916 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 2950 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ConcurrencySal.h"
#pragma once
#line 265 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ConcurrencySal.h"
#line 269 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ConcurrencySal.h"
#line 352 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ConcurrencySal.h"
#line 358 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ConcurrencySal.h"
#line 2976 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\sal.h"
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#pragma pack(push,8)
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#pragma once
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#pragma pack(push,8)
#line 42 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 43 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
typedef __w64 unsigned int   uintptr_t;
#line 50 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 52 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
typedef char *  va_list;
#line 59 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 67 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 75 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 78 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 92 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 137 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#pragma pack(pop)
#line 145 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\vadefs.h"
#line 64 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 74 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 79 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 84 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 92 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 100 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 102 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 103 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 117 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 118 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 132 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 134 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 136 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 144 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 145 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 150 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 152 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 153 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 158 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 160 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 161 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 166 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 168 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 169 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 180 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 181 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 188 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 189 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 207 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 212 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 221 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 228 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 229 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 235 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 242 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 243 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 250 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 251 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 256 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 259 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 261 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 262 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 263 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 269 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 280 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 282 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 283 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 284 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 295 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 302 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 303 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 321 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 322 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 326 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 333 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 334 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 341 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 348 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 350 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 351 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 361 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 362 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 372 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 373 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 381 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 386 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 387 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 396 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 397 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 406 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 407 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 411 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 417 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 422 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 424 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 425 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef __w64 unsigned int   size_t;
#line 432 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 434 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef size_t rsize_t;
#line 440 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 441 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef __w64 int            intptr_t;
#line 448 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 450 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef __w64 int            ptrdiff_t;
#line 466 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 468 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef unsigned short wchar_t;
#line 473 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
#line 479 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef int errno_t;
#line 499 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef __w64 long __time32_t;
#line 504 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef __int64 __time64_t;
#line 509 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
typedef __time64_t time_t;
#line 516 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 518 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 526 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 527 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 531 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 533 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 538 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 540 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 541 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 547 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 551 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 556 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 558 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 559 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
void __cdecl _invalid_parameter_noinfo(void);
__declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void);
#line 574 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
__declspec(noreturn)
void __cdecl _invoke_watson(  const wchar_t *,   const wchar_t *,   const wchar_t *, unsigned int, uintptr_t);
#line 594 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 595 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 603 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 751 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 766 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 767 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 1833 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 1977 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 1978 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;
typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;
typedef struct localerefcount
{
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
} locrefcount;
typedef struct threadlocaleinfostruct
{
    int refcount;
    unsigned int lc_codepage;
    unsigned int lc_collate_cp;
    unsigned int lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int * lconv_intl_refcount;
    int * lconv_num_refcount;
    int * lconv_mon_refcount;
    struct lconv * lconv;
    int * ctype1_refcount;
    unsigned short * ctype1;
    const unsigned short * pctype;
    const unsigned char * pclmap;
    const unsigned char * pcumap;
    struct __lc_time_data * lc_time_curr;
    wchar_t * locale_name[6];
} threadlocinfo;
#line 2021 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2029 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2031 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2035 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2037 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2041 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2043 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2050 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 2054 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#pragma pack(pop)
#line 2058 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 33 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 34 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
extern int * __cdecl _errno(void);
errno_t __cdecl _set_errno(  int _Value);
errno_t __cdecl _get_errno(  int * _Value);
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 66 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
extern unsigned long  __cdecl __threadid(void);
extern uintptr_t __cdecl __threadhandle(void);
#line 78 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 16 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/aes.h"
struct aes_key_st
{
    unsigned int rd_key[4 * (14 + 1)];
#line 37 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/aes.h"
    int rounds;
};
typedef struct aes_key_st AES_KEY;
const char *AES_options(void);
int AES_set_encrypt_key(const unsigned char *userKey, const int bits,
                        AES_KEY *key);
int AES_set_decrypt_key(const unsigned char *userKey, const int bits,
                        AES_KEY *key);
void AES_encrypt(const unsigned char *in, unsigned char *out,
                 const AES_KEY *key);
void AES_decrypt(const unsigned char *in, unsigned char *out,
                 const AES_KEY *key);
void AES_ecb_encrypt(const unsigned char *in, unsigned char *out,
                     const AES_KEY *key, const int enc);
void AES_cbc_encrypt(const unsigned char *in, unsigned char *out,
                     size_t length, const AES_KEY *key,
                     unsigned char *ivec, const int enc);
void AES_cfb128_encrypt(const unsigned char *in, unsigned char *out,
                        size_t length, const AES_KEY *key,
                        unsigned char *ivec, int *num, const int enc);
void AES_cfb1_encrypt(const unsigned char *in, unsigned char *out,
                      size_t length, const AES_KEY *key,
                      unsigned char *ivec, int *num, const int enc);
void AES_cfb8_encrypt(const unsigned char *in, unsigned char *out,
                      size_t length, const AES_KEY *key,
                      unsigned char *ivec, int *num, const int enc);
void AES_ofb128_encrypt(const unsigned char *in, unsigned char *out,
                        size_t length, const AES_KEY *key,
                        unsigned char *ivec, int *num);
void AES_ige_encrypt(const unsigned char *in, unsigned char *out,
                     size_t length, const AES_KEY *key,
                     unsigned char *ivec, const int enc);
void AES_bi_ige_encrypt(const unsigned char *in, unsigned char *out,
                        size_t length, const AES_KEY *key,
                        const AES_KEY *key2, const unsigned char *ivec,
                        const int enc);
int AES_wrap_key(AES_KEY *key, const unsigned char *iv,
                 unsigned char *out,
                 const unsigned char *in, unsigned int inlen);
int AES_unwrap_key(AES_KEY *key, const unsigned char *iv,
                   unsigned char *out,
                   const unsigned char *in, unsigned int inlen);
#line 93 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/aes.h"
#line 11 "crypto\\aes\\aes_cfb.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/modes.h"
typedef void (*block128_f) (const unsigned char in[16],
                            unsigned char out[16], const void *key);
typedef void (*cbc128_f) (const unsigned char *in, unsigned char *out,
                          size_t len, const void *key,
                          unsigned char ivec[16], int enc);
typedef void (*ctr128_f) (const unsigned char *in, unsigned char *out,
                          size_t blocks, const void *key,
                          const unsigned char ivec[16]);
typedef void (*ccm128_f) (const unsigned char *in, unsigned char *out,
                          size_t blocks, const void *key,
                          const unsigned char ivec[16],
                          unsigned char cmac[16]);
void CRYPTO_cbc128_encrypt(const unsigned char *in, unsigned char *out,
                           size_t len, const void *key,
                           unsigned char ivec[16], block128_f block);
void CRYPTO_cbc128_decrypt(const unsigned char *in, unsigned char *out,
                           size_t len, const void *key,
                           unsigned char ivec[16], block128_f block);
void CRYPTO_ctr128_encrypt(const unsigned char *in, unsigned char *out,
                           size_t len, const void *key,
                           unsigned char ivec[16],
                           unsigned char ecount_buf[16], unsigned int *num,
                           block128_f block);
void CRYPTO_ctr128_encrypt_ctr32(const unsigned char *in, unsigned char *out,
                                 size_t len, const void *key,
                                 unsigned char ivec[16],
                                 unsigned char ecount_buf[16],
                                 unsigned int *num, ctr128_f ctr);
void CRYPTO_ofb128_encrypt(const unsigned char *in, unsigned char *out,
                           size_t len, const void *key,
                           unsigned char ivec[16], int *num,
                           block128_f block);
void CRYPTO_cfb128_encrypt(const unsigned char *in, unsigned char *out,
                           size_t len, const void *key,
                           unsigned char ivec[16], int *num,
                           int enc, block128_f block);
void CRYPTO_cfb128_8_encrypt(const unsigned char *in, unsigned char *out,
                             size_t length, const void *key,
                             unsigned char ivec[16], int *num,
                             int enc, block128_f block);
void CRYPTO_cfb128_1_encrypt(const unsigned char *in, unsigned char *out,
                             size_t bits, const void *key,
                             unsigned char ivec[16], int *num,
                             int enc, block128_f block);
size_t CRYPTO_cts128_encrypt_block(const unsigned char *in,
                                   unsigned char *out, size_t len,
                                   const void *key, unsigned char ivec[16],
                                   block128_f block);
size_t CRYPTO_cts128_encrypt(const unsigned char *in, unsigned char *out,
                             size_t len, const void *key,
                             unsigned char ivec[16], cbc128_f cbc);
size_t CRYPTO_cts128_decrypt_block(const unsigned char *in,
                                   unsigned char *out, size_t len,
                                   const void *key, unsigned char ivec[16],
                                   block128_f block);
size_t CRYPTO_cts128_decrypt(const unsigned char *in, unsigned char *out,
                             size_t len, const void *key,
                             unsigned char ivec[16], cbc128_f cbc);
size_t CRYPTO_nistcts128_encrypt_block(const unsigned char *in,
                                       unsigned char *out, size_t len,
                                       const void *key,
                                       unsigned char ivec[16],
                                       block128_f block);
size_t CRYPTO_nistcts128_encrypt(const unsigned char *in, unsigned char *out,
                                 size_t len, const void *key,
                                 unsigned char ivec[16], cbc128_f cbc);
size_t CRYPTO_nistcts128_decrypt_block(const unsigned char *in,
                                       unsigned char *out, size_t len,
                                       const void *key,
                                       unsigned char ivec[16],
                                       block128_f block);
size_t CRYPTO_nistcts128_decrypt(const unsigned char *in, unsigned char *out,
                                 size_t len, const void *key,
                                 unsigned char ivec[16], cbc128_f cbc);
typedef struct gcm128_context GCM128_CONTEXT;
GCM128_CONTEXT *CRYPTO_gcm128_new(void *key, block128_f block);
void CRYPTO_gcm128_init(GCM128_CONTEXT *ctx, void *key, block128_f block);
void CRYPTO_gcm128_setiv(GCM128_CONTEXT *ctx, const unsigned char *iv,
                         size_t len);
int CRYPTO_gcm128_aad(GCM128_CONTEXT *ctx, const unsigned char *aad,
                      size_t len);
int CRYPTO_gcm128_encrypt(GCM128_CONTEXT *ctx,
                          const unsigned char *in, unsigned char *out,
                          size_t len);
int CRYPTO_gcm128_decrypt(GCM128_CONTEXT *ctx,
                          const unsigned char *in, unsigned char *out,
                          size_t len);
int CRYPTO_gcm128_encrypt_ctr32(GCM128_CONTEXT *ctx,
                                const unsigned char *in, unsigned char *out,
                                size_t len, ctr128_f stream);
int CRYPTO_gcm128_decrypt_ctr32(GCM128_CONTEXT *ctx,
                                const unsigned char *in, unsigned char *out,
                                size_t len, ctr128_f stream);
int CRYPTO_gcm128_finish(GCM128_CONTEXT *ctx, const unsigned char *tag,
                         size_t len);
void CRYPTO_gcm128_tag(GCM128_CONTEXT *ctx, unsigned char *tag, size_t len);
void CRYPTO_gcm128_release(GCM128_CONTEXT *ctx);
typedef struct ccm128_context CCM128_CONTEXT;
void CRYPTO_ccm128_init(CCM128_CONTEXT *ctx,
                        unsigned int M, unsigned int L, void *key,
                        block128_f block);
int CRYPTO_ccm128_setiv(CCM128_CONTEXT *ctx, const unsigned char *nonce,
                        size_t nlen, size_t mlen);
void CRYPTO_ccm128_aad(CCM128_CONTEXT *ctx, const unsigned char *aad,
                       size_t alen);
int CRYPTO_ccm128_encrypt(CCM128_CONTEXT *ctx, const unsigned char *inp,
                          unsigned char *out, size_t len);
int CRYPTO_ccm128_decrypt(CCM128_CONTEXT *ctx, const unsigned char *inp,
                          unsigned char *out, size_t len);
int CRYPTO_ccm128_encrypt_ccm64(CCM128_CONTEXT *ctx, const unsigned char *inp,
                                unsigned char *out, size_t len,
                                ccm128_f stream);
int CRYPTO_ccm128_decrypt_ccm64(CCM128_CONTEXT *ctx, const unsigned char *inp,
                                unsigned char *out, size_t len,
                                ccm128_f stream);
size_t CRYPTO_ccm128_tag(CCM128_CONTEXT *ctx, unsigned char *tag, size_t len);
typedef struct xts128_context XTS128_CONTEXT;
int CRYPTO_xts128_encrypt(const XTS128_CONTEXT *ctx,
                          const unsigned char iv[16],
                          const unsigned char *inp, unsigned char *out,
                          size_t len, int enc);
size_t CRYPTO_128_wrap(void *key, const unsigned char *iv,
                       unsigned char *out,
                       const unsigned char *in, size_t inlen,
                       block128_f block);
size_t CRYPTO_128_unwrap(void *key, const unsigned char *iv,
                         unsigned char *out,
                         const unsigned char *in, size_t inlen,
                         block128_f block);
size_t CRYPTO_128_wrap_pad(void *key, const unsigned char *icv,
                           unsigned char *out, const unsigned char *in,
                           size_t inlen, block128_f block);
size_t CRYPTO_128_unwrap_pad(void *key, const unsigned char *icv,
                             unsigned char *out, const unsigned char *in,
                             size_t inlen, block128_f block);
typedef struct ocb128_context OCB128_CONTEXT;
typedef void (*ocb128_f) (const unsigned char *in, unsigned char *out,
                          size_t blocks, const void *key,
                          size_t start_block_num,
                          unsigned char offset_i[16],
                          const unsigned char L_[][16],
                          unsigned char checksum[16]);
OCB128_CONTEXT *CRYPTO_ocb128_new(void *keyenc, void *keydec,
                                  block128_f encrypt, block128_f decrypt,
                                  ocb128_f stream);
int CRYPTO_ocb128_init(OCB128_CONTEXT *ctx, void *keyenc, void *keydec,
                       block128_f encrypt, block128_f decrypt,
                       ocb128_f stream);
int CRYPTO_ocb128_copy_ctx(OCB128_CONTEXT *dest, OCB128_CONTEXT *src,
                           void *keyenc, void *keydec);
int CRYPTO_ocb128_setiv(OCB128_CONTEXT *ctx, const unsigned char *iv,
                        size_t len, size_t taglen);
int CRYPTO_ocb128_aad(OCB128_CONTEXT *ctx, const unsigned char *aad,
                      size_t len);
int CRYPTO_ocb128_encrypt(OCB128_CONTEXT *ctx, const unsigned char *in,
                          unsigned char *out, size_t len);
int CRYPTO_ocb128_decrypt(OCB128_CONTEXT *ctx, const unsigned char *in,
                          unsigned char *out, size_t len);
int CRYPTO_ocb128_finish(OCB128_CONTEXT *ctx, const unsigned char *tag,
                         size_t len);
int CRYPTO_ocb128_tag(OCB128_CONTEXT *ctx, unsigned char *tag, size_t len);
void CRYPTO_ocb128_cleanup(OCB128_CONTEXT *ctx);
#line 200 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/modes.h"
#line 12 "crypto\\aes\\aes_cfb.c"
void AES_cfb128_encrypt(const unsigned char *in, unsigned char *out,
                        size_t length, const AES_KEY *key,
                        unsigned char *ivec, int *num, const int enc)
{
    CRYPTO_cfb128_encrypt(in, out, length, key, ivec, num, enc,
                          (block128_f) AES_encrypt);
}
void AES_cfb1_encrypt(const unsigned char *in, unsigned char *out,
                      size_t length, const AES_KEY *key,
                      unsigned char *ivec, int *num, const int enc)
{
    CRYPTO_cfb128_1_encrypt(in, out, length, key, ivec, num, enc,
                            (block128_f) AES_encrypt);
}
void AES_cfb8_encrypt(const unsigned char *in, unsigned char *out,
                      size_t length, const AES_KEY *key,
                      unsigned char *ivec, int *num, const int enc)
{
    CRYPTO_cfb128_8_encrypt(in, out, length, key, ivec, num, enc,
                            (block128_f) AES_encrypt);
}
