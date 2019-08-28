#line 1 "crypto\\whrlpool\\wp_block.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\whrlpool\\wp_locl.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/whrlpool.h"
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
#line 14 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/whrlpool.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 114 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 116 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 118 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 137 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 143 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 149 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 155 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 176 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 14 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 36 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 48 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 51 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 55 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 60 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 61 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 67 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 70 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 73 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 74 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 75 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 83 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 84 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 96 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 97 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 98 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 114 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 135 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 148 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 173 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 177 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 181 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 204 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 213 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 214 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 219 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 234 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 247 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 251 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 264 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdint.h"
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
#line 7 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdint.h"
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long long          intmax_t;
typedef unsigned long long uintmax_t;
#line 105 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdint.h"
#line 116 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdint.h"
#line 139 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdint.h"
#line 140 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdint.h"
#line 265 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 266 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 277 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 278 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 285 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 287 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 296 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 299 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 303 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 305 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 307 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 312 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 17 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/whrlpool.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
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
#line 18 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/whrlpool.h"
typedef struct
{
    union
    {
        unsigned char c[(512/8)];
        double q[(512/8) / sizeof(double)];
    } H;
    unsigned char data[512 / 8];
    unsigned int bitoff;
    size_t bitlen[(256/8) / sizeof(size_t)];
} WHIRLPOOL_CTX;
int WHIRLPOOL_Init(WHIRLPOOL_CTX *c);
int WHIRLPOOL_Update(WHIRLPOOL_CTX *c, const void *inp, size_t bytes);
void WHIRLPOOL_BitUpdate(WHIRLPOOL_CTX *c, const void *inp, size_t bits);
int WHIRLPOOL_Final(unsigned char *md, WHIRLPOOL_CTX *c);
unsigned char *WHIRLPOOL(const void *inp, size_t bytes, unsigned char *md);
#line 47 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/whrlpool.h"
#line 49 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/whrlpool.h"
#line 11 "d:\\07.opensrc\\gmssl\\crypto\\whrlpool\\wp_locl.h"
void whirlpool_block(WHIRLPOOL_CTX *, const void *, size_t);
#line 48 "crypto\\whrlpool\\wp_block.c"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 30 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
void *  __cdecl _memccpy(   void * _Dst,   const void * _Src,   int _Val,   size_t _MaxCount);
void *  __cdecl memchr(   const void * _Buf,   int _Val,   size_t _MaxCount);
int     __cdecl _memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
int     __cdecl _memicmp_l(  const void * _Buf1,   const void * _Buf2,   size_t _Size,   _locale_t _Locale);
int     __cdecl memcmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
void *  __cdecl memcpy(  void * _Dst,   const void * _Src,   size_t _Size);
errno_t  __cdecl memcpy_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
#line 79 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 91 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
void *  __cdecl memset(  void * _Dst,   int _Val,   size_t _Size);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memccpy" ". See online help for details."))  void * __cdecl memccpy(  void * _Dst,   const void * _Src,   int _Val,   size_t _Size);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memicmp" ". See online help for details."))  int __cdecl memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
#line 100 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 102 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
errno_t __cdecl _strset_s(  char * _Dst,   size_t _DstSize,   int _Value);
char * __cdecl _strset( char *_Dest,  int _Value);
errno_t __cdecl strcpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
#line 109 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
char * __cdecl strcpy( char *_Dest,  const char * _Source);
errno_t __cdecl strcat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
#line 114 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
char * __cdecl strcat( char *_Dest,  const char * _Source);
int     __cdecl strcmp(  const char * _Str1,   const char * _Str2);
size_t  __cdecl strlen(  const char * _Str);
size_t  __cdecl strnlen(  const char * _Str,   size_t _MaxCount);
static __inline
size_t  __cdecl strnlen_s(  const char * _Str,   size_t _MaxCount)
{
    return (_Str==0) ? 0 : strnlen(_Str, _MaxCount);
}
#line 131 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
errno_t __cdecl memmove_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
#line 134 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
void *  __cdecl memmove(  void * _Dst,   const void * _Src,   size_t _Size);
#line 141 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
char *  __cdecl _strdup(  const char * _Src);
#line 147 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
char *  __cdecl strchr(  const char * _Str,   int _Val);
int     __cdecl _stricmp(   const char * _Str1,    const char * _Str2);
int     __cdecl _strcmpi(   const char * _Str1,    const char * _Str2);
int     __cdecl _stricmp_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
int     __cdecl strcoll(   const char * _Str1,    const  char * _Str2);
int     __cdecl _strcoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
int     __cdecl _stricoll(   const char * _Str1,    const char * _Str2);
int     __cdecl _stricoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
int     __cdecl _strncoll  (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
int     __cdecl _strncoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
int     __cdecl _strnicoll (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
int     __cdecl _strnicoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
size_t  __cdecl strcspn(   const char * _Str,    const char * _Control);
char *  __cdecl _strerror(  const char * _ErrMsg);
errno_t __cdecl _strerror_s(  char * _Buf,   size_t _SizeInBytes,   const char * _ErrMsg);
char *  __cdecl strerror(  int);
errno_t __cdecl strerror_s(  char * _Buf,   size_t _SizeInBytes,   int _ErrNum);
#line 168 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
errno_t __cdecl _strlwr_s(  char * _Str,   size_t _Size);
char * __cdecl _strlwr( char *_String);
errno_t __cdecl _strlwr_s_l(  char * _Str,   size_t _Size,   _locale_t _Locale);
char * __cdecl _strlwr_l(  char *_String,   _locale_t _Locale);
errno_t __cdecl strncat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
#line 178 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#pragma warning(push)
#pragma warning(disable:6059)
char * __cdecl strncat(  char *_Dest,   const char * _Source,   size_t _Count);
#pragma warning(pop)
int     __cdecl strncmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
int     __cdecl _strnicmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
int     __cdecl _strnicmp_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
errno_t __cdecl strncpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
#line 190 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
char * __cdecl strncpy(    char *_Dest,   const char * _Source,   size_t _Count);
errno_t __cdecl _strnset_s(  char * _Str,   size_t _SizeInBytes,   int _Val,   size_t _MaxCount);
char * __cdecl _strnset(  char *_Dest,   int _Val,   size_t _Count);
char *  __cdecl strpbrk(  const char * _Str,   const char * _Control);
char *  __cdecl strrchr(  const char * _Str,   int _Ch);
char *  __cdecl _strrev(  char * _Str);
size_t  __cdecl strspn(  const char * _Str,   const char * _Control);
char *  __cdecl strstr(  const char * _Str,   const char * _SubStr);
char *  __cdecl strtok(  char * _Str,   const char * _Delim);
char *  __cdecl strtok_s(  char * _Str,   const char * _Delim,     char ** _Context);
#line 204 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
errno_t __cdecl _strupr_s(  char * _Str,   size_t _Size);
char * __cdecl _strupr( char *_String);
errno_t __cdecl _strupr_s_l(  char * _Str,   size_t _Size, _locale_t _Locale);
char * __cdecl _strupr_l(  char *_String,   _locale_t _Locale);
size_t  __cdecl strxfrm (    char * _Dst,   const char * _Src,   size_t _MaxCount);
size_t  __cdecl _strxfrm_l(    char * _Dst,   const char * _Src,   size_t _MaxCount,   _locale_t _Locale);
#line 240 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strdup" ". See online help for details."))  char * __cdecl strdup(  const char * _Src);
#line 246 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strcmpi" ". See online help for details."))  int __cdecl strcmpi(  const char * _Str1,   const char * _Str2);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_stricmp" ". See online help for details."))  int __cdecl stricmp(  const char * _Str1,   const char * _Str2);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strlwr" ". See online help for details."))  char * __cdecl strlwr(  char * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnicmp" ". See online help for details."))  int __cdecl strnicmp(  const char * _Str1,   const char * _Str,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnset" ". See online help for details."))  char * __cdecl strnset(  char * _Str,   int _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strrev" ". See online help for details."))  char * __cdecl strrev(  char * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strset" ". See online help for details."))         char * __cdecl strset(  char * _Str,   int _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strupr" ". See online help for details."))  char * __cdecl strupr(  char * _Str);
#line 258 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 268 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
wchar_t * __cdecl _wcsdup(  const wchar_t * _Str);
#line 274 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
errno_t __cdecl wcscat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);
#line 278 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
wchar_t * __cdecl wcscat( wchar_t *_Dest,  const wchar_t * _Source);
wchar_t * __cdecl wcschr(  const wchar_t * _Str, wchar_t _Ch);
int __cdecl wcscmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
errno_t __cdecl wcscpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);
#line 287 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
wchar_t * __cdecl wcscpy( wchar_t *_Dest,  const wchar_t * _Source);
size_t __cdecl wcscspn(  const wchar_t * _Str,   const wchar_t * _Control);
size_t __cdecl wcslen(  const wchar_t * _Str);
size_t __cdecl wcsnlen(  const wchar_t * _Src,   size_t _MaxCount);
static __inline
size_t __cdecl wcsnlen_s(  const wchar_t * _Src,   size_t _MaxCount)
{
    return (_Src == ((void *)0)) ? 0 : wcsnlen(_Src, _MaxCount);
}
#line 304 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
errno_t __cdecl wcsncat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);
#line 307 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#pragma warning(push)
#pragma warning(disable:6059)
wchar_t * __cdecl wcsncat(  wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
#pragma warning(pop)
int __cdecl wcsncmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
errno_t __cdecl wcsncpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);
#line 316 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
wchar_t * __cdecl wcsncpy(    wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
wchar_t * __cdecl wcspbrk(  const wchar_t * _Str,   const wchar_t * _Control);
wchar_t * __cdecl wcsrchr(  const wchar_t * _Str,   wchar_t _Ch);
size_t __cdecl wcsspn(  const wchar_t * _Str,   const wchar_t * _Control);
wchar_t * __cdecl wcsstr(  const wchar_t * _Str,   const wchar_t * _SubStr);
wchar_t * __cdecl wcstok(  wchar_t * _Str,   const wchar_t * _Delim);
wchar_t * __cdecl wcstok_s(  wchar_t * _Str,   const wchar_t * _Delim,     wchar_t ** _Context);
#line 328 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
wchar_t * __cdecl _wcserror(  int _ErrNum);
errno_t __cdecl _wcserror_s(  wchar_t * _Buf,   size_t _SizeInWords,   int _ErrNum);
wchar_t * __cdecl __wcserror(  const wchar_t * _Str);
errno_t __cdecl __wcserror_s(  wchar_t * _Buffer,   size_t _SizeInWords,   const wchar_t * _ErrMsg);
int __cdecl _wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
int __cdecl _wcsicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
int __cdecl _wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
int __cdecl _wcsnicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
errno_t __cdecl _wcsnset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Val,   size_t _MaxCount);
wchar_t * __cdecl _wcsnset(  wchar_t *_Str, wchar_t _Val,   size_t _MaxCount);
wchar_t * __cdecl _wcsrev(  wchar_t * _Str);
errno_t __cdecl _wcsset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Value);
wchar_t * __cdecl _wcsset(  wchar_t *_Str, wchar_t _Val);
errno_t __cdecl _wcslwr_s(  wchar_t * _Str,   size_t _SizeInWords);
wchar_t * __cdecl _wcslwr( wchar_t *_String);
errno_t __cdecl _wcslwr_s_l(  wchar_t * _Str,   size_t _SizeInWords,   _locale_t _Locale);
wchar_t * __cdecl _wcslwr_l(  wchar_t *_String,   _locale_t _Locale);
errno_t __cdecl _wcsupr_s(  wchar_t * _Str,   size_t _Size);
wchar_t * __cdecl _wcsupr( wchar_t *_String);
errno_t __cdecl _wcsupr_s_l(  wchar_t * _Str,   size_t _Size,   _locale_t _Locale);
wchar_t * __cdecl _wcsupr_l(  wchar_t *_String,   _locale_t _Locale);
size_t __cdecl wcsxfrm(    wchar_t * _Dst,   const wchar_t * _Src,   size_t _MaxCount);
size_t __cdecl _wcsxfrm_l(    wchar_t * _Dst,   const wchar_t *_Src,   size_t _MaxCount,   _locale_t _Locale);
int __cdecl wcscoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
int __cdecl _wcscoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
int __cdecl _wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
int __cdecl _wcsicoll_l(  const wchar_t * _Str1,   const wchar_t *_Str2,   _locale_t _Locale);
int __cdecl _wcsncoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
int __cdecl _wcsncoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
int __cdecl _wcsnicoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
int __cdecl _wcsnicoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
#line 396 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsdup" ". See online help for details."))  wchar_t * __cdecl wcsdup(  const wchar_t * _Str);
#line 402 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicmp" ". See online help for details."))  int __cdecl wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnicmp" ". See online help for details."))  int __cdecl wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnset" ". See online help for details."))  wchar_t * __cdecl wcsnset(  wchar_t * _Str,   wchar_t _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsrev" ". See online help for details."))  wchar_t * __cdecl wcsrev(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsset" ". See online help for details."))  wchar_t * __cdecl wcsset(  wchar_t * _Str, wchar_t _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcslwr" ". See online help for details."))  wchar_t * __cdecl wcslwr(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsupr" ". See online help for details."))  wchar_t * __cdecl wcsupr(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicoll" ". See online help for details."))  int __cdecl wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
#line 417 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 420 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 427 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 49 "crypto\\whrlpool\\wp_block.c"
typedef unsigned char u8;
typedef unsigned __int64 u64;
#line 58 "crypto\\whrlpool\\wp_block.c"
#line 73 "crypto\\whrlpool\\wp_block.c"
#line 85 "crypto\\whrlpool\\wp_block.c"
#line 92 "crypto\\whrlpool\\wp_block.c"
#line 93 "crypto\\whrlpool\\wp_block.c"
#line 101 "crypto\\whrlpool\\wp_block.c"
#line 127 "crypto\\whrlpool\\wp_block.c"
#line 128 "crypto\\whrlpool\\wp_block.c"
#line 136 "crypto\\whrlpool\\wp_block.c"
#line 137 "crypto\\whrlpool\\wp_block.c"
#line 140 "crypto\\whrlpool\\wp_block.c"
#line 141 "crypto\\whrlpool\\wp_block.c"
#line 196 "crypto\\whrlpool\\wp_block.c"
#line 209 "crypto\\whrlpool\\wp_block.c"
static const
union
{
    u8 c[(256 * 1 + 10) * sizeof(u64)];
    u64 q[(256 * 1 + 10)];
} Cx =
{
    {
        0x18,0x18,0x60,0x18,0xc0,0x78,0x30,0xd8,
        0x23,0x23,0x8c,0x23,0x05,0xaf,0x46,0x26,
        0xc6,0xc6,0x3f,0xc6,0x7e,0xf9,0x91,0xb8,
        0xe8,0xe8,0x87,0xe8,0x13,0x6f,0xcd,0xfb,
        0x87,0x87,0x26,0x87,0x4c,0xa1,0x13,0xcb,
        0xb8,0xb8,0xda,0xb8,0xa9,0x62,0x6d,0x11,
        0x01,0x01,0x04,0x01,0x08,0x05,0x02,0x09,
        0x4f,0x4f,0x21,0x4f,0x42,0x6e,0x9e,0x0d,
        0x36,0x36,0xd8,0x36,0xad,0xee,0x6c,0x9b,
        0xa6,0xa6,0xa2,0xa6,0x59,0x04,0x51,0xff,
        0xd2,0xd2,0x6f,0xd2,0xde,0xbd,0xb9,0x0c,
        0xf5,0xf5,0xf3,0xf5,0xfb,0x06,0xf7,0x0e,
        0x79,0x79,0xf9,0x79,0xef,0x80,0xf2,0x96,
        0x6f,0x6f,0xa1,0x6f,0x5f,0xce,0xde,0x30,
        0x91,0x91,0x7e,0x91,0xfc,0xef,0x3f,0x6d,
        0x52,0x52,0x55,0x52,0xaa,0x07,0xa4,0xf8,
        0x60,0x60,0x9d,0x60,0x27,0xfd,0xc0,0x47,
        0xbc,0xbc,0xca,0xbc,0x89,0x76,0x65,0x35,
        0x9b,0x9b,0x56,0x9b,0xac,0xcd,0x2b,0x37,
        0x8e,0x8e,0x02,0x8e,0x04,0x8c,0x01,0x8a,
        0xa3,0xa3,0xb6,0xa3,0x71,0x15,0x5b,0xd2,
        0x0c,0x0c,0x30,0x0c,0x60,0x3c,0x18,0x6c,
        0x7b,0x7b,0xf1,0x7b,0xff,0x8a,0xf6,0x84,
        0x35,0x35,0xd4,0x35,0xb5,0xe1,0x6a,0x80,
        0x1d,0x1d,0x74,0x1d,0xe8,0x69,0x3a,0xf5,
        0xe0,0xe0,0xa7,0xe0,0x53,0x47,0xdd,0xb3,
        0xd7,0xd7,0x7b,0xd7,0xf6,0xac,0xb3,0x21,
        0xc2,0xc2,0x2f,0xc2,0x5e,0xed,0x99,0x9c,
        0x2e,0x2e,0xb8,0x2e,0x6d,0x96,0x5c,0x43,
        0x4b,0x4b,0x31,0x4b,0x62,0x7a,0x96,0x29,
        0xfe,0xfe,0xdf,0xfe,0xa3,0x21,0xe1,0x5d,
        0x57,0x57,0x41,0x57,0x82,0x16,0xae,0xd5,
        0x15,0x15,0x54,0x15,0xa8,0x41,0x2a,0xbd,
        0x77,0x77,0xc1,0x77,0x9f,0xb6,0xee,0xe8,
        0x37,0x37,0xdc,0x37,0xa5,0xeb,0x6e,0x92,
        0xe5,0xe5,0xb3,0xe5,0x7b,0x56,0xd7,0x9e,
        0x9f,0x9f,0x46,0x9f,0x8c,0xd9,0x23,0x13,
        0xf0,0xf0,0xe7,0xf0,0xd3,0x17,0xfd,0x23,
        0x4a,0x4a,0x35,0x4a,0x6a,0x7f,0x94,0x20,
        0xda,0xda,0x4f,0xda,0x9e,0x95,0xa9,0x44,
        0x58,0x58,0x7d,0x58,0xfa,0x25,0xb0,0xa2,
        0xc9,0xc9,0x03,0xc9,0x06,0xca,0x8f,0xcf,
        0x29,0x29,0xa4,0x29,0x55,0x8d,0x52,0x7c,
        0x0a,0x0a,0x28,0x0a,0x50,0x22,0x14,0x5a,
        0xb1,0xb1,0xfe,0xb1,0xe1,0x4f,0x7f,0x50,
        0xa0,0xa0,0xba,0xa0,0x69,0x1a,0x5d,0xc9,
        0x6b,0x6b,0xb1,0x6b,0x7f,0xda,0xd6,0x14,
        0x85,0x85,0x2e,0x85,0x5c,0xab,0x17,0xd9,
        0xbd,0xbd,0xce,0xbd,0x81,0x73,0x67,0x3c,
        0x5d,0x5d,0x69,0x5d,0xd2,0x34,0xba,0x8f,
        0x10,0x10,0x40,0x10,0x80,0x50,0x20,0x90,
        0xf4,0xf4,0xf7,0xf4,0xf3,0x03,0xf5,0x07,
        0xcb,0xcb,0x0b,0xcb,0x16,0xc0,0x8b,0xdd,
        0x3e,0x3e,0xf8,0x3e,0xed,0xc6,0x7c,0xd3,
        0x05,0x05,0x14,0x05,0x28,0x11,0x0a,0x2d,
        0x67,0x67,0x81,0x67,0x1f,0xe6,0xce,0x78,
        0xe4,0xe4,0xb7,0xe4,0x73,0x53,0xd5,0x97,
        0x27,0x27,0x9c,0x27,0x25,0xbb,0x4e,0x02,
        0x41,0x41,0x19,0x41,0x32,0x58,0x82,0x73,
        0x8b,0x8b,0x16,0x8b,0x2c,0x9d,0x0b,0xa7,
        0xa7,0xa7,0xa6,0xa7,0x51,0x01,0x53,0xf6,
        0x7d,0x7d,0xe9,0x7d,0xcf,0x94,0xfa,0xb2,
        0x95,0x95,0x6e,0x95,0xdc,0xfb,0x37,0x49,
        0xd8,0xd8,0x47,0xd8,0x8e,0x9f,0xad,0x56,
        0xfb,0xfb,0xcb,0xfb,0x8b,0x30,0xeb,0x70,
        0xee,0xee,0x9f,0xee,0x23,0x71,0xc1,0xcd,
        0x7c,0x7c,0xed,0x7c,0xc7,0x91,0xf8,0xbb,
        0x66,0x66,0x85,0x66,0x17,0xe3,0xcc,0x71,
        0xdd,0xdd,0x53,0xdd,0xa6,0x8e,0xa7,0x7b,
        0x17,0x17,0x5c,0x17,0xb8,0x4b,0x2e,0xaf,
        0x47,0x47,0x01,0x47,0x02,0x46,0x8e,0x45,
        0x9e,0x9e,0x42,0x9e,0x84,0xdc,0x21,0x1a,
        0xca,0xca,0x0f,0xca,0x1e,0xc5,0x89,0xd4,
        0x2d,0x2d,0xb4,0x2d,0x75,0x99,0x5a,0x58,
        0xbf,0xbf,0xc6,0xbf,0x91,0x79,0x63,0x2e,
        0x07,0x07,0x1c,0x07,0x38,0x1b,0x0e,0x3f,
        0xad,0xad,0x8e,0xad,0x01,0x23,0x47,0xac,
        0x5a,0x5a,0x75,0x5a,0xea,0x2f,0xb4,0xb0,
        0x83,0x83,0x36,0x83,0x6c,0xb5,0x1b,0xef,
        0x33,0x33,0xcc,0x33,0x85,0xff,0x66,0xb6,
        0x63,0x63,0x91,0x63,0x3f,0xf2,0xc6,0x5c,
        0x02,0x02,0x08,0x02,0x10,0x0a,0x04,0x12,
        0xaa,0xaa,0x92,0xaa,0x39,0x38,0x49,0x93,
        0x71,0x71,0xd9,0x71,0xaf,0xa8,0xe2,0xde,
        0xc8,0xc8,0x07,0xc8,0x0e,0xcf,0x8d,0xc6,
        0x19,0x19,0x64,0x19,0xc8,0x7d,0x32,0xd1,
        0x49,0x49,0x39,0x49,0x72,0x70,0x92,0x3b,
        0xd9,0xd9,0x43,0xd9,0x86,0x9a,0xaf,0x5f,
        0xf2,0xf2,0xef,0xf2,0xc3,0x1d,0xf9,0x31,
        0xe3,0xe3,0xab,0xe3,0x4b,0x48,0xdb,0xa8,
        0x5b,0x5b,0x71,0x5b,0xe2,0x2a,0xb6,0xb9,
        0x88,0x88,0x1a,0x88,0x34,0x92,0x0d,0xbc,
        0x9a,0x9a,0x52,0x9a,0xa4,0xc8,0x29,0x3e,
        0x26,0x26,0x98,0x26,0x2d,0xbe,0x4c,0x0b,
        0x32,0x32,0xc8,0x32,0x8d,0xfa,0x64,0xbf,
        0xb0,0xb0,0xfa,0xb0,0xe9,0x4a,0x7d,0x59,
        0xe9,0xe9,0x83,0xe9,0x1b,0x6a,0xcf,0xf2,
        0x0f,0x0f,0x3c,0x0f,0x78,0x33,0x1e,0x77,
        0xd5,0xd5,0x73,0xd5,0xe6,0xa6,0xb7,0x33,
        0x80,0x80,0x3a,0x80,0x74,0xba,0x1d,0xf4,
        0xbe,0xbe,0xc2,0xbe,0x99,0x7c,0x61,0x27,
        0xcd,0xcd,0x13,0xcd,0x26,0xde,0x87,0xeb,
        0x34,0x34,0xd0,0x34,0xbd,0xe4,0x68,0x89,
        0x48,0x48,0x3d,0x48,0x7a,0x75,0x90,0x32,
        0xff,0xff,0xdb,0xff,0xab,0x24,0xe3,0x54,
        0x7a,0x7a,0xf5,0x7a,0xf7,0x8f,0xf4,0x8d,
        0x90,0x90,0x7a,0x90,0xf4,0xea,0x3d,0x64,
        0x5f,0x5f,0x61,0x5f,0xc2,0x3e,0xbe,0x9d,
        0x20,0x20,0x80,0x20,0x1d,0xa0,0x40,0x3d,
        0x68,0x68,0xbd,0x68,0x67,0xd5,0xd0,0x0f,
        0x1a,0x1a,0x68,0x1a,0xd0,0x72,0x34,0xca,
        0xae,0xae,0x82,0xae,0x19,0x2c,0x41,0xb7,
        0xb4,0xb4,0xea,0xb4,0xc9,0x5e,0x75,0x7d,
        0x54,0x54,0x4d,0x54,0x9a,0x19,0xa8,0xce,
        0x93,0x93,0x76,0x93,0xec,0xe5,0x3b,0x7f,
        0x22,0x22,0x88,0x22,0x0d,0xaa,0x44,0x2f,
        0x64,0x64,0x8d,0x64,0x07,0xe9,0xc8,0x63,
        0xf1,0xf1,0xe3,0xf1,0xdb,0x12,0xff,0x2a,
        0x73,0x73,0xd1,0x73,0xbf,0xa2,0xe6,0xcc,
        0x12,0x12,0x48,0x12,0x90,0x5a,0x24,0x82,
        0x40,0x40,0x1d,0x40,0x3a,0x5d,0x80,0x7a,
        0x08,0x08,0x20,0x08,0x40,0x28,0x10,0x48,
        0xc3,0xc3,0x2b,0xc3,0x56,0xe8,0x9b,0x95,
        0xec,0xec,0x97,0xec,0x33,0x7b,0xc5,0xdf,
        0xdb,0xdb,0x4b,0xdb,0x96,0x90,0xab,0x4d,
        0xa1,0xa1,0xbe,0xa1,0x61,0x1f,0x5f,0xc0,
        0x8d,0x8d,0x0e,0x8d,0x1c,0x83,0x07,0x91,
        0x3d,0x3d,0xf4,0x3d,0xf5,0xc9,0x7a,0xc8,
        0x97,0x97,0x66,0x97,0xcc,0xf1,0x33,0x5b,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0xcf,0xcf,0x1b,0xcf,0x36,0xd4,0x83,0xf9,
        0x2b,0x2b,0xac,0x2b,0x45,0x87,0x56,0x6e,
        0x76,0x76,0xc5,0x76,0x97,0xb3,0xec,0xe1,
        0x82,0x82,0x32,0x82,0x64,0xb0,0x19,0xe6,
        0xd6,0xd6,0x7f,0xd6,0xfe,0xa9,0xb1,0x28,
        0x1b,0x1b,0x6c,0x1b,0xd8,0x77,0x36,0xc3,
        0xb5,0xb5,0xee,0xb5,0xc1,0x5b,0x77,0x74,
        0xaf,0xaf,0x86,0xaf,0x11,0x29,0x43,0xbe,
        0x6a,0x6a,0xb5,0x6a,0x77,0xdf,0xd4,0x1d,
        0x50,0x50,0x5d,0x50,0xba,0x0d,0xa0,0xea,
        0x45,0x45,0x09,0x45,0x12,0x4c,0x8a,0x57,
        0xf3,0xf3,0xeb,0xf3,0xcb,0x18,0xfb,0x38,
        0x30,0x30,0xc0,0x30,0x9d,0xf0,0x60,0xad,
        0xef,0xef,0x9b,0xef,0x2b,0x74,0xc3,0xc4,
        0x3f,0x3f,0xfc,0x3f,0xe5,0xc3,0x7e,0xda,
        0x55,0x55,0x49,0x55,0x92,0x1c,0xaa,0xc7,
        0xa2,0xa2,0xb2,0xa2,0x79,0x10,0x59,0xdb,
        0xea,0xea,0x8f,0xea,0x03,0x65,0xc9,0xe9,
        0x65,0x65,0x89,0x65,0x0f,0xec,0xca,0x6a,
        0xba,0xba,0xd2,0xba,0xb9,0x68,0x69,0x03,
        0x2f,0x2f,0xbc,0x2f,0x65,0x93,0x5e,0x4a,
        0xc0,0xc0,0x27,0xc0,0x4e,0xe7,0x9d,0x8e,
        0xde,0xde,0x5f,0xde,0xbe,0x81,0xa1,0x60,
        0x1c,0x1c,0x70,0x1c,0xe0,0x6c,0x38,0xfc,
        0xfd,0xfd,0xd3,0xfd,0xbb,0x2e,0xe7,0x46,
        0x4d,0x4d,0x29,0x4d,0x52,0x64,0x9a,0x1f,
        0x92,0x92,0x72,0x92,0xe4,0xe0,0x39,0x76,
        0x75,0x75,0xc9,0x75,0x8f,0xbc,0xea,0xfa,
        0x06,0x06,0x18,0x06,0x30,0x1e,0x0c,0x36,
        0x8a,0x8a,0x12,0x8a,0x24,0x98,0x09,0xae,
        0xb2,0xb2,0xf2,0xb2,0xf9,0x40,0x79,0x4b,
        0xe6,0xe6,0xbf,0xe6,0x63,0x59,0xd1,0x85,
        0x0e,0x0e,0x38,0x0e,0x70,0x36,0x1c,0x7e,
        0x1f,0x1f,0x7c,0x1f,0xf8,0x63,0x3e,0xe7,
        0x62,0x62,0x95,0x62,0x37,0xf7,0xc4,0x55,
        0xd4,0xd4,0x77,0xd4,0xee,0xa3,0xb5,0x3a,
        0xa8,0xa8,0x9a,0xa8,0x29,0x32,0x4d,0x81,
        0x96,0x96,0x62,0x96,0xc4,0xf4,0x31,0x52,
        0xf9,0xf9,0xc3,0xf9,0x9b,0x3a,0xef,0x62,
        0xc5,0xc5,0x33,0xc5,0x66,0xf6,0x97,0xa3,
        0x25,0x25,0x94,0x25,0x35,0xb1,0x4a,0x10,
        0x59,0x59,0x79,0x59,0xf2,0x20,0xb2,0xab,
        0x84,0x84,0x2a,0x84,0x54,0xae,0x15,0xd0,
        0x72,0x72,0xd5,0x72,0xb7,0xa7,0xe4,0xc5,
        0x39,0x39,0xe4,0x39,0xd5,0xdd,0x72,0xec,
        0x4c,0x4c,0x2d,0x4c,0x5a,0x61,0x98,0x16,
        0x5e,0x5e,0x65,0x5e,0xca,0x3b,0xbc,0x94,
        0x78,0x78,0xfd,0x78,0xe7,0x85,0xf0,0x9f,
        0x38,0x38,0xe0,0x38,0xdd,0xd8,0x70,0xe5,
        0x8c,0x8c,0x0a,0x8c,0x14,0x86,0x05,0x98,
        0xd1,0xd1,0x63,0xd1,0xc6,0xb2,0xbf,0x17,
        0xa5,0xa5,0xae,0xa5,0x41,0x0b,0x57,0xe4,
        0xe2,0xe2,0xaf,0xe2,0x43,0x4d,0xd9,0xa1,
        0x61,0x61,0x99,0x61,0x2f,0xf8,0xc2,0x4e,
        0xb3,0xb3,0xf6,0xb3,0xf1,0x45,0x7b,0x42,
        0x21,0x21,0x84,0x21,0x15,0xa5,0x42,0x34,
        0x9c,0x9c,0x4a,0x9c,0x94,0xd6,0x25,0x08,
        0x1e,0x1e,0x78,0x1e,0xf0,0x66,0x3c,0xee,
        0x43,0x43,0x11,0x43,0x22,0x52,0x86,0x61,
        0xc7,0xc7,0x3b,0xc7,0x76,0xfc,0x93,0xb1,
        0xfc,0xfc,0xd7,0xfc,0xb3,0x2b,0xe5,0x4f,
        0x04,0x04,0x10,0x04,0x20,0x14,0x08,0x24,
        0x51,0x51,0x59,0x51,0xb2,0x08,0xa2,0xe3,
        0x99,0x99,0x5e,0x99,0xbc,0xc7,0x2f,0x25,
        0x6d,0x6d,0xa9,0x6d,0x4f,0xc4,0xda,0x22,
        0x0d,0x0d,0x34,0x0d,0x68,0x39,0x1a,0x65,
        0xfa,0xfa,0xcf,0xfa,0x83,0x35,0xe9,0x79,
        0xdf,0xdf,0x5b,0xdf,0xb6,0x84,0xa3,0x69,
        0x7e,0x7e,0xe5,0x7e,0xd7,0x9b,0xfc,0xa9,
        0x24,0x24,0x90,0x24,0x3d,0xb4,0x48,0x19,
        0x3b,0x3b,0xec,0x3b,0xc5,0xd7,0x76,0xfe,
        0xab,0xab,0x96,0xab,0x31,0x3d,0x4b,0x9a,
        0xce,0xce,0x1f,0xce,0x3e,0xd1,0x81,0xf0,
        0x11,0x11,0x44,0x11,0x88,0x55,0x22,0x99,
        0x8f,0x8f,0x06,0x8f,0x0c,0x89,0x03,0x83,
        0x4e,0x4e,0x25,0x4e,0x4a,0x6b,0x9c,0x04,
        0xb7,0xb7,0xe6,0xb7,0xd1,0x51,0x73,0x66,
        0xeb,0xeb,0x8b,0xeb,0x0b,0x60,0xcb,0xe0,
        0x3c,0x3c,0xf0,0x3c,0xfd,0xcc,0x78,0xc1,
        0x81,0x81,0x3e,0x81,0x7c,0xbf,0x1f,0xfd,
        0x94,0x94,0x6a,0x94,0xd4,0xfe,0x35,0x40,
        0xf7,0xf7,0xfb,0xf7,0xeb,0x0c,0xf3,0x1c,
        0xb9,0xb9,0xde,0xb9,0xa1,0x67,0x6f,0x18,
        0x13,0x13,0x4c,0x13,0x98,0x5f,0x26,0x8b,
        0x2c,0x2c,0xb0,0x2c,0x7d,0x9c,0x58,0x51,
        0xd3,0xd3,0x6b,0xd3,0xd6,0xb8,0xbb,0x05,
        0xe7,0xe7,0xbb,0xe7,0x6b,0x5c,0xd3,0x8c,
        0x6e,0x6e,0xa5,0x6e,0x57,0xcb,0xdc,0x39,
        0xc4,0xc4,0x37,0xc4,0x6e,0xf3,0x95,0xaa,
        0x03,0x03,0x0c,0x03,0x18,0x0f,0x06,0x1b,
        0x56,0x56,0x45,0x56,0x8a,0x13,0xac,0xdc,
        0x44,0x44,0x0d,0x44,0x1a,0x49,0x88,0x5e,
        0x7f,0x7f,0xe1,0x7f,0xdf,0x9e,0xfe,0xa0,
        0xa9,0xa9,0x9e,0xa9,0x21,0x37,0x4f,0x88,
        0x2a,0x2a,0xa8,0x2a,0x4d,0x82,0x54,0x67,
        0xbb,0xbb,0xd6,0xbb,0xb1,0x6d,0x6b,0x0a,
        0xc1,0xc1,0x23,0xc1,0x46,0xe2,0x9f,0x87,
        0x53,0x53,0x51,0x53,0xa2,0x02,0xa6,0xf1,
        0xdc,0xdc,0x57,0xdc,0xae,0x8b,0xa5,0x72,
        0x0b,0x0b,0x2c,0x0b,0x58,0x27,0x16,0x53,
        0x9d,0x9d,0x4e,0x9d,0x9c,0xd3,0x27,0x01,
        0x6c,0x6c,0xad,0x6c,0x47,0xc1,0xd8,0x2b,
        0x31,0x31,0xc4,0x31,0x95,0xf5,0x62,0xa4,
        0x74,0x74,0xcd,0x74,0x87,0xb9,0xe8,0xf3,
        0xf6,0xf6,0xff,0xf6,0xe3,0x09,0xf1,0x15,
        0x46,0x46,0x05,0x46,0x0a,0x43,0x8c,0x4c,
        0xac,0xac,0x8a,0xac,0x09,0x26,0x45,0xa5,
        0x89,0x89,0x1e,0x89,0x3c,0x97,0x0f,0xb5,
        0x14,0x14,0x50,0x14,0xa0,0x44,0x28,0xb4,
        0xe1,0xe1,0xa3,0xe1,0x5b,0x42,0xdf,0xba,
        0x16,0x16,0x58,0x16,0xb0,0x4e,0x2c,0xa6,
        0x3a,0x3a,0xe8,0x3a,0xcd,0xd2,0x74,0xf7,
        0x69,0x69,0xb9,0x69,0x6f,0xd0,0xd2,0x06,
        0x09,0x09,0x24,0x09,0x48,0x2d,0x12,0x41,
        0x70,0x70,0xdd,0x70,0xa7,0xad,0xe0,0xd7,
        0xb6,0xb6,0xe2,0xb6,0xd9,0x54,0x71,0x6f,
        0xd0,0xd0,0x67,0xd0,0xce,0xb7,0xbd,0x1e,
        0xed,0xed,0x93,0xed,0x3b,0x7e,0xc7,0xd6,
        0xcc,0xcc,0x17,0xcc,0x2e,0xdb,0x85,0xe2,
        0x42,0x42,0x15,0x42,0x2a,0x57,0x84,0x68,
        0x98,0x98,0x5a,0x98,0xb4,0xc2,0x2d,0x2c,
        0xa4,0xa4,0xaa,0xa4,0x49,0x0e,0x55,0xed,
        0x28,0x28,0xa0,0x28,0x5d,0x88,0x50,0x75,
        0x5c,0x5c,0x6d,0x5c,0xda,0x31,0xb8,0x86,
        0xf8,0xf8,0xc7,0xf8,0x93,0x3f,0xed,0x6b,
        0x86,0x86,0x22,0x86,0x44,0xa4,0x11,0xc2,
        0x18, 0x23, 0xc6, 0xe8, 0x87, 0xb8, 0x01, 0x4f,
        0x36, 0xa6, 0xd2, 0xf5, 0x79, 0x6f, 0x91, 0x52, 0x60, 0xbc, 0x9b,
        0x8e, 0xa3, 0x0c, 0x7b, 0x35, 0x1d, 0xe0, 0xd7, 0xc2, 0x2e, 0x4b,
        0xfe, 0x57, 0x15, 0x77, 0x37, 0xe5, 0x9f, 0xf0, 0x4a, 0xda, 0x58,
        0xc9, 0x29, 0x0a, 0xb1, 0xa0, 0x6b, 0x85, 0xbd, 0x5d, 0x10, 0xf4,
        0xcb, 0x3e, 0x05, 0x67, 0xe4, 0x27, 0x41, 0x8b, 0xa7, 0x7d, 0x95,
        0xd8, 0xfb, 0xee, 0x7c, 0x66, 0xdd, 0x17, 0x47, 0x9e, 0xca, 0x2d,
        0xbf, 0x07, 0xad, 0x5a, 0x83, 0x33
    }
};
void whirlpool_block(WHIRLPOOL_CTX *ctx, const void *inp, size_t n)
{
    int r;
    const u8 *p = inp;
    union
    {
        u64 q[8];
        u8 c[64];
    } S, K, *H = (void *)ctx->H.q;
    do
    {
        extern unsigned long OPENSSL_ia32cap_P[];
        void whirlpool_block_mmx(void *,const void *,size_t);
        if (!(OPENSSL_ia32cap_P[0] & (1<<23))) break;
        whirlpool_block_mmx(ctx->H.c,inp,n);
        return;
    }
    while (0);
#line 498 "crypto\\whrlpool\\wp_block.c"
    do
    {
        u64 L[8];
        int i;
        for (i = 0; i < 64; i++)
            S.c[i] = (K.c[i] = H->c[i]) ^ p[i];
        for (r = 0; r < 10; r++)
        {
            for (i = 0; i < 8; i++)
            {
                L[i] = i ? 0 : (&(Cx.q[256*1]))[r];
                L[i] ^= (Cx.q[K.c[(i)*8+0]]) ^ ((Cx.q[K.c[((i - 1) & 7)*8+1]])<<(8) ^ (Cx.q[K.c[((i - 1) & 7)*8+1]])>>(64-8)) ^
                        ((Cx.q[K.c[((i - 2) & 7)*8+2]])<<(16) ^ (Cx.q[K.c[((i - 2) & 7)*8+2]])>>(64-16)) ^ ((Cx.q[K.c[((i - 3) & 7)*8+3]])<<(24) ^ (Cx.q[K.c[((i - 3) & 7)*8+3]])>>(64-24)) ^
                        ((Cx.q[K.c[((i - 4) & 7)*8+4]])<<(32) ^ (Cx.q[K.c[((i - 4) & 7)*8+4]])>>(64-32)) ^ ((Cx.q[K.c[((i - 5) & 7)*8+5]])<<(40) ^ (Cx.q[K.c[((i - 5) & 7)*8+5]])>>(64-40)) ^
                        ((Cx.q[K.c[((i - 6) & 7)*8+6]])<<(48) ^ (Cx.q[K.c[((i - 6) & 7)*8+6]])>>(64-48)) ^ ((Cx.q[K.c[((i - 7) & 7)*8+7]])<<(56) ^ (Cx.q[K.c[((i - 7) & 7)*8+7]])>>(64-56));
            }
            memcpy(K.q, L, 64);
            for (i = 0; i < 8; i++)
            {
                L[i] ^= (Cx.q[S.c[(i)*8+0]]) ^ ((Cx.q[S.c[((i - 1) & 7)*8+1]])<<(8) ^ (Cx.q[S.c[((i - 1) & 7)*8+1]])>>(64-8)) ^
                        ((Cx.q[S.c[((i - 2) & 7)*8+2]])<<(16) ^ (Cx.q[S.c[((i - 2) & 7)*8+2]])>>(64-16)) ^ ((Cx.q[S.c[((i - 3) & 7)*8+3]])<<(24) ^ (Cx.q[S.c[((i - 3) & 7)*8+3]])>>(64-24)) ^
                        ((Cx.q[S.c[((i - 4) & 7)*8+4]])<<(32) ^ (Cx.q[S.c[((i - 4) & 7)*8+4]])>>(64-32)) ^ ((Cx.q[S.c[((i - 5) & 7)*8+5]])<<(40) ^ (Cx.q[S.c[((i - 5) & 7)*8+5]])>>(64-40)) ^
                        ((Cx.q[S.c[((i - 6) & 7)*8+6]])<<(48) ^ (Cx.q[S.c[((i - 6) & 7)*8+6]])>>(64-48)) ^ ((Cx.q[S.c[((i - 7) & 7)*8+7]])<<(56) ^ (Cx.q[S.c[((i - 7) & 7)*8+7]])>>(64-56));
            }
            memcpy(S.q, L, 64);
        }
        for (i = 0; i < 64; i++)
            H->c[i] ^= S.c[i] ^ p[i];
#line 790 "crypto\\whrlpool\\wp_block.c"
        p += 64;
    }
    while (--n);
}
