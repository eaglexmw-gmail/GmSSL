#line 1 "crypto\\des\\ecb3_enc.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
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
#line 14 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma pack(push,8)
struct _iobuf
{
    char *_ptr;
    int   _cnt;
    char *_base;
    int   _flag;
    int   _file;
    int   _charbuf;
    int   _bufsiz;
    char *_tmpfname;
};
typedef struct _iobuf FILE;
#line 69 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 80 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 94 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 116 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 125 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
FILE * __cdecl __iob_func(void);
#line 131 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
typedef __int64 fpos_t;
#line 139 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 146 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _filbuf(  FILE * _File );
int __cdecl _flsbuf(  int _Ch,   FILE * _File);
FILE * __cdecl _fsopen(  const char * _Filename,   const char * _Mode,   int _ShFlag);
#line 178 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
void __cdecl clearerr(  FILE * _File);
errno_t __cdecl clearerr_s(  FILE * _File );
#line 183 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl fclose(  FILE * _File);
int __cdecl _fcloseall(void);
FILE * __cdecl _fdopen(  int _FileHandle,   const char * _Mode);
#line 191 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl feof(  FILE * _File);
int __cdecl ferror(  FILE * _File);
int __cdecl fflush(  FILE * _File);
int __cdecl fgetc(  FILE * _File);
int __cdecl _fgetchar(void);
int __cdecl fgetpos(  FILE * _File,   fpos_t * _Pos);
char * __cdecl fgets(  char * _Buf,   int _MaxCount,   FILE * _File);
int __cdecl _fileno(  FILE * _File);
#line 205 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 210 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
char * __cdecl _tempnam(  const char * _DirName,   const char * _FilePrefix);
#line 216 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _flushall(void);
FILE * __cdecl fopen(  const char * _Filename,   const char * _Mode);
errno_t __cdecl fopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode);
#line 222 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl fprintf(  FILE * _File,     const char * _Format, ...);
int __cdecl fprintf_s(  FILE * _File,     const char * _Format, ...);
#line 226 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl fputc(  int _Ch,   FILE * _File);
int __cdecl _fputchar(  int _Ch);
int __cdecl fputs(  const char * _Str,   FILE * _File);
size_t __cdecl fread(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);
size_t __cdecl fread_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
#line 233 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
FILE * __cdecl freopen(  const char * _Filename,   const char * _Mode,   FILE * _File);
errno_t __cdecl freopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode,   FILE * _OldFile);
#line 237 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl fscanf(  FILE * _File,     const char * _Format, ...);
int __cdecl _fscanf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)
int __cdecl fscanf_s(  FILE * _File,     const char * _Format, ...);
#line 244 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _fscanf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
int __cdecl fsetpos(  FILE * _File,   const fpos_t * _Pos);
int __cdecl fseek(  FILE * _File,   long _Offset,   int _Origin);
long __cdecl ftell(  FILE * _File);
int __cdecl _fseeki64(  FILE * _File,   __int64 _Offset,   int _Origin);
__int64 __cdecl _ftelli64(  FILE * _File);
size_t __cdecl fwrite(  const void * _Str,   size_t _Size,   size_t _Count,   FILE * _File);
int __cdecl getc(  FILE * _File);
int __cdecl getchar(void);
int __cdecl _getmaxstdio(void);
char * __cdecl gets_s(  char * _Buf,   rsize_t _Size);
#line 260 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
char * __cdecl gets(  char *_Buffer);
int __cdecl _getw(  FILE * _File);
void __cdecl perror(  const char * _ErrMsg);
#line 267 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _pclose(  FILE * _File);
FILE * __cdecl _popen(  const char * _Command,   const char * _Mode);
#line 271 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl printf(    const char * _Format, ...);
int __cdecl printf_s(    const char * _Format, ...);
#line 275 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl putc(  int _Ch,   FILE * _File);
int __cdecl putchar(  int _Ch);
int __cdecl puts(  const char * _Str);
int __cdecl _putw(  int _Word,   FILE * _File);
int __cdecl remove(  const char * _Filename);
int __cdecl rename(  const char * _OldFilename,   const char * _NewFilename);
int __cdecl _unlink(  const char * _Filename);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_unlink" ". See online help for details."))  int __cdecl unlink(  const char * _Filename);
#line 287 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 288 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
void __cdecl rewind(  FILE * _File);
int __cdecl _rmtmp(void);
int __cdecl scanf(    const char * _Format, ...);
int __cdecl _scanf_l(    const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)
int __cdecl scanf_s(    const char * _Format, ...);
#line 297 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _scanf_s_l(    const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
void __cdecl setbuf(  FILE * _File,     char * _Buffer);
int __cdecl _setmaxstdio(  int _Max);
unsigned int __cdecl _set_output_format(  unsigned int _Format);
unsigned int __cdecl _get_output_format(void);
int __cdecl setvbuf(  FILE * _File,   char * _Buf,   int _Mode,   size_t _Size);
int __cdecl _snprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, ...);
int __cdecl sprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, ...);
#line 309 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _scprintf(    const char * _Format, ...);
int __cdecl sscanf(  const char * _Src,     const char * _Format, ...);
int __cdecl _sscanf_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)
int __cdecl sscanf_s(  const char * _Src,     const char * _Format, ...);
#line 318 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _sscanf_s_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _snscanf(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
int __cdecl _snscanf_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _snscanf_s(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
int __cdecl _snscanf_s_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
FILE * __cdecl tmpfile(void);
errno_t __cdecl tmpfile_s(    FILE ** _File);
errno_t __cdecl tmpnam_s(  char * _Buf,   rsize_t _Size);
#line 329 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
char * __cdecl tmpnam(  char *_Buffer);
int __cdecl ungetc(  int _Ch,   FILE * _File);
int __cdecl vfprintf(  FILE * _File,     const char * _Format, va_list _ArgList);
int __cdecl vfprintf_s(  FILE * _File,     const char * _Format, va_list _ArgList);
#line 336 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl vprintf(    const char * _Format, va_list _ArgList);
int __cdecl vprintf_s(    const char * _Format, va_list _ArgList);
#line 340 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl vsnprintf(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
int __cdecl vsnprintf_s(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
#line 345 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _vsnprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
#pragma warning(push)
#pragma warning(disable:4793)
int __cdecl _snprintf(    char *_Dest,   size_t _Count,     const char * _Format, ...);
int __cdecl _vsnprintf(    char *_Dest,   size_t _Count,     const char * _Format, va_list _Args);
#pragma warning(pop)
int __cdecl vsprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, va_list _ArgList);
#line 355 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma warning(push)
#pragma warning(disable:4793)
int __cdecl sprintf(  char *_Dest,  const char * _Format, ...);
int __cdecl vsprintf(  char *_Dest,  const char * _Format, va_list _Args);
#pragma warning(pop)
int __cdecl _vscprintf(    const char * _Format, va_list _ArgList);
int __cdecl _snprintf_c(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, ...);
int __cdecl _vsnprintf_c(  char *_DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
int __cdecl _fprintf_p(  FILE * _File,     const char * _Format, ...);
int __cdecl _printf_p(    const char * _Format, ...);
int __cdecl _sprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, ...);
int __cdecl _vfprintf_p(  FILE * _File,     const char * _Format, va_list _ArgList);
int __cdecl _vprintf_p(    const char * _Format, va_list _ArgList);
int __cdecl _vsprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
int __cdecl _scprintf_p(    const char * _Format, ...);
int __cdecl _vscprintf_p(    const char * _Format, va_list _ArgList);
int __cdecl _set_printf_count_output(  int _Value);
int __cdecl _get_printf_count_output(void);
int __cdecl _printf_l(    const char * _Format,   _locale_t _Locale, ...);
int __cdecl _printf_p_l(    const char * _Format,   _locale_t _Locale, ...);
int __cdecl _printf_s_l(    const char * _Format,   _locale_t _Locale, ...);
int __cdecl _vprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vprintf_s_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _fprintf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _fprintf_p_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _fprintf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _vfprintf_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vfprintf_p_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vfprintf_s_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _sprintf_l(    char * _DstBuf,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _sprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _sprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _vsprintf_l(    char * _DstBuf,   const char * _Format,   _locale_t, va_list _ArgList);
int __cdecl _vsprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char* _Format,   _locale_t _Locale,  va_list _ArgList);
int __cdecl _vsprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _scprintf_l(    const char * _Format,   _locale_t _Locale, ...);
int __cdecl _scprintf_p_l(    const char * _Format,   _locale_t _Locale, ...);
int __cdecl _vscprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vscprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _snprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _snprintf_c_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _snprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
int __cdecl _vsnprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vsnprintf_c_l(  char * _DstBuf,   size_t _MaxCount, const char *,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vsnprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char* _Format,  _locale_t _Locale, va_list _ArgList);
#line 414 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
FILE * __cdecl _wfsopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   int _ShFlag);
#line 420 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
wint_t __cdecl fgetwc(  FILE * _File);
wint_t __cdecl _fgetwchar(void);
wint_t __cdecl fputwc(  wchar_t _Ch,   FILE * _File);
wint_t __cdecl _fputwchar(  wchar_t _Ch);
wint_t __cdecl getwc(  FILE * _File);
wint_t __cdecl getwchar(void);
wint_t __cdecl putwc(  wchar_t _Ch,   FILE * _File);
wint_t __cdecl putwchar(  wchar_t _Ch);
wint_t __cdecl ungetwc(  wint_t _Ch,   FILE * _File);
wchar_t * __cdecl fgetws(  wchar_t * _Dst,   int _SizeInWords,   FILE * _File);
int __cdecl fputws(  const wchar_t * _Str,   FILE * _File);
wchar_t * __cdecl _getws_s(  wchar_t * _Str,   size_t _SizeInWords);
wchar_t * __cdecl _getws(  wchar_t *_String);
int __cdecl _putws(  const wchar_t * _Str);
int __cdecl fwprintf(  FILE * _File,     const wchar_t * _Format, ...);
int __cdecl fwprintf_s(  FILE * _File,     const wchar_t * _Format, ...);
#line 442 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl wprintf(    const wchar_t * _Format, ...);
int __cdecl wprintf_s(    const wchar_t * _Format, ...);
#line 446 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _scwprintf(    const wchar_t * _Format, ...);
int __cdecl vfwprintf(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
int __cdecl vfwprintf_s(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
#line 451 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl vwprintf(    const wchar_t * _Format, va_list _ArgList);
int __cdecl vwprintf_s(    const wchar_t * _Format, va_list _ArgList);
#line 455 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl swprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, ...);
#line 459 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl vswprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
#line 463 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _swprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, ...);
int __cdecl _vswprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
int __cdecl _snwprintf_s(  wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, ...);
int __cdecl _vsnwprintf_s(  wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
#pragma warning(push)
#pragma warning(disable:4793)
int __cdecl _snwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, ...);
int __cdecl _vsnwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, va_list _Args);
#pragma warning(pop)
int __cdecl _fwprintf_p(  FILE * _File,     const wchar_t * _Format, ...);
int __cdecl _wprintf_p(    const wchar_t * _Format, ...);
int __cdecl _vfwprintf_p(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
int __cdecl _vwprintf_p(    const wchar_t * _Format, va_list _ArgList);
int __cdecl _swprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, ...);
int __cdecl _vswprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
int __cdecl _scwprintf_p(    const wchar_t * _Format, ...);
int __cdecl _vscwprintf_p(    const wchar_t * _Format, va_list _ArgList);
int __cdecl _wprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _wprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _wprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _vwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vwprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _fwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _fwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _fwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _vfwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vfwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vfwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _swprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _swprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _swprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _vswprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vswprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vswprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _scwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _scwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _vscwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _snwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _snwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _vsnwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl _vsnwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
#line 526 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma warning(push)
#pragma warning(disable:4141 4996 4793)
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _swprintf(    wchar_t *_Dest,     const wchar_t * _Format, ...);
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _vswprintf(    wchar_t *_Dest,     const wchar_t * _Format, va_list _Args);
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __swprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, ...);
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __vswprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Args);
#pragma warning(pop)
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\swprintf.inl"
#pragma once
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\swprintf.inl"
#line 33 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int swprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, ...)
{
    va_list _Arglist;
    int _Ret;
    ( _Arglist = (va_list)( &(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, ((void *)0), _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl vswprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, ((void *)0), _Ap);
}
#pragma warning( pop )
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int _swprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, ...)
{
    va_list _Arglist;
    int _Ret;
    ( _Arglist = (va_list)( &(_Plocinfo) ) + ( (sizeof(_Plocinfo) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl _vswprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap);
}
#pragma warning( pop )
#line 128 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\swprintf.inl"
#line 129 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\swprintf.inl"
#line 536 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 537 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 551 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
wchar_t * __cdecl _wtempnam(  const wchar_t * _Directory,   const wchar_t * _FilePrefix);
#line 557 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _vscwprintf(    const wchar_t * _Format, va_list _ArgList);
int __cdecl _vscwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
int __cdecl fwscanf(  FILE * _File,     const wchar_t * _Format, ...);
int __cdecl _fwscanf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)
int __cdecl fwscanf_s(  FILE * _File,     const wchar_t * _Format, ...);
#line 567 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _fwscanf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl swscanf(  const wchar_t * _Src,     const wchar_t * _Format, ...);
int __cdecl _swscanf_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl swscanf_s(  const wchar_t *_Src,     const wchar_t * _Format, ...);
#line 573 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _swscanf_s_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _snwscanf(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
int __cdecl _snwscanf_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl _snwscanf_s(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
int __cdecl _snwscanf_s_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl wscanf(    const wchar_t * _Format, ...);
int __cdecl _wscanf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
int __cdecl wscanf_s(    const wchar_t * _Format, ...);
#line 583 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _wscanf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
FILE * __cdecl _wfdopen(  int _FileHandle,   const wchar_t * _Mode);
FILE * __cdecl _wfopen(  const wchar_t * _Filename,   const wchar_t * _Mode);
errno_t __cdecl _wfopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode);
FILE * __cdecl _wfreopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
errno_t __cdecl _wfreopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
void __cdecl _wperror(  const wchar_t * _ErrMsg);
#line 596 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
FILE * __cdecl _wpopen(  const wchar_t *_Command,   const wchar_t * _Mode);
#line 599 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _wremove(  const wchar_t * _Filename);
errno_t __cdecl _wtmpnam_s(  wchar_t * _DstBuf,   size_t _SizeInWords);
wchar_t * __cdecl _wtmpnam(  wchar_t *_Buffer);
wint_t __cdecl _fgetwc_nolock(  FILE * _File);
wint_t __cdecl _fputwc_nolock(  wchar_t _Ch,   FILE * _File);
wint_t __cdecl _ungetwc_nolock(  wint_t _Ch,   FILE * _File);
#line 619 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 630 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 633 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 636 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 652 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
void __cdecl _lock_file(  FILE * _File);
void __cdecl _unlock_file(  FILE * _File);
int __cdecl _fclose_nolock(  FILE * _File);
int __cdecl _fflush_nolock(  FILE * _File);
size_t __cdecl _fread_nolock(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);
size_t __cdecl _fread_nolock_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
int __cdecl _fseek_nolock(  FILE * _File,   long _Offset,   int _Origin);
long __cdecl _ftell_nolock(  FILE * _File);
int __cdecl _fseeki64_nolock(  FILE * _File,   __int64 _Offset,   int _Origin);
__int64 __cdecl _ftelli64_nolock(  FILE * _File);
size_t __cdecl _fwrite_nolock(  const void * _DstBuf,   size_t _Size,   size_t _Count,   FILE * _File);
int __cdecl _ungetc_nolock(  int _Ch,   FILE * _File);
#line 689 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 701 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_tempnam" ". See online help for details."))  char * __cdecl tempnam(  const char * _Directory,   const char * _FilePrefix);
#line 707 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcloseall" ". See online help for details."))  int __cdecl fcloseall(void);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fdopen" ". See online help for details."))  FILE * __cdecl fdopen(  int _FileHandle,   const char * _Format);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fgetchar" ". See online help for details."))  int __cdecl fgetchar(void);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fileno" ". See online help for details."))  int __cdecl fileno(  FILE * _File);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_flushall" ". See online help for details."))  int __cdecl flushall(void);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fputchar" ". See online help for details."))  int __cdecl fputchar(  int _Ch);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_getw" ". See online help for details."))  int __cdecl getw(  FILE * _File);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putw" ". See online help for details."))  int __cdecl putw(  int _Ch,   FILE * _File);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_rmtmp" ". See online help for details."))  int __cdecl rmtmp(void);
#line 719 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma pack(pop)
#line 727 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 16 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 18 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 35 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 77 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 91 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma pack(push,8)
typedef int (__cdecl * _onexit_t)(void);
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 66 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 69 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef struct _div_t
{
    int quot;
    int rem;
} div_t;
typedef struct _ldiv_t
{
    long quot;
    long rem;
} ldiv_t;
typedef struct _lldiv_t
{
    long long quot;
    long long rem;
} lldiv_t;
#line 92 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma pack(4)
typedef struct
{
    unsigned char ld[10];
} _LDOUBLE;
#pragma pack()
#line 121 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef struct
{
    double x;
} _CRT_DOUBLE;
typedef struct
{
    float f;
} _CRT_FLOAT;
typedef struct
{
    long double x;
} _LONGDOUBLE;
#pragma pack(4)
typedef struct
{
    unsigned char ld12[12];
} _LDBL12;
#pragma pack()
#line 151 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
extern int __mb_cur_max;
#line 168 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
int __cdecl ___mb_cur_max_func(void);
int __cdecl ___mb_cur_max_l_func(_locale_t);
#line 171 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef void (__cdecl *_purecall_handler)(void);
_purecall_handler __cdecl _set_purecall_handler(  _purecall_handler _Handler);
_purecall_handler __cdecl _get_purecall_handler(void);
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 225 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t);
_invalid_parameter_handler __cdecl _set_invalid_parameter_handler(  _invalid_parameter_handler _Handler);
_invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);
#line 234 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
extern int * __cdecl _errno(void);
errno_t __cdecl _set_errno(  int _Value);
errno_t __cdecl _get_errno(  int * _Value);
#line 244 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
unsigned long * __cdecl __doserrno(void);
errno_t __cdecl _set_doserrno(  unsigned long _Value);
errno_t __cdecl _get_doserrno(  unsigned long * _Value);
char ** __cdecl __sys_errlist(void);
int * __cdecl __sys_nerr(void);
#line 273 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
extern int __argc;
extern char ** __argv;
extern wchar_t ** __wargv;
#line 288 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 290 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
extern char ** _environ;
extern wchar_t ** _wenviron;
#line 301 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 303 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
extern char * _pgmptr;
extern wchar_t * _wpgmptr;
#line 327 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _get_pgmptr(  char ** _Value);
errno_t __cdecl _get_wpgmptr(  wchar_t ** _Value);
extern int _fmode;
#line 338 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _set_fmode(  int _Mode);
errno_t __cdecl _get_fmode(  int * _PMode);
#line 354 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 355 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
__declspec(noreturn) void __cdecl exit(  int _Code);
__declspec(noreturn) void __cdecl _exit(  int _Code);
__declspec(noreturn) void __cdecl abort(void);
#line 364 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
unsigned int __cdecl _set_abort_behavior(  unsigned int _Flags,   unsigned int _Mask);
int       __cdecl abs(  int _X);
long      __cdecl labs(  long _X);
long long __cdecl llabs(  long long _X);
#line 373 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
__int64    __cdecl _abs64(__int64);
#line 396 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 412 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
int    __cdecl atexit(void (__cdecl *)(void));
#line 414 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
double  __cdecl atof(  const char *_String);
double  __cdecl _atof_l(  const char *_String,   _locale_t _Locale);
#line 419 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
int    __cdecl atoi(  const char *_Str);
int    __cdecl _atoi_l(  const char *_Str,   _locale_t _Locale);
long   __cdecl atol(  const char *_Str);
long   __cdecl _atol_l(  const char *_Str,   _locale_t _Locale);
void * __cdecl bsearch_s(  const void * _Key,   const void * _Base,
                           rsize_t _NumOfElements,   rsize_t _SizeOfElements,
                           int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
#line 430 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
void * __cdecl bsearch(  const void * _Key,   const void * _Base,
                         size_t _NumOfElements,   size_t _SizeOfElements,
                         int (__cdecl * _PtFuncCompare)(const void *, const void *));
void __cdecl qsort_s(  void * _Base,
                       rsize_t _NumOfElements,   rsize_t _SizeOfElements,
                       int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void *_Context);
#line 439 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
void __cdecl qsort(  void * _Base,
                     size_t _NumOfElements,   size_t _SizeOfElements,
                     int (__cdecl * _PtFuncCompare)(const void *, const void *));
#line 443 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
unsigned short __cdecl _byteswap_ushort(  unsigned short _Short);
unsigned long  __cdecl _byteswap_ulong (  unsigned long _Long);
unsigned __int64 __cdecl _byteswap_uint64(  unsigned __int64 _Int64);
div_t  __cdecl div(  int _Numerator,   int _Denominator);
char * __cdecl getenv(  const char * _VarName);
errno_t __cdecl getenv_s(  size_t * _ReturnSize,   char * _DstBuf,   rsize_t _DstSize,   const char * _VarName);
#line 453 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 458 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _dupenv_s(    char **_PBuffer,   size_t * _PBufferSizeInBytes,   const char * _VarName);
#line 464 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 465 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _itoa_s(  int _Value,   char * _DstBuf,   size_t _Size,   int _Radix);
char * __cdecl _itoa( int _Value,   char *_Dest,  int _Radix);
errno_t __cdecl _i64toa_s(  __int64 _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
char * __cdecl _i64toa(  __int64 _Val,     char * _DstBuf,   int _Radix);
errno_t __cdecl _ui64toa_s(  unsigned __int64 _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
char * __cdecl _ui64toa(  unsigned __int64 _Val,     char * _DstBuf,   int _Radix);
__int64 __cdecl _atoi64(  const char * _String);
__int64 __cdecl _atoi64_l(  const char * _String,   _locale_t _Locale);
__int64 __cdecl _strtoi64(  const char * _String,     char ** _EndPtr,   int _Radix);
__int64 __cdecl _strtoi64_l(  const char * _String,     char ** _EndPtr,   int _Radix,   _locale_t _Locale);
unsigned __int64 __cdecl _strtoui64(  const char * _String,     char ** _EndPtr,   int _Radix);
unsigned __int64 __cdecl _strtoui64_l(  const char * _String,     char ** _EndPtr,   int  _Radix,   _locale_t _Locale);
ldiv_t __cdecl ldiv(  long _Numerator,   long _Denominator);
lldiv_t __cdecl lldiv(  long long _Numerator,   long long _Denominator);
errno_t __cdecl _ltoa_s(  long _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
char * __cdecl _ltoa( long _Value,   char *_Dest,  int _Radix);
int    __cdecl mblen(    const char * _Ch,   size_t _MaxCount);
int    __cdecl _mblen_l(    const char * _Ch,   size_t _MaxCount,   _locale_t _Locale);
size_t __cdecl _mbstrlen(  const char * _Str);
size_t __cdecl _mbstrlen_l(  const char *_Str,   _locale_t _Locale);
size_t __cdecl _mbstrnlen(  const char *_Str,   size_t _MaxCount);
size_t __cdecl _mbstrnlen_l(  const char *_Str,   size_t _MaxCount,   _locale_t _Locale);
int    __cdecl mbtowc(    wchar_t * _DstCh,     const char * _SrcCh,   size_t _SrcSizeInBytes);
int    __cdecl _mbtowc_l(    wchar_t * _DstCh,     const char * _SrcCh,   size_t _SrcSizeInBytes,   _locale_t _Locale);
errno_t __cdecl mbstowcs_s(  size_t * _PtNumOfCharConverted,   wchar_t * _DstBuf,   size_t _SizeInWords,   const char * _SrcBuf,   size_t _MaxCount );
size_t __cdecl mbstowcs( wchar_t *_Dest,  const char * _Source,  size_t _MaxCount);
errno_t __cdecl _mbstowcs_s_l(  size_t * _PtNumOfCharConverted,   wchar_t * _DstBuf,   size_t _SizeInWords,   const char * _SrcBuf,   size_t _MaxCount,   _locale_t _Locale);
size_t __cdecl _mbstowcs_l(  wchar_t *_Dest,   const char * _Source,   size_t _MaxCount,   _locale_t _Locale);
int    __cdecl rand(void);
#line 525 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
int    __cdecl _set_error_mode(  int _Mode);
void   __cdecl srand(  unsigned int _Seed);
double __cdecl strtod(  const char * _Str,     char ** _EndPtr);
double __cdecl _strtod_l(  const char * _Str,     char ** _EndPtr,   _locale_t _Locale);
long   __cdecl strtol(  const char * _Str,     char ** _EndPtr,   int _Radix );
long   __cdecl _strtol_l(  const char *_Str,     char **_EndPtr,   int _Radix,   _locale_t _Locale);
unsigned long __cdecl strtoul(  const char * _Str,     char ** _EndPtr,   int _Radix);
unsigned long __cdecl _strtoul_l(const char * _Str,     char **_EndPtr,   int _Radix,   _locale_t _Locale);
int __cdecl system(  const char * _Command);
#line 541 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 542 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _ultoa_s(  unsigned long _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
char * __cdecl _ultoa( unsigned long _Value,   char *_Dest,  int _Radix);
int    __cdecl wctomb(  char * _MbCh,   wchar_t _WCh);
int    __cdecl _wctomb_l(    char * _MbCh,   wchar_t _WCh,   _locale_t _Locale);
errno_t __cdecl wctomb_s(  int * _SizeConverted,   char * _MbCh,   rsize_t _SizeInBytes,   wchar_t _WCh);
#line 551 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _wctomb_s_l(  int * _SizeConverted,   char * _MbCh,   size_t _SizeInBytes,   wchar_t _WCh,   _locale_t _Locale);
errno_t __cdecl wcstombs_s(  size_t * _PtNumOfCharConverted,   char * _Dst,   size_t _DstSizeInBytes,   const wchar_t * _Src,   size_t _MaxCountInBytes);
size_t __cdecl wcstombs( char *_Dest,  const wchar_t * _Source,  size_t _MaxCount);
errno_t __cdecl _wcstombs_s_l(  size_t * _PtNumOfCharConverted,   char * _Dst,   size_t _DstSizeInBytes,   const wchar_t * _Src,   size_t _MaxCountInBytes,   _locale_t _Locale);
size_t __cdecl _wcstombs_l(  char *_Dest,   const wchar_t * _Source,   size_t _MaxCount,   _locale_t _Locale);
#line 584 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 619 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
__declspec(noalias) __declspec(restrict)    void * __cdecl calloc(  size_t _Count,   size_t _Size);
__declspec(noalias)                                                                             void   __cdecl free(    void * _Memory);
__declspec(noalias) __declspec(restrict)                              void * __cdecl malloc(  size_t _Size);
__declspec(noalias) __declspec(restrict)                           void * __cdecl realloc(    void * _Memory,   size_t _NewSize);
__declspec(noalias) __declspec(restrict)                       void * __cdecl _recalloc(    void * _Memory,   size_t _Count,   size_t _Size);
__declspec(noalias)                                                                             void   __cdecl _aligned_free(    void * _Memory);
__declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_malloc(  size_t _Size,   size_t _Alignment);
__declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_offset_malloc(  size_t _Size,   size_t _Alignment,   size_t _Offset);
__declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_realloc(    void * _Memory,   size_t _NewSize,   size_t _Alignment);
__declspec(noalias) __declspec(restrict)                       void * __cdecl _aligned_recalloc(    void * _Memory,   size_t _Count,   size_t _Size,   size_t _Alignment);
__declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_offset_realloc(    void * _Memory,   size_t _NewSize,   size_t _Alignment,   size_t _Offset);
__declspec(noalias) __declspec(restrict)                       void * __cdecl _aligned_offset_recalloc(    void * _Memory,   size_t _Count,   size_t _Size,   size_t _Alignment,   size_t _Offset);
size_t __cdecl _aligned_msize(  void * _Memory,   size_t _Alignment,   size_t _Offset);
#line 657 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 659 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _itow_s (  int _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
wchar_t * __cdecl _itow( int _Value,   wchar_t *_Dest,  int _Radix);
errno_t __cdecl _ltow_s (  long _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
wchar_t * __cdecl _ltow( long _Value,   wchar_t *_Dest,  int _Radix);
errno_t __cdecl _ultow_s (  unsigned long _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
wchar_t * __cdecl _ultow( unsigned long _Value,   wchar_t *_Dest,  int _Radix);
double __cdecl wcstod(  const wchar_t * _Str,     wchar_t ** _EndPtr);
double __cdecl _wcstod_l(  const wchar_t *_Str,     wchar_t ** _EndPtr,   _locale_t _Locale);
long   __cdecl wcstol(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix);
long   __cdecl _wcstol_l(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix,   _locale_t _Locale);
unsigned long __cdecl wcstoul(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix);
unsigned long __cdecl _wcstoul_l(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix,   _locale_t _Locale);
wchar_t * __cdecl _wgetenv(  const wchar_t * _VarName);
errno_t __cdecl _wgetenv_s(  size_t * _ReturnSize,   wchar_t * _DstBuf,   size_t _DstSizeInWords,   const wchar_t * _VarName);
#line 690 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _wdupenv_s(    wchar_t **_Buffer,   size_t *_BufferSizeInWords,   const wchar_t *_VarName);
#line 696 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
int __cdecl _wsystem(  const wchar_t * _Command);
#line 701 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 703 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
double __cdecl _wtof(  const wchar_t *_Str);
double __cdecl _wtof_l(  const wchar_t *_Str,   _locale_t _Locale);
int __cdecl _wtoi(  const wchar_t *_Str);
int __cdecl _wtoi_l(  const wchar_t *_Str,   _locale_t _Locale);
long __cdecl _wtol(  const wchar_t *_Str);
long __cdecl _wtol_l(  const wchar_t *_Str,   _locale_t _Locale);
errno_t __cdecl _i64tow_s(  __int64 _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
wchar_t * __cdecl _i64tow(  __int64 _Val,     wchar_t * _DstBuf,   int _Radix);
errno_t __cdecl _ui64tow_s(  unsigned __int64 _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
wchar_t * __cdecl _ui64tow(  unsigned __int64 _Val,     wchar_t * _DstBuf,   int _Radix);
__int64   __cdecl _wtoi64(  const wchar_t *_Str);
__int64   __cdecl _wtoi64_l(  const wchar_t *_Str,   _locale_t _Locale);
__int64   __cdecl _wcstoi64(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix);
__int64   __cdecl _wcstoi64_l(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix,   _locale_t _Locale);
unsigned __int64  __cdecl _wcstoui64(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix);
unsigned __int64  __cdecl _wcstoui64_l(  const wchar_t *_Str,     wchar_t ** _EndPtr,   int _Radix,   _locale_t _Locale);
#line 724 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 739 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
char * __cdecl _fullpath(  char * _FullPath,   const char * _Path,   size_t _SizeInBytes);
#line 747 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _ecvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDights,   int * _PtDec,   int * _PtSign);
char * __cdecl _ecvt(  double _Val,   int _NumOfDigits,   int * _PtDec,   int * _PtSign);
errno_t __cdecl _fcvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
char * __cdecl _fcvt(  double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
errno_t __cdecl _gcvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDigits);
char * __cdecl _gcvt(  double _Val,   int _NumOfDigits,     char * _DstBuf);
int __cdecl _atodbl(  _CRT_DOUBLE * _Result,   char * _Str);
int __cdecl _atoldbl(  _LDOUBLE * _Result,   char * _Str);
int __cdecl _atoflt(  _CRT_FLOAT * _Result,   char * _Str);
int __cdecl _atodbl_l(  _CRT_DOUBLE * _Result,   char * _Str,   _locale_t _Locale);
int __cdecl _atoldbl_l(  _LDOUBLE * _Result,   char * _Str,   _locale_t _Locale);
int __cdecl _atoflt_l(  _CRT_FLOAT * _Result,   char * _Str,   _locale_t _Locale);
unsigned long __cdecl _lrotl(  unsigned long _Val,   int _Shift);
unsigned long __cdecl _lrotr(  unsigned long _Val,   int _Shift);
errno_t   __cdecl _makepath_s(  char * _PathResult,   size_t _SizeInWords,   const char * _Drive,   const char * _Dir,   const char * _Filename,
                                const char * _Ext);
void __cdecl _makepath(  char *_Path,  const char * _Drive,  const char * _Dir,  const char * _Filename,  const char * _Ext);
#line 783 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 796 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
_onexit_t __cdecl _onexit(  _onexit_t _Func);
#line 798 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma warning (push)
#pragma warning (disable:6540)
int    __cdecl _putenv(  const char * _EnvString);
errno_t __cdecl _putenv_s(  const char * _Name,   const char * _Value);
#line 811 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
unsigned int __cdecl _rotl(  unsigned int _Val,   int _Shift);
unsigned __int64 __cdecl _rotl64(  unsigned __int64 _Val,   int _Shift);
unsigned int __cdecl _rotr(  unsigned int _Val,   int _Shift);
unsigned __int64 __cdecl _rotr64(  unsigned __int64 _Val,   int _Shift);
#pragma warning (pop)
errno_t __cdecl _searchenv_s(  const char * _Filename,   const char * _EnvVar,   char * _ResultPath,   size_t _SizeInBytes);
void __cdecl _searchenv( const char * _Filename,  const char * _EnvVar,   char *_ResultPath);
#line 823 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
void   __cdecl _splitpath(  const char * _FullPath,     char * _Drive,     char * _Dir,     char * _Filename,     char * _Ext);
errno_t  __cdecl _splitpath_s(  const char * _FullPath,
                                char * _Drive,   size_t _DriveSize,
                                char * _Dir,   size_t _DirSize,
                                char * _Filename,   size_t _FilenameSize,
                                char * _Ext,   size_t _ExtSize);
void   __cdecl _swab(    char * _Buf1,     char * _Buf2, int _SizeInBytes);
#line 842 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
wchar_t * __cdecl _wfullpath(  wchar_t * _FullPath,   const wchar_t * _Path,   size_t _SizeInWords);
#line 848 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
errno_t __cdecl _wmakepath_s(  wchar_t * _PathResult,   size_t _SIZE,   const wchar_t * _Drive,   const wchar_t * _Dir,   const wchar_t * _Filename,
                               const wchar_t * _Ext);
void __cdecl _wmakepath(  wchar_t *_ResultPath,  const wchar_t * _Drive,  const wchar_t * _Dir,  const wchar_t * _Filename,  const wchar_t * _Ext);
int    __cdecl _wputenv(  const wchar_t * _EnvString);
errno_t __cdecl _wputenv_s(  const wchar_t * _Name,   const wchar_t * _Value);
errno_t __cdecl _wsearchenv_s(  const wchar_t * _Filename,   const wchar_t * _EnvVar,   wchar_t * _ResultPath,   size_t _SizeInWords);
void __cdecl _wsearchenv( const wchar_t * _Filename,  const wchar_t * _EnvVar,   wchar_t *_ResultPath);
#line 865 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
void   __cdecl _wsplitpath(  const wchar_t * _FullPath,     wchar_t * _Drive,     wchar_t * _Dir,     wchar_t * _Filename,     wchar_t * _Ext);
errno_t __cdecl _wsplitpath_s(  const wchar_t * _FullPath,
                                wchar_t * _Drive,   size_t _DriveSize,
                                wchar_t * _Dir,   size_t _DirSize,
                                wchar_t * _Filename,   size_t _FilenameSize,
                                wchar_t * _Ext,   size_t _ExtSize);
#line 876 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "SetErrorMode" " instead. See online help for details."))  void __cdecl _seterrormode(  int _Mode);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "Beep" " instead. See online help for details."))  void __cdecl _beep(  unsigned _Frequency,   unsigned _Duration);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "Sleep" " instead. See online help for details."))  void __cdecl _sleep(  unsigned long _Duration);
#line 883 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 885 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 896 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 903 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ecvt" ". See online help for details."))   char * __cdecl ecvt(  double _Val,   int _NumOfDigits,   int * _PtDec,   int * _PtSign);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcvt" ". See online help for details."))   char * __cdecl fcvt(  double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_gcvt" ". See online help for details.")) 		 char * __cdecl gcvt(  double _Val,   int _NumOfDigits,     char * _DstBuf);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_itoa" ". See online help for details.")) 		 char * __cdecl itoa(  int _Val,     char * _DstBuf,   int _Radix);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ltoa" ". See online help for details.")) 		 char * __cdecl ltoa(  long _Val,     char * _DstBuf,   int _Radix);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putenv" ". See online help for details."))  int    __cdecl putenv(  const char * _EnvString);
#line 915 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_swab" ". See online help for details."))										 void   __cdecl swab(  char * _Buf1,  char * _Buf2,   int _SizeInBytes);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ultoa" ". See online help for details.")) 	 char * __cdecl ultoa(  unsigned long _Val,     char * _Dstbuf,   int _Radix);
#pragma warning(pop)
_onexit_t __cdecl onexit(  _onexit_t _Func);
#line 922 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 924 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma pack(pop)
#line 933 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 17 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
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
#line 18 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/des.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 114 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 116 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 118 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 137 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 143 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 149 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 155 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 176 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 14 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/des.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 20 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/des.h"
typedef unsigned int DES_LONG;
typedef unsigned char DES_cblock[8];
typedef  unsigned char const_DES_cblock[8];
typedef struct DES_ks
{
    union
    {
        DES_cblock cblock;
        DES_LONG deslong[2];
    } ks[16];
} DES_key_schedule;
int *_shadow_DES_check_key(void);
const char *DES_options(void);
void DES_ecb3_encrypt(const_DES_cblock *input, DES_cblock *output,
                      DES_key_schedule *ks1, DES_key_schedule *ks2,
                      DES_key_schedule *ks3, int enc);
DES_LONG DES_cbc_cksum(const unsigned char *input, DES_cblock *output,
                       long length, DES_key_schedule *schedule,
                       const_DES_cblock *ivec);
void DES_cbc_encrypt(const unsigned char *input, unsigned char *output,
                     long length, DES_key_schedule *schedule,
                     DES_cblock *ivec, int enc);
void DES_ncbc_encrypt(const unsigned char *input, unsigned char *output,
                      long length, DES_key_schedule *schedule,
                      DES_cblock *ivec, int enc);
void DES_xcbc_encrypt(const unsigned char *input, unsigned char *output,
                      long length, DES_key_schedule *schedule,
                      DES_cblock *ivec, const_DES_cblock *inw,
                      const_DES_cblock *outw, int enc);
void DES_cfb_encrypt(const unsigned char *in, unsigned char *out, int numbits,
                     long length, DES_key_schedule *schedule,
                     DES_cblock *ivec, int enc);
void DES_ecb_encrypt(const_DES_cblock *input, DES_cblock *output,
                     DES_key_schedule *ks, int enc);
void DES_encrypt1(DES_LONG *data, DES_key_schedule *ks, int enc);
void DES_encrypt2(DES_LONG *data, DES_key_schedule *ks, int enc);
void DES_encrypt3(DES_LONG *data, DES_key_schedule *ks1,
                  DES_key_schedule *ks2, DES_key_schedule *ks3);
void DES_decrypt3(DES_LONG *data, DES_key_schedule *ks1,
                  DES_key_schedule *ks2, DES_key_schedule *ks3);
void DES_ede3_cbc_encrypt(const unsigned char *input, unsigned char *output,
                          long length,
                          DES_key_schedule *ks1, DES_key_schedule *ks2,
                          DES_key_schedule *ks3, DES_cblock *ivec, int enc);
void DES_ede3_cfb64_encrypt(const unsigned char *in, unsigned char *out,
                            long length, DES_key_schedule *ks1,
                            DES_key_schedule *ks2, DES_key_schedule *ks3,
                            DES_cblock *ivec, int *num, int enc);
void DES_ede3_cfb_encrypt(const unsigned char *in, unsigned char *out,
                          int numbits, long length, DES_key_schedule *ks1,
                          DES_key_schedule *ks2, DES_key_schedule *ks3,
                          DES_cblock *ivec, int enc);
void DES_ede3_ofb64_encrypt(const unsigned char *in, unsigned char *out,
                            long length, DES_key_schedule *ks1,
                            DES_key_schedule *ks2, DES_key_schedule *ks3,
                            DES_cblock *ivec, int *num);
char *DES_fcrypt(const char *buf, const char *salt, char *ret);
char *DES_crypt(const char *buf, const char *salt);
void DES_ofb_encrypt(const unsigned char *in, unsigned char *out, int numbits,
                     long length, DES_key_schedule *schedule,
                     DES_cblock *ivec);
void DES_pcbc_encrypt(const unsigned char *input, unsigned char *output,
                      long length, DES_key_schedule *schedule,
                      DES_cblock *ivec, int enc);
DES_LONG DES_quad_cksum(const unsigned char *input, DES_cblock output[],
                        long length, int out_count, DES_cblock *seed);
int DES_random_key(DES_cblock *ret);
void DES_set_odd_parity(DES_cblock *key);
int DES_check_key_parity(const_DES_cblock *key);
int DES_is_weak_key(const_DES_cblock *key);
int DES_set_key(const_DES_cblock *key, DES_key_schedule *schedule);
int DES_key_sched(const_DES_cblock *key, DES_key_schedule *schedule);
int DES_set_key_checked(const_DES_cblock *key, DES_key_schedule *schedule);
void DES_set_key_unchecked(const_DES_cblock *key, DES_key_schedule *schedule);
void DES_string_to_key(const char *str, DES_cblock *key);
void DES_string_to_2keys(const char *str, DES_cblock *key1, DES_cblock *key2);
void DES_cfb64_encrypt(const unsigned char *in, unsigned char *out,
                       long length, DES_key_schedule *schedule,
                       DES_cblock *ivec, int *num, int enc);
void DES_ofb64_encrypt(const unsigned char *in, unsigned char *out,
                       long length, DES_key_schedule *schedule,
                       DES_cblock *ivec, int *num);
#line 173 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/des.h"
#line 175 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/des.h"
#line 20 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 105 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 130 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
extern const DES_LONG DES_SPtrans[8][64];
void fcrypt_body(DES_LONG *out, DES_key_schedule *ks,
                 DES_LONG Eswap0, DES_LONG Eswap1);
#line 218 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 11 "crypto\\des\\ecb3_enc.c"
void DES_ecb3_encrypt(const_DES_cblock *input, DES_cblock *output,
                      DES_key_schedule *ks1, DES_key_schedule *ks2,
                      DES_key_schedule *ks3, int enc)
{
    register DES_LONG l0, l1;
    DES_LONG ll[2];
    const unsigned char *in = &(*input)[0];
    unsigned char *out = &(*output)[0];
    (l0 =((DES_LONG)(*((in)++))), l0|=((DES_LONG)(*((in)++)))<< 8L, l0|=((DES_LONG)(*((in)++)))<<16L, l0|=((DES_LONG)(*((in)++)))<<24L);
    (l1 =((DES_LONG)(*((in)++))), l1|=((DES_LONG)(*((in)++)))<< 8L, l1|=((DES_LONG)(*((in)++)))<<16L, l1|=((DES_LONG)(*((in)++)))<<24L);
    ll[0] = l0;
    ll[1] = l1;
    if (enc)
        DES_encrypt3(ll, ks1, ks2, ks3);
    else
        DES_decrypt3(ll, ks1, ks2, ks3);
    l0 = ll[0];
    l1 = ll[1];
    (*((out)++)=(unsigned char)(((l0) )&0xff), *((out)++)=(unsigned char)(((l0)>> 8L)&0xff), *((out)++)=(unsigned char)(((l0)>>16L)&0xff), *((out)++)=(unsigned char)(((l0)>>24L)&0xff));
    (*((out)++)=(unsigned char)(((l1) )&0xff), *((out)++)=(unsigned char)(((l1)>> 8L)&0xff), *((out)++)=(unsigned char)(((l1)>>16L)&0xff), *((out)++)=(unsigned char)(((l1)>>24L)&0xff));
}
