#line 1 "crypto\\bf\\bf_ecb.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/blowfish.h"
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
#line 14 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/blowfish.h"
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
typedef struct localerefcount {
char *locale;
wchar_t *wlocale;
int *refcount;
int *wrefcount;
} locrefcount;
typedef struct threadlocaleinfostruct {
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
#line 17 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/blowfish.h"
typedef struct bf_key_st {
unsigned int P[16 + 2];
unsigned int S[4 * 256];
} BF_KEY;
void BF_set_key(BF_KEY *key, int len, const unsigned char *data);
void BF_encrypt(unsigned int *data, const BF_KEY *key);
void BF_decrypt(unsigned int *data, const BF_KEY *key);
void BF_ecb_encrypt(const unsigned char *in, unsigned char *out,
const BF_KEY *key, int enc);
void BF_cbc_encrypt(const unsigned char *in, unsigned char *out, long length,
const BF_KEY *schedule, unsigned char *ivec, int enc);
void BF_cfb64_encrypt(const unsigned char *in, unsigned char *out,
long length, const BF_KEY *schedule,
unsigned char *ivec, int *num, int enc);
void BF_ofb64_encrypt(const unsigned char *in, unsigned char *out,
long length, const BF_KEY *schedule,
unsigned char *ivec, int *num);
const char *BF_options(void);
#line 60 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/blowfish.h"
#line 62 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/blowfish.h"
#line 11 "crypto\\bf\\bf_ecb.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\bf\\bf_locl.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 114 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 116 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 118 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 137 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 143 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 149 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 155 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 176 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslconf.h"
#line 13 "d:\\07.opensrc\\gmssl\\crypto\\bf\\bf_locl.h"
#line 71 "d:\\07.opensrc\\gmssl\\crypto\\bf\\bf_locl.h"
#line 12 "crypto\\bf\\bf_ecb.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 48 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 106 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 13 "crypto\\bf\\bf_ecb.c"
const char *BF_options(void)
{
return ("blowfish(ptr)");
}
void BF_ecb_encrypt(const unsigned char *in, unsigned char *out,
const BF_KEY *key, int encrypt)
{
unsigned int l, d[2];
(l =((unsigned long)(*((in)++)))<<24L, l|=((unsigned long)(*((in)++)))<<16L, l|=((unsigned long)(*((in)++)))<< 8L, l|=((unsigned long)(*((in)++))));
d[0] = l;
(l =((unsigned long)(*((in)++)))<<24L, l|=((unsigned long)(*((in)++)))<<16L, l|=((unsigned long)(*((in)++)))<< 8L, l|=((unsigned long)(*((in)++))));
d[1] = l;
if (encrypt)
BF_encrypt(d, key);
else
BF_decrypt(d, key);
l = d[0];
(*((out)++)=(unsigned char)(((l)>>24L)&0xff), *((out)++)=(unsigned char)(((l)>>16L)&0xff), *((out)++)=(unsigned char)(((l)>> 8L)&0xff), *((out)++)=(unsigned char)(((l) )&0xff));
l = d[1];
(*((out)++)=(unsigned char)(((l)>>24L)&0xff), *((out)++)=(unsigned char)(((l)>>16L)&0xff), *((out)++)=(unsigned char)(((l)>> 8L)&0xff), *((out)++)=(unsigned char)(((l) )&0xff));
l = d[0] = d[1] = 0;
}
