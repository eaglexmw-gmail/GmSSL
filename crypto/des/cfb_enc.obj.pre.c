#line 1 "crypto\\des\\cfb_enc.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
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
#line 14 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
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
#line 16 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 31 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 36 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 38 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 44 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 55 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 63 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 69 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 76 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 79 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 82 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 86 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 94 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 98 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 134 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 156 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 160 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 164 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 182 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winapifamily.h"
#pragma once
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winapifamily.h"
#line 45 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winapifamily.h"
#line 89 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winapifamily.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#pragma region Desktop Family
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#pragma warning(push)
#line 22 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#pragma warning(disable:4001) 
#line 24 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#pragma once
#line 186 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 198 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 206 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 207 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 215 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 216 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 223 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 225 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 237 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 240 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 241 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 250 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 254 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 258 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 262 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 266 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 270 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 272 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#pragma warning(pop)
#line 279 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 280 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 282 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\sdkddkver.h"
#line 23 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma once
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma region Application Family
#line 84 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 105 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 109 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 117 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 121 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 125 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 131 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 136 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 137 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma warning(disable:4116)       
#line 144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 145 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 146 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma warning(disable:4514)
#pragma warning(disable:4103)
#line 153 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma warning(push)
#line 156 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#line 160 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\excpt.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\excpt.h"
#pragma pack(push,8)
typedef enum _EXCEPTION_DISPOSITION {
ExceptionContinueExecution,
ExceptionContinueSearch,
ExceptionNestedException,
ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION;
struct _EXCEPTION_RECORD;
struct _CONTEXT;
EXCEPTION_DISPOSITION __cdecl _except_handler (
struct _EXCEPTION_RECORD *_ExceptionRecord,
void * _EstablisherFrame,
struct _CONTEXT *_ContextRecord,
void * _DispatcherContext
);
#line 83 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\excpt.h"
unsigned long __cdecl _exception_code(void);
void *        __cdecl _exception_info(void);
int           __cdecl _abnormal_termination(void);
#pragma pack(pop)
#line 118 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\excpt.h"
#line 161 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdarg.h"
#pragma once
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdarg.h"
#line 32 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdarg.h"
#line 162 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 163 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#pragma once
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 25 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 27 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 39 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 41 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 47 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 80 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 93 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 198 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 199 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 239 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 269 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 357 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 378 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 387 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 439 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 450 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_undef.h"
#line 189 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#line 1065 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#line 1130 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#line 1185 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#line 1186 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#line 1187 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings_strict.h"
#line 490 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 491 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 509 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\sdv_driverspecs.h"
#line 23 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\sdv_driverspecs.h"
#line 126 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#pragma once
#line 131 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 233 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 248 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 663 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 665 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 850 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 864 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\driverspecs.h"
#line 511 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 524 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 526 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\specstrings.h"
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#pragma region Application Family
#line 25 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 26 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
typedef unsigned long ULONG;
typedef ULONG *PULONG;
typedef unsigned short USHORT;
typedef USHORT *PUSHORT;
typedef unsigned char UCHAR;
typedef UCHAR *PUCHAR;
typedef   char *PSZ;
#line 59 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 68 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 69 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 73 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 77 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 81 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 85 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 89 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 102 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 109 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 114 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 141 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 146 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 147 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 155 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
typedef unsigned long       DWORD;
typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef float               FLOAT;
typedef FLOAT               *PFLOAT;
typedef BOOL            *PBOOL;
typedef BOOL             *LPBOOL;
typedef BYTE            *PBYTE;
typedef BYTE             *LPBYTE;
typedef int             *PINT;
typedef int              *LPINT;
typedef WORD            *PWORD;
typedef WORD             *LPWORD;
typedef long             *LPLONG;
typedef DWORD           *PDWORD;
typedef DWORD            *LPDWORD;
typedef void             *LPVOID;
typedef const void       *LPCVOID;
typedef int                 INT;
typedef unsigned int        UINT;
typedef unsigned int        *PUINT;
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(push)
#line 24 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(disable:4201) 
#pragma warning(disable:4214) 
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 20 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 28 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 40 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
const unsigned short * __cdecl __pctype_func(void);
extern const unsigned short *_pctype;
#line 47 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 48 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
extern const unsigned short _wctype[];
#line 56 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
const wctype_t * __cdecl __pwctype_func(void);
extern const wctype_t *_pwctype;
#line 63 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 64 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 65 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
int __cdecl _isctype(  int _C,   int _Type);
int __cdecl _isctype_l(  int _C,   int _Type,   _locale_t _Locale);
int __cdecl isalpha(  int _C);
int __cdecl _isalpha_l(  int _C,   _locale_t _Locale);
int __cdecl isupper(  int _C);
int __cdecl _isupper_l(  int _C,   _locale_t _Locale);
int __cdecl islower(  int _C);
int __cdecl _islower_l(  int _C,   _locale_t _Locale);
int __cdecl isdigit(  int _C);
int __cdecl _isdigit_l(  int _C,   _locale_t _Locale);
int __cdecl isxdigit(  int _C);
int __cdecl _isxdigit_l(  int _C,   _locale_t _Locale);
int __cdecl isspace(  int _C);
int __cdecl _isspace_l(  int _C,   _locale_t _Locale);
int __cdecl ispunct(  int _C);
int __cdecl _ispunct_l(  int _C,   _locale_t _Locale);
int __cdecl isalnum(  int _C);
int __cdecl _isalnum_l(  int _C,   _locale_t _Locale);
int __cdecl isprint(  int _C);
int __cdecl _isprint_l(  int _C,   _locale_t _Locale);
int __cdecl isgraph(  int _C);
int __cdecl _isgraph_l(  int _C,   _locale_t _Locale);
int __cdecl iscntrl(  int _C);
int __cdecl _iscntrl_l(  int _C,   _locale_t _Locale);
int __cdecl toupper(  int _C);
int __cdecl tolower(  int _C);
int __cdecl _tolower(  int _C);
int __cdecl _tolower_l(  int _C,   _locale_t _Locale);
int __cdecl _toupper(  int _C);
int __cdecl _toupper_l(  int _C,   _locale_t _Locale);
int __cdecl __isascii(  int _C);
int __cdecl __toascii(  int _C);
int __cdecl __iscsymf(  int _C);
int __cdecl __iscsym(  int _C);
#line 128 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
int __cdecl iswalpha(  wint_t _C);
int __cdecl _iswalpha_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswupper(  wint_t _C);
int __cdecl _iswupper_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswlower(  wint_t _C);
int __cdecl _iswlower_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswdigit(  wint_t _C);
int __cdecl _iswdigit_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswxdigit(  wint_t _C);
int __cdecl _iswxdigit_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswspace(  wint_t _C);
int __cdecl _iswspace_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswpunct(  wint_t _C);
int __cdecl _iswpunct_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswalnum(  wint_t _C);
int __cdecl _iswalnum_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswprint(  wint_t _C);
int __cdecl _iswprint_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswgraph(  wint_t _C);
int __cdecl _iswgraph_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswcntrl(  wint_t _C);
int __cdecl _iswcntrl_l(  wint_t _C,   _locale_t _Locale);
int __cdecl iswascii(  wint_t _C);
wint_t __cdecl towupper(  wint_t _C);
wint_t __cdecl _towupper_l(  wint_t _C,   _locale_t _Locale);
wint_t __cdecl towlower(  wint_t _C);
wint_t __cdecl _towlower_l(  wint_t _C,   _locale_t _Locale); 
int __cdecl iswctype(  wint_t _C,   wctype_t _Type);
int __cdecl _iswctype_l(  wint_t _C,   wctype_t _Type,   _locale_t _Locale);
int __cdecl __iswcsymf(  wint_t _C);
int __cdecl _iswcsymf_l(  wint_t _C,   _locale_t _Locale);
int __cdecl __iswcsym(  wint_t _C);
int __cdecl _iswcsym_l(  wint_t _C,   _locale_t _Locale);
int __cdecl isleadbyte(  int _C);
int __cdecl _isleadbyte_l(  int _C,   _locale_t _Locale);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "iswctype" " instead. See online help for details."))  int __cdecl is_wctype(  wint_t _C,   wctype_t _Type);
#line 176 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 179 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 193 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 195 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
extern int __mb_cur_max;
#line 201 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
int __cdecl ___mb_cur_max_func(void);
int __cdecl ___mb_cur_max_l_func(_locale_t);
#line 204 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 259 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 266 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 344 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 346 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 360 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 377 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 379 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 385 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\ctype.h"
#line 32 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 51 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 61 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 62 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 71 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 77 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 78 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\kernelspecs.h"
#pragma once
#line 41 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\kernelspecs.h"
#line 57 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\kernelspecs.h"
#line 60 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\kernelspecs.h"
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\kernelspecs.h"
#line 66 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\kernelspecs.h"
#line 253 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\kernelspecs.h"
#line 83 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 87 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 91 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 93 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 105 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 109 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 117 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 120 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 134 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 148 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 154 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 167 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 40 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
typedef unsigned long POINTER_64_INT;
#line 42 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 44 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 48 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 50 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 58 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#pragma once
#line 65 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
typedef signed char         INT8, *PINT8;
typedef signed short        INT16, *PINT16;
typedef signed int          INT32, *PINT32;
typedef signed __int64      INT64, *PINT64;
typedef unsigned char       UINT8, *PUINT8;
typedef unsigned short      UINT16, *PUINT16;
typedef unsigned int        UINT32, *PUINT32;
typedef unsigned __int64    UINT64, *PUINT64;
typedef signed int LONG32, *PLONG32;
typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
#line 99 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 117 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 129 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
typedef __w64 int INT_PTR, *PINT_PTR;
typedef __w64 unsigned int UINT_PTR, *PUINT_PTR;
typedef __w64 long LONG_PTR, *PLONG_PTR;
typedef __w64 unsigned long ULONG_PTR, *PULONG_PTR;
#line 138 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
typedef unsigned short UHALF_PTR, *PUHALF_PTR;
typedef short HALF_PTR, *PHALF_PTR;
typedef __w64 long SHANDLE_PTR;
typedef __w64 unsigned long HANDLE_PTR;
__inline
void * __ptr64
PtrToPtr64(
const void *p
)
{
return((void * __ptr64) (unsigned __int64) (ULONG_PTR)p );
}
__inline
void *
Ptr64ToPtr(
const void * __ptr64 p
)
{
return((void *) (ULONG_PTR) (unsigned __int64) p);
}
__inline
void * __ptr64
HandleToHandle64(
const void *h
)
{
return((void * __ptr64)(__int64)(LONG_PTR)h );
}
__inline
void *
Handle64ToHandle(
const void * __ptr64 h
)
{
return((void *) (ULONG_PTR) (unsigned __int64) h );
}
#line 385 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 392 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
#line 459 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef __int64 LONG64, *PLONG64;
typedef unsigned __int64 ULONG64, *PULONG64;
typedef unsigned __int64 DWORD64, *PDWORD64;
typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;
#line 496 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\basetsd.h"
#line 169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 176 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 183 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 184 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 191 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 199 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 200 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 207 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 208 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 212 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 217 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 219 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 220 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 225 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 227 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 228 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 235 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 243 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 244 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 249 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 251 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 252 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 259 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 260 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 267 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 268 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 278 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 293 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef void *PVOID;
typedef void * __ptr64 PVOID64;
#line 311 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 317 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 334 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef int INT;
#line 349 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 350 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef wchar_t WCHAR;    
#line 361 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef WCHAR *PWCHAR, *LPWCH, *PWCH;
typedef const WCHAR *LPCWCH, *PCWCH;
typedef   WCHAR *NWPSTR, *LPWSTR, *PWSTR;
typedef   PWSTR *PZPWSTR;
typedef   const PWSTR *PCZPWSTR;
typedef   WCHAR  *LPUWSTR, *PUWSTR;
typedef   const WCHAR *LPCWSTR, *PCWSTR;
typedef   PCWSTR *PZPCWSTR;
typedef   const WCHAR  *LPCUWSTR, *PCUWSTR;
typedef   WCHAR *PZZWSTR;
typedef   const WCHAR *PCZZWSTR;
typedef   WCHAR  *PUZZWSTR;
typedef   const WCHAR  *PCUZZWSTR;
typedef  WCHAR *PNZWCH;
typedef  const WCHAR *PCNZWCH;
typedef  WCHAR  *PUNZWCH;
typedef  const WCHAR  *PCUNZWCH;
#line 425 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef CHAR *PCHAR, *LPCH, *PCH;
typedef const CHAR *LPCCH, *PCCH;
typedef   CHAR *NPSTR, *LPSTR, *PSTR;
typedef   PSTR *PZPSTR;
typedef   const PSTR *PCZPSTR;
typedef   const CHAR *LPCSTR, *PCSTR;
typedef   PCSTR *PZPCSTR;
typedef   CHAR *PZZSTR;
typedef   const CHAR *PCZZSTR;
typedef  CHAR *PNZCH;
typedef  const CHAR *PCNZCH;
typedef WCHAR TCHAR, *PTCHAR;
typedef WCHAR TBYTE , *PTBYTE ;
#line 455 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef LPWCH LPTCH, PTCH;
typedef LPCWCH LPCTCH, PCTCH;
typedef LPWSTR PTSTR, LPTSTR;
typedef LPCWSTR PCTSTR, LPCTSTR;
typedef LPUWSTR PUTSTR, LPUTSTR;
typedef LPCUWSTR PCUTSTR, LPCUTSTR;
typedef LPWSTR LP;
typedef PZZWSTR PZZTSTR;
typedef PCZZWSTR PCZZTSTR;
typedef PUZZWSTR PUZZTSTR;
typedef PCUZZWSTR PCUZZTSTR;
typedef PZPWSTR PZPTSTR;
typedef PNZWCH PNZTCH;
typedef PCNZWCH PCNZTCH;
typedef PUNZWCH PUNZTCH;
typedef PCUNZWCH PCUNZTCH;
#line 494 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef SHORT *PSHORT;  
typedef LONG *PLONG;    
typedef struct _PROCESSOR_NUMBER {
WORD   Group;
BYTE  Number;
BYTE  Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;
typedef struct _GROUP_AFFINITY {
KAFFINITY Mask;
WORD   Group;
WORD   Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY;
typedef void *HANDLE;
#line 533 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 535 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 539 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef HANDLE *PHANDLE;
typedef BYTE   FCHAR;
typedef WORD   FSHORT;
typedef DWORD  FLONG;
typedef   long HRESULT;
#line 558 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 559 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 565 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 575 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 589 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef char CCHAR;          
typedef DWORD LCID;         
typedef PDWORD PLCID;       
typedef WORD   LANGID;      
typedef enum {
UNSPECIFIED_COMPARTMENT_ID = 0,
DEFAULT_COMPARTMENT_ID
} COMPARTMENT_ID, *PCOMPARTMENT_ID;
#line 635 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 659 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _FLOAT128 {
__int64 LowPart;
__int64 HighPart;
} FLOAT128;
typedef FLOAT128 *PFLOAT128;
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;
#line 696 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
typedef LONGLONG USN;
#line 707 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef union _LARGE_INTEGER {
struct {
DWORD LowPart;
LONG HighPart;
} ;
struct {
DWORD LowPart;
LONG HighPart;
} u;
#line 717 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
LONGLONG QuadPart;
} LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
#line 725 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef union _ULARGE_INTEGER {
struct {
DWORD LowPart;
DWORD HighPart;
} ;
struct {
DWORD LowPart;
DWORD HighPart;
} u;
#line 735 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
ULONGLONG QuadPart;
} ULARGE_INTEGER;
typedef ULARGE_INTEGER *PULARGE_INTEGER;
typedef struct _LUID {
DWORD LowPart;
LONG HighPart;
} LUID, *PLUID;
typedef ULONGLONG  DWORDLONG;
typedef DWORDLONG *PDWORDLONG;
#line 788 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
ULONGLONG
__stdcall
Int64ShllMod32 (
ULONGLONG Value,
DWORD ShiftCount
);
LONGLONG
__stdcall
Int64ShraMod32 (
LONGLONG Value,
DWORD ShiftCount
);
ULONGLONG
__stdcall
Int64ShrlMod32 (
ULONGLONG Value,
DWORD ShiftCount
);
#pragma warning(push)
#line 824 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(disable:4035 4793)               
__inline ULONGLONG
__stdcall
Int64ShllMod32 (
ULONGLONG Value,
DWORD ShiftCount
)
{
__asm    {
mov     ecx, ShiftCount
mov     eax, dword ptr [Value]
mov     edx, dword ptr [Value+4]
shld    edx, eax, cl
shl     eax, cl
}
}
__inline LONGLONG
__stdcall
Int64ShraMod32 (
LONGLONG Value,
DWORD ShiftCount
)
{
__asm {
mov     ecx, ShiftCount
mov     eax, dword ptr [Value]
mov     edx, dword ptr [Value+4]
shrd    eax, edx, cl
sar     edx, cl
}
}
__inline ULONGLONG
__stdcall
Int64ShrlMod32 (
ULONGLONG Value,
DWORD ShiftCount
)
{
__asm    {
mov     ecx, ShiftCount
mov     eax, dword ptr [Value]
mov     edx, dword ptr [Value+4]
shrd    eax, edx, cl
shr     edx, cl
}
}
#pragma warning(pop)
#line 879 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 885 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 935 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
unsigned int
__cdecl
_rotl (
unsigned int Value,
int Shift
);
unsigned __int64
__cdecl
_rotl64 (
unsigned __int64 Value,
int Shift
);
unsigned int
__cdecl
_rotr (
unsigned int Value,
int Shift
);
unsigned __int64
__cdecl
_rotr64 (
unsigned __int64 Value,
int Shift
);
#pragma intrinsic(_rotl)
#pragma intrinsic(_rotl64)
#pragma intrinsic(_rotr)
#pragma intrinsic(_rotr64)
#line 977 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef BYTE  BOOLEAN;           
typedef BOOLEAN *PBOOLEAN;       
typedef struct _LIST_ENTRY {
struct _LIST_ENTRY *Flink;
struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY, * PRLIST_ENTRY;
typedef struct _SINGLE_LIST_ENTRY {
struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;
typedef struct LIST_ENTRY32 {
DWORD Flink;
DWORD Blink;
} LIST_ENTRY32;
typedef LIST_ENTRY32 *PLIST_ENTRY32;
typedef struct LIST_ENTRY64 {
ULONGLONG Flink;
ULONGLONG Blink;
} LIST_ENTRY64;
typedef LIST_ENTRY64 *PLIST_ENTRY64;
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 22 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
typedef struct _GUID {
unsigned long  Data1;
unsigned short Data2;
unsigned short Data3;
unsigned char  Data4[ 8 ];
} GUID;
#line 29 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 67 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
typedef GUID *LPGUID;
#line 77 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
typedef const GUID *LPCGUID;
#line 82 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
typedef GUID IID;
typedef IID *LPIID;
typedef GUID CLSID;
typedef CLSID *LPCLSID;
typedef GUID FMTID;
typedef FMTID *LPFMTID;
#line 104 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 112 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 121 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 122 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 130 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 131 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 140 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 142 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
#line 30 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\string.h"
void *  __cdecl _memccpy(   void * _Dst,   const void * _Src,   int _Val,   size_t _MaxCount);
void *  __cdecl memchr(   const void * _Buf ,   int _Val,   size_t _MaxCount);
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
#line 147 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 175 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 203 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 205 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 206 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\guiddef.h"
#line 1026 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct  _OBJECTID {     
GUID Lineage;
DWORD Uniquifier;
} OBJECTID;
#line 1035 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1167 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1175 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1215 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1217 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef
EXCEPTION_DISPOSITION
__stdcall
EXCEPTION_ROUTINE (
struct _EXCEPTION_RECORD *ExceptionRecord,
PVOID EstablisherFrame,
struct _CONTEXT *ContextRecord,
PVOID DispatcherContext
);
typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;
#line 2015 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 2040 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 2062 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 2136 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 2138 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 2139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;
typedef struct __declspec(align(16)) _M128A {
ULONGLONG Low;
LONGLONG High;
} M128A, *PM128A;
typedef struct __declspec(align(16)) _XSAVE_FORMAT {
WORD   ControlWord;
WORD   StatusWord;
BYTE  TagWord;
BYTE  Reserved1;
WORD   ErrorOpcode;
DWORD ErrorOffset;
WORD   ErrorSelector;
WORD   Reserved2;
DWORD DataOffset;
WORD   DataSelector;
WORD   Reserved3;
DWORD MxCsr;
DWORD MxCsr_Mask;
M128A FloatRegisters[8];
#line 2183 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
M128A XmmRegisters[8];
BYTE  Reserved4[220];
DWORD   Cr0NpxState;
#line 2195 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
} XSAVE_FORMAT, *PXSAVE_FORMAT;
typedef struct __declspec(align(8)) _XSAVE_AREA_HEADER {
DWORD64 Mask;
DWORD64 Reserved[7];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER;
typedef struct __declspec(align(16)) _XSAVE_AREA {
XSAVE_FORMAT LegacyState;
XSAVE_AREA_HEADER Header;
} XSAVE_AREA, *PXSAVE_AREA;
typedef struct _XSTATE_CONTEXT {
DWORD64 Mask;
DWORD Length;
DWORD Reserved1;
PXSAVE_AREA Area;
DWORD Reserved2;
#line 2217 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
PVOID Buffer;
DWORD Reserved3;
#line 2223 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
} XSTATE_CONTEXT, *PXSTATE_CONTEXT;
typedef struct _SCOPE_TABLE_AMD64 {
DWORD Count;
struct
{
DWORD BeginAddress;
DWORD EndAddress;
DWORD HandlerAddress;
DWORD JumpTarget;
} ScopeRecord[1];
} SCOPE_TABLE_AMD64, *PSCOPE_TABLE_AMD64;
typedef struct _SCOPE_TABLE_ARM {
DWORD Count;
struct
{
DWORD BeginAddress;
DWORD EndAddress;
DWORD HandlerAddress;
DWORD JumpTarget;
} ScopeRecord[1];
} SCOPE_TABLE_ARM, *PSCOPE_TABLE_ARM;
#line 4664 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 4685 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
void
__int2c (
void
);
#pragma intrinsic(__int2c)
#line 4702 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 4726 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 4728 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 4771 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 4772 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(push)
#line 4815 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(disable:4164)   
#pragma function(_enable)
#pragma function(_disable)
#line 4821 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(pop)
#line 4827 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 4829 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 4830 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
BOOLEAN
_bittest (
LONG const *Base,
LONG Offset
);
BOOLEAN
_bittestandcomplement (
LONG *Base,
LONG Offset
);
BOOLEAN
_bittestandset (
LONG *Base,
LONG Offset
);
BOOLEAN
_bittestandreset (
LONG *Base,
LONG Offset
);
BOOLEAN
_interlockedbittestandset (
LONG volatile *Base,
LONG Offset
);
BOOLEAN
_interlockedbittestandreset (
LONG volatile *Base,
LONG Offset
);
#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandreset)
BOOLEAN
_BitScanForward (
DWORD *Index,
DWORD Mask
);
BOOLEAN
_BitScanReverse (
DWORD *Index,
DWORD Mask
);
#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#line 4963 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
SHORT
_InterlockedExchange16 (
SHORT volatile *Destination,
SHORT ExChange
);
#pragma intrinsic(_InterlockedExchange16)
#line 4977 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
SHORT
_InterlockedAnd16 (
SHORT volatile *Destination,
SHORT Value
);
SHORT
_InterlockedCompareExchange16 (
SHORT volatile *Destination,
SHORT ExChange,
SHORT Comperand
);
SHORT
_InterlockedOr16 (
SHORT volatile *Destination,
SHORT Value
);
SHORT
_InterlockedIncrement16 (
SHORT volatile *Destination
);
SHORT
_InterlockedDecrement16 (
SHORT volatile *Destination
);
#pragma intrinsic(_InterlockedAnd16)
#pragma intrinsic(_InterlockedCompareExchange16)
#pragma intrinsic(_InterlockedOr16)
#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#line 5025 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(push)
#pragma warning(disable:4035 4793)
__forceinline
BOOLEAN
InterlockedBitTestAndComplement (
LONG volatile *Base,
LONG Bit
)
{
__asm {
mov eax, Bit
mov ecx, Base
lock btc [ecx], eax
setc al
};
}
#pragma warning(pop)
#line 5046 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
BYTE 
__readfsbyte (
DWORD Offset
);
WORD  
__readfsword (
DWORD Offset
);
DWORD
__readfsdword (
DWORD Offset
);
void
__writefsbyte (
DWORD Offset,
BYTE  Data
);
void
__writefsword (
DWORD Offset,
WORD   Data
);
void
__writefsdword (
DWORD Offset,
DWORD Data
);
#pragma intrinsic(__readfsbyte)
#pragma intrinsic(__readfsword)
#pragma intrinsic(__readfsdword)
#pragma intrinsic(__writefsbyte)
#pragma intrinsic(__writefsword)
#pragma intrinsic(__writefsdword)
#line 5098 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
void
__incfsbyte (
DWORD Offset
);
void
__addfsbyte (
DWORD Offset,
BYTE  Value
);
void
__incfsword (
DWORD Offset
);
void
__addfsword (
DWORD Offset,
WORD   Value
);
void
__incfsdword (
DWORD Offset
);
void
__addfsdword (
DWORD Offset,
DWORD Value
);
#pragma intrinsic(__incfsbyte)
#pragma intrinsic(__addfsbyte)
#pragma intrinsic(__incfsword)
#pragma intrinsic(__addfsword)
#pragma intrinsic(__incfsdword)
#pragma intrinsic(__addfsdword)
#line 5144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 5146 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
void
_mm_pause (
void
);
#pragma intrinsic(_mm_pause)
#line 5166 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 5172 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning( push )
#pragma warning( disable : 4793 )
__forceinline
void
MemoryBarrier (
void
)
{
LONG Barrier;
__asm {
xchg Barrier, eax
}
}
#pragma warning( pop )
#line 5193 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
DWORD64
__readpmc (
DWORD Counter
);
#pragma intrinsic(__readpmc)
#line 5239 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
DWORD64
__rdtsc (
void
);
#pragma intrinsic(__rdtsc)
#line 5268 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__inline PVOID GetFiberData( void )    { return *(PVOID *) (ULONG_PTR) __readfsdword (0x10);}
__inline PVOID GetCurrentFiber( void ) { return (PVOID) (ULONG_PTR) __readfsdword (0x10);}
#line 5294 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 5297 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 5352 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _FLOATING_SAVE_AREA {
DWORD   ControlWord;
DWORD   StatusWord;
DWORD   TagWord;
DWORD   ErrorOffset;
DWORD   ErrorSelector;
DWORD   DataOffset;
DWORD   DataSelector;
BYTE    RegisterArea[80];
DWORD   Cr0NpxState;
} FLOATING_SAVE_AREA;
typedef FLOATING_SAVE_AREA *PFLOATING_SAVE_AREA;
typedef char __C_ASSERT__[(sizeof(XSAVE_FORMAT) == 512)?1:-1];
#line 5378 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#pragma warning(disable:4103)
#pragma pack(push,4)
#line 30 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 34 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 5383 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _CONTEXT {
DWORD ContextFlags;
DWORD   Dr0;
DWORD   Dr1;
DWORD   Dr2;
DWORD   Dr3;
DWORD   Dr6;
DWORD   Dr7;
FLOATING_SAVE_AREA FloatSave;
DWORD   SegGs;
DWORD   SegFs;
DWORD   SegEs;
DWORD   SegDs;
DWORD   Edi;
DWORD   Esi;
DWORD   Ebx;
DWORD   Edx;
DWORD   Ecx;
DWORD   Eax;
DWORD   Ebp;
DWORD   Eip;
DWORD   SegCs;              
DWORD   EFlags;             
DWORD   Esp;
DWORD   SegSs;
BYTE    ExtendedRegisters[512];
} CONTEXT;
typedef CONTEXT *PCONTEXT;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 36 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 37 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 5483 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 5486 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _LDT_ENTRY {
WORD    LimitLow;
WORD    BaseLow;
union {
struct {
BYTE    BaseMid;
BYTE    Flags1;     
BYTE    Flags2;     
BYTE    BaseHi;
} Bytes;
struct {
DWORD   BaseMid : 8;
DWORD   Type : 5;
DWORD   Dpl : 2;
DWORD   Pres : 1;
DWORD   LimitHi : 4;
DWORD   Sys : 1;
DWORD   Reserved_0 : 1;
DWORD   Default_Big : 1;
DWORD   Granularity : 1;
DWORD   BaseHi : 8;
} Bits;
} HighWord;
} LDT_ENTRY, *PLDT_ENTRY;
#line 5517 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 6719 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 6874 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__forceinline
CHAR
ReadAcquire8 (
CHAR const volatile *Source
)
{
CHAR Value;
Value = *Source;
return Value;
}
__forceinline
CHAR
ReadNoFence8 (
CHAR const volatile *Source
)
{
CHAR Value;
Value = *Source;
return Value;
}
__forceinline
void
WriteRelease8 (
CHAR volatile *Destination,
CHAR Value
)
{
*Destination = Value;
return;
}
__forceinline
void
WriteNoFence8 (
CHAR volatile *Destination,
CHAR Value
)
{
*Destination = Value;
return;
}
__forceinline
SHORT
ReadAcquire16 (
SHORT const volatile *Source
)
{
SHORT Value;
Value = *Source;
return Value;
}
__forceinline
SHORT
ReadNoFence16 (
SHORT const volatile *Source
)
{
SHORT Value;
Value = *Source;
return Value;
}
__forceinline
void
WriteRelease16 (
SHORT volatile *Destination,
SHORT Value
)
{
*Destination = Value;
return;
}
__forceinline
void
WriteNoFence16 (
SHORT volatile *Destination,
SHORT Value
)
{
*Destination = Value;
return;
}
__forceinline
LONG
ReadAcquire (
LONG const volatile *Source
)
{
LONG Value;
Value = *Source;
return Value;
}
__forceinline
LONG
ReadNoFence (
LONG const volatile *Source
)
{
LONG Value;
Value = *Source;
return Value;
}
__forceinline
void
WriteRelease (
LONG volatile *Destination,
LONG Value
)
{
*Destination = Value;
return;
}
__forceinline
void
WriteNoFence (
LONG volatile *Destination,
LONG Value
)
{
*Destination = Value;
return;
}
__forceinline
LONG64
ReadAcquire64 (
LONG64 const volatile *Source
)
{
LONG64 Value;
Value = *Source;
return Value;
}
__forceinline
LONG64
ReadNoFence64 (
LONG64 const volatile *Source
)
{
LONG64 Value;
Value = *Source;
return Value;
}
__forceinline
void
WriteRelease64 (
LONG64 volatile *Destination,
LONG64 Value
)
{
*Destination = Value;
return;
}
__forceinline
void
WriteNoFence64 (
LONG64 volatile *Destination,
LONG64 Value
)
{
*Destination = Value;
return;
}
#line 7610 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__forceinline
CHAR
ReadRaw8 (
CHAR const volatile *Source
)
{
CHAR Value;
Value = *(CHAR *)Source;
return Value;
}
__forceinline
void
WriteRaw8 (
CHAR volatile *Destination,
CHAR Value
)
{
*(CHAR *)Destination = Value;
return;
}
__forceinline
SHORT
ReadRaw16 (
SHORT const volatile *Source
)
{
SHORT Value;
Value = *(SHORT *)Source;
return Value;
}
__forceinline
void
WriteRaw16 (
SHORT volatile *Destination,
SHORT Value
)
{
*(SHORT *)Destination = Value;
return;
}
__forceinline
LONG
ReadRaw (
LONG const volatile *Source
)
{
LONG Value;
Value = *(LONG *)Source;
return Value;
}
__forceinline
void
WriteRaw (
LONG volatile *Destination,
LONG Value
)
{
*(LONG *)Destination = Value;
return;
}
__forceinline
LONG64
ReadRaw64 (
LONG64 const volatile *Source
)
{
LONG64 Value;
Value = *(LONG64 *)Source;
return Value;
}
__forceinline
void
WriteRaw64 (
LONG64 volatile *Destination,
LONG64 Value
)
{
*(LONG64 *)Destination = Value;
return;
}
__forceinline
BYTE 
ReadUCharAcquire (
BYTE  const volatile *Source
)
{
return (BYTE )ReadAcquire8((PCHAR)Source);
}
__forceinline
BYTE 
ReadUCharNoFence (
BYTE  const volatile *Source
)
{
return (BYTE )ReadNoFence8((PCHAR)Source);
}
__forceinline
BYTE 
ReadUCharRaw (
BYTE  const volatile *Source
)
{
return (BYTE )ReadRaw8((PCHAR)Source);
}
__forceinline
void
WriteUCharRelease (
BYTE  volatile *Destination,
BYTE  Value
)
{
WriteRelease8((PCHAR)Destination, (CHAR)Value);
return;
}
__forceinline
void
WriteUCharNoFence (
BYTE  volatile *Destination,
BYTE  Value
)
{
WriteNoFence8((PCHAR)Destination, (CHAR)Value);
return;
}
__forceinline
void
WriteUCharRaw (
BYTE  volatile *Destination,
BYTE  Value
)
{
WriteRaw8((PCHAR)Destination, (CHAR)Value);
return;
}
__forceinline
WORD  
ReadUShortAcquire (
WORD   const volatile *Source
)
{
return (WORD  )ReadAcquire16((PSHORT)Source);
}
__forceinline
WORD  
ReadUShortNoFence (
WORD   const volatile *Source
)
{
return (WORD  )ReadNoFence16((PSHORT)Source);
}
__forceinline
WORD  
ReadUShortRaw (
WORD   const volatile *Source
)
{
return (WORD  )ReadRaw16((PSHORT)Source);
}
__forceinline
void
WriteUShortRelease (
WORD   volatile *Destination,
WORD   Value
)
{
WriteRelease16((PSHORT)Destination, (SHORT)Value);
return;
}
__forceinline
void
WriteUShortNoFence (
WORD   volatile *Destination,
WORD   Value
)
{
WriteNoFence16((PSHORT)Destination, (SHORT)Value);
return;
}
__forceinline
void
WriteUShortRaw (
WORD   volatile *Destination,
WORD   Value
)
{
WriteRaw16((PSHORT)Destination, (SHORT)Value);
return;
}
__forceinline
DWORD
ReadULongAcquire (
DWORD const volatile *Source
)
{
return (DWORD)ReadAcquire((PLONG)Source);
}
__forceinline
DWORD
ReadULongNoFence (
DWORD const volatile *Source
)
{
return (DWORD)ReadNoFence((PLONG)Source);
}
__forceinline
DWORD
ReadULongRaw (
DWORD const volatile *Source
)
{
return (DWORD)ReadRaw((PLONG)Source);
}
__forceinline
void
WriteULongRelease (
DWORD volatile *Destination,
DWORD Value
)
{
WriteRelease((PLONG)Destination, (LONG)Value);
return;
}
__forceinline
void
WriteULongNoFence (
DWORD volatile *Destination,
DWORD Value
)
{
WriteNoFence((PLONG)Destination, (LONG)Value);
return;
}
__forceinline
void
WriteULongRaw (
DWORD volatile *Destination,
DWORD Value
)
{
WriteRaw((PLONG)Destination, (LONG)Value);
return;
}
__forceinline
DWORD64
ReadULong64Acquire (
DWORD64 const volatile *Source
)
{
return (DWORD64)ReadAcquire64((PLONG64)Source);
}
__forceinline
DWORD64
ReadULong64NoFence (
DWORD64 const volatile *Source
)
{
return (DWORD64)ReadNoFence64((PLONG64)Source);
}
__forceinline
DWORD64
ReadULong64Raw (
DWORD64 const volatile *Source
)
{
return (DWORD64)ReadRaw64((PLONG64)Source);
}
__forceinline
void
WriteULong64Release (
DWORD64 volatile *Destination,
DWORD64 Value
)
{
WriteRelease64((PLONG64)Destination, (LONG64)Value);
return;
}
__forceinline
void
WriteULong64NoFence (
DWORD64 volatile *Destination,
DWORD64 Value
)
{
WriteNoFence64((PLONG64)Destination, (LONG64)Value);
return;
}
__forceinline
void
WriteULong64Raw (
DWORD64 volatile *Destination,
DWORD64 Value
)
{
WriteRaw64((PLONG64)Destination, (LONG64)Value);
return;
}
__forceinline
PVOID
ReadPointerAcquire (
PVOID const volatile *Source
)
{
return (PVOID)ReadAcquire((PLONG)Source);
}
__forceinline
PVOID
ReadPointerNoFence (
PVOID const volatile *Source
)
{
return (PVOID)ReadNoFence((PLONG)Source);
}
__forceinline
PVOID
ReadPointerRaw (
PVOID const volatile *Source
)
{
return (PVOID)ReadRaw((PLONG)Source);
}
__forceinline
void
WritePointerRelease (
PVOID volatile *Destination,
PVOID Value
)
{
WriteRelease((PLONG)Destination, (LONG)Value);
return;
}
__forceinline
void
WritePointerNoFence (
PVOID volatile *Destination,
PVOID Value
)
{
WriteNoFence((PLONG)Destination, (LONG)Value);
return;
}
__forceinline
void
WritePointerRaw (
PVOID volatile *Destination,
PVOID Value
)
{
WriteRaw((PLONG)Destination, (LONG)Value);
return;
}
#line 8224 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 8226 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 8229 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 8256 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _WOW64_FLOATING_SAVE_AREA {
DWORD   ControlWord;
DWORD   StatusWord;
DWORD   TagWord;
DWORD   ErrorOffset;
DWORD   ErrorSelector;
DWORD   DataOffset;
DWORD   DataSelector;
BYTE    RegisterArea[80];
DWORD   Cr0NpxState;
} WOW64_FLOATING_SAVE_AREA;
typedef WOW64_FLOATING_SAVE_AREA *PWOW64_FLOATING_SAVE_AREA;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#pragma warning(disable:4103)
#pragma pack(push,4)
#line 30 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 34 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 8280 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _WOW64_CONTEXT {
DWORD ContextFlags;
DWORD   Dr0;
DWORD   Dr1;
DWORD   Dr2;
DWORD   Dr3;
DWORD   Dr6;
DWORD   Dr7;
WOW64_FLOATING_SAVE_AREA FloatSave;
DWORD   SegGs;
DWORD   SegFs;
DWORD   SegEs;
DWORD   SegDs;
DWORD   Edi;
DWORD   Esi;
DWORD   Ebx;
DWORD   Edx;
DWORD   Ecx;
DWORD   Eax;
DWORD   Ebp;
DWORD   Eip;
DWORD   SegCs;              
DWORD   EFlags;             
DWORD   Esp;
DWORD   SegSs;
BYTE    ExtendedRegisters[512];
} WOW64_CONTEXT;
typedef WOW64_CONTEXT *PWOW64_CONTEXT;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 36 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 37 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 8380 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _WOW64_LDT_ENTRY {
WORD    LimitLow;
WORD    BaseLow;
union {
struct {
BYTE    BaseMid;
BYTE    Flags1;     
BYTE    Flags2;     
BYTE    BaseHi;
} Bytes;
struct {
DWORD   BaseMid : 8;
DWORD   Type : 5;
DWORD   Dpl : 2;
DWORD   Pres : 1;
DWORD   LimitHi : 4;
DWORD   Sys : 1;
DWORD   Reserved_0 : 1;
DWORD   Default_Big : 1;
DWORD   Granularity : 1;
DWORD   BaseHi : 8;
} Bits;
} HighWord;
} WOW64_LDT_ENTRY, *PWOW64_LDT_ENTRY;
typedef struct _WOW64_DESCRIPTOR_TABLE_ENTRY {
DWORD Selector;
WOW64_LDT_ENTRY Descriptor;
} WOW64_DESCRIPTOR_TABLE_ENTRY, *PWOW64_DESCRIPTOR_TABLE_ENTRY;
typedef struct _EXCEPTION_RECORD {
DWORD    ExceptionCode;
DWORD ExceptionFlags;
struct _EXCEPTION_RECORD *ExceptionRecord;
PVOID ExceptionAddress;
DWORD NumberParameters;
ULONG_PTR ExceptionInformation[15];
} EXCEPTION_RECORD;
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;
typedef struct _EXCEPTION_RECORD32 {
DWORD    ExceptionCode;
DWORD ExceptionFlags;
DWORD ExceptionRecord;
DWORD ExceptionAddress;
DWORD NumberParameters;
DWORD ExceptionInformation[15];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;
typedef struct _EXCEPTION_RECORD64 {
DWORD    ExceptionCode;
DWORD ExceptionFlags;
DWORD64 ExceptionRecord;
DWORD64 ExceptionAddress;
DWORD NumberParameters;
DWORD __unusedAlignment;
DWORD64 ExceptionInformation[15];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;
typedef struct _EXCEPTION_POINTERS {
PEXCEPTION_RECORD ExceptionRecord;
PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
#line 8489 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef PVOID PACCESS_TOKEN;            
typedef PVOID PSECURITY_DESCRIPTOR;     
typedef PVOID PSID;     
typedef PVOID PCLAIMS_BLOB;     
typedef DWORD ACCESS_MASK;
typedef ACCESS_MASK *PACCESS_MASK;
typedef struct _GENERIC_MAPPING {
ACCESS_MASK GenericRead;
ACCESS_MASK GenericWrite;
ACCESS_MASK GenericExecute;
ACCESS_MASK GenericAll;
} GENERIC_MAPPING;
typedef GENERIC_MAPPING *PGENERIC_MAPPING;
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#pragma warning(disable:4103)
#pragma pack(push,4)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 8610 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _LUID_AND_ATTRIBUTES {
LUID Luid;
DWORD Attributes;
} LUID_AND_ATTRIBUTES, * PLUID_AND_ATTRIBUTES;
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 8619 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _SID_IDENTIFIER_AUTHORITY {
BYTE  Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY;
#line 8657 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _SID {
BYTE  Revision;
BYTE  SubAuthorityCount;
SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
DWORD SubAuthority[1];
#line 8670 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
} SID, *PISID;
#line 8672 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 8682 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef enum _SID_NAME_USE {
SidTypeUser = 1,
SidTypeGroup,
SidTypeDomain,
SidTypeAlias,
SidTypeWellKnownGroup,
SidTypeDeletedAccount,
SidTypeInvalid,
SidTypeUnknown,
SidTypeComputer,
SidTypeLabel
} SID_NAME_USE, *PSID_NAME_USE;
typedef struct _SID_AND_ATTRIBUTES {
PSID Sid;
#line 8703 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
DWORD Attributes;
} SID_AND_ATTRIBUTES, * PSID_AND_ATTRIBUTES;
typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[1];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;
typedef ULONG_PTR SID_HASH_ENTRY, *PSID_HASH_ENTRY;
typedef struct _SID_AND_ATTRIBUTES_HASH {
DWORD SidCount;
PSID_AND_ATTRIBUTES SidAttr;
SID_HASH_ENTRY Hash[32];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH;
typedef enum {
WinNullSid                                  = 0,
WinWorldSid                                 = 1,
WinLocalSid                                 = 2,
WinCreatorOwnerSid                          = 3,
WinCreatorGroupSid                          = 4,
WinCreatorOwnerServerSid                    = 5,
WinCreatorGroupServerSid                    = 6,
WinNtAuthoritySid                           = 7,
WinDialupSid                                = 8,
WinNetworkSid                               = 9,
WinBatchSid                                 = 10,
WinInteractiveSid                           = 11,
WinServiceSid                               = 12,
WinAnonymousSid                             = 13,
WinProxySid                                 = 14,
WinEnterpriseControllersSid                 = 15,
WinSelfSid                                  = 16,
WinAuthenticatedUserSid                     = 17,
WinRestrictedCodeSid                        = 18,
WinTerminalServerSid                        = 19,
WinRemoteLogonIdSid                         = 20,
WinLogonIdsSid                              = 21,
WinLocalSystemSid                           = 22,
WinLocalServiceSid                          = 23,
WinNetworkServiceSid                        = 24,
WinBuiltinDomainSid                         = 25,
WinBuiltinAdministratorsSid                 = 26,
WinBuiltinUsersSid                          = 27,
WinBuiltinGuestsSid                         = 28,
WinBuiltinPowerUsersSid                     = 29,
WinBuiltinAccountOperatorsSid               = 30,
WinBuiltinSystemOperatorsSid                = 31,
WinBuiltinPrintOperatorsSid                 = 32,
WinBuiltinBackupOperatorsSid                = 33,
WinBuiltinReplicatorSid                     = 34,
WinBuiltinPreWindows2000CompatibleAccessSid = 35,
WinBuiltinRemoteDesktopUsersSid             = 36,
WinBuiltinNetworkConfigurationOperatorsSid  = 37,
WinAccountAdministratorSid                  = 38,
WinAccountGuestSid                          = 39,
WinAccountKrbtgtSid                         = 40,
WinAccountDomainAdminsSid                   = 41,
WinAccountDomainUsersSid                    = 42,
WinAccountDomainGuestsSid                   = 43,
WinAccountComputersSid                      = 44,
WinAccountControllersSid                    = 45,
WinAccountCertAdminsSid                     = 46,
WinAccountSchemaAdminsSid                   = 47,
WinAccountEnterpriseAdminsSid               = 48,
WinAccountPolicyAdminsSid                   = 49,
WinAccountRasAndIasServersSid               = 50,
WinNTLMAuthenticationSid                    = 51,
WinDigestAuthenticationSid                  = 52,
WinSChannelAuthenticationSid                = 53,
WinThisOrganizationSid                      = 54,
WinOtherOrganizationSid                     = 55,
WinBuiltinIncomingForestTrustBuildersSid    = 56,
WinBuiltinPerfMonitoringUsersSid            = 57,
WinBuiltinPerfLoggingUsersSid               = 58,
WinBuiltinAuthorizationAccessSid            = 59,
WinBuiltinTerminalServerLicenseServersSid   = 60,
WinBuiltinDCOMUsersSid                      = 61,
WinBuiltinIUsersSid                         = 62,
WinIUserSid                                 = 63,
WinBuiltinCryptoOperatorsSid                = 64,
WinUntrustedLabelSid                        = 65,
WinLowLabelSid                              = 66,
WinMediumLabelSid                           = 67,
WinHighLabelSid                             = 68,
WinSystemLabelSid                           = 69,
WinWriteRestrictedCodeSid                   = 70,
WinCreatorOwnerRightsSid                    = 71,
WinCacheablePrincipalsGroupSid              = 72,
WinNonCacheablePrincipalsGroupSid           = 73,
WinEnterpriseReadonlyControllersSid         = 74,
WinAccountReadonlyControllersSid            = 75,
WinBuiltinEventLogReadersGroup              = 76,
WinNewEnterpriseReadonlyControllersSid      = 77,
WinBuiltinCertSvcDComAccessGroup            = 78,
WinMediumPlusLabelSid                       = 79,
WinLocalLogonSid                            = 80,
WinConsoleLogonSid                          = 81,
WinThisOrganizationCertificateSid           = 82,
WinApplicationPackageAuthoritySid           = 83,
WinBuiltinAnyPackageSid                     = 84,
WinCapabilityInternetClientSid              = 85,
WinCapabilityInternetClientServerSid        = 86,
WinCapabilityPrivateNetworkClientServerSid  = 87,
WinCapabilityPicturesLibrarySid             = 88,
WinCapabilityVideosLibrarySid               = 89,
WinCapabilityMusicLibrarySid                = 90,
WinCapabilityDocumentsLibrarySid            = 91,
WinCapabilitySharedUserCertificatesSid      = 92,
WinCapabilityEnterpriseAuthenticationSid    = 93,
WinCapabilityRemovableStorageSid            = 94,
WinBuiltinRDSRemoteAccessServersSid         = 95,
WinBuiltinRDSEndpointServersSid             = 96,
WinBuiltinRDSManagementServersSid           = 97,
WinUserModeDriversSid                       = 98,
WinBuiltinHyperVAdminsSid                   = 99,
WinAccountCloneableControllersSid           = 100,
WinBuiltinAccessControlAssistanceOperatorsSid = 101,
WinBuiltinRemoteManagementUsersSid          = 102,
WinAuthenticationAuthorityAssertedSid       = 103,
WinAuthenticationServiceAssertedSid         = 104,
} WELL_KNOWN_SID_TYPE;
typedef struct _ACL {
BYTE  AclRevision;
BYTE  Sbz1;
WORD   AclSize;
WORD   AceCount;
WORD   Sbz2;
} ACL;
typedef ACL *PACL;
typedef struct _ACE_HEADER {
BYTE  AceType;
BYTE  AceFlags;
WORD   AceSize;
} ACE_HEADER;
typedef ACE_HEADER *PACE_HEADER;
typedef struct _ACCESS_ALLOWED_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} ACCESS_ALLOWED_ACE;
typedef ACCESS_ALLOWED_ACE *PACCESS_ALLOWED_ACE;
typedef struct _ACCESS_DENIED_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} ACCESS_DENIED_ACE;
typedef ACCESS_DENIED_ACE *PACCESS_DENIED_ACE;
typedef struct _SYSTEM_AUDIT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;
typedef struct _SYSTEM_ALARM_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} SYSTEM_ALARM_ACE;
typedef SYSTEM_ALARM_ACE *PSYSTEM_ALARM_ACE;
typedef struct _SYSTEM_RESOURCE_ATTRIBUTE_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} SYSTEM_RESOURCE_ATTRIBUTE_ACE, *PSYSTEM_RESOURCE_ATTRIBUTE_ACE;
typedef struct _SYSTEM_SCOPED_POLICY_ID_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} SYSTEM_SCOPED_POLICY_ID_ACE, *PSYSTEM_SCOPED_POLICY_ID_ACE;
typedef struct _SYSTEM_MANDATORY_LABEL_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} SYSTEM_MANDATORY_LABEL_ACE, *PSYSTEM_MANDATORY_LABEL_ACE;
typedef struct _ACCESS_ALLOWED_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} ACCESS_ALLOWED_OBJECT_ACE, *PACCESS_ALLOWED_OBJECT_ACE;
typedef struct _ACCESS_DENIED_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} ACCESS_DENIED_OBJECT_ACE, *PACCESS_DENIED_OBJECT_ACE;
typedef struct _SYSTEM_AUDIT_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} SYSTEM_AUDIT_OBJECT_ACE, *PSYSTEM_AUDIT_OBJECT_ACE;
typedef struct _SYSTEM_ALARM_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} SYSTEM_ALARM_OBJECT_ACE, *PSYSTEM_ALARM_OBJECT_ACE;
typedef struct _ACCESS_ALLOWED_CALLBACK_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} ACCESS_ALLOWED_CALLBACK_ACE, *PACCESS_ALLOWED_CALLBACK_ACE;
typedef struct _ACCESS_DENIED_CALLBACK_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} ACCESS_DENIED_CALLBACK_ACE, *PACCESS_DENIED_CALLBACK_ACE;
typedef struct _SYSTEM_AUDIT_CALLBACK_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} SYSTEM_AUDIT_CALLBACK_ACE, *PSYSTEM_AUDIT_CALLBACK_ACE;
typedef struct _SYSTEM_ALARM_CALLBACK_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD SidStart;
} SYSTEM_ALARM_CALLBACK_ACE, *PSYSTEM_ALARM_CALLBACK_ACE;
typedef struct _ACCESS_ALLOWED_CALLBACK_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} ACCESS_ALLOWED_CALLBACK_OBJECT_ACE, *PACCESS_ALLOWED_CALLBACK_OBJECT_ACE;
typedef struct _ACCESS_DENIED_CALLBACK_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} ACCESS_DENIED_CALLBACK_OBJECT_ACE, *PACCESS_DENIED_CALLBACK_OBJECT_ACE;
typedef struct _SYSTEM_AUDIT_CALLBACK_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} SYSTEM_AUDIT_CALLBACK_OBJECT_ACE, *PSYSTEM_AUDIT_CALLBACK_OBJECT_ACE;
typedef struct _SYSTEM_ALARM_CALLBACK_OBJECT_ACE {
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
} SYSTEM_ALARM_CALLBACK_OBJECT_ACE, *PSYSTEM_ALARM_CALLBACK_OBJECT_ACE;
typedef enum _ACL_INFORMATION_CLASS {
AclRevisionInformation = 1,
AclSizeInformation
} ACL_INFORMATION_CLASS;
typedef struct _ACL_REVISION_INFORMATION {
DWORD AclRevision;
} ACL_REVISION_INFORMATION;
typedef ACL_REVISION_INFORMATION *PACL_REVISION_INFORMATION;
typedef struct _ACL_SIZE_INFORMATION {
DWORD AceCount;
DWORD AclBytesInUse;
DWORD AclBytesFree;
} ACL_SIZE_INFORMATION;
typedef ACL_SIZE_INFORMATION *PACL_SIZE_INFORMATION;
typedef WORD   SECURITY_DESCRIPTOR_CONTROL, *PSECURITY_DESCRIPTOR_CONTROL;
typedef struct _SECURITY_DESCRIPTOR_RELATIVE {
BYTE  Revision;
BYTE  Sbz1;
SECURITY_DESCRIPTOR_CONTROL Control;
DWORD Owner;
DWORD Group;
DWORD Sacl;
DWORD Dacl;
} SECURITY_DESCRIPTOR_RELATIVE, *PISECURITY_DESCRIPTOR_RELATIVE;
typedef struct _SECURITY_DESCRIPTOR {
BYTE  Revision;
BYTE  Sbz1;
SECURITY_DESCRIPTOR_CONTROL Control;
PSID Owner;
PSID Group;
PACL Sacl;
PACL Dacl;
} SECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;
typedef struct _OBJECT_TYPE_LIST {
WORD   Level;
WORD   Sbz;
GUID *ObjectType;
} OBJECT_TYPE_LIST, *POBJECT_TYPE_LIST;
typedef enum _AUDIT_EVENT_TYPE {
AuditEventObjectAccess,
AuditEventDirectoryServiceAccess
} AUDIT_EVENT_TYPE, *PAUDIT_EVENT_TYPE;
typedef struct _PRIVILEGE_SET {
DWORD PrivilegeCount;
DWORD Control;
LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET, * PPRIVILEGE_SET;
typedef enum _ACCESS_REASON_TYPE{
AccessReasonNone                    = 0x00000000,   
AccessReasonAllowedAce                  = 0x00010000,   
AccessReasonDeniedAce                   = 0x00020000,   
AccessReasonAllowedParentAce            = 0x00030000,   
AccessReasonDeniedParentAce             = 0x00040000,   
AccessReasonNotGrantedByCape            = 0x00050000,   
AccessReasonNotGrantedByParentCape      = 0x00060000,   
AccessReasonNotGrantedToAppContainer    = 0x00070000,   
AccessReasonMissingPrivilege            = 0x00100000,
AccessReasonFromPrivilege               = 0x00200000,
AccessReasonIntegrityLevel              = 0x00300000,
AccessReasonOwnership                   = 0x00400000,
AccessReasonNullDacl                    = 0x00500000,
AccessReasonEmptyDacl                   = 0x00600000,
AccessReasonNoSD                        = 0x00700000,
AccessReasonNoGrant                     = 0x00800000    
}
ACCESS_REASON_TYPE;
typedef DWORD ACCESS_REASON;
typedef struct _ACCESS_REASONS{
ACCESS_REASON Data[32];
} ACCESS_REASONS, *PACCESS_REASONS;
typedef struct _SE_SECURITY_DESCRIPTOR
{
DWORD Size;
DWORD Flags;
PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_SECURITY_DESCRIPTOR, *PSE_SECURITY_DESCRIPTOR;
typedef struct _SE_ACCESS_REQUEST
{
DWORD Size;
PSE_SECURITY_DESCRIPTOR SeSecurityDescriptor;
ACCESS_MASK DesiredAccess;
ACCESS_MASK PreviouslyGrantedAccess;
PSID PrincipalSelfSid;      
PGENERIC_MAPPING GenericMapping;
DWORD ObjectTypeListCount;
POBJECT_TYPE_LIST ObjectTypeList;
} SE_ACCESS_REQUEST, *PSE_ACCESS_REQUEST;
typedef struct _SE_ACCESS_REPLY
{
DWORD Size;
DWORD ResultListCount;  
PACCESS_MASK GrantedAccess;
PDWORD    AccessStatus;
PACCESS_REASONS AccessReason;
PPRIVILEGE_SET* Privileges;
} SE_ACCESS_REPLY, *PSE_ACCESS_REPLY;
typedef enum _SECURITY_IMPERSONATION_LEVEL {
SecurityAnonymous,
SecurityIdentification,
SecurityImpersonation,
SecurityDelegation
} SECURITY_IMPERSONATION_LEVEL, * PSECURITY_IMPERSONATION_LEVEL;
#line 10109 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef enum _TOKEN_TYPE {
TokenPrimary = 1,
TokenImpersonation
} TOKEN_TYPE;
typedef TOKEN_TYPE *PTOKEN_TYPE;
typedef enum _TOKEN_ELEVATION_TYPE {
TokenElevationTypeDefault = 1,
TokenElevationTypeFull,
TokenElevationTypeLimited,
} TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;
typedef enum _TOKEN_INFORMATION_CLASS {
TokenUser = 1,
TokenGroups,
TokenPrivileges,
TokenOwner,
TokenPrimaryGroup,
TokenDefaultDacl,
TokenSource,
TokenType,
TokenImpersonationLevel,
TokenStatistics,
TokenRestrictedSids,
TokenSessionId,
TokenGroupsAndPrivileges,
TokenSessionReference,
TokenSandBoxInert,
TokenAuditPolicy,
TokenOrigin,
TokenElevationType,
TokenLinkedToken,
TokenElevation,
TokenHasRestrictions,
TokenAccessInformation,
TokenVirtualizationAllowed,
TokenVirtualizationEnabled,
TokenIntegrityLevel,
TokenUIAccess,
TokenMandatoryPolicy,
TokenLogonSid,
TokenIsAppContainer,
TokenCapabilities,
TokenAppContainerSid,
TokenAppContainerNumber,
TokenUserClaimAttributes,
TokenDeviceClaimAttributes,
TokenRestrictedUserClaimAttributes,
TokenRestrictedDeviceClaimAttributes,
TokenDeviceGroups,
TokenRestrictedDeviceGroups,
TokenSecurityAttributes,
TokenIsRestricted,
MaxTokenInfoClass  
} TOKEN_INFORMATION_CLASS, *PTOKEN_INFORMATION_CLASS;
typedef struct _TOKEN_USER {
SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;
typedef struct _TOKEN_GROUPS {
DWORD GroupCount;
SID_AND_ATTRIBUTES Groups[1];
#line 10209 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
} TOKEN_GROUPS, *PTOKEN_GROUPS;
typedef struct _TOKEN_PRIVILEGES {
DWORD PrivilegeCount;
LUID_AND_ATTRIBUTES Privileges[1];
} TOKEN_PRIVILEGES, *PTOKEN_PRIVILEGES;
typedef struct _TOKEN_OWNER {
PSID Owner;
} TOKEN_OWNER, *PTOKEN_OWNER;
typedef struct _TOKEN_PRIMARY_GROUP {
PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP, *PTOKEN_PRIMARY_GROUP;
typedef struct _TOKEN_DEFAULT_DACL {
PACL DefaultDacl;
} TOKEN_DEFAULT_DACL, *PTOKEN_DEFAULT_DACL;
typedef struct _TOKEN_USER_CLAIMS {
PCLAIMS_BLOB UserClaims;
} TOKEN_USER_CLAIMS, *PTOKEN_USER_CLAIMS;
typedef struct _TOKEN_DEVICE_CLAIMS {
PCLAIMS_BLOB DeviceClaims;
} TOKEN_DEVICE_CLAIMS, *PTOKEN_DEVICE_CLAIMS;
typedef struct _TOKEN_GROUPS_AND_PRIVILEGES {
DWORD SidCount;
DWORD SidLength;
PSID_AND_ATTRIBUTES Sids;
DWORD RestrictedSidCount;
DWORD RestrictedSidLength;
PSID_AND_ATTRIBUTES RestrictedSids;
DWORD PrivilegeCount;
DWORD PrivilegeLength;
PLUID_AND_ATTRIBUTES Privileges;
LUID AuthenticationId;
} TOKEN_GROUPS_AND_PRIVILEGES, *PTOKEN_GROUPS_AND_PRIVILEGES;
typedef struct _TOKEN_LINKED_TOKEN {
HANDLE LinkedToken;
} TOKEN_LINKED_TOKEN, *PTOKEN_LINKED_TOKEN;
typedef struct _TOKEN_ELEVATION {
DWORD TokenIsElevated;
} TOKEN_ELEVATION, *PTOKEN_ELEVATION;
typedef struct _TOKEN_MANDATORY_LABEL {
SID_AND_ATTRIBUTES Label;
} TOKEN_MANDATORY_LABEL, *PTOKEN_MANDATORY_LABEL;
typedef struct _TOKEN_MANDATORY_POLICY {
DWORD Policy;
} TOKEN_MANDATORY_POLICY, *PTOKEN_MANDATORY_POLICY;
typedef struct _TOKEN_ACCESS_INFORMATION {
PSID_AND_ATTRIBUTES_HASH SidHash;
PSID_AND_ATTRIBUTES_HASH RestrictedSidHash;
PTOKEN_PRIVILEGES Privileges;
LUID AuthenticationId;
TOKEN_TYPE TokenType;
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
TOKEN_MANDATORY_POLICY MandatoryPolicy;
DWORD Flags;
DWORD AppContainerNumber;
PSID PackageSid;
PSID_AND_ATTRIBUTES_HASH CapabilitiesHash;
} TOKEN_ACCESS_INFORMATION, *PTOKEN_ACCESS_INFORMATION;
typedef struct _TOKEN_AUDIT_POLICY {
BYTE  PerUserPolicy[(((56)) >> 1) + 1];
} TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY;
typedef struct _TOKEN_SOURCE {
CHAR SourceName[8];
LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE;
typedef struct _TOKEN_STATISTICS {
LUID TokenId;
LUID AuthenticationId;
LARGE_INTEGER ExpirationTime;
TOKEN_TYPE TokenType;
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
DWORD DynamicCharged;
DWORD DynamicAvailable;
DWORD GroupCount;
DWORD PrivilegeCount;
LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;
typedef struct _TOKEN_CONTROL {
LUID TokenId;
LUID AuthenticationId;
LUID ModifiedId;
TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL;
typedef struct _TOKEN_ORIGIN {
LUID OriginatingLogonSession ;
} TOKEN_ORIGIN, * PTOKEN_ORIGIN ;
typedef enum _MANDATORY_LEVEL {
MandatoryLevelUntrusted = 0,
MandatoryLevelLow,
MandatoryLevelMedium,
MandatoryLevelHigh,
MandatoryLevelSystem,
MandatoryLevelSecureProcess,
MandatoryLevelCount
} MANDATORY_LEVEL, *PMANDATORY_LEVEL;
typedef struct _TOKEN_APPCONTAINER_INFORMATION {
PSID TokenAppContainer;
} TOKEN_APPCONTAINER_INFORMATION, *PTOKEN_APPCONTAINER_INFORMATION;
typedef struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE {
DWORD64             Version;
PWSTR               Name;
} CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE, *PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE;
typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE {
PVOID   pValue;         
DWORD   ValueLength;    
} CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE,
*PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE;
typedef struct _CLAIM_SECURITY_ATTRIBUTE_V1 {
PWSTR   Name; 
WORD    ValueType;
WORD    Reserved;
DWORD   Flags;
DWORD   ValueCount;
union {
PLONG64                                         pInt64;
PDWORD64                                        pUint64;
PWSTR                                           *ppString;
PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE            pFqbn;
PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE    pOctetString;
} Values;
} CLAIM_SECURITY_ATTRIBUTE_V1, *PCLAIM_SECURITY_ATTRIBUTE_V1;
typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 {
DWORD   Name;
WORD    ValueType;
WORD    Reserved;
DWORD   Flags;
DWORD   ValueCount;
union {
DWORD pInt64[1];
DWORD pUint64[1];
DWORD ppString[1];
DWORD pFqbn[1];
DWORD pOctetString[1];
} Values;
} CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1, *PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;
typedef struct _CLAIM_SECURITY_ATTRIBUTES_INFORMATION {
WORD    Version;
WORD    Reserved;
DWORD   AttributeCount;
union {
PCLAIM_SECURITY_ATTRIBUTE_V1    pAttributeV1;
} Attribute;
} CLAIM_SECURITY_ATTRIBUTES_INFORMATION, *PCLAIM_SECURITY_ATTRIBUTES_INFORMATION;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,
* PSECURITY_CONTEXT_TRACKING_MODE;
typedef struct _SECURITY_QUALITY_OF_SERVICE {
DWORD Length;
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
BOOLEAN EffectiveOnly;
} SECURITY_QUALITY_OF_SERVICE, * PSECURITY_QUALITY_OF_SERVICE;
typedef struct _SE_IMPERSONATION_STATE {
PACCESS_TOKEN Token;
BOOLEAN CopyOnOpen;
BOOLEAN EffectiveOnly;
SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE;
typedef DWORD SECURITY_INFORMATION, *PSECURITY_INFORMATION;
typedef enum _SE_LEARNING_MODE_DATA_TYPE {
SeLearningModeInvalidType = 0,
SeLearningModeSettings,
SeLearningModeMax
} SE_LEARNING_MODE_DATA_TYPE;
typedef struct _SECURITY_CAPABILITIES {
PSID AppContainerSid;
PSID_AND_ATTRIBUTES Capabilities;
DWORD CapabilityCount;
DWORD Reserved;
} SECURITY_CAPABILITIES, *PSECURITY_CAPABILITIES, *LPSECURITY_CAPABILITIES;
#line 10695 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 10698 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 10704 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 10708 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 10727 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 10730 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _JOB_SET_ARRAY {
HANDLE JobHandle;   
DWORD MemberLevel;  
DWORD Flags;        
} JOB_SET_ARRAY, *PJOB_SET_ARRAY;
typedef struct _EXCEPTION_REGISTRATION_RECORD {
struct _EXCEPTION_REGISTRATION_RECORD *Next;
PEXCEPTION_ROUTINE Handler;
} EXCEPTION_REGISTRATION_RECORD;
typedef EXCEPTION_REGISTRATION_RECORD *PEXCEPTION_REGISTRATION_RECORD;
typedef struct _NT_TIB {
struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
PVOID StackBase;
PVOID StackLimit;
PVOID SubSystemTib;
union {
PVOID FiberData;
DWORD Version;
};
#line 10767 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
PVOID ArbitraryUserPointer;
struct _NT_TIB *Self;
} NT_TIB;
typedef NT_TIB *PNT_TIB;
typedef struct _NT_TIB32 {
DWORD ExceptionList;
DWORD StackBase;
DWORD StackLimit;
DWORD SubSystemTib;
union {
DWORD FiberData;
DWORD Version;
};
#line 10789 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
DWORD ArbitraryUserPointer;
DWORD Self;
} NT_TIB32, *PNT_TIB32;
typedef struct _NT_TIB64 {
DWORD64 ExceptionList;
DWORD64 StackBase;
DWORD64 StackLimit;
DWORD64 SubSystemTib;
union {
DWORD64 FiberData;
DWORD Version;
};
#line 10809 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
DWORD64 ArbitraryUserPointer;
DWORD64 Self;
} NT_TIB64, *PNT_TIB64;
typedef struct _UMS_CREATE_THREAD_ATTRIBUTES {  
DWORD UmsVersion;   
PVOID UmsContext;   
PVOID UmsCompletionList;   
} UMS_CREATE_THREAD_ATTRIBUTES, *PUMS_CREATE_THREAD_ATTRIBUTES; 
typedef struct _QUOTA_LIMITS {
SIZE_T PagedPoolLimit;
SIZE_T NonPagedPoolLimit;
SIZE_T MinimumWorkingSetSize;
SIZE_T MaximumWorkingSetSize;
SIZE_T PagefileLimit;
LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS;
typedef union _RATE_QUOTA_LIMIT {
DWORD RateData;
struct {
DWORD RatePercent : 7;
DWORD Reserved0   : 25;
} ;
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT;
typedef struct _QUOTA_LIMITS_EX {
SIZE_T PagedPoolLimit;
SIZE_T NonPagedPoolLimit;
SIZE_T MinimumWorkingSetSize;
SIZE_T MaximumWorkingSetSize;
SIZE_T PagefileLimit;               
LARGE_INTEGER TimeLimit;
SIZE_T WorkingSetLimit;             
SIZE_T Reserved2;
SIZE_T Reserved3;
SIZE_T Reserved4;
DWORD  Flags;
RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX;
typedef struct _IO_COUNTERS {
ULONGLONG  ReadOperationCount;
ULONGLONG  WriteOperationCount;
ULONGLONG  OtherOperationCount;
ULONGLONG ReadTransferCount;
ULONGLONG WriteTransferCount;
ULONGLONG OtherTransferCount;
} IO_COUNTERS;
typedef IO_COUNTERS *PIO_COUNTERS;
typedef enum _HARDWARE_COUNTER_TYPE {
PMCCounter,
MaxHardwareCounterType
} HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;
typedef enum _PROCESS_MITIGATION_POLICY {
ProcessDEPPolicy,
ProcessASLRPolicy,
ProcessReserved1MitigationPolicy,
ProcessStrictHandleCheckPolicy,
ProcessSystemCallDisablePolicy,
ProcessMitigationOptionsMask,
ProcessExtensionPointDisablePolicy,
MaxProcessMitigationPolicy
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;
typedef struct _PROCESS_MITIGATION_ASLR_POLICY {
union {
DWORD Flags;
struct {
DWORD EnableBottomUpRandomization : 1;
DWORD EnableForceRelocateImages : 1;
DWORD EnableHighEntropy : 1;
DWORD DisallowStrippedImages : 1;
DWORD ReservedFlags : 28;
};
};
} PROCESS_MITIGATION_ASLR_POLICY, *PPROCESS_MITIGATION_ASLR_POLICY;
typedef struct _PROCESS_MITIGATION_DEP_POLICY {
union {
DWORD Flags;
struct {
DWORD Enable : 1;
DWORD DisableAtlThunkEmulation : 1;
DWORD ReservedFlags : 30;
};
};
BOOLEAN Permanent;
} PROCESS_MITIGATION_DEP_POLICY, *PPROCESS_MITIGATION_DEP_POLICY;
typedef struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY {
union {
DWORD Flags;
struct {
DWORD RaiseExceptionOnInvalidHandleReference : 1;
DWORD HandleExceptionsPermanentlyEnabled : 1;
DWORD ReservedFlags : 30;
};
};
} PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY, *PPROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY;
typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY {
union {
DWORD Flags;
struct {
DWORD DisallowWin32kSystemCalls : 1;
DWORD ReservedFlags : 31;
};
};
} PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY;
typedef struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY {
union {
DWORD Flags;
struct {
DWORD DisableExtensionPoints : 1;
DWORD ReservedFlags : 31;
};
};
} PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY, *PPROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY;
typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION {
LARGE_INTEGER TotalUserTime;
LARGE_INTEGER TotalKernelTime;
LARGE_INTEGER ThisPeriodTotalUserTime;
LARGE_INTEGER ThisPeriodTotalKernelTime;
DWORD TotalPageFaultCount;
DWORD TotalProcesses;
DWORD ActiveProcesses;
DWORD TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION {
LARGE_INTEGER PerProcessUserTimeLimit;
LARGE_INTEGER PerJobUserTimeLimit;
DWORD LimitFlags;
SIZE_T MinimumWorkingSetSize;
SIZE_T MaximumWorkingSetSize;
DWORD ActiveProcessLimit;
ULONG_PTR Affinity;
DWORD PriorityClass;
DWORD SchedulingClass;
} JOBOBJECT_BASIC_LIMIT_INFORMATION, *PJOBOBJECT_BASIC_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION {
JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
IO_COUNTERS IoInfo;
SIZE_T ProcessMemoryLimit;
SIZE_T JobMemoryLimit;
SIZE_T PeakProcessMemoryUsed;
SIZE_T PeakJobMemoryUsed;
} JOBOBJECT_EXTENDED_LIMIT_INFORMATION, *PJOBOBJECT_EXTENDED_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST {
DWORD NumberOfAssignedProcesses;
DWORD NumberOfProcessIdsInList;
ULONG_PTR ProcessIdList[1];
} JOBOBJECT_BASIC_PROCESS_ID_LIST, *PJOBOBJECT_BASIC_PROCESS_ID_LIST;
typedef struct _JOBOBJECT_BASIC_UI_RESTRICTIONS {
DWORD UIRestrictionsClass;
} JOBOBJECT_BASIC_UI_RESTRICTIONS, *PJOBOBJECT_BASIC_UI_RESTRICTIONS;
typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION {
DWORD SecurityLimitFlags ;
HANDLE JobToken ;
PTOKEN_GROUPS SidsToDisable ;
PTOKEN_PRIVILEGES PrivilegesToDelete ;
PTOKEN_GROUPS RestrictedSids ;
} JOBOBJECT_SECURITY_LIMIT_INFORMATION, *PJOBOBJECT_SECURITY_LIMIT_INFORMATION ;
typedef struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION {
DWORD EndOfJobTimeAction;
} JOBOBJECT_END_OF_JOB_TIME_INFORMATION, *PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;
typedef struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT {
PVOID CompletionKey;
HANDLE CompletionPort;
} JOBOBJECT_ASSOCIATE_COMPLETION_PORT, *PJOBOBJECT_ASSOCIATE_COMPLETION_PORT;
typedef struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION {
JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
IO_COUNTERS IoInfo;
} JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_JOBSET_INFORMATION {
DWORD MemberLevel;
} JOBOBJECT_JOBSET_INFORMATION, *PJOBOBJECT_JOBSET_INFORMATION;
typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE {
ToleranceLow = 1,
ToleranceMedium,
ToleranceHigh
} JOBOBJECT_RATE_CONTROL_TOLERANCE;
typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL {
ToleranceIntervalShort = 1,
ToleranceIntervalMedium,
ToleranceIntervalLong
} JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL;
typedef struct _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION {
DWORD64 IoReadBytesLimit;
DWORD64 IoWriteBytesLimit;
LARGE_INTEGER PerJobUserTimeLimit;
DWORD64 JobMemoryLimit;
JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL RateControlToleranceInterval;
DWORD LimitFlags;
} JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION, *PJOBOBJECT_NOTIFICATION_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_LIMIT_VIOLATION_INFORMATION {
DWORD LimitFlags;
DWORD ViolationLimitFlags;
DWORD64 IoReadBytes;
DWORD64 IoReadBytesLimit;
DWORD64 IoWriteBytes;
DWORD64 IoWriteBytesLimit;
LARGE_INTEGER PerJobUserTime;
LARGE_INTEGER PerJobUserTimeLimit;
DWORD64 JobMemory;
DWORD64 JobMemoryLimit;
JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL RateControlToleranceLimit;
} JOBOBJECT_LIMIT_VIOLATION_INFORMATION, *PJOBOBJECT_LIMIT_VIOLATION_INFORMATION;
typedef struct _JOBOBJECT_CPU_RATE_CONTROL_INFORMATION {
DWORD ControlFlags;
union {
DWORD CpuRate;
DWORD Weight;
};
} JOBOBJECT_CPU_RATE_CONTROL_INFORMATION, *PJOBOBJECT_CPU_RATE_CONTROL_INFORMATION;
typedef enum _JOBOBJECTINFOCLASS {
JobObjectBasicAccountingInformation = 1,
JobObjectBasicLimitInformation,
JobObjectBasicProcessIdList,
JobObjectBasicUIRestrictions,
JobObjectSecurityLimitInformation,  
JobObjectEndOfJobTimeInformation,
JobObjectAssociateCompletionPortInformation,
JobObjectBasicAndIoAccountingInformation,
JobObjectExtendedLimitInformation,
JobObjectJobSetInformation,
JobObjectGroupInformation,
JobObjectNotificationLimitInformation,
JobObjectLimitViolationInformation,
JobObjectGroupInformationEx,
JobObjectCpuRateControlInformation,
JobObjectCompletionFilter,
JobObjectCompletionCounter,
JobObjectReserved1Information = 18,
JobObjectReserved2Information,
JobObjectReserved3Information,
JobObjectReserved4Information,
JobObjectReserved5Information,
JobObjectReserved6Information,
JobObjectReserved7Information,
JobObjectReserved8Information,
MaxJobObjectInfoClass
} JOBOBJECTINFOCLASS;
typedef enum _FIRMWARE_TYPE {
FirmwareTypeUnknown,
FirmwareTypeBios,
FirmwareTypeUefi,
FirmwareTypeMax
} FIRMWARE_TYPE, *PFIRMWARE_TYPE;
typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
RelationProcessorCore,
RelationNumaNode,
RelationCache,
RelationProcessorPackage,
RelationGroup,
RelationAll = 0xffff
} LOGICAL_PROCESSOR_RELATIONSHIP;
typedef enum _PROCESSOR_CACHE_TYPE {
CacheUnified,
CacheInstruction,
CacheData,
CacheTrace
} PROCESSOR_CACHE_TYPE;
typedef struct _CACHE_DESCRIPTOR {
BYTE   Level;
BYTE   Associativity;
WORD   LineSize;
DWORD  Size;
PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
ULONG_PTR   ProcessorMask;
LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
union {
struct {
BYTE  Flags;
} ProcessorCore;
struct {
DWORD NodeNumber;
} NumaNode;
CACHE_DESCRIPTOR Cache;
ULONGLONG  Reserved[2];
} ;
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;
typedef struct _PROCESSOR_RELATIONSHIP {
BYTE  Flags;
BYTE  Reserved[21];
WORD   GroupCount;
GROUP_AFFINITY GroupMask[1];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP;
typedef struct _NUMA_NODE_RELATIONSHIP {
DWORD NodeNumber;
BYTE  Reserved[20];
GROUP_AFFINITY GroupMask;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP;
typedef struct _CACHE_RELATIONSHIP {
BYTE  Level;
BYTE  Associativity;
WORD   LineSize;
DWORD CacheSize;
PROCESSOR_CACHE_TYPE Type;
BYTE  Reserved[20];
GROUP_AFFINITY GroupMask;
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP;
typedef struct _PROCESSOR_GROUP_INFO {
BYTE  MaximumProcessorCount;
BYTE  ActiveProcessorCount;
BYTE  Reserved[38];
KAFFINITY ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO;
typedef struct _GROUP_RELATIONSHIP {
WORD   MaximumGroupCount;
WORD   ActiveGroupCount;
BYTE  Reserved[20];
PROCESSOR_GROUP_INFO GroupInfo[1];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP;
struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX {
LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
DWORD Size;
union {
PROCESSOR_RELATIONSHIP Processor;
NUMA_NODE_RELATIONSHIP NumaNode;
CACHE_RELATIONSHIP Cache;
GROUP_RELATIONSHIP Group;
} ;
};
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;
typedef struct _SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION {
DWORD64 CycleTime;
} SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION, *PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION;
typedef struct _XSTATE_FEATURE {
DWORD Offset;
DWORD Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE;
typedef struct _XSTATE_CONFIGURATION {
DWORD64 EnabledFeatures;
DWORD64 EnabledVolatileFeatures;
DWORD Size;
DWORD OptimizedSave : 1;
XSTATE_FEATURE Features[(64)];
} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION;
typedef struct _MEMORY_BASIC_INFORMATION {
PVOID BaseAddress;
PVOID AllocationBase;
DWORD AllocationProtect;
SIZE_T RegionSize;
DWORD State;
DWORD Protect;
DWORD Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;
typedef struct _MEMORY_BASIC_INFORMATION32 {
DWORD BaseAddress;
DWORD AllocationBase;
DWORD AllocationProtect;
DWORD RegionSize;
DWORD State;
DWORD Protect;
DWORD Type;
} MEMORY_BASIC_INFORMATION32, *PMEMORY_BASIC_INFORMATION32;
typedef struct __declspec(align(16)) _MEMORY_BASIC_INFORMATION64 {
ULONGLONG BaseAddress;
ULONGLONG AllocationBase;
DWORD     AllocationProtect;
DWORD     __alignment1;
ULONGLONG RegionSize;
DWORD     State;
DWORD     Protect;
DWORD     Type;
DWORD     __alignment2;
} MEMORY_BASIC_INFORMATION64, *PMEMORY_BASIC_INFORMATION64;
#pragma region Desktop Family           
#line 11528 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion                       
typedef struct _FILE_ID_128 {                               
BYTE  Identifier[16];                                   
} FILE_ID_128, *PFILE_ID_128;                               
typedef struct _FILE_NOTIFY_INFORMATION {
DWORD NextEntryOffset;
DWORD Action;
DWORD FileNameLength;
WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;
typedef union _FILE_SEGMENT_ELEMENT {
PVOID64 Buffer;
ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
#line 11747 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _REPARSE_GUID_DATA_BUFFER {
DWORD  ReparseTag;
WORD   ReparseDataLength;
WORD   Reserved;
GUID   ReparseGuid;
struct {
BYTE   DataBuffer[1];
} GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;
#line 11975 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  GUID_MAX_POWER_SAVINGS;
extern const GUID  GUID_MIN_POWER_SAVINGS;
extern const GUID  GUID_TYPICAL_POWER_SAVINGS;
extern const GUID  NO_SUBGROUP_GUID;
extern const GUID  ALL_POWERSCHEMES_GUID;
extern const GUID  GUID_POWERSCHEME_PERSONALITY;
extern const GUID  GUID_ACTIVE_POWERSCHEME;
extern const GUID  GUID_IDLE_RESILIENCY_SUBGROUP;
extern const GUID  GUID_IDLE_RESILIENCY_PERIOD;
extern const GUID  GUID_DISK_COALESCING_POWERDOWN_TIMEOUT;
extern const GUID  GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT;
extern const GUID  GUID_VIDEO_SUBGROUP;
extern const GUID  GUID_VIDEO_POWERDOWN_TIMEOUT;
extern const GUID  GUID_VIDEO_ANNOYANCE_TIMEOUT;
extern const GUID  GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE;
extern const GUID  GUID_VIDEO_DIM_TIMEOUT;
extern const GUID  GUID_VIDEO_ADAPTIVE_POWERDOWN;
extern const GUID  GUID_MONITOR_POWER_ON;
extern const GUID  GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
extern const GUID  GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS;
extern const GUID  GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;
extern const GUID  GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS;
extern const GUID  GUID_CONSOLE_DISPLAY_STATE;
extern const GUID  GUID_ALLOW_DISPLAY_REQUIRED;
extern const GUID  GUID_VIDEO_CONSOLE_LOCK_TIMEOUT;
extern const GUID  GUID_ADAPTIVE_POWER_BEHAVIOR_SUBGROUP;
extern const GUID  GUID_NON_ADAPTIVE_INPUT_TIMEOUT;
extern const GUID  GUID_DISK_SUBGROUP;
extern const GUID  GUID_DISK_POWERDOWN_TIMEOUT;
extern const GUID  GUID_DISK_IDLE_TIMEOUT;
extern const GUID  GUID_DISK_BURST_IGNORE_THRESHOLD;
extern const GUID  GUID_DISK_ADAPTIVE_POWERDOWN;
extern const GUID  GUID_SLEEP_SUBGROUP;
extern const GUID  GUID_SLEEP_IDLE_THRESHOLD;
extern const GUID  GUID_STANDBY_TIMEOUT;
extern const GUID  GUID_UNATTEND_SLEEP_TIMEOUT;
extern const GUID  GUID_HIBERNATE_TIMEOUT;
extern const GUID  GUID_HIBERNATE_FASTS4_POLICY;
extern const GUID  GUID_CRITICAL_POWER_TRANSITION;
extern const GUID  GUID_SYSTEM_AWAYMODE;
extern const GUID  GUID_ALLOW_AWAYMODE;
extern const GUID  GUID_ALLOW_STANDBY_STATES;
extern const GUID  GUID_ALLOW_RTC_WAKE;
extern const GUID  GUID_ALLOW_SYSTEM_REQUIRED;
extern const GUID  GUID_SYSTEM_BUTTON_SUBGROUP;
extern const GUID  GUID_POWERBUTTON_ACTION;
extern const GUID  GUID_SLEEPBUTTON_ACTION;
extern const GUID  GUID_USERINTERFACEBUTTON_ACTION;
extern const GUID  GUID_LIDCLOSE_ACTION;
extern const GUID  GUID_LIDOPEN_POWERSTATE;
extern const GUID  GUID_BATTERY_SUBGROUP;
extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_0;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_0;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_0;
extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_1;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_1;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_1;
extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_2;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_2;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_2;
extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_3;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_3;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_3;
extern const GUID  GUID_PROCESSOR_SETTINGS_SUBGROUP;
extern const GUID  GUID_PROCESSOR_THROTTLE_POLICY;
extern const GUID  GUID_PROCESSOR_THROTTLE_MAXIMUM;
extern const GUID  GUID_PROCESSOR_THROTTLE_MINIMUM;
extern const GUID  GUID_PROCESSOR_ALLOW_THROTTLING;
extern const GUID  GUID_PROCESSOR_IDLESTATE_POLICY;
extern const GUID  GUID_PROCESSOR_PERFSTATE_POLICY;
extern const GUID  GUID_PROCESSOR_PERF_INCREASE_THRESHOLD;
extern const GUID  GUID_PROCESSOR_PERF_DECREASE_THRESHOLD;
extern const GUID  GUID_PROCESSOR_PERF_INCREASE_POLICY;
extern const GUID  GUID_PROCESSOR_PERF_DECREASE_POLICY;
extern const GUID  GUID_PROCESSOR_PERF_INCREASE_TIME;
extern const GUID  GUID_PROCESSOR_PERF_DECREASE_TIME;
extern const GUID  GUID_PROCESSOR_PERF_TIME_CHECK;
extern const GUID  GUID_PROCESSOR_PERF_BOOST_POLICY;
#line 12560 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  GUID_PROCESSOR_PERF_BOOST_MODE;
#line 12572 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  GUID_PROCESSOR_IDLE_ALLOW_SCALING;
extern const GUID  GUID_PROCESSOR_IDLE_DISABLE;
extern const GUID  GUID_PROCESSOR_IDLE_STATE_MAXIMUM;
extern const GUID  GUID_PROCESSOR_IDLE_TIME_CHECK;
extern const GUID  GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD;
extern const GUID  GUID_PROCESSOR_IDLE_PROMOTE_THRESHOLD;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_THRESHOLD;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_POLICY;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_POLICY;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_MAX_CORES;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_MIN_CORES;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_TIME;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_TIME;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_DECREASE_FACTOR;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_THRESHOLD;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_WEIGHTING;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_DECREASE_FACTOR;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_THRESHOLD;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING;
extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_THRESHOLD;
extern const GUID  GUID_PROCESSOR_PARKING_CORE_OVERRIDE;
extern const GUID  GUID_PROCESSOR_PARKING_PERF_STATE;
extern const GUID  GUID_PROCESSOR_PARKING_CONCURRENCY_THRESHOLD;
extern const GUID  GUID_PROCESSOR_PARKING_HEADROOM_THRESHOLD;
extern const GUID  GUID_PROCESSOR_PERF_HISTORY;
extern const GUID  GUID_PROCESSOR_PERF_LATENCY_HINT;
extern const GUID  GUID_PROCESSOR_DISTRIBUTE_UTILITY;
extern const GUID  GUID_SYSTEM_COOLING_POLICY;
extern const GUID  GUID_LOCK_CONSOLE_ON_WAKE;
extern const GUID  GUID_DEVICE_IDLE_POLICY;
extern const GUID  GUID_ACDC_POWER_SOURCE;
extern const GUID  GUID_LIDSWITCH_STATE_CHANGE;
extern const GUID  GUID_BATTERY_PERCENTAGE_REMAINING;
extern const GUID  GUID_GLOBAL_USER_PRESENCE;
extern const GUID  GUID_SESSION_DISPLAY_STATUS;
extern const GUID  GUID_SESSION_USER_PRESENCE;
extern const GUID  GUID_IDLE_BACKGROUND_TASK;
extern const GUID  GUID_BACKGROUND_TASK_NOTIFICATION;
extern const GUID  GUID_APPLAUNCH_BUTTON;
extern const GUID  GUID_PCIEXPRESS_SETTINGS_SUBGROUP;
extern const GUID  GUID_PCIEXPRESS_ASPM_POLICY;
extern const GUID  GUID_ENABLE_SWITCH_FORCED_SHUTDOWN;
typedef enum _SYSTEM_POWER_STATE {
PowerSystemUnspecified = 0,
PowerSystemWorking     = 1,
PowerSystemSleeping1   = 2,
PowerSystemSleeping2   = 3,
PowerSystemSleeping3   = 4,
PowerSystemHibernate   = 5,
PowerSystemShutdown    = 6,
PowerSystemMaximum     = 7
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;
typedef enum {
PowerActionNone = 0,
PowerActionReserved,
PowerActionSleep,
PowerActionHibernate,
PowerActionShutdown,
PowerActionShutdownReset,
PowerActionShutdownOff,
PowerActionWarmEject
} POWER_ACTION, *PPOWER_ACTION;
typedef enum _DEVICE_POWER_STATE {
PowerDeviceUnspecified = 0,
PowerDeviceD0,
PowerDeviceD1,
PowerDeviceD2,
PowerDeviceD3,
PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;
typedef enum _MONITOR_DISPLAY_STATE {
PowerMonitorOff = 0,
PowerMonitorOn,
PowerMonitorDim
} MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;
typedef enum _USER_ACTIVITY_PRESENCE {
PowerUserPresent = 0,
PowerUserNotPresent,
PowerUserInactive,
PowerUserMaximum,
PowerUserInvalid = PowerUserMaximum
} USER_ACTIVITY_PRESENCE, *PUSER_ACTIVITY_PRESENCE;
typedef DWORD EXECUTION_STATE, *PEXECUTION_STATE;
typedef enum {
LT_DONT_CARE,
LT_LOWEST_LATENCY
} LATENCY_TIME;
typedef enum _POWER_REQUEST_TYPE {
PowerRequestDisplayRequired,
PowerRequestSystemRequired,
PowerRequestAwayModeRequired,
PowerRequestExecutionRequired
} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;
typedef struct CM_Power_Data_s {
DWORD               PD_Size;
DEVICE_POWER_STATE  PD_MostRecentPowerState;
DWORD               PD_Capabilities;
DWORD               PD_D1Latency;
DWORD               PD_D2Latency;
DWORD               PD_D3Latency;
DEVICE_POWER_STATE  PD_PowerStateMapping[7];
SYSTEM_POWER_STATE  PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;
#line 13074 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef enum {
SystemPowerPolicyAc,
SystemPowerPolicyDc,
VerifySystemPolicyAc,
VerifySystemPolicyDc,
SystemPowerCapabilities,
SystemBatteryState,
SystemPowerStateHandler,
ProcessorStateHandler,
SystemPowerPolicyCurrent,
AdministratorPowerPolicy,
SystemReserveHiberFile,
ProcessorInformation,
SystemPowerInformation,
ProcessorStateHandler2,
LastWakeTime,                                   
LastSleepTime,                                  
SystemExecutionState,
SystemPowerStateNotifyHandler,
ProcessorPowerPolicyAc,
ProcessorPowerPolicyDc,
VerifyProcessorPowerPolicyAc,
VerifyProcessorPowerPolicyDc,
ProcessorPowerPolicyCurrent,
SystemPowerStateLogging,
SystemPowerLoggingEntry,
SetPowerSettingValue,
NotifyUserPowerSetting,
PowerInformationLevelUnused0,
SystemMonitorHiberBootPowerOff,
SystemVideoState,
TraceApplicationPowerMessage,
TraceApplicationPowerMessageEnd,
ProcessorPerfStates,
ProcessorIdleStates,
ProcessorCap,
SystemWakeSource,
SystemHiberFileInformation,
TraceServicePowerMessage,
ProcessorLoad,
PowerShutdownNotification,
MonitorCapabilities,
SessionPowerInit,
SessionDisplayState,
PowerRequestCreate,
PowerRequestAction,
GetPowerRequestList,
ProcessorInformationEx,
NotifyUserModeLegacyPowerEvent,
GroupPark,
ProcessorIdleDomains,
WakeTimerList,
SystemHiberFileSize,
ProcessorIdleStatesHv,
ProcessorPerfStatesHv,
ProcessorPerfCapHv,
ProcessorSetIdle,
LogicalProcessorIdling,
UserPresence, 
PowerSettingNotificationName,
GetPowerSettingValue,
IdleResiliency,
SessionRITState,
SessionConnectNotification,
SessionPowerCleanup,
SessionLockState,
SystemHiberbootState,
PlatformInformation,
PdcInvocation,
MonitorInvocation,
FirmwareTableInformationRegistered,
SetShutdownSelectedTime,
SuspendResumeInvocation,
PlmPowerRequestCreate,
ScreenOff,
CsDeviceNotification,
PlatformRole,
LastResumePerformance,
DisplayBurst,
ExitLatencySamplingPercentage,
ApplyLowPowerScenarioSettings,
PowerInformationLevelMaximum
} POWER_INFORMATION_LEVEL;
typedef enum {
UserNotPresent = 0,
UserPresent = 1,
UserUnknown = 0xff
} POWER_USER_PRESENCE_TYPE, *PPOWER_USER_PRESENCE_TYPE;
typedef struct _POWER_USER_PRESENCE {
POWER_USER_PRESENCE_TYPE UserPresence;
} POWER_USER_PRESENCE, *PPOWER_USER_PRESENCE;
typedef struct _POWER_SESSION_CONNECT {
BOOLEAN Connected;  
BOOLEAN Console;    
} POWER_SESSION_CONNECT, *PPOWER_SESSION_CONNECT;
typedef struct _POWER_SESSION_TIMEOUTS {
DWORD InputTimeout;
DWORD DisplayTimeout;
} POWER_SESSION_TIMEOUTS, *PPOWER_SESSION_TIMEOUTS;
typedef struct _POWER_SESSION_RIT_STATE {
BOOLEAN Active;  
DWORD LastInputTime; 
} POWER_SESSION_RIT_STATE, *PPOWER_SESSION_RIT_STATE;
typedef struct _POWER_SESSION_WINLOGON {
DWORD SessionId; 
BOOLEAN Console; 
BOOLEAN Locked; 
} POWER_SESSION_WINLOGON, *PPOWER_SESSION_WINLOGON;
typedef struct _POWER_IDLE_RESILIENCY {
DWORD CoalescingTimeout; 
DWORD IdleResiliencyPeriod; 
} POWER_IDLE_RESILIENCY, *PPOWER_IDLE_RESILIENCY;
typedef enum {
MonitorRequestReasonUnknown,
MonitorRequestReasonPowerButton,
MonitorRequestReasonRemoteConnection,
MonitorRequestReasonScMonitorpower,
MonitorRequestReasonUserInput,
MonitorRequestReasonAcDcDisplayBurst,
MonitorRequestReasonUserDisplayBurst,
MonitorRequestReasonPoSetSystemState,
MonitorRequestReasonSetThreadExecutionState,
MonitorRequestReasonFullWake,
MonitorRequestReasonSessionUnlock,
MonitorRequestReasonScreenOffRequest,
MonitorRequestReasonIdleTimeout,
MonitorRequestReasonPolicyChange,
MonitorRequestReasonMax
} POWER_MONITOR_REQUEST_REASON;
typedef struct _POWER_MONITOR_INVOCATION {
BOOLEAN On; 
BOOLEAN Console;
POWER_MONITOR_REQUEST_REASON RequestReason;
} POWER_MONITOR_INVOCATION, *PPOWER_MONITOR_INVOCATION;
typedef struct _RESUME_PERFORMANCE {
DWORD PostTimeMs;
ULONGLONG TotalResumeTimeMs;
ULONGLONG ResumeCompleteTimestamp;
} RESUME_PERFORMANCE, *PRESUME_PERFORMANCE;
typedef enum {
PoAc,
PoDc,
PoHot,
PoConditionMaximum
} SYSTEM_POWER_CONDITION;
typedef struct {
DWORD       Version;
GUID        Guid;
SYSTEM_POWER_CONDITION PowerCondition;
DWORD       DataLength;
BYTE    Data[1];
} SET_POWER_SETTING_VALUE, *PSET_POWER_SETTING_VALUE;
typedef struct {
GUID Guid;
} NOTIFY_USER_POWER_SETTING, *PNOTIFY_USER_POWER_SETTING;
typedef struct _APPLICATIONLAUNCH_SETTING_VALUE {
LARGE_INTEGER       ActivationTime;
DWORD               Flags;
DWORD               ButtonInstanceID;
} APPLICATIONLAUNCH_SETTING_VALUE, *PAPPLICATIONLAUNCH_SETTING_VALUE;
typedef enum _POWER_PLATFORM_ROLE {
PlatformRoleUnspecified = 0,
PlatformRoleDesktop,
PlatformRoleMobile,
PlatformRoleWorkstation,
PlatformRoleEnterpriseServer,
PlatformRoleSOHOServer,
PlatformRoleAppliancePC,
PlatformRolePerformanceServer, 
PlatformRoleSlate,             
PlatformRoleMaximum
} POWER_PLATFORM_ROLE, *PPOWER_PLATFORM_ROLE;
#line 13357 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 13362 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _POWER_PLATFORM_INFORMATION {
BOOLEAN AoAc;
} POWER_PLATFORM_INFORMATION, *PPOWER_PLATFORM_INFORMATION;
typedef struct {
DWORD       Granularity;
DWORD       Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;
#line 13377 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct {
DWORD   Frequency;
DWORD   Flags;
DWORD   PercentFrequency;
} PPM_WMI_LEGACY_PERFSTATE, *PPPM_WMI_LEGACY_PERFSTATE;
typedef struct {
DWORD Latency;
DWORD Power;
DWORD TimeCheck;
BYTE  PromotePercent;
BYTE  DemotePercent;
BYTE  StateType;
BYTE  Reserved;
DWORD StateFlags;
DWORD Context;
DWORD IdleHandler;
DWORD Reserved1;            
} PPM_WMI_IDLE_STATE, *PPPM_WMI_IDLE_STATE;
typedef struct {
DWORD Type;
DWORD Count;
DWORD TargetState;          
DWORD OldState;             
DWORD64 TargetProcessors;
PPM_WMI_IDLE_STATE State[1];
} PPM_WMI_IDLE_STATES, *PPPM_WMI_IDLE_STATES;
typedef struct {
DWORD Type;
DWORD Count;
DWORD TargetState;          
DWORD OldState;             
PVOID TargetProcessors;
PPM_WMI_IDLE_STATE State[1];
} PPM_WMI_IDLE_STATES_EX, *PPPM_WMI_IDLE_STATES_EX;
typedef struct {
DWORD Frequency;            
DWORD Power;                
BYTE  PercentFrequency;
BYTE  IncreaseLevel;        
BYTE  DecreaseLevel;        
BYTE  Type;                 
DWORD IncreaseTime;         
DWORD DecreaseTime;         
DWORD64 Control;            
DWORD64 Status;             
DWORD HitCount;
DWORD Reserved1;            
DWORD64 Reserved2;
DWORD64 Reserved3;
} PPM_WMI_PERF_STATE, *PPPM_WMI_PERF_STATE;
typedef struct {
DWORD Count;
DWORD MaxFrequency;
DWORD CurrentState;         
DWORD MaxPerfState;         
DWORD MinPerfState;         
DWORD LowestPerfState;      
DWORD ThermalConstraint;
BYTE  BusyAdjThreshold;
BYTE  PolicyType;           
BYTE  Type;
BYTE  Reserved;
DWORD TimerInterval;
DWORD64 TargetProcessors;   
DWORD PStateHandler;
DWORD PStateContext;
DWORD TStateHandler;
DWORD TStateContext;
DWORD FeedbackHandler;
DWORD Reserved1;
DWORD64 Reserved2;
PPM_WMI_PERF_STATE State[1];
} PPM_WMI_PERF_STATES, *PPPM_WMI_PERF_STATES;
typedef struct {
DWORD Count;
DWORD MaxFrequency;
DWORD CurrentState;         
DWORD MaxPerfState;         
DWORD MinPerfState;         
DWORD LowestPerfState;      
DWORD ThermalConstraint;
BYTE  BusyAdjThreshold;
BYTE  PolicyType;           
BYTE  Type;
BYTE  Reserved;
DWORD TimerInterval;
PVOID TargetProcessors;     
DWORD PStateHandler;
DWORD PStateContext;
DWORD TStateHandler;
DWORD TStateContext;
DWORD FeedbackHandler;
DWORD Reserved1;
DWORD64 Reserved2;
PPM_WMI_PERF_STATE State[1];
} PPM_WMI_PERF_STATES_EX, *PPPM_WMI_PERF_STATES_EX;
typedef struct {
DWORD IdleTransitions;
DWORD FailedTransitions;
DWORD InvalidBucketIndex;
DWORD64 TotalTime;
DWORD IdleTimeBuckets[6];
} PPM_IDLE_STATE_ACCOUNTING, *PPPM_IDLE_STATE_ACCOUNTING;
typedef struct {
DWORD StateCount;
DWORD TotalTransitions;
DWORD ResetCount;
DWORD64 StartTime;
PPM_IDLE_STATE_ACCOUNTING State[1];
} PPM_IDLE_ACCOUNTING, *PPPM_IDLE_ACCOUNTING;
typedef struct {
DWORD64 TotalTimeUs;
DWORD MinTimeUs;
DWORD MaxTimeUs;
DWORD Count;
} PPM_IDLE_STATE_BUCKET_EX, *PPPM_IDLE_STATE_BUCKET_EX;
typedef struct {
DWORD64 TotalTime;
DWORD IdleTransitions;
DWORD FailedTransitions;
DWORD InvalidBucketIndex;
DWORD MinTimeUs;
DWORD MaxTimeUs;
DWORD CancelledTransitions;
PPM_IDLE_STATE_BUCKET_EX IdleTimeBuckets[16];
} PPM_IDLE_STATE_ACCOUNTING_EX, *PPPM_IDLE_STATE_ACCOUNTING_EX;
typedef struct {
DWORD StateCount;
DWORD TotalTransitions;
DWORD ResetCount;
DWORD AbortCount;
DWORD64 StartTime;
PPM_IDLE_STATE_ACCOUNTING_EX State[1];
} PPM_IDLE_ACCOUNTING_EX, *PPPM_IDLE_ACCOUNTING_EX;
extern const GUID  PPM_PERFSTATE_CHANGE_GUID;
#line 13598 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_PERFSTATE_DOMAIN_CHANGE_GUID;
#line 13602 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_IDLESTATE_CHANGE_GUID;
#line 13606 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_PERFSTATES_DATA_GUID;
#line 13610 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_IDLESTATES_DATA_GUID;
#line 13614 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_IDLE_ACCOUNTING_GUID;
#line 13618 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_IDLE_ACCOUNTING_EX_GUID;
#line 13622 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_THERMALCONSTRAINT_GUID;
#line 13626 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_PERFMON_PERFSTATE_GUID;
#line 13630 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
extern const GUID  PPM_THERMAL_POLICY_CHANGE_GUID;
#line 13634 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct {
DWORD State;
DWORD Status;
DWORD Latency;
DWORD Speed;
DWORD Processor;
} PPM_PERFSTATE_EVENT, *PPPM_PERFSTATE_EVENT;
typedef struct {
DWORD State;
DWORD Latency;
DWORD Speed;
DWORD64 Processors;
} PPM_PERFSTATE_DOMAIN_EVENT, *PPPM_PERFSTATE_DOMAIN_EVENT;
typedef struct {
DWORD NewState;
DWORD OldState;
DWORD64 Processors;
} PPM_IDLESTATE_EVENT, *PPPM_IDLESTATE_EVENT;
typedef struct {
DWORD ThermalConstraint;
DWORD64 Processors;
} PPM_THERMALCHANGE_EVENT, *PPPM_THERMALCHANGE_EVENT;
#pragma warning(push)
#pragma warning(disable:4121)
typedef struct {
BYTE  Mode;
DWORD64 Processors;
} PPM_THERMAL_POLICY_EVENT, *PPPM_THERMAL_POLICY_EVENT;
#pragma warning(pop)
typedef struct {
POWER_ACTION    Action;
DWORD           Flags;
DWORD           EventCode;
} POWER_ACTION_POLICY, *PPOWER_ACTION_POLICY;
typedef struct {
BOOLEAN                 Enable;
BYTE                    Spare[3];
DWORD                   BatteryLevel;
POWER_ACTION_POLICY     PowerPolicy;
SYSTEM_POWER_STATE      MinSystemState;
} SYSTEM_POWER_LEVEL, *PSYSTEM_POWER_LEVEL;
typedef struct _SYSTEM_POWER_POLICY {
DWORD                   Revision;       
POWER_ACTION_POLICY     PowerButton;
POWER_ACTION_POLICY     SleepButton;
POWER_ACTION_POLICY     LidClose;
SYSTEM_POWER_STATE      LidOpenWake;
DWORD                   Reserved;
POWER_ACTION_POLICY     Idle;
DWORD                   IdleTimeout;
BYTE                    IdleSensitivity;
BYTE                    DynamicThrottle;
BYTE                    Spare2[2];
SYSTEM_POWER_STATE      MinSleep;
SYSTEM_POWER_STATE      MaxSleep;
SYSTEM_POWER_STATE      ReducedLatencySleep;
DWORD                   WinLogonFlags;
DWORD                   Spare3;
DWORD                   DozeS4Timeout;
DWORD                   BroadcastCapacityResolution;
SYSTEM_POWER_LEVEL      DischargePolicy[4];
DWORD                   VideoTimeout;
BOOLEAN                 VideoDimDisplay;
DWORD                   VideoReserved[3];
DWORD                   SpindownTimeout;
BOOLEAN                 OptimizeForPower;
BYTE                    FanThrottleTolerance;
BYTE                    ForcedThrottle;
BYTE                    MinThrottle;
POWER_ACTION_POLICY     OverThrottled;
} SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY;
typedef struct {
DWORD TimeCheck;
BYTE  DemotePercent;
BYTE  PromotePercent;
BYTE  Spare[2];
} PROCESSOR_IDLESTATE_INFO, *PPROCESSOR_IDLESTATE_INFO;
typedef struct {
WORD   Revision;
union {
WORD   AsWORD  ;
struct {
WORD   AllowScaling : 1;
WORD   Disabled : 1;
WORD   Reserved : 14;
} ;
} Flags;
DWORD PolicyCount;
PROCESSOR_IDLESTATE_INFO Policy[0x3];
} PROCESSOR_IDLESTATE_POLICY, *PPROCESSOR_IDLESTATE_POLICY;
typedef struct _PROCESSOR_POWER_POLICY_INFO {
DWORD                   TimeCheck;                      
DWORD                   DemoteLimit;                    
DWORD                   PromoteLimit;                   
BYTE                    DemotePercent;
BYTE                    PromotePercent;
BYTE                    Spare[2];
DWORD                   AllowDemotion:1;
DWORD                   AllowPromotion:1;
DWORD                   Reserved:30;
} PROCESSOR_POWER_POLICY_INFO, *PPROCESSOR_POWER_POLICY_INFO;
typedef struct _PROCESSOR_POWER_POLICY {
DWORD                       Revision;       
BYTE                        DynamicThrottle;
BYTE                        Spare[3];
DWORD                       DisableCStates:1;
DWORD                       Reserved:31;
DWORD                       PolicyCount;
PROCESSOR_POWER_POLICY_INFO Policy[3];
} PROCESSOR_POWER_POLICY, *PPROCESSOR_POWER_POLICY;
typedef struct {
DWORD Revision;
BYTE  MaxThrottle;
BYTE  MinThrottle;
BYTE  BusyAdjThreshold;
union {
BYTE  Spare;
union {
BYTE  AsBYTE ;
struct {
BYTE  NoDomainAccounting : 1;
BYTE  IncreasePolicy: 2;
BYTE  DecreasePolicy: 2;
BYTE  Reserved : 3;
} ;
} Flags;
} ;
DWORD TimeCheck;
DWORD IncreaseTime;
DWORD DecreaseTime;
DWORD IncreasePercent;
DWORD DecreasePercent;
} PROCESSOR_PERFSTATE_POLICY, *PPROCESSOR_PERFSTATE_POLICY;
typedef struct _ADMINISTRATOR_POWER_POLICY {
SYSTEM_POWER_STATE      MinSleep;
SYSTEM_POWER_STATE      MaxSleep;
DWORD                   MinVideoTimeout;
DWORD                   MaxVideoTimeout;
DWORD                   MinSpindownTimeout;
DWORD                   MaxSpindownTimeout;
} ADMINISTRATOR_POWER_POLICY, *PADMINISTRATOR_POWER_POLICY;
typedef struct {
BOOLEAN             PowerButtonPresent;
BOOLEAN             SleepButtonPresent;
BOOLEAN             LidPresent;
BOOLEAN             SystemS1;
BOOLEAN             SystemS2;
BOOLEAN             SystemS3;
BOOLEAN             SystemS4;           
BOOLEAN             SystemS5;           
BOOLEAN             HiberFilePresent;
BOOLEAN             FullWake;
BOOLEAN             VideoDimPresent;
BOOLEAN             ApmPresent;
BOOLEAN             UpsPresent;
BOOLEAN             ThermalControl;
BOOLEAN             ProcessorThrottle;
BYTE                ProcessorMinThrottle;
#line 13932 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
BYTE                ProcessorMaxThrottle;
BOOLEAN             FastSystemS4;
BOOLEAN             Hiberboot;
BOOLEAN             WakeAlarmPresent;
BOOLEAN             AoAc;
#line 13938 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
BOOLEAN             DiskSpinDown;
BYTE                spare3[8];
BOOLEAN             SystemBatteriesPresent;
BOOLEAN             BatteriesAreShortTerm;
BATTERY_REPORTING_SCALE BatteryScale[3];
SYSTEM_POWER_STATE  AcOnLineWake;
SYSTEM_POWER_STATE  SoftLidWake;
SYSTEM_POWER_STATE  RtcWake;
SYSTEM_POWER_STATE  MinDeviceWakeState; 
SYSTEM_POWER_STATE  DefaultLowLatencyWake;
} SYSTEM_POWER_CAPABILITIES, *PSYSTEM_POWER_CAPABILITIES;
typedef struct {
BOOLEAN             AcOnLine;
BOOLEAN             BatteryPresent;
BOOLEAN             Charging;
BOOLEAN             Discharging;
BOOLEAN             Spare1[3];
BYTE                Tag;
DWORD               MaxCapacity;
DWORD               RemainingCapacity;
DWORD               Rate;
DWORD               EstimatedTime;
DWORD               DefaultAlert1;
DWORD               DefaultAlert2;
} SYSTEM_BATTERY_STATE, *PSYSTEM_BATTERY_STATE;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#pragma warning(disable:4103)
#pragma pack(push,4)
#line 30 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 34 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack4.h"
#line 13984 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#pragma warning(disable:4103)
#pragma pack(push,2)
#line 30 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#line 34 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#line 13992 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14002 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_DOS_HEADER {      
WORD   e_magic;                     
WORD   e_cblp;                      
WORD   e_cp;                        
WORD   e_crlc;                      
WORD   e_cparhdr;                   
WORD   e_minalloc;                  
WORD   e_maxalloc;                  
WORD   e_ss;                        
WORD   e_sp;                        
WORD   e_csum;                      
WORD   e_ip;                        
WORD   e_cs;                        
WORD   e_lfarlc;                    
WORD   e_ovno;                      
WORD   e_res[4];                    
WORD   e_oemid;                     
WORD   e_oeminfo;                   
WORD   e_res2[10];                  
LONG   e_lfanew;                    
} IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;
typedef struct _IMAGE_OS2_HEADER {      
WORD   ne_magic;                    
CHAR   ne_ver;                      
CHAR   ne_rev;                      
WORD   ne_enttab;                   
WORD   ne_cbenttab;                 
LONG   ne_crc;                      
WORD   ne_flags;                    
WORD   ne_autodata;                 
WORD   ne_heap;                     
WORD   ne_stack;                    
LONG   ne_csip;                     
LONG   ne_sssp;                     
WORD   ne_cseg;                     
WORD   ne_cmod;                     
WORD   ne_cbnrestab;                
WORD   ne_segtab;                   
WORD   ne_rsrctab;                  
WORD   ne_restab;                   
WORD   ne_modtab;                   
WORD   ne_imptab;                   
LONG   ne_nrestab;                  
WORD   ne_cmovent;                  
WORD   ne_align;                    
WORD   ne_cres;                     
BYTE   ne_exetyp;                   
BYTE   ne_flagsothers;              
WORD   ne_pretthunks;               
WORD   ne_psegrefbytes;             
WORD   ne_swaparea;                 
WORD   ne_expver;                   
} IMAGE_OS2_HEADER, *PIMAGE_OS2_HEADER;
typedef struct _IMAGE_VXD_HEADER {      
WORD   e32_magic;                   
BYTE   e32_border;                  
BYTE   e32_worder;                  
DWORD  e32_level;                   
WORD   e32_cpu;                     
WORD   e32_os;                      
DWORD  e32_ver;                     
DWORD  e32_mflags;                  
DWORD  e32_mpages;                  
DWORD  e32_startobj;                
DWORD  e32_eip;                     
DWORD  e32_stackobj;                
DWORD  e32_esp;                     
DWORD  e32_pagesize;                
DWORD  e32_lastpagesize;            
DWORD  e32_fixupsize;               
DWORD  e32_fixupsum;                
DWORD  e32_ldrsize;                 
DWORD  e32_ldrsum;                  
DWORD  e32_objtab;                  
DWORD  e32_objcnt;                  
DWORD  e32_objmap;                  
DWORD  e32_itermap;                 
DWORD  e32_rsrctab;                 
DWORD  e32_rsrccnt;                 
DWORD  e32_restab;                  
DWORD  e32_enttab;                  
DWORD  e32_dirtab;                  
DWORD  e32_dircnt;                  
DWORD  e32_fpagetab;                
DWORD  e32_frectab;                 
DWORD  e32_impmod;                  
DWORD  e32_impmodcnt;               
DWORD  e32_impproc;                 
DWORD  e32_pagesum;                 
DWORD  e32_datapage;                
DWORD  e32_preload;                 
DWORD  e32_nrestab;                 
DWORD  e32_cbnrestab;               
DWORD  e32_nressum;                 
DWORD  e32_autodata;                
DWORD  e32_debuginfo;               
DWORD  e32_debuglen;                
DWORD  e32_instpreload;             
DWORD  e32_instdemand;              
DWORD  e32_heapsize;                
BYTE   e32_res3[12];                
DWORD  e32_winresoff;
DWORD  e32_winreslen;
WORD   e32_devid;                   
WORD   e32_ddkver;                  
} IMAGE_VXD_HEADER, *PIMAGE_VXD_HEADER;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 36 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 37 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 14114 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14115 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_FILE_HEADER {
WORD    Machine;
WORD    NumberOfSections;
DWORD   TimeDateStamp;
DWORD   PointerToSymbolTable;
DWORD   NumberOfSymbols;
WORD    SizeOfOptionalHeader;
WORD    Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;
typedef struct _IMAGE_DATA_DIRECTORY {
DWORD   VirtualAddress;
DWORD   Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;
typedef struct _IMAGE_OPTIONAL_HEADER {
WORD    Magic;
BYTE    MajorLinkerVersion;
BYTE    MinorLinkerVersion;
DWORD   SizeOfCode;
DWORD   SizeOfInitializedData;
DWORD   SizeOfUninitializedData;
DWORD   AddressOfEntryPoint;
DWORD   BaseOfCode;
DWORD   BaseOfData;
DWORD   ImageBase;
DWORD   SectionAlignment;
DWORD   FileAlignment;
WORD    MajorOperatingSystemVersion;
WORD    MinorOperatingSystemVersion;
WORD    MajorImageVersion;
WORD    MinorImageVersion;
WORD    MajorSubsystemVersion;
WORD    MinorSubsystemVersion;
DWORD   Win32VersionValue;
DWORD   SizeOfImage;
DWORD   SizeOfHeaders;
DWORD   CheckSum;
WORD    Subsystem;
WORD    DllCharacteristics;
DWORD   SizeOfStackReserve;
DWORD   SizeOfStackCommit;
DWORD   SizeOfHeapReserve;
DWORD   SizeOfHeapCommit;
DWORD   LoaderFlags;
DWORD   NumberOfRvaAndSizes;
IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;
typedef struct _IMAGE_ROM_OPTIONAL_HEADER {
WORD   Magic;
BYTE   MajorLinkerVersion;
BYTE   MinorLinkerVersion;
DWORD  SizeOfCode;
DWORD  SizeOfInitializedData;
DWORD  SizeOfUninitializedData;
DWORD  AddressOfEntryPoint;
DWORD  BaseOfCode;
DWORD  BaseOfData;
DWORD  BaseOfBss;
DWORD  GprMask;
DWORD  CprMask[4];
DWORD  GpValue;
} IMAGE_ROM_OPTIONAL_HEADER, *PIMAGE_ROM_OPTIONAL_HEADER;
typedef struct _IMAGE_OPTIONAL_HEADER64 {
WORD        Magic;
BYTE        MajorLinkerVersion;
BYTE        MinorLinkerVersion;
DWORD       SizeOfCode;
DWORD       SizeOfInitializedData;
DWORD       SizeOfUninitializedData;
DWORD       AddressOfEntryPoint;
DWORD       BaseOfCode;
ULONGLONG   ImageBase;
DWORD       SectionAlignment;
DWORD       FileAlignment;
WORD        MajorOperatingSystemVersion;
WORD        MinorOperatingSystemVersion;
WORD        MajorImageVersion;
WORD        MinorImageVersion;
WORD        MajorSubsystemVersion;
WORD        MinorSubsystemVersion;
DWORD       Win32VersionValue;
DWORD       SizeOfImage;
DWORD       SizeOfHeaders;
DWORD       CheckSum;
WORD        Subsystem;
WORD        DllCharacteristics;
ULONGLONG   SizeOfStackReserve;
ULONGLONG   SizeOfStackCommit;
ULONGLONG   SizeOfHeapReserve;
ULONGLONG   SizeOfHeapCommit;
DWORD       LoaderFlags;
DWORD       NumberOfRvaAndSizes;
IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;
typedef IMAGE_OPTIONAL_HEADER32             IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER32            PIMAGE_OPTIONAL_HEADER;
#line 14299 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_NT_HEADERS64 {
DWORD Signature;
IMAGE_FILE_HEADER FileHeader;
IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;
typedef struct _IMAGE_NT_HEADERS {
DWORD Signature;
IMAGE_FILE_HEADER FileHeader;
IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;
typedef struct _IMAGE_ROM_HEADERS {
IMAGE_FILE_HEADER FileHeader;
IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS, *PIMAGE_ROM_HEADERS;
typedef IMAGE_NT_HEADERS32                  IMAGE_NT_HEADERS;
typedef PIMAGE_NT_HEADERS32                 PIMAGE_NT_HEADERS;
#line 14324 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct ANON_OBJECT_HEADER {
WORD    Sig1;            
WORD    Sig2;            
WORD    Version;         
WORD    Machine;
DWORD   TimeDateStamp;
CLSID   ClassID;         
DWORD   SizeOfData;      
} ANON_OBJECT_HEADER;
typedef struct ANON_OBJECT_HEADER_V2 {
WORD    Sig1;            
WORD    Sig2;            
WORD    Version;         
WORD    Machine;
DWORD   TimeDateStamp;
CLSID   ClassID;         
DWORD   SizeOfData;      
DWORD   Flags;           
DWORD   MetaDataSize;    
DWORD   MetaDataOffset;  
} ANON_OBJECT_HEADER_V2;
typedef struct ANON_OBJECT_HEADER_BIGOBJ {
WORD    Sig1;            
WORD    Sig2;            
WORD    Version;         
WORD    Machine;         
DWORD   TimeDateStamp;
CLSID   ClassID;         
DWORD   SizeOfData;      
DWORD   Flags;           
DWORD   MetaDataSize;    
DWORD   MetaDataOffset;  
DWORD   NumberOfSections; 
DWORD   PointerToSymbolTable;
DWORD   NumberOfSymbols;
} ANON_OBJECT_HEADER_BIGOBJ;
typedef struct _IMAGE_SECTION_HEADER {
BYTE    Name[8];
union {
DWORD   PhysicalAddress;
DWORD   VirtualSize;
} Misc;
DWORD   VirtualAddress;
DWORD   SizeOfRawData;
DWORD   PointerToRawData;
DWORD   PointerToRelocations;
DWORD   PointerToLinenumbers;
WORD    NumberOfRelocations;
WORD    NumberOfLinenumbers;
DWORD   Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#pragma warning(disable:4103)
#pragma pack(push,2)
#line 30 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#line 34 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack2.h"
#line 14520 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14521 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_SYMBOL {
union {
BYTE    ShortName[8];
struct {
DWORD   Short;     
DWORD   Long;      
} Name;
DWORD   LongName[2];    
} N;
DWORD   Value;
SHORT   SectionNumber;
WORD    Type;
BYTE    StorageClass;
BYTE    NumberOfAuxSymbols;
} IMAGE_SYMBOL;
typedef IMAGE_SYMBOL  *PIMAGE_SYMBOL;
typedef struct _IMAGE_SYMBOL_EX {
union {
BYTE     ShortName[8];
struct {
DWORD   Short;     
DWORD   Long;      
} Name;
DWORD   LongName[2];    
} N;
DWORD   Value;
LONG    SectionNumber;
WORD    Type;
BYTE    StorageClass;
BYTE    NumberOfAuxSymbols;
} IMAGE_SYMBOL_EX;
typedef IMAGE_SYMBOL_EX  *PIMAGE_SYMBOL_EX;
#line 14658 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14663 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14669 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14674 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14678 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 14681 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#pragma warning(disable:4103)
#pragma pack(push,2)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 14683 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct IMAGE_AUX_SYMBOL_TOKEN_DEF {
BYTE  bAuxType;                  
BYTE  bReserved;                 
DWORD SymbolTableIndex;
BYTE  rgbReserved[12];           
} IMAGE_AUX_SYMBOL_TOKEN_DEF;
typedef IMAGE_AUX_SYMBOL_TOKEN_DEF  *PIMAGE_AUX_SYMBOL_TOKEN_DEF;
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 14694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef union _IMAGE_AUX_SYMBOL {
struct {
DWORD    TagIndex;                      
union {
struct {
WORD    Linenumber;             
WORD    Size;                   
} LnSz;
DWORD    TotalSize;
} Misc;
union {
struct {                            
DWORD    PointerToLinenumber;
DWORD    PointerToNextFunction;
} Function;
struct {                            
WORD     Dimension[4];
} Array;
} FcnAry;
WORD    TvIndex;                        
} Sym;
struct {
BYTE    Name[18];
} File;
struct {
DWORD   Length;                         
WORD    NumberOfRelocations;            
WORD    NumberOfLinenumbers;            
DWORD   CheckSum;                       
SHORT   Number;                         
BYTE    Selection;                      
BYTE    bReserved;
SHORT   HighNumber;                     
} Section;
IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
struct {
DWORD crc;
BYTE  rgbReserved[14];
} CRC;
} IMAGE_AUX_SYMBOL;
typedef IMAGE_AUX_SYMBOL  *PIMAGE_AUX_SYMBOL;
typedef union _IMAGE_AUX_SYMBOL_EX {
struct {
DWORD   WeakDefaultSymIndex;                       
DWORD   WeakSearchType;
BYTE    rgbReserved[12];
} Sym;
struct {
BYTE    Name[sizeof(IMAGE_SYMBOL_EX)];
} File;
struct {
DWORD   Length;                         
WORD    NumberOfRelocations;            
WORD    NumberOfLinenumbers;            
DWORD   CheckSum;                       
SHORT   Number;                         
BYTE    Selection;                      
BYTE    bReserved;
SHORT   HighNumber;                     
BYTE    rgbReserved[2];
} Section;
struct{
IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
BYTE  rgbReserved[2];
};
struct {
DWORD crc;
BYTE  rgbReserved[16];
} CRC;
} IMAGE_AUX_SYMBOL_EX;
typedef IMAGE_AUX_SYMBOL_EX  *PIMAGE_AUX_SYMBOL_EX;
typedef enum IMAGE_AUX_SYMBOL_TYPE {
IMAGE_AUX_SYMBOL_TYPE_TOKEN_DEF = 1,
} IMAGE_AUX_SYMBOL_TYPE;
typedef struct _IMAGE_RELOCATION {
union {
DWORD   VirtualAddress;
DWORD   RelocCount;             
} ;
DWORD   SymbolTableIndex;
WORD    Type;
} IMAGE_RELOCATION;
typedef IMAGE_RELOCATION  *PIMAGE_RELOCATION;
typedef struct _IMAGE_LINENUMBER {
union {
DWORD   SymbolTableIndex;               
DWORD   VirtualAddress;                 
} Type;
WORD    Linenumber;                         
} IMAGE_LINENUMBER;
typedef IMAGE_LINENUMBER  *PIMAGE_LINENUMBER;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 36 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 37 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 15189 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 15190 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_BASE_RELOCATION {
DWORD   VirtualAddress;
DWORD   SizeOfBlock;
} IMAGE_BASE_RELOCATION;
typedef IMAGE_BASE_RELOCATION  * PIMAGE_BASE_RELOCATION;
typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER {
BYTE     Name[16];                          
BYTE     Date[12];                          
BYTE     UserID[6];                         
BYTE     GroupID[6];                        
BYTE     Mode[8];                           
BYTE     Size[10];                          
BYTE     EndHeader[2];                      
} IMAGE_ARCHIVE_MEMBER_HEADER, *PIMAGE_ARCHIVE_MEMBER_HEADER;
typedef struct _IMAGE_EXPORT_DIRECTORY {
DWORD   Characteristics;
DWORD   TimeDateStamp;
WORD    MajorVersion;
WORD    MinorVersion;
DWORD   Name;
DWORD   Base;
DWORD   NumberOfFunctions;
DWORD   NumberOfNames;
DWORD   AddressOfFunctions;     
DWORD   AddressOfNames;         
DWORD   AddressOfNameOrdinals;  
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;
typedef struct _IMAGE_IMPORT_BY_NAME {
WORD    Hint;
CHAR   Name[1];
} IMAGE_IMPORT_BY_NAME, *PIMAGE_IMPORT_BY_NAME;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack8.h"
#pragma warning(disable:4103)
#pragma pack(push,8)
#line 30 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack8.h"
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack8.h"
#line 34 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\pshpack8.h"
#line 15286 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_THUNK_DATA64 {
union {
ULONGLONG ForwarderString;  
ULONGLONG Function;         
ULONGLONG Ordinal;
ULONGLONG AddressOfData;    
} u1;
} IMAGE_THUNK_DATA64;
typedef IMAGE_THUNK_DATA64 * PIMAGE_THUNK_DATA64;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 36 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 37 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 15298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_THUNK_DATA32 {
union {
DWORD ForwarderString;      
DWORD Function;             
DWORD Ordinal;
DWORD AddressOfData;        
} u1;
} IMAGE_THUNK_DATA32;
typedef IMAGE_THUNK_DATA32 * PIMAGE_THUNK_DATA32;
typedef void
(__stdcall *PIMAGE_TLS_CALLBACK) (
PVOID DllHandle,
DWORD Reason,
PVOID Reserved
);
typedef struct _IMAGE_TLS_DIRECTORY64 {
ULONGLONG   StartAddressOfRawData;
ULONGLONG   EndAddressOfRawData;
ULONGLONG   AddressOfIndex;         
ULONGLONG   AddressOfCallBacks;     
DWORD   SizeOfZeroFill;
DWORD   Characteristics;
} IMAGE_TLS_DIRECTORY64;
typedef IMAGE_TLS_DIRECTORY64 * PIMAGE_TLS_DIRECTORY64;
typedef struct _IMAGE_TLS_DIRECTORY32 {
DWORD   StartAddressOfRawData;
DWORD   EndAddressOfRawData;
DWORD   AddressOfIndex;             
DWORD   AddressOfCallBacks;         
DWORD   SizeOfZeroFill;
DWORD   Characteristics;
} IMAGE_TLS_DIRECTORY32;
typedef IMAGE_TLS_DIRECTORY32 * PIMAGE_TLS_DIRECTORY32;
typedef IMAGE_THUNK_DATA32              IMAGE_THUNK_DATA;
typedef PIMAGE_THUNK_DATA32             PIMAGE_THUNK_DATA;
typedef IMAGE_TLS_DIRECTORY32           IMAGE_TLS_DIRECTORY;
typedef PIMAGE_TLS_DIRECTORY32          PIMAGE_TLS_DIRECTORY;
#line 15364 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_IMPORT_DESCRIPTOR {
union {
DWORD   Characteristics;            
DWORD   OriginalFirstThunk;         
} ;
DWORD   TimeDateStamp;                  
DWORD   ForwarderChain;                 
DWORD   Name;
DWORD   FirstThunk;                     
} IMAGE_IMPORT_DESCRIPTOR;
typedef IMAGE_IMPORT_DESCRIPTOR  *PIMAGE_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR {
DWORD   TimeDateStamp;
WORD    OffsetModuleName;
WORD    NumberOfModuleForwarderRefs;
} IMAGE_BOUND_IMPORT_DESCRIPTOR,  *PIMAGE_BOUND_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_FORWARDER_REF {
DWORD   TimeDateStamp;
WORD    OffsetModuleName;
WORD    Reserved;
} IMAGE_BOUND_FORWARDER_REF, *PIMAGE_BOUND_FORWARDER_REF;
typedef struct _IMAGE_DELAYLOAD_DESCRIPTOR {
union {
DWORD AllAttributes;
struct {
DWORD RvaBased : 1;             
DWORD ReservedAttributes : 31;
};
} Attributes;
DWORD DllNameRVA;                       
DWORD ModuleHandleRVA;                  
DWORD ImportAddressTableRVA;            
DWORD ImportNameTableRVA;               
DWORD BoundImportAddressTableRVA;       
DWORD UnloadInformationTableRVA;        
DWORD TimeDateStamp;                    
} IMAGE_DELAYLOAD_DESCRIPTOR, *PIMAGE_DELAYLOAD_DESCRIPTOR;
typedef const IMAGE_DELAYLOAD_DESCRIPTOR *PCIMAGE_DELAYLOAD_DESCRIPTOR;
typedef struct _IMAGE_RESOURCE_DIRECTORY {
DWORD   Characteristics;
DWORD   TimeDateStamp;
WORD    MajorVersion;
WORD    MinorVersion;
WORD    NumberOfNamedEntries;
WORD    NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;
typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY {
union {
struct {
DWORD NameOffset:31;
DWORD NameIsString:1;
} ;
DWORD   Name;
WORD    Id;
} ;
union {
DWORD   OffsetToData;
struct {
DWORD   OffsetToDirectory:31;
DWORD   DataIsDirectory:1;
} ;
} ;
} IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;
typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING {
WORD    Length;
CHAR    NameString[ 1 ];
} IMAGE_RESOURCE_DIRECTORY_STRING, *PIMAGE_RESOURCE_DIRECTORY_STRING;
typedef struct _IMAGE_RESOURCE_DIR_STRING_U {
WORD    Length;
WCHAR   NameString[ 1 ];
} IMAGE_RESOURCE_DIR_STRING_U, *PIMAGE_RESOURCE_DIR_STRING_U;
typedef struct _IMAGE_RESOURCE_DATA_ENTRY {
DWORD   OffsetToData;
DWORD   Size;
DWORD   CodePage;
DWORD   Reserved;
} IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;
typedef struct {
DWORD   Size;
DWORD   TimeDateStamp;
WORD    MajorVersion;
WORD    MinorVersion;
DWORD   GlobalFlagsClear;
DWORD   GlobalFlagsSet;
DWORD   CriticalSectionDefaultTimeout;
DWORD   DeCommitFreeBlockThreshold;
DWORD   DeCommitTotalFreeThreshold;
DWORD   LockPrefixTable;            
DWORD   MaximumAllocationSize;
DWORD   VirtualMemoryThreshold;
DWORD   ProcessHeapFlags;
DWORD   ProcessAffinityMask;
WORD    CSDVersion;
WORD    Reserved1;
DWORD   EditList;                   
DWORD   SecurityCookie;             
DWORD   SEHandlerTable;             
DWORD   SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;
typedef struct {
DWORD      Size;
DWORD      TimeDateStamp;
WORD       MajorVersion;
WORD       MinorVersion;
DWORD      GlobalFlagsClear;
DWORD      GlobalFlagsSet;
DWORD      CriticalSectionDefaultTimeout;
ULONGLONG  DeCommitFreeBlockThreshold;
ULONGLONG  DeCommitTotalFreeThreshold;
ULONGLONG  LockPrefixTable;         
ULONGLONG  MaximumAllocationSize;
ULONGLONG  VirtualMemoryThreshold;
ULONGLONG  ProcessAffinityMask;
DWORD      ProcessHeapFlags;
WORD       CSDVersion;
WORD       Reserved1;
ULONGLONG  EditList;                
ULONGLONG  SecurityCookie;          
ULONGLONG  SEHandlerTable;          
ULONGLONG  SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;
typedef IMAGE_LOAD_CONFIG_DIRECTORY32     IMAGE_LOAD_CONFIG_DIRECTORY;
typedef PIMAGE_LOAD_CONFIG_DIRECTORY32    PIMAGE_LOAD_CONFIG_DIRECTORY;
#line 15577 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY {
DWORD FuncStart;
DWORD PrologLen : 8;
DWORD FuncLen : 22;
DWORD ThirtyTwoBit : 1;
DWORD ExceptionFlag : 1;
} IMAGE_CE_RUNTIME_FUNCTION_ENTRY, * PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ARM_RUNTIME_FUNCTION_ENTRY {
DWORD BeginAddress;
union {
DWORD UnwindData;
struct {
DWORD Flag : 2;
DWORD FunctionLength : 11;
DWORD Ret : 2;
DWORD H : 1;
DWORD Reg : 3;
DWORD R : 1;
DWORD L : 1;
DWORD C : 1;
DWORD StackAdjust : 10;
} ;
} ;
} IMAGE_ARM_RUNTIME_FUNCTION_ENTRY, * PIMAGE_ARM_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY {
ULONGLONG BeginAddress;
ULONGLONG EndAddress;
ULONGLONG ExceptionHandler;
ULONGLONG HandlerData;
ULONGLONG PrologEndAddress;
} IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY {
DWORD BeginAddress;
DWORD EndAddress;
DWORD ExceptionHandler;
DWORD HandlerData;
DWORD PrologEndAddress;
} IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
DWORD BeginAddress;
DWORD EndAddress;
union {
DWORD UnwindInfoAddress;
DWORD UnwindData;
} ;
} _IMAGE_RUNTIME_FUNCTION_ENTRY, *_PIMAGE_RUNTIME_FUNCTION_ENTRY;
typedef  _IMAGE_RUNTIME_FUNCTION_ENTRY  IMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
#line 15649 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 15654 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 15659 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef  _IMAGE_RUNTIME_FUNCTION_ENTRY  IMAGE_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_RUNTIME_FUNCTION_ENTRY;
#line 15664 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _IMAGE_DEBUG_DIRECTORY {
DWORD   Characteristics;
DWORD   TimeDateStamp;
WORD    MajorVersion;
WORD    MinorVersion;
DWORD   Type;
DWORD   SizeOfData;
DWORD   AddressOfRawData;
DWORD   PointerToRawData;
} IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;
typedef struct _IMAGE_COFF_SYMBOLS_HEADER {
DWORD   NumberOfSymbols;
DWORD   LvaToFirstSymbol;
DWORD   NumberOfLinenumbers;
DWORD   LvaToFirstLinenumber;
DWORD   RvaToFirstByteOfCode;
DWORD   RvaToLastByteOfCode;
DWORD   RvaToFirstByteOfData;
DWORD   RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER, *PIMAGE_COFF_SYMBOLS_HEADER;
typedef struct _FPO_DATA {
DWORD       ulOffStart;             
DWORD       cbProcSize;             
DWORD       cdwLocals;              
WORD        cdwParams;              
WORD        cbProlog : 8;           
WORD        cbRegs   : 3;           
WORD        fHasSEH  : 1;           
WORD        fUseBP   : 1;           
WORD        reserved : 1;           
WORD        cbFrame  : 2;           
} FPO_DATA, *PFPO_DATA;
typedef struct _IMAGE_DEBUG_MISC {
DWORD       DataType;               
DWORD       Length;                 
BOOLEAN     Unicode;                
BYTE        Reserved[ 3 ];
BYTE        Data[ 1 ];              
} IMAGE_DEBUG_MISC, *PIMAGE_DEBUG_MISC;
typedef struct _IMAGE_FUNCTION_ENTRY {
DWORD   StartingAddress;
DWORD   EndingAddress;
DWORD   EndOfPrologue;
} IMAGE_FUNCTION_ENTRY, *PIMAGE_FUNCTION_ENTRY;
typedef struct _IMAGE_FUNCTION_ENTRY64 {
ULONGLONG   StartingAddress;
ULONGLONG   EndingAddress;
union {
ULONGLONG   EndOfPrologue;
ULONGLONG   UnwindInfoAddress;
} ;
} IMAGE_FUNCTION_ENTRY64, *PIMAGE_FUNCTION_ENTRY64;
typedef struct _IMAGE_SEPARATE_DEBUG_HEADER {
WORD        Signature;
WORD        Flags;
WORD        Machine;
WORD        Characteristics;
DWORD       TimeDateStamp;
DWORD       CheckSum;
DWORD       ImageBase;
DWORD       SizeOfImage;
DWORD       NumberOfSections;
DWORD       ExportedNamesSize;
DWORD       DebugDirectorySize;
DWORD       SectionAlignment;
DWORD       Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER, *PIMAGE_SEPARATE_DEBUG_HEADER;
typedef struct _NON_PAGED_DEBUG_INFO {
WORD        Signature;
WORD        Flags;
DWORD       Size;
WORD        Machine;
WORD        Characteristics;
DWORD       TimeDateStamp;
DWORD       CheckSum;
DWORD       SizeOfImage;
ULONGLONG   ImageBase;
} NON_PAGED_DEBUG_INFO, *PNON_PAGED_DEBUG_INFO;
#line 15815 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _ImageArchitectureHeader {
unsigned int AmaskValue: 1;                 
int :7;                                     
unsigned int AmaskShift: 8;                 
int :16;                                    
DWORD FirstEntryRVA;                        
} IMAGE_ARCHITECTURE_HEADER, *PIMAGE_ARCHITECTURE_HEADER;
typedef struct _ImageArchitectureEntry {
DWORD FixupInstRVA;                         
DWORD NewInst;                              
} IMAGE_ARCHITECTURE_ENTRY, *PIMAGE_ARCHITECTURE_ENTRY;
#line 1 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 36 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 37 "c:\\program files (x86)\\windows kits\\8.0\\include\\shared\\poppack.h"
#line 15843 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct IMPORT_OBJECT_HEADER {
WORD    Sig1;                       
WORD    Sig2;                       
WORD    Version;
WORD    Machine;
DWORD   TimeDateStamp;              
DWORD   SizeOfData;                 
union {
WORD    Ordinal;                
WORD    Hint;
} ;
WORD    Type : 2;                   
WORD    NameType : 3;               
WORD    Reserved : 11;              
} IMPORT_OBJECT_HEADER;
typedef enum IMPORT_OBJECT_TYPE
{
IMPORT_OBJECT_CODE = 0,
IMPORT_OBJECT_DATA = 1,
IMPORT_OBJECT_CONST = 2,
} IMPORT_OBJECT_TYPE;
typedef enum IMPORT_OBJECT_NAME_TYPE
{
IMPORT_OBJECT_ORDINAL = 0,          
IMPORT_OBJECT_NAME = 1,             
IMPORT_OBJECT_NAME_NO_PREFIX = 2,   
IMPORT_OBJECT_NAME_UNDECORATE = 3,  
} IMPORT_OBJECT_NAME_TYPE;
typedef enum ReplacesCorHdrNumericDefines
{
COMIMAGE_FLAGS_ILONLY               =0x00000001,
COMIMAGE_FLAGS_32BITREQUIRED        =0x00000002,
COMIMAGE_FLAGS_IL_LIBRARY           =0x00000004,
COMIMAGE_FLAGS_STRONGNAMESIGNED     =0x00000008,
COMIMAGE_FLAGS_NATIVE_ENTRYPOINT    =0x00000010,
COMIMAGE_FLAGS_TRACKDEBUGDATA       =0x00010000,
COR_VERSION_MAJOR_V2                =2,
COR_VERSION_MAJOR                   =COR_VERSION_MAJOR_V2,
COR_VERSION_MINOR                   =5,
COR_DELETED_NAME_LENGTH             =8,
COR_VTABLEGAP_NAME_LENGTH           =8,
NATIVE_TYPE_MAX_CB                  =1,
COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE=0xFF,
IMAGE_COR_MIH_METHODRVA             =0x01,
IMAGE_COR_MIH_EHRVA                 =0x02,
IMAGE_COR_MIH_BASICBLOCK            =0x08,
COR_VTABLE_32BIT                    =0x01,          
COR_VTABLE_64BIT                    =0x02,          
COR_VTABLE_FROM_UNMANAGED           =0x04,          
COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN  =0x08,  
COR_VTABLE_CALL_MOST_DERIVED        =0x10,          
IMAGE_COR_EATJ_THUNK_SIZE           =32,            
MAX_CLASS_NAME                      =1024,
MAX_PACKAGE_NAME                    =1024,
} ReplacesCorHdrNumericDefines;
typedef struct IMAGE_COR20_HEADER
{
DWORD                   cb;
WORD                    MajorRuntimeVersion;
WORD                    MinorRuntimeVersion;
IMAGE_DATA_DIRECTORY    MetaData;
DWORD                   Flags;
union {
DWORD               EntryPointToken;
DWORD               EntryPointRVA;
} ;
IMAGE_DATA_DIRECTORY    Resources;
IMAGE_DATA_DIRECTORY    StrongNameSignature;
IMAGE_DATA_DIRECTORY    CodeManagerTable;
IMAGE_DATA_DIRECTORY    VTableFixups;
IMAGE_DATA_DIRECTORY    ExportAddressTableJumps;
IMAGE_DATA_DIRECTORY    ManagedNativeHeader;
} IMAGE_COR20_HEADER, *PIMAGE_COR20_HEADER;
#line 15965 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 83 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 87 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 178 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 15971 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma region Desktop Family
#line 15997 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__declspec(dllimport)
void
__stdcall
RtlCaptureContext(
PCONTEXT ContextRecord
);
#line 16010 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16012 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
void
__stdcall
RtlUnwind(
PVOID TargetFrame,
PVOID TargetIp,
PEXCEPTION_RECORD ExceptionRecord,
PVOID ReturnValue
);
#line 16032 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
#line 16190 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16348 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16449 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16475 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma region Application Family
__declspec(dllimport)
PVOID
__stdcall
RtlPcToFileHeader(
PVOID PcValue,
PVOID * BaseOfImage
);
#line 16494 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16496 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
SIZE_T
__stdcall
RtlCompareMemory(
const void * Source1,
const void * Source2,
SIZE_T Length
);
#line 16520 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16522 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16524 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
#line 16536 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16562 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _SINGLE_LIST_ENTRY SLIST_ENTRY, *PSLIST_ENTRY;
#line 16566 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16593 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef union _SLIST_HEADER {
ULONGLONG Alignment;
struct {
SLIST_ENTRY Next;
WORD   Depth;
WORD   Sequence;
} ;
} SLIST_HEADER, *PSLIST_HEADER;
#line 16604 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16606 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma region Desktop Family
__declspec(dllimport)
void
__stdcall
RtlInitializeSListHead (
PSLIST_HEADER ListHead
);
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlFirstEntrySList (
const SLIST_HEADER *ListHead
);
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedPopEntrySList (
PSLIST_HEADER ListHead
);
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedPushEntrySList (
PSLIST_HEADER ListHead,
PSLIST_ENTRY ListEntry
);
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedPushListSListEx (
PSLIST_HEADER ListHead,
PSLIST_ENTRY List,
PSLIST_ENTRY ListEnd,
DWORD Count
);
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedFlushSList (
PSLIST_HEADER ListHead
);
__declspec(dllimport)
WORD  
__stdcall
RtlQueryDepthSList (
PSLIST_HEADER ListHead
);
#line 16666 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
typedef union _RTL_RUN_ONCE {       
PVOID Ptr;                      
} RTL_RUN_ONCE, *PRTL_RUN_ONCE;     
#line 16698 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _RTL_BARRIER {                       
DWORD Reserved1;                        
DWORD Reserved2;                        
ULONG_PTR Reserved3[2];                 
DWORD Reserved4;                        
DWORD Reserved5;                        
} RTL_BARRIER, *PRTL_BARRIER;                       
__declspec(noreturn)
void
__fastfail(
unsigned int Code
);
#pragma intrinsic(__fastfail)
#line 16738 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma region Desktop Family
__forceinline
DWORD
HEAP_MAKE_TAG_FLAGS (
DWORD TagBase,
DWORD Tag
)
{
return ((DWORD)((TagBase) + ((Tag) << 18)));
}
#line 16767 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 16768 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
#line 16824 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__forceinline
PVOID
RtlSecureZeroMemory(
PVOID ptr,
SIZE_T cnt
)
{
volatile char *vptr = (volatile char *)ptr;
#line 16849 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
while (cnt) {
#line 16857 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
*vptr = 0;
#line 16861 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
vptr++;
cnt--;
}
#line 16867 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
return ptr;
}
#line 16872 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _MESSAGE_RESOURCE_ENTRY {
WORD   Length;
WORD   Flags;
BYTE  Text[ 1 ];
} MESSAGE_RESOURCE_ENTRY, *PMESSAGE_RESOURCE_ENTRY;
typedef struct _MESSAGE_RESOURCE_BLOCK {
DWORD LowId;
DWORD HighId;
DWORD OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK, *PMESSAGE_RESOURCE_BLOCK;
typedef struct _MESSAGE_RESOURCE_DATA {
DWORD NumberOfBlocks;
MESSAGE_RESOURCE_BLOCK Blocks[ 1 ];
} MESSAGE_RESOURCE_DATA, *PMESSAGE_RESOURCE_DATA;
typedef struct _OSVERSIONINFOA {
DWORD dwOSVersionInfoSize;
DWORD dwMajorVersion;
DWORD dwMinorVersion;
DWORD dwBuildNumber;
DWORD dwPlatformId;
CHAR   szCSDVersion[ 128 ];     
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;
typedef struct _OSVERSIONINFOW {
DWORD dwOSVersionInfoSize;
DWORD dwMajorVersion;
DWORD dwMinorVersion;
DWORD dwBuildNumber;
DWORD dwPlatformId;
WCHAR  szCSDVersion[ 128 ];     
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, *PRTL_OSVERSIONINFOW;
typedef OSVERSIONINFOW OSVERSIONINFO;
typedef POSVERSIONINFOW POSVERSIONINFO;
typedef LPOSVERSIONINFOW LPOSVERSIONINFO;
#line 16936 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _OSVERSIONINFOEXA {
DWORD dwOSVersionInfoSize;
DWORD dwMajorVersion;
DWORD dwMinorVersion;
DWORD dwBuildNumber;
DWORD dwPlatformId;
CHAR   szCSDVersion[ 128 ];     
WORD   wServicePackMajor;
WORD   wServicePackMinor;
WORD   wSuiteMask;
BYTE  wProductType;
BYTE  wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW {
DWORD dwOSVersionInfoSize;
DWORD dwMajorVersion;
DWORD dwMinorVersion;
DWORD dwBuildNumber;
DWORD dwPlatformId;
WCHAR  szCSDVersion[ 128 ];     
WORD   wServicePackMajor;
WORD   wServicePackMinor;
WORD   wSuiteMask;
BYTE  wProductType;
BYTE  wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, *PRTL_OSVERSIONINFOEXW;
typedef OSVERSIONINFOEXW OSVERSIONINFOEX;
typedef POSVERSIONINFOEXW POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXW LPOSVERSIONINFOEX;
#line 16972 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma region Desktop Family
__declspec(dllimport)
ULONGLONG
__stdcall
VerSetConditionMask(
ULONGLONG ConditionMask,
DWORD TypeMask,
BYTE  Condition
);
#line 17046 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 17048 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 17050 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
#pragma region Desktop Family
#line 17073 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 17077 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma endregion
typedef enum _RTL_UMS_THREAD_INFO_CLASS {
UmsThreadInvalidInfoClass = 0,
UmsThreadUserContext,
UmsThreadPriority,              
UmsThreadAffinity,              
UmsThreadTeb,
UmsThreadIsSuspended,
UmsThreadIsTerminated,
UmsThreadMaxInfoClass
} RTL_UMS_THREAD_INFO_CLASS, *PRTL_UMS_THREAD_INFO_CLASS;
typedef enum _RTL_UMS_SCHEDULER_REASON {
UmsSchedulerStartup = 0,
UmsSchedulerThreadBlocked,
UmsSchedulerThreadYield,
} RTL_UMS_SCHEDULER_REASON, *PRTL_UMS_SCHEDULER_REASON;
typedef
void
__stdcall
RTL_UMS_SCHEDULER_ENTRY_POINT(
RTL_UMS_SCHEDULER_REASON Reason,
ULONG_PTR ActivationPayload,
PVOID SchedulerParam
);
typedef RTL_UMS_SCHEDULER_ENTRY_POINT *PRTL_UMS_SCHEDULER_ENTRY_POINT;
#line 17142 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 17144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 17155 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 17196 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _RTL_CRITICAL_SECTION_DEBUG {
WORD   Type;
WORD   CreatorBackTraceIndex;
struct _RTL_CRITICAL_SECTION *CriticalSection;
LIST_ENTRY ProcessLocksList;
DWORD EntryCount;
DWORD ContentionCount;
DWORD Flags;
WORD   CreatorBackTraceIndexHigh;
WORD   SpareWORD  ;
} RTL_CRITICAL_SECTION_DEBUG, *PRTL_CRITICAL_SECTION_DEBUG, RTL_RESOURCE_DEBUG, *PRTL_RESOURCE_DEBUG;
#pragma pack(push, 8)
typedef struct _RTL_CRITICAL_SECTION {
PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
LONG LockCount;
LONG RecursionCount;
HANDLE OwningThread;        
HANDLE LockSemaphore;
ULONG_PTR SpinCount;        
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION;
#pragma pack(pop)
typedef struct _RTL_SRWLOCK {                            
PVOID Ptr;                                       
} RTL_SRWLOCK, *PRTL_SRWLOCK;                            
typedef struct _RTL_CONDITION_VARIABLE {                    
PVOID Ptr;                                       
} RTL_CONDITION_VARIABLE, *PRTL_CONDITION_VARIABLE;      
typedef
void
(__stdcall *PAPCFUNC)(
ULONG_PTR Parameter
);
typedef LONG (__stdcall *PVECTORED_EXCEPTION_HANDLER)(
struct _EXCEPTION_POINTERS *ExceptionInfo
);
typedef enum _HEAP_INFORMATION_CLASS {
HeapCompatibilityInformation,
HeapEnableTerminationOnCorruption
} HEAP_INFORMATION_CLASS;
typedef void (__stdcall * WAITORTIMERCALLBACKFUNC) (PVOID, BOOLEAN );   
typedef void (__stdcall * WORKERCALLBACKFUNC) (PVOID );                 
typedef void (__stdcall * APC_CALLBACK_FUNCTION) (DWORD   , PVOID, PVOID); 
typedef WAITORTIMERCALLBACKFUNC WAITORTIMERCALLBACK; 
typedef
void
(__stdcall *PFLS_CALLBACK_FUNCTION) (
PVOID lpFlsData
);
typedef
BOOLEAN
(__stdcall *PSECURE_MEMORY_CACHE_CALLBACK) (
PVOID Addr,
SIZE_T Range
);
typedef enum _ACTIVATION_CONTEXT_INFO_CLASS {
ActivationContextBasicInformation                       = 1,
ActivationContextDetailedInformation                    = 2,
AssemblyDetailedInformationInActivationContext          = 3,
FileInformationInAssemblyOfAssemblyInActivationContext  = 4,
RunlevelInformationInActivationContext                  = 5,
CompatibilityInformationInActivationContext             = 6,
ActivationContextManifestResourceName                   = 7,
MaxActivationContextInfoClass,
AssemblyDetailedInformationInActivationContxt           = 3,
FileInformationInAssemblyOfAssemblyInActivationContxt   = 4
} ACTIVATION_CONTEXT_INFO_CLASS;
typedef struct _ACTIVATION_CONTEXT_QUERY_INDEX {
DWORD ulAssemblyIndex;
DWORD ulFileIndexInAssembly;
} ACTIVATION_CONTEXT_QUERY_INDEX, * PACTIVATION_CONTEXT_QUERY_INDEX;
typedef const struct _ACTIVATION_CONTEXT_QUERY_INDEX * PCACTIVATION_CONTEXT_QUERY_INDEX;
typedef struct _ASSEMBLY_FILE_DETAILED_INFORMATION {
DWORD ulFlags;
DWORD ulFilenameLength;
DWORD ulPathLength;
PCWSTR lpFileName;
PCWSTR lpFilePath;
} ASSEMBLY_FILE_DETAILED_INFORMATION, *PASSEMBLY_FILE_DETAILED_INFORMATION;
typedef const ASSEMBLY_FILE_DETAILED_INFORMATION *PCASSEMBLY_FILE_DETAILED_INFORMATION;
typedef struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION {
DWORD ulFlags;
DWORD ulEncodedAssemblyIdentityLength;      
DWORD ulManifestPathType;                   
DWORD ulManifestPathLength;                 
LARGE_INTEGER liManifestLastWriteTime;      
DWORD ulPolicyPathType;                     
DWORD ulPolicyPathLength;                   
LARGE_INTEGER liPolicyLastWriteTime;        
DWORD ulMetadataSatelliteRosterIndex;
DWORD ulManifestVersionMajor;               
DWORD ulManifestVersionMinor;               
DWORD ulPolicyVersionMajor;                 
DWORD ulPolicyVersionMinor;                 
DWORD ulAssemblyDirectoryNameLength;        
PCWSTR lpAssemblyEncodedAssemblyIdentity;
PCWSTR lpAssemblyManifestPath;
PCWSTR lpAssemblyPolicyPath;
PCWSTR lpAssemblyDirectoryName;
DWORD  ulFileCount;
} ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION, * PACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION * PCACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION ;
typedef enum
{
ACTCTX_RUN_LEVEL_UNSPECIFIED = 0,
ACTCTX_RUN_LEVEL_AS_INVOKER,
ACTCTX_RUN_LEVEL_HIGHEST_AVAILABLE,
ACTCTX_RUN_LEVEL_REQUIRE_ADMIN,
ACTCTX_RUN_LEVEL_NUMBERS
} ACTCTX_REQUESTED_RUN_LEVEL;
typedef struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION {
DWORD ulFlags;
ACTCTX_REQUESTED_RUN_LEVEL  RunLevel;
DWORD UiAccess;
} ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION, * PACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION * PCACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION ;
typedef enum
{
ACTCTX_COMPATIBILITY_ELEMENT_TYPE_UNKNOWN = 0,
ACTCTX_COMPATIBILITY_ELEMENT_TYPE_OS,
ACTCTX_COMPATIBILITY_ELEMENT_TYPE_MITIGATION
} ACTCTX_COMPATIBILITY_ELEMENT_TYPE;
typedef struct _COMPATIBILITY_CONTEXT_ELEMENT {
GUID Id;
ACTCTX_COMPATIBILITY_ELEMENT_TYPE Type;
} COMPATIBILITY_CONTEXT_ELEMENT, *PCOMPATIBILITY_CONTEXT_ELEMENT;
typedef const struct _COMPATIBILITY_CONTEXT_ELEMENT *PCCOMPATIBILITY_CONTEXT_ELEMENT;
#pragma warning(push)
#pragma warning(disable:4200)
typedef struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION {
DWORD ElementCount;
COMPATIBILITY_CONTEXT_ELEMENT Elements[];
} ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION, * PACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;
#pragma warning(pop)
typedef const struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION * PCACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;
typedef struct _SUPPORTED_OS_INFO {
WORD   OsCount;
WORD   MitigationExist;
WORD   OsList[(4)];
} SUPPORTED_OS_INFO, *PSUPPORTED_OS_INFO;
typedef struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION {
DWORD dwFlags;
DWORD ulFormatVersion;
DWORD ulAssemblyCount;
DWORD ulRootManifestPathType;
DWORD ulRootManifestPathChars;
DWORD ulRootConfigurationPathType;
DWORD ulRootConfigurationPathChars;
DWORD ulAppDirPathType;
DWORD ulAppDirPathChars;
PCWSTR lpRootManifestPath;
PCWSTR lpRootConfigurationPath;
PCWSTR lpAppDirPath;
} ACTIVATION_CONTEXT_DETAILED_INFORMATION, *PACTIVATION_CONTEXT_DETAILED_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION *PCACTIVATION_CONTEXT_DETAILED_INFORMATION;
typedef struct _HARDWARE_COUNTER_DATA {
HARDWARE_COUNTER_TYPE Type;
DWORD Reserved;
DWORD64 Value;
} HARDWARE_COUNTER_DATA, *PHARDWARE_COUNTER_DATA;
typedef struct _PERFORMANCE_DATA {
WORD   Size;
BYTE  Version;
BYTE  HwCountersCount;
DWORD ContextSwitchCount;
DWORD64 WaitReasonBitMap;
DWORD64 CycleTime;
DWORD RetryCount;
DWORD Reserved;
HARDWARE_COUNTER_DATA HwCounters[16];
} PERFORMANCE_DATA, *PPERFORMANCE_DATA;
typedef struct _EVENTLOGRECORD {
DWORD  Length;        
DWORD  Reserved;      
DWORD  RecordNumber;  
DWORD  TimeGenerated; 
DWORD  TimeWritten;   
DWORD  EventID;
WORD   EventType;
WORD   NumStrings;
WORD   EventCategory;
WORD   ReservedFlags; 
DWORD  ClosingRecordNumber; 
DWORD  StringOffset;  
DWORD  UserSidLength;
DWORD  UserSidOffset;
DWORD  DataLength;
DWORD  DataOffset;    
} EVENTLOGRECORD, *PEVENTLOGRECORD;
#pragma warning(push)
#line 17559 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(disable : 4200) 
struct _EVENTSFORLOGFILE;
typedef struct _EVENTSFORLOGFILE EVENTSFORLOGFILE, *PEVENTSFORLOGFILE;
struct _PACKEDEVENTINFO;
typedef struct _PACKEDEVENTINFO PACKEDEVENTINFO, *PPACKEDEVENTINFO;
struct _EVENTSFORLOGFILE
{
DWORD           ulSize;
WCHAR           szLogicalLogFile[256];        
DWORD           ulNumRecords;
EVENTLOGRECORD  pEventLogRecords[];
};
struct _PACKEDEVENTINFO
{
DWORD               ulSize;  
DWORD               ulNumEventsForLogFile; 
DWORD               ulOffsets[];           
};
#line 17585 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(pop)
#line 17591 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef enum _CM_SERVICE_NODE_TYPE {
DriverType               = 0x00000001,
FileSystemType           = 0x00000002,
Win32ServiceOwnProcess   = 0x00000010,
Win32ServiceShareProcess = 0x00000020,
AdapterType              = 0x00000004,
RecognizerType           = 0x00000008
} SERVICE_NODE_TYPE;
typedef enum _CM_SERVICE_LOAD_TYPE {
BootLoad    = 0x00000000,
SystemLoad  = 0x00000001,
AutoLoad    = 0x00000002,
DemandLoad  = 0x00000003,
DisableLoad = 0x00000004
} SERVICE_LOAD_TYPE;
typedef enum _CM_ERROR_CONTROL_TYPE {
IgnoreError   = 0x00000000,
NormalError   = 0x00000001,
SevereError   = 0x00000002,
CriticalError = 0x00000003
} SERVICE_ERROR_TYPE;
typedef struct _TAPE_ERASE {
DWORD Type;
BOOLEAN Immediate;
} TAPE_ERASE, *PTAPE_ERASE;
typedef struct _TAPE_PREPARE {
DWORD Operation;
BOOLEAN Immediate;
} TAPE_PREPARE, *PTAPE_PREPARE;
typedef struct _TAPE_WRITE_MARKS {
DWORD Type;
DWORD Count;
BOOLEAN Immediate;
} TAPE_WRITE_MARKS, *PTAPE_WRITE_MARKS;
typedef struct _TAPE_GET_POSITION {
DWORD Type;
DWORD Partition;
LARGE_INTEGER Offset;
} TAPE_GET_POSITION, *PTAPE_GET_POSITION;
typedef struct _TAPE_SET_POSITION {
DWORD Method;
DWORD Partition;
LARGE_INTEGER Offset;
BOOLEAN Immediate;
} TAPE_SET_POSITION, *PTAPE_SET_POSITION;
typedef struct _TAPE_GET_DRIVE_PARAMETERS {
BOOLEAN ECC;
BOOLEAN Compression;
BOOLEAN DataPadding;
BOOLEAN ReportSetmarks;
DWORD DefaultBlockSize;
DWORD MaximumBlockSize;
DWORD MinimumBlockSize;
DWORD MaximumPartitionCount;
DWORD FeaturesLow;
DWORD FeaturesHigh;
DWORD EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS, *PTAPE_GET_DRIVE_PARAMETERS;
typedef struct _TAPE_SET_DRIVE_PARAMETERS {
BOOLEAN ECC;
BOOLEAN Compression;
BOOLEAN DataPadding;
BOOLEAN ReportSetmarks;
DWORD EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS, *PTAPE_SET_DRIVE_PARAMETERS;
typedef struct _TAPE_GET_MEDIA_PARAMETERS {
LARGE_INTEGER Capacity;
LARGE_INTEGER Remaining;
DWORD BlockSize;
DWORD PartitionCount;
BOOLEAN WriteProtected;
} TAPE_GET_MEDIA_PARAMETERS, *PTAPE_GET_MEDIA_PARAMETERS;
typedef struct _TAPE_SET_MEDIA_PARAMETERS {
DWORD BlockSize;
} TAPE_SET_MEDIA_PARAMETERS, *PTAPE_SET_MEDIA_PARAMETERS;
typedef struct _TAPE_CREATE_PARTITION {
DWORD Method;
DWORD Count;
DWORD Size;
} TAPE_CREATE_PARTITION, *PTAPE_CREATE_PARTITION;
typedef struct _TAPE_WMI_OPERATIONS {
DWORD Method;
DWORD DataBufferSize;
PVOID DataBuffer;
} TAPE_WMI_OPERATIONS, *PTAPE_WMI_OPERATIONS;
typedef enum _TAPE_DRIVE_PROBLEM_TYPE {
TapeDriveProblemNone, TapeDriveReadWriteWarning,
TapeDriveReadWriteError, TapeDriveReadWarning,
TapeDriveWriteWarning, TapeDriveReadError,
TapeDriveWriteError, TapeDriveHardwareError,
TapeDriveUnsupportedMedia, TapeDriveScsiConnectionError,
TapeDriveTimetoClean, TapeDriveCleanDriveNow,
TapeDriveMediaLifeExpired, TapeDriveSnappedTape
} TAPE_DRIVE_PROBLEM_TYPE;
#line 18133 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ktmtypes.h"
typedef GUID UOW, *PUOW;
typedef GUID CRM_PROTOCOL_ID, *PCRM_PROTOCOL_ID;
typedef ULONG NOTIFICATION_MASK;
typedef struct _TRANSACTION_NOTIFICATION {
PVOID         TransactionKey;
ULONG         TransactionNotification;
LARGE_INTEGER TmVirtualClock;
ULONG         ArgumentLength;
} TRANSACTION_NOTIFICATION, *PTRANSACTION_NOTIFICATION;
typedef struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT {
GUID   EnlistmentId;
UOW    UOW;
} TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT, *PTRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT {
GUID TmIdentity;
ULONG Flags;
} TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT, *PTRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT;
typedef ULONG SAVEPOINT_ID, *PSAVEPOINT_ID;
typedef struct _TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT {
SAVEPOINT_ID SavepointId;
} TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT, *PTRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT {
ULONG PropagationCookie;
GUID  UOW;
GUID  TmIdentity;
ULONG BufferLength;
} TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT;
typedef struct _TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT {
ULONG MarshalCookie;
GUID  UOW;
} TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT, *PTRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT;
typedef TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT TRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT;
typedef struct _KCRM_MARSHAL_HEADER {
ULONG              VersionMajor;
ULONG              VersionMinor;
ULONG              NumProtocols;
ULONG              Unused;        
} KCRM_MARSHAL_HEADER, *PKCRM_MARSHAL_HEADER, * PRKCRM_MARSHAL_HEADER;
typedef struct _KCRM_TRANSACTION_BLOB {
UOW                UOW;
GUID               TmIdentity;
ULONG              IsolationLevel;
ULONG              IsolationFlags;
ULONG              Timeout;
WCHAR              Description[64];
} KCRM_TRANSACTION_BLOB, *PKCRM_TRANSACTION_BLOB, * PRKCRM_TRANSACTION_BLOB;
typedef struct _KCRM_PROTOCOL_BLOB {
CRM_PROTOCOL_ID    ProtocolId;
ULONG StaticInfoLength;
ULONG              TransactionIdInfoLength; 
ULONG              Unused1;        
ULONG              Unused2;        
} KCRM_PROTOCOL_BLOB, *PKCRM_PROTOCOL_BLOB, * PRKCRM_PROTOCOL_BLOB;
#line 208 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ktmtypes.h"
#line 18143 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef enum _TRANSACTION_OUTCOME {
TransactionOutcomeUndetermined = 1,
TransactionOutcomeCommitted,
TransactionOutcomeAborted,
} TRANSACTION_OUTCOME;
typedef enum _TRANSACTION_STATE {
TransactionStateNormal = 1,
TransactionStateIndoubt,
TransactionStateCommittedNotify,
} TRANSACTION_STATE;
typedef struct _TRANSACTION_BASIC_INFORMATION {
GUID    TransactionId;
DWORD   State;
DWORD   Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
GUID    TmIdentity;
LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, *PTRANSACTIONMANAGER_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
GUID  LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, *PTRANSACTIONMANAGER_LOG_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
DWORD LogPathLength;
WCHAR LogPath[1]; 
} TRANSACTIONMANAGER_LOGPATH_INFORMATION, *PTRANSACTIONMANAGER_LOGPATH_INFORMATION;
typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
ULONGLONG  LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, *PTRANSACTIONMANAGER_RECOVERY_INFORMATION;
typedef struct _TRANSACTIONMANAGER_OLDEST_INFORMATION {
GUID OldestTransactionGuid;
} TRANSACTIONMANAGER_OLDEST_INFORMATION, *PTRANSACTIONMANAGER_OLDEST_INFORMATION;
typedef struct _TRANSACTION_PROPERTIES_INFORMATION {
DWORD              IsolationLevel;
DWORD              IsolationFlags;
LARGE_INTEGER      Timeout;
DWORD              Outcome;
DWORD              DescriptionLength;
WCHAR              Description[1];            
} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION;
typedef struct _TRANSACTION_BIND_INFORMATION {
HANDLE TmHandle;
} TRANSACTION_BIND_INFORMATION, *PTRANSACTION_BIND_INFORMATION;
typedef struct _TRANSACTION_ENLISTMENT_PAIR {
GUID   EnlistmentId;
GUID   ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR;
typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
DWORD                       NumberOfEnlistments;
TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1]; 
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION;
typedef struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION {
TRANSACTION_ENLISTMENT_PAIR SuperiorEnlistmentPair;
} TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION, *PTRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION;
typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
GUID    ResourceManagerId;
DWORD   DescriptionLength;
WCHAR   Description[1];            
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION;
typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
HANDLE    IoCompletionPortHandle;
ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, *PRESOURCEMANAGER_COMPLETION_INFORMATION;
typedef enum _TRANSACTION_INFORMATION_CLASS {
TransactionBasicInformation,
TransactionPropertiesInformation,
TransactionEnlistmentInformation,
TransactionSuperiorEnlistmentInformation
,
TransactionBindInformation, 
TransactionDTCPrivateInformation 
,
} TRANSACTION_INFORMATION_CLASS;
typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS {
TransactionManagerBasicInformation,
TransactionManagerLogInformation,
TransactionManagerLogPathInformation,
TransactionManagerRecoveryInformation = 4
,
TransactionManagerOnlineProbeInformation = 3,
TransactionManagerOldestTransactionInformation = 5
} TRANSACTIONMANAGER_INFORMATION_CLASS;
typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
ResourceManagerBasicInformation,
ResourceManagerCompletionInformation,
} RESOURCEMANAGER_INFORMATION_CLASS;
typedef struct _ENLISTMENT_BASIC_INFORMATION {
GUID    EnlistmentId;
GUID    TransactionId;
GUID    ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;
typedef struct _ENLISTMENT_CRM_INFORMATION {
GUID   CrmTransactionManagerId;
GUID   CrmResourceManagerId;
GUID   CrmEnlistmentId;
} ENLISTMENT_CRM_INFORMATION, *PENLISTMENT_CRM_INFORMATION;
typedef enum _ENLISTMENT_INFORMATION_CLASS {
EnlistmentBasicInformation,
EnlistmentRecoveryInformation,
EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;
typedef struct _TRANSACTION_LIST_ENTRY {
UOW    UOW;
} TRANSACTION_LIST_ENTRY, *PTRANSACTION_LIST_ENTRY;
typedef struct _TRANSACTION_LIST_INFORMATION {
DWORD   NumberOfTransactions;
TRANSACTION_LIST_ENTRY TransactionInformation[1]; 
} TRANSACTION_LIST_INFORMATION, *PTRANSACTION_LIST_INFORMATION;
typedef enum _KTMOBJECT_TYPE {
KTMOBJECT_TRANSACTION,
KTMOBJECT_TRANSACTION_MANAGER,
KTMOBJECT_RESOURCE_MANAGER,
KTMOBJECT_ENLISTMENT,
KTMOBJECT_INVALID
} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;
typedef struct _KTMOBJECT_CURSOR {
GUID    LastQuery;
DWORD   ObjectIdCount;
GUID    ObjectIds[1];
} KTMOBJECT_CURSOR, *PKTMOBJECT_CURSOR;
#line 18525 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef DWORD TP_VERSION, *PTP_VERSION; 
typedef struct _TP_CALLBACK_INSTANCE TP_CALLBACK_INSTANCE, *PTP_CALLBACK_INSTANCE;
typedef void (__stdcall *PTP_SIMPLE_CALLBACK)(
PTP_CALLBACK_INSTANCE Instance,
PVOID                 Context
);
typedef struct _TP_POOL TP_POOL, *PTP_POOL; 
typedef enum _TP_CALLBACK_PRIORITY {
TP_CALLBACK_PRIORITY_HIGH,
TP_CALLBACK_PRIORITY_NORMAL,
TP_CALLBACK_PRIORITY_LOW,
TP_CALLBACK_PRIORITY_INVALID,
TP_CALLBACK_PRIORITY_COUNT = TP_CALLBACK_PRIORITY_INVALID
} TP_CALLBACK_PRIORITY;
typedef struct _TP_POOL_STACK_INFORMATION {
SIZE_T StackReserve;
SIZE_T StackCommit;
}TP_POOL_STACK_INFORMATION, *PTP_POOL_STACK_INFORMATION;
typedef struct _TP_CLEANUP_GROUP TP_CLEANUP_GROUP, *PTP_CLEANUP_GROUP; 
typedef void (__stdcall *PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(
PVOID ObjectContext,
PVOID CleanupContext
);
#line 18586 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _TP_CALLBACK_ENVIRON_V1 {
TP_VERSION                         Version;
PTP_POOL                           Pool;
PTP_CLEANUP_GROUP                  CleanupGroup;
PTP_CLEANUP_GROUP_CANCEL_CALLBACK  CleanupGroupCancelCallback;
PVOID                              RaceDll;
struct _ACTIVATION_CONTEXT        *ActivationContext;
PTP_SIMPLE_CALLBACK                FinalizationCallback;
union {
DWORD                          Flags;
struct {
DWORD                      LongFunction :  1;
DWORD                      Persistent   :  1;
DWORD                      Private      : 30;
} s;
} u;
} TP_CALLBACK_ENVIRON_V1;
typedef TP_CALLBACK_ENVIRON_V1 TP_CALLBACK_ENVIRON, *PTP_CALLBACK_ENVIRON;
#line 18608 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__forceinline
void
TpInitializeCallbackEnviron(
PTP_CALLBACK_ENVIRON CallbackEnviron
)
{
#line 18623 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
CallbackEnviron->Version = 1;
#line 18627 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
CallbackEnviron->Pool = ((void *)0);
CallbackEnviron->CleanupGroup = ((void *)0);
CallbackEnviron->CleanupGroupCancelCallback = ((void *)0);
CallbackEnviron->RaceDll = ((void *)0);
CallbackEnviron->ActivationContext = ((void *)0);
CallbackEnviron->FinalizationCallback = ((void *)0);
CallbackEnviron->u.Flags = 0;
#line 18642 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
}
__forceinline
void
TpSetCallbackThreadpool(
PTP_CALLBACK_ENVIRON CallbackEnviron,
PTP_POOL             Pool
)
{
CallbackEnviron->Pool = Pool;
}
__forceinline
void
TpSetCallbackCleanupGroup(
PTP_CALLBACK_ENVIRON              CallbackEnviron,
PTP_CLEANUP_GROUP                 CleanupGroup,
PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback
)
{
CallbackEnviron->CleanupGroup = CleanupGroup;
CallbackEnviron->CleanupGroupCancelCallback = CleanupGroupCancelCallback;
}
__forceinline
void
TpSetCallbackActivationContext(
PTP_CALLBACK_ENVIRON CallbackEnviron,
struct _ACTIVATION_CONTEXT *ActivationContext
)
{
CallbackEnviron->ActivationContext = ActivationContext;
}
__forceinline
void
TpSetCallbackNoActivationContext(
PTP_CALLBACK_ENVIRON CallbackEnviron
)
{
CallbackEnviron->ActivationContext = (struct _ACTIVATION_CONTEXT *)(LONG_PTR) -1; 
}
__forceinline
void
TpSetCallbackLongFunction(
PTP_CALLBACK_ENVIRON CallbackEnviron
)
{
CallbackEnviron->u.s.LongFunction = 1;
}
__forceinline
void
TpSetCallbackRaceWithDll(
PTP_CALLBACK_ENVIRON CallbackEnviron,
PVOID                DllHandle
)
{
CallbackEnviron->RaceDll = DllHandle;
}
__forceinline
void
TpSetCallbackFinalizationCallback(
PTP_CALLBACK_ENVIRON CallbackEnviron,
PTP_SIMPLE_CALLBACK  FinalizationCallback
)
{
CallbackEnviron->FinalizationCallback = FinalizationCallback;
}
#line 18728 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__forceinline
void
TpSetCallbackPersistent(
PTP_CALLBACK_ENVIRON CallbackEnviron
)
{
CallbackEnviron->u.s.Persistent = 1;
}
__forceinline
void
TpDestroyCallbackEnviron(
PTP_CALLBACK_ENVIRON CallbackEnviron
)
{
(CallbackEnviron);
}
#line 18755 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
typedef struct _TP_WORK TP_WORK, *PTP_WORK;
typedef void (__stdcall *PTP_WORK_CALLBACK)(
PTP_CALLBACK_INSTANCE Instance,
PVOID                 Context,
PTP_WORK              Work
);
typedef struct _TP_TIMER TP_TIMER, *PTP_TIMER;
typedef void (__stdcall *PTP_TIMER_CALLBACK)(
PTP_CALLBACK_INSTANCE Instance,
PVOID                 Context,
PTP_TIMER             Timer
);
typedef DWORD    TP_WAIT_RESULT;
typedef struct _TP_WAIT TP_WAIT, *PTP_WAIT;
typedef void (__stdcall *PTP_WAIT_CALLBACK)(
PTP_CALLBACK_INSTANCE Instance,
PVOID                 Context,
PTP_WAIT              Wait,
TP_WAIT_RESULT        WaitResult
);
typedef struct _TP_IO TP_IO, *PTP_IO;
#line 18821 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 18854 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
__inline struct _TEB * NtCurrentTeb( void ) { return (struct _TEB *) (ULONG_PTR) __readfsdword (0x18); }
#line 18881 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 18883 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 18897 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#pragma warning(pop)
#line 18908 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 18910 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 183 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 184 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
typedef UINT_PTR            WPARAM;
typedef LONG_PTR            LPARAM;
typedef LONG_PTR            LRESULT;
#line 195 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 199 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 201 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
typedef HANDLE          *SPHANDLE;
typedef HANDLE           *LPHANDLE;
typedef HANDLE              HGLOBAL;
typedef HANDLE              HLOCAL;
typedef HANDLE              GLOBALHANDLE;
typedef HANDLE              LOCALHANDLE;
typedef int ( __stdcall *FARPROC)();
typedef int ( __stdcall *NEARPROC)();
typedef int (__stdcall *PROC)();
#line 226 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 231 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
typedef WORD                ATOM;   
struct HKEY__{int unused;}; typedef struct HKEY__ *HKEY;
typedef HKEY *PHKEY;
struct HMETAFILE__{int unused;}; typedef struct HMETAFILE__ *HMETAFILE;
struct HINSTANCE__{int unused;}; typedef struct HINSTANCE__ *HINSTANCE;
typedef HINSTANCE HMODULE;      
struct HRGN__{int unused;}; typedef struct HRGN__ *HRGN;
struct HRSRC__{int unused;}; typedef struct HRSRC__ *HRSRC;
struct HSPRITE__{int unused;}; typedef struct HSPRITE__ *HSPRITE;
struct HLSURF__{int unused;}; typedef struct HLSURF__ *HLSURF;
struct HSTR__{int unused;}; typedef struct HSTR__ *HSTR;
struct HTASK__{int unused;}; typedef struct HTASK__ *HTASK;
struct HWINSTA__{int unused;}; typedef struct HWINSTA__ *HWINSTA;
struct HKL__{int unused;}; typedef struct HKL__ *HKL;
typedef int HFILE;
#line 258 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
typedef struct _FILETIME {
DWORD dwLowDateTime;
DWORD dwHighDateTime;
} FILETIME, *PFILETIME, *LPFILETIME;
#line 274 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#pragma endregion
#line 277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\minwindef.h"
#line 25 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnt.h"
#line 32 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma region Application Family
struct HWND__{int unused;}; typedef struct HWND__ *HWND;
struct HHOOK__{int unused;}; typedef struct HHOOK__ *HHOOK;
#line 43 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma endregion
#line 57 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma region Application Family
typedef void * HGDIOBJ;
#line 67 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#line 68 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HACCEL__{int unused;}; typedef struct HACCEL__ *HACCEL;
#line 72 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HBITMAP__{int unused;}; typedef struct HBITMAP__ *HBITMAP;
struct HBRUSH__{int unused;}; typedef struct HBRUSH__ *HBRUSH;
#line 76 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HCOLORSPACE__{int unused;}; typedef struct HCOLORSPACE__ *HCOLORSPACE;
#line 79 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HDC__{int unused;}; typedef struct HDC__ *HDC;
#line 82 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HGLRC__{int unused;}; typedef struct HGLRC__ *HGLRC;          
struct HDESK__{int unused;}; typedef struct HDESK__ *HDESK;
struct HENHMETAFILE__{int unused;}; typedef struct HENHMETAFILE__ *HENHMETAFILE;
struct HFONT__{int unused;}; typedef struct HFONT__ *HFONT;
#line 88 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HICON__{int unused;}; typedef struct HICON__ *HICON;
struct HMENU__{int unused;}; typedef struct HMENU__ *HMENU;
#line 92 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HPALETTE__{int unused;}; typedef struct HPALETTE__ *HPALETTE;
struct HPEN__{int unused;}; typedef struct HPEN__ *HPEN;
#line 96 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
struct HWINEVENTHOOK__{int unused;}; typedef struct HWINEVENTHOOK__ *HWINEVENTHOOK;
#line 100 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#line 102 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma endregion
#pragma region Application Family
struct HMONITOR__{int unused;}; typedef struct HMONITOR__ *HMONITOR;
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma endregion
#line 116 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma region Desktop Family
struct HUMPD__{int unused;}; typedef struct HUMPD__ *HUMPD;
#line 123 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma endregion
#line 126 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma region Application Family
typedef HICON HCURSOR;      
#line 135 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
typedef DWORD   COLORREF;
#line 139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma endregion
#pragma region Desktop Family
typedef DWORD   *LPCOLORREF;
#line 149 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma endregion
#pragma region Application Family
typedef struct tagRECT
{
LONG    left;
LONG    top;
LONG    right;
LONG    bottom;
} RECT, *PRECT,  *NPRECT,  *LPRECT;
typedef const RECT * LPCRECT;
typedef struct _RECTL       
{
LONG    left;
LONG    top;
LONG    right;
LONG    bottom;
} RECTL, *PRECTL, *LPRECTL;
typedef const RECTL * LPCRECTL;
typedef struct tagPOINT
{
LONG  x;
LONG  y;
} POINT, *PPOINT,  *NPPOINT,  *LPPOINT;
typedef struct _POINTL      
{
LONG  x;
LONG  y;
} POINTL, *PPOINTL;
typedef struct tagSIZE
{
LONG        cx;
LONG        cy;
} SIZE, *PSIZE, *LPSIZE;
typedef SIZE               SIZEL;
typedef SIZE               *PSIZEL, *LPSIZEL;
typedef struct tagPOINTS
{
SHORT   x;
SHORT   y;
#line 204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
} POINTS, *PPOINTS, *LPPOINTS;
#line 207 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#pragma endregion
#line 245 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\windef.h"
#line 165 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma once
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma warning(push)
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma warning(disable:4001) 
#pragma warning(disable:4201) 
#pragma warning(disable:4214) 
#line 25 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 26 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 27 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 44 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 45 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 53 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 60 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 61 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 68 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 69 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 76 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 77 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 84 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 85 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 92 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 93 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 95 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
#pragma once
#pragma warning(disable:4514)
#pragma warning(disable:4103)
#line 17 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
#pragma warning(push)
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#line 24 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
typedef struct _SECURITY_ATTRIBUTES {
DWORD nLength;
LPVOID lpSecurityDescriptor;
BOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;
typedef struct _OVERLAPPED {
ULONG_PTR Internal;
ULONG_PTR InternalHigh;
union {
struct {
DWORD Offset;
DWORD OffsetHigh;
} ;
PVOID Pointer;
} ;
HANDLE  hEvent;
} OVERLAPPED, *LPOVERLAPPED;
typedef struct _OVERLAPPED_ENTRY {
ULONG_PTR lpCompletionKey;
LPOVERLAPPED lpOverlapped;
ULONG_PTR Internal;
DWORD dwNumberOfBytesTransferred;
} OVERLAPPED_ENTRY, *LPOVERLAPPED_ENTRY;
typedef struct _SYSTEMTIME {
WORD wYear;
WORD wMonth;
WORD wDayOfWeek;
WORD wDay;
WORD wHour;
WORD wMinute;
WORD wSecond;
WORD wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;
typedef struct _WIN32_FIND_DATAA {
DWORD dwFileAttributes;
FILETIME ftCreationTime;
FILETIME ftLastAccessTime;
FILETIME ftLastWriteTime;
DWORD nFileSizeHigh;
DWORD nFileSizeLow;
DWORD dwReserved0;
DWORD dwReserved1;
CHAR   cFileName[ 260 ];
CHAR   cAlternateFileName[ 14 ];
} WIN32_FIND_DATAA, *PWIN32_FIND_DATAA, *LPWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAW {
DWORD dwFileAttributes;
FILETIME ftCreationTime;
FILETIME ftLastAccessTime;
FILETIME ftLastWriteTime;
DWORD nFileSizeHigh;
DWORD nFileSizeLow;
DWORD dwReserved0;
DWORD dwReserved1;
WCHAR  cFileName[ 260 ];
WCHAR  cAlternateFileName[ 14 ];
} WIN32_FIND_DATAW, *PWIN32_FIND_DATAW, *LPWIN32_FIND_DATAW;
typedef WIN32_FIND_DATAW WIN32_FIND_DATA;
typedef PWIN32_FIND_DATAW PWIN32_FIND_DATA;
typedef LPWIN32_FIND_DATAW LPWIN32_FIND_DATA;
#line 144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
typedef enum _FINDEX_INFO_LEVELS {
FindExInfoStandard,
FindExInfoBasic,
FindExInfoMaxInfoLevel
} FINDEX_INFO_LEVELS;
typedef enum _FINDEX_SEARCH_OPS {
FindExSearchNameMatch,
FindExSearchLimitToDirectories,
FindExSearchLimitToDevices,
FindExSearchMaxSearchOp
} FINDEX_SEARCH_OPS;
#line 163 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
typedef enum _GET_FILEEX_INFO_LEVELS {
GetFileExInfoStandard,
GetFileExMaxInfoLevel
} GET_FILEEX_INFO_LEVELS;
#line 197 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;
typedef PRTL_CRITICAL_SECTION PCRITICAL_SECTION;
typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;
typedef RTL_CRITICAL_SECTION_DEBUG CRITICAL_SECTION_DEBUG;
typedef PRTL_CRITICAL_SECTION_DEBUG PCRITICAL_SECTION_DEBUG;
typedef PRTL_CRITICAL_SECTION_DEBUG LPCRITICAL_SECTION_DEBUG;
typedef
void
(__stdcall *LPOVERLAPPED_COMPLETION_ROUTINE)(
DWORD dwErrorCode,
DWORD dwNumberOfBytesTransfered,
LPOVERLAPPED lpOverlapped
);
typedef struct _PROCESS_HEAP_ENTRY {
PVOID lpData;
DWORD cbData;
BYTE cbOverhead;
BYTE iRegionIndex;
WORD wFlags;
union {
struct {
HANDLE hMem;
DWORD dwReserved[ 3 ];
} Block;
struct {
DWORD dwCommittedSize;
DWORD dwUnCommittedSize;
LPVOID lpFirstBlock;
LPVOID lpLastBlock;
} Region;
} ;
} PROCESS_HEAP_ENTRY, *LPPROCESS_HEAP_ENTRY, *PPROCESS_HEAP_ENTRY;
typedef struct _REASON_CONTEXT {
ULONG Version;
DWORD Flags;
union {
struct {
HMODULE LocalizedReasonModule;
ULONG LocalizedReasonId;
ULONG ReasonStringCount;
LPWSTR *ReasonStrings;
} Detailed;
LPWSTR SimpleReasonString;
} Reason;
} REASON_CONTEXT, *PREASON_CONTEXT;
typedef DWORD (__stdcall *PTHREAD_START_ROUTINE)(
LPVOID lpThreadParameter
);
typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;
typedef struct _EXCEPTION_DEBUG_INFO {
EXCEPTION_RECORD ExceptionRecord;
DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO, *LPEXCEPTION_DEBUG_INFO;
typedef struct _CREATE_THREAD_DEBUG_INFO {
HANDLE hThread;
LPVOID lpThreadLocalBase;
LPTHREAD_START_ROUTINE lpStartAddress;
} CREATE_THREAD_DEBUG_INFO, *LPCREATE_THREAD_DEBUG_INFO;
typedef struct _CREATE_PROCESS_DEBUG_INFO {
HANDLE hFile;
HANDLE hProcess;
HANDLE hThread;
LPVOID lpBaseOfImage;
DWORD dwDebugInfoFileOffset;
DWORD nDebugInfoSize;
LPVOID lpThreadLocalBase;
LPTHREAD_START_ROUTINE lpStartAddress;
LPVOID lpImageName;
WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO, *LPCREATE_PROCESS_DEBUG_INFO;
typedef struct _EXIT_THREAD_DEBUG_INFO {
DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO, *LPEXIT_THREAD_DEBUG_INFO;
typedef struct _EXIT_PROCESS_DEBUG_INFO {
DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO, *LPEXIT_PROCESS_DEBUG_INFO;
typedef struct _LOAD_DLL_DEBUG_INFO {
HANDLE hFile;
LPVOID lpBaseOfDll;
DWORD dwDebugInfoFileOffset;
DWORD nDebugInfoSize;
LPVOID lpImageName;
WORD fUnicode;
} LOAD_DLL_DEBUG_INFO, *LPLOAD_DLL_DEBUG_INFO;
typedef struct _UNLOAD_DLL_DEBUG_INFO {
LPVOID lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO, *LPUNLOAD_DLL_DEBUG_INFO;
typedef struct _OUTPUT_DEBUG_STRING_INFO {
LPSTR lpDebugStringData;
WORD fUnicode;
WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO, *LPOUTPUT_DEBUG_STRING_INFO;
typedef struct _RIP_INFO {
DWORD dwError;
DWORD dwType;
} RIP_INFO, *LPRIP_INFO;
typedef struct _DEBUG_EVENT {
DWORD dwDebugEventCode;
DWORD dwProcessId;
DWORD dwThreadId;
union {
EXCEPTION_DEBUG_INFO Exception;
CREATE_THREAD_DEBUG_INFO CreateThread;
CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
EXIT_THREAD_DEBUG_INFO ExitThread;
EXIT_PROCESS_DEBUG_INFO ExitProcess;
LOAD_DLL_DEBUG_INFO LoadDll;
UNLOAD_DLL_DEBUG_INFO UnloadDll;
OUTPUT_DEBUG_STRING_INFO DebugString;
RIP_INFO RipInfo;
} u;
} DEBUG_EVENT, *LPDEBUG_EVENT;
typedef PCONTEXT LPCONTEXT;
#line 359 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
#pragma warning(pop)
#line 430 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
#line 431 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
#line 433 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\minwinbase.h"
#line 32 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#pragma region Desktop Family
__declspec(dllimport)
LPCH
__stdcall
GetEnvironmentStrings(
void
);
__declspec(dllimport)
LPWCH
__stdcall
GetEnvironmentStringsW(
void
);
#line 73 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentStringsW(
LPWCH NewEnvironment
);
#line 84 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
BOOL
__stdcall
FreeEnvironmentStringsA(
LPCH penv
);
__declspec(dllimport)
BOOL
__stdcall
FreeEnvironmentStringsW(
LPWCH penv
);
#line 104 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
HANDLE
__stdcall
GetStdHandle(
DWORD nStdHandle
);
__declspec(dllimport)
BOOL
__stdcall
SetStdHandle(
DWORD nStdHandle,
HANDLE hHandle
);
#line 136 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
LPSTR
__stdcall
GetCommandLineA(
void
);
__declspec(dllimport)
LPWSTR
__stdcall
GetCommandLineW(
void
);
#line 156 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
DWORD
__stdcall
GetEnvironmentVariableA(
LPCSTR lpName,
LPSTR lpBuffer,
DWORD nSize
);
__declspec(dllimport)
DWORD
__stdcall
GetEnvironmentVariableW(
LPCWSTR lpName,
LPWSTR lpBuffer,
DWORD nSize
);
#line 182 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentVariableA(
LPCSTR lpName,
LPCSTR lpValue
);
__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentVariableW(
LPCWSTR lpName,
LPCWSTR lpValue
);
#line 204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
DWORD
__stdcall
ExpandEnvironmentStringsA(
LPCSTR lpSrc,
LPSTR lpDst,
DWORD nSize
);
__declspec(dllimport)
DWORD
__stdcall
ExpandEnvironmentStringsW(
LPCWSTR lpSrc,
LPWSTR lpDst,
DWORD nSize
);
#line 230 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
BOOL
__stdcall
SetCurrentDirectoryA(
LPCSTR lpPathName
);
__declspec(dllimport)
BOOL
__stdcall
SetCurrentDirectoryW(
LPCWSTR lpPathName
);
#line 250 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
DWORD
__stdcall
GetCurrentDirectoryA(
DWORD nBufferLength,
LPSTR lpBuffer
);
__declspec(dllimport)
DWORD
__stdcall
GetCurrentDirectoryW(
DWORD nBufferLength,
LPWSTR lpBuffer
);
#line 274 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
DWORD
__stdcall
SearchPathW(
LPCWSTR lpPath,
LPCWSTR lpFileName,
LPCWSTR lpExtension,
DWORD nBufferLength,
LPWSTR lpBuffer,
LPWSTR * lpFilePart
);
#line 293 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
__declspec(dllimport)
DWORD
__stdcall
SearchPathA(
LPCSTR lpPath,
LPCSTR lpFileName,
LPCSTR lpExtension,
DWORD nBufferLength,
LPSTR lpBuffer,
LPSTR * lpFilePart
);
#line 338 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#line 340 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#line 344 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#pragma endregion
#line 354 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processenv.h"
#line 38 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma once
#line 16 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 22 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma region Application Family
#line 59 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
LONG
__stdcall
CompareFileTime(
const FILETIME * lpFileTime1,
const FILETIME * lpFileTime2
);
#line 83 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryA(
LPCSTR lpPathName,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryW(
LPCWSTR lpPathName,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#line 110 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 112 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
CreateFileA(
LPCSTR lpFileName,
DWORD dwDesiredAccess,
DWORD dwShareMode,
LPSECURITY_ATTRIBUTES lpSecurityAttributes,
DWORD dwCreationDisposition,
DWORD dwFlagsAndAttributes,
HANDLE hTemplateFile
);
__declspec(dllimport)
HANDLE
__stdcall
CreateFileW(
LPCWSTR lpFileName,
DWORD dwDesiredAccess,
DWORD dwShareMode,
LPSECURITY_ATTRIBUTES lpSecurityAttributes,
DWORD dwCreationDisposition,
DWORD dwFlagsAndAttributes,
HANDLE hTemplateFile
);
#line 149 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
DefineDosDeviceW(
DWORD dwFlags,
LPCWSTR lpDeviceName,
LPCWSTR lpTargetPath
);
#line 163 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 165 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
DeleteFileA(
LPCSTR lpFileName
);
__declspec(dllimport)
BOOL
__stdcall
DeleteFileW(
LPCWSTR lpFileName
);
#line 190 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DeleteVolumeMountPointW(
LPCWSTR lpszVolumeMountPoint
);
#line 209 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
FileTimeToLocalFileTime(
const FILETIME * lpFileTime,
LPFILETIME lpLocalFileTime
);
#line 220 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
FindClose(
HANDLE hFindFile
);
#line 238 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
FindCloseChangeNotification(
HANDLE hChangeHandle
);
__declspec(dllimport)
HANDLE
__stdcall
FindFirstChangeNotificationA(
LPCSTR lpPathName,
BOOL bWatchSubtree,
DWORD dwNotifyFilter
);
__declspec(dllimport)
HANDLE
__stdcall
FindFirstChangeNotificationW(
LPCWSTR lpPathName,
BOOL bWatchSubtree,
DWORD dwNotifyFilter
);
#line 275 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileA(
LPCSTR lpFileName,
LPWIN32_FIND_DATAA lpFindFileData
);
__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileW(
LPCWSTR lpFileName,
LPWIN32_FIND_DATAW lpFindFileData
);
#line 297 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 299 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileExA(
LPCSTR lpFileName,
FINDEX_INFO_LEVELS fInfoLevelId,
LPVOID lpFindFileData,
FINDEX_SEARCH_OPS fSearchOp,
LPVOID lpSearchFilter,
DWORD dwAdditionalFlags
);
__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileExW(
LPCWSTR lpFileName,
FINDEX_INFO_LEVELS fInfoLevelId,
LPVOID lpFindFileData,
FINDEX_SEARCH_OPS fSearchOp,
LPVOID lpSearchFilter,
DWORD dwAdditionalFlags
);
#line 337 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 339 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 341 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeW(
LPWSTR lpszVolumeName,
DWORD cchBufferLength
);
#line 359 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
FindNextChangeNotification(
HANDLE hChangeHandle
);
#line 369 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
FindNextFileA(
HANDLE hFindFile,
LPWIN32_FIND_DATAA lpFindFileData
);
__declspec(dllimport)
BOOL
__stdcall
FindNextFileW(
HANDLE hFindFile,
LPWIN32_FIND_DATAW lpFindFileData
);
#line 396 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 398 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeW(
HANDLE hFindVolume,
LPWSTR lpszVolumeName,
DWORD cchBufferLength
);
#line 417 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
FindVolumeClose(
HANDLE hFindVolume
);
#line 427 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
FlushFileBuffers(
HANDLE hFile
);
#line 442 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceA(
LPCSTR lpRootPathName,
LPDWORD lpSectorsPerCluster,
LPDWORD lpBytesPerSector,
LPDWORD lpNumberOfFreeClusters,
LPDWORD lpTotalNumberOfClusters
);
__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceW(
LPCWSTR lpRootPathName,
LPDWORD lpSectorsPerCluster,
LPDWORD lpBytesPerSector,
LPDWORD lpNumberOfFreeClusters,
LPDWORD lpTotalNumberOfClusters
);
#line 475 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 477 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceExA(
LPCSTR lpDirectoryName,
PULARGE_INTEGER lpFreeBytesAvailableToCaller,
PULARGE_INTEGER lpTotalNumberOfBytes,
PULARGE_INTEGER lpTotalNumberOfFreeBytes
);
__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceExW(
LPCWSTR lpDirectoryName,
PULARGE_INTEGER lpFreeBytesAvailableToCaller,
PULARGE_INTEGER lpTotalNumberOfBytes,
PULARGE_INTEGER lpTotalNumberOfFreeBytes
);
#line 508 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 510 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
UINT
__stdcall
GetDriveTypeA(
LPCSTR lpRootPathName
);
__declspec(dllimport)
UINT
__stdcall
GetDriveTypeW(
LPCWSTR lpRootPathName
);
#line 535 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
DWORD
__stdcall
GetFileAttributesA(
LPCSTR lpFileName
);
__declspec(dllimport)
DWORD
__stdcall
GetFileAttributesW(
LPCWSTR lpFileName
);
#line 555 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 557 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
DWORD dwFileAttributes;
FILETIME ftCreationTime;
FILETIME ftLastAccessTime;
FILETIME ftLastWriteTime;
DWORD nFileSizeHigh;
DWORD nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA, *LPWIN32_FILE_ATTRIBUTE_DATA;
#line 573 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
GetFileAttributesExA(
LPCSTR lpFileName,
GET_FILEEX_INFO_LEVELS fInfoLevelId,
LPVOID lpFileInformation
);
__declspec(dllimport)
BOOL
__stdcall
GetFileAttributesExW(
LPCWSTR lpFileName,
GET_FILEEX_INFO_LEVELS fInfoLevelId,
LPVOID lpFileInformation
);
#line 602 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 604 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _BY_HANDLE_FILE_INFORMATION {
DWORD dwFileAttributes;
FILETIME ftCreationTime;
FILETIME ftLastAccessTime;
FILETIME ftLastWriteTime;
DWORD dwVolumeSerialNumber;
DWORD nFileSizeHigh;
DWORD nFileSizeLow;
DWORD nNumberOfLinks;
DWORD nFileIndexHigh;
DWORD nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION, *PBY_HANDLE_FILE_INFORMATION, *LPBY_HANDLE_FILE_INFORMATION;
__declspec(dllimport)
BOOL
__stdcall
GetFileInformationByHandle(
HANDLE hFile,
LPBY_HANDLE_FILE_INFORMATION lpFileInformation
);
__declspec(dllimport)
DWORD
__stdcall
GetFileSize(
HANDLE hFile,
LPDWORD lpFileSizeHigh
);
__declspec(dllimport)
BOOL
__stdcall
GetFileSizeEx(
HANDLE hFile,
PLARGE_INTEGER lpFileSize
);
__declspec(dllimport)
BOOL
__stdcall
GetFileTime(
HANDLE hFile,
LPFILETIME lpCreationTime,
LPFILETIME lpLastAccessTime,
LPFILETIME lpLastWriteTime
);
__declspec(dllimport)
DWORD
__stdcall
GetFileType(
HANDLE hFile
);
#line 699 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
DWORD
__stdcall
GetFullPathNameA(
LPCSTR lpFileName,
DWORD nBufferLength,
LPSTR lpBuffer,
LPSTR * lpFilePart
);
__declspec(dllimport)
DWORD
__stdcall
GetFullPathNameW(
LPCWSTR lpFileName,
DWORD nBufferLength,
LPWSTR lpBuffer,
LPWSTR * lpFilePart
);
#line 727 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
DWORD
__stdcall
GetLogicalDrives(
void
);
__declspec(dllimport)
DWORD
__stdcall
GetLogicalDriveStringsW(
DWORD nBufferLength,
LPWSTR lpBuffer
);
#line 748 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
DWORD
__stdcall
GetLongPathNameA(
LPCSTR lpszShortPath,
LPSTR lpszLongPath,
DWORD cchBuffer
);
__declspec(dllimport)
DWORD
__stdcall
GetLongPathNameW(
LPCWSTR lpszShortPath,
LPWSTR lpszLongPath,
DWORD cchBuffer
);
#line 774 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
DWORD
__stdcall
GetShortPathNameW(
LPCWSTR lpszLongPath,
LPWSTR lpszShortPath,
DWORD cchBuffer
);
#line 789 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
UINT
__stdcall
GetTempFileNameW(
LPCWSTR lpPathName,
LPCWSTR lpPrefixString,
UINT uUnique,
LPWSTR lpTempFileName
);
#line 804 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 824 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetVolumeInformationW(
LPCWSTR lpRootPathName,
LPWSTR lpVolumeNameBuffer,
DWORD nVolumeNameSize,
LPDWORD lpVolumeSerialNumber,
LPDWORD lpMaximumComponentLength,
LPDWORD lpFileSystemFlags,
LPWSTR lpFileSystemNameBuffer,
DWORD nFileSystemNameSize
);
#line 843 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNameW(
LPCWSTR lpszFileName,
LPWSTR lpszVolumePathName,
DWORD cchBufferLength
);
#line 857 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
LocalFileTimeToFileTime(
const FILETIME * lpLocalFileTime,
LPFILETIME lpFileTime
);
__declspec(dllimport)
BOOL
__stdcall
LockFile(
HANDLE hFile,
DWORD dwFileOffsetLow,
DWORD dwFileOffsetHigh,
DWORD nNumberOfBytesToLockLow,
DWORD nNumberOfBytesToLockHigh
);
#line 880 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
LockFileEx(
HANDLE hFile,
DWORD dwFlags,
DWORD dwReserved,
DWORD nNumberOfBytesToLockLow,
DWORD nNumberOfBytesToLockHigh,
LPOVERLAPPED lpOverlapped
);
#line 900 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
QueryDosDeviceW(
LPCWSTR lpDeviceName,
LPWSTR lpTargetPath,
DWORD ucchMax
);
#line 919 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 921 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
ReadFile(
HANDLE hFile,
LPVOID lpBuffer,
DWORD nNumberOfBytesToRead,
LPDWORD lpNumberOfBytesRead,
LPOVERLAPPED lpOverlapped
);
#line 941 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
ReadFileEx(
HANDLE hFile,
LPVOID lpBuffer,
DWORD nNumberOfBytesToRead,
LPOVERLAPPED lpOverlapped,
LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
__declspec(dllimport)
BOOL
__stdcall
ReadFileScatter(
HANDLE hFile,
FILE_SEGMENT_ELEMENT aSegmentArray[],
DWORD nNumberOfBytesToRead,
LPDWORD lpReserved,
LPOVERLAPPED lpOverlapped
);
#line 974 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
RemoveDirectoryA(
LPCSTR lpPathName
);
__declspec(dllimport)
BOOL
__stdcall
RemoveDirectoryW(
LPCWSTR lpPathName
);
#line 999 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetEndOfFile(
HANDLE hFile
);
__declspec(dllimport)
BOOL
__stdcall
SetFileAttributesA(
LPCSTR lpFileName,
DWORD dwFileAttributes
);
__declspec(dllimport)
BOOL
__stdcall
SetFileAttributesW(
LPCWSTR lpFileName,
DWORD dwFileAttributes
);
#line 1029 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1045 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1047 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
SetFilePointer(
HANDLE hFile,
LONG lDistanceToMove,
PLONG lpDistanceToMoveHigh,
DWORD dwMoveMethod
);
#line 1065 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
SetFilePointerEx(
HANDLE hFile,
LARGE_INTEGER liDistanceToMove,
PLARGE_INTEGER lpNewFilePointer,
DWORD dwMoveMethod
);
#line 1083 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetFileTime(
HANDLE hFile,
const FILETIME * lpCreationTime,
const FILETIME * lpLastAccessTime,
const FILETIME * lpLastWriteTime
);
__declspec(dllimport)
BOOL
__stdcall
SetFileValidData(
HANDLE hFile,
LONGLONG ValidDataLength
);
#line 1113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
UnlockFile(
HANDLE hFile,
DWORD dwFileOffsetLow,
DWORD dwFileOffsetHigh,
DWORD nNumberOfBytesToUnlockLow,
DWORD nNumberOfBytesToUnlockHigh
);
#line 1127 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
UnlockFileEx(
HANDLE hFile,
DWORD dwReserved,
DWORD nNumberOfBytesToUnlockLow,
DWORD nNumberOfBytesToUnlockHigh,
LPOVERLAPPED lpOverlapped
);
__declspec(dllimport)
BOOL
__stdcall
WriteFile(
HANDLE hFile,
LPCVOID lpBuffer,
DWORD nNumberOfBytesToWrite,
LPDWORD lpNumberOfBytesWritten,
LPOVERLAPPED lpOverlapped
);
#line 1158 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
WriteFileEx(
HANDLE hFile,
LPCVOID lpBuffer,
DWORD nNumberOfBytesToWrite,
LPOVERLAPPED lpOverlapped,
LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
__declspec(dllimport)
BOOL
__stdcall
WriteFileGather(
HANDLE hFile,
FILE_SEGMENT_ELEMENT aSegmentArray[],
DWORD nNumberOfBytesToWrite,
LPDWORD lpReserved,
LPOVERLAPPED lpOverlapped
);
#line 1189 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
GetTempPathW(
DWORD nBufferLength,
LPWSTR lpBuffer
);
#line 1214 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetVolumeNameForVolumeMountPointW(
LPCWSTR lpszVolumeMountPoint,
LPWSTR lpszVolumeName,
DWORD cchBufferLength
);
#line 1228 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNamesForVolumeNameW(
LPCWSTR lpszVolumeName,
LPWCH lpszVolumePathNames,
DWORD cchBufferLength,
PDWORD lpcchReturnLength
);
#line 1246 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1248 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1250 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#pragma region Application Family
#line 1281 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1283 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#pragma endregion
#line 1287 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 1298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fileapi.h"
#line 39 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
IsDebuggerPresent(
void
);
#line 59 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 61 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
void
__stdcall
DebugBreak(
void
);
#line 76 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
void
__stdcall
OutputDebugStringA(
LPCSTR lpOutputString
);
__declspec(dllimport)
void
__stdcall
OutputDebugStringW(
LPCWSTR lpOutputString
);
#line 101 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 103 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
ContinueDebugEvent(
DWORD dwProcessId,
DWORD dwThreadId,
DWORD dwContinueStatus
);
__declspec(dllimport)
BOOL
__stdcall
WaitForDebugEvent(
LPDEBUG_EVENT lpDebugEvent,
DWORD dwMilliseconds
);
__declspec(dllimport)
BOOL
__stdcall
DebugActiveProcess(
DWORD dwProcessId
);
__declspec(dllimport)
BOOL
__stdcall
DebugActiveProcessStop(
DWORD dwProcessId
);
__declspec(dllimport)
BOOL
__stdcall
CheckRemoteDebuggerPresent(
HANDLE hProcess,
PBOOL pbDebuggerPresent
);
#line 162 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 164 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 166 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#pragma endregion
#line 178 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\debugapi.h"
#line 40 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#pragma region Application Family
__declspec(dllimport)
PVOID
__stdcall
EncodePointer(
PVOID Ptr
);
__declspec(dllimport)
PVOID
__stdcall
DecodePointer(
PVOID Ptr
);
#line 58 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
PVOID
__stdcall
EncodeSystemPointer(
PVOID Ptr
);
__declspec(dllimport)
PVOID
__stdcall
DecodeSystemPointer(
PVOID Ptr
);
__declspec(dllimport)
BOOL
__stdcall
Beep(
DWORD dwFreq,
DWORD dwDuration
);
#line 92 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#pragma endregion
#line 99 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\utilapiset.h"
#line 41 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
CloseHandle(
HANDLE hObject
);
__declspec(dllimport)
BOOL
__stdcall
DuplicateHandle(
HANDLE hSourceProcessHandle,
HANDLE hSourceHandle,
HANDLE hTargetProcessHandle,
LPHANDLE lpTargetHandle,
DWORD dwDesiredAccess,
BOOL bInheritHandle,
DWORD dwOptions
);
#line 70 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetHandleInformation(
HANDLE hObject,
LPDWORD lpdwFlags
);
__declspec(dllimport)
BOOL
__stdcall
SetHandleInformation(
HANDLE hObject,
DWORD dwMask,
DWORD dwFlags
);
#line 96 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#pragma endregion
#line 103 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\handleapi.h"
#line 42 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma region Desktop Family
typedef LONG (__stdcall *PTOP_LEVEL_EXCEPTION_FILTER)(
struct _EXCEPTION_POINTERS *ExceptionInfo
);
typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
void
__stdcall
RaiseException(
DWORD dwExceptionCode,
DWORD dwExceptionFlags,
DWORD nNumberOfArguments,
const ULONG_PTR * lpArguments
);
#line 82 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
LONG
__stdcall
UnhandledExceptionFilter(
struct _EXCEPTION_POINTERS * ExceptionInfo
);
__declspec(dllimport)
LPTOP_LEVEL_EXCEPTION_FILTER
__stdcall
SetUnhandledExceptionFilter(
LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter
);
#line 106 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
DWORD
__stdcall
GetLastError(
void
);
#line 124 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
__declspec(dllimport)
void
__stdcall
SetLastError(
DWORD dwErrCode
);
#line 134 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma endregion
#pragma region Desktop Family
#line 152 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
__declspec(dllimport)
UINT
__stdcall
SetErrorMode(
UINT uMode
);
#line 162 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
PVOID
__stdcall
AddVectoredExceptionHandler(
ULONG First,
PVECTORED_EXCEPTION_HANDLER Handler
);
__declspec(dllimport)
ULONG
__stdcall
RemoveVectoredExceptionHandler(
PVOID Handle
);
__declspec(dllimport)
PVOID
__stdcall
AddVectoredContinueHandler(
ULONG First,
PVECTORED_EXCEPTION_HANDLER Handler
);
__declspec(dllimport)
ULONG
__stdcall
RemoveVectoredContinueHandler(
PVOID Handle
);
#line 212 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 237 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 239 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 241 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#pragma endregion
#line 253 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\errhandlingapi.h"
#line 43 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#pragma region Application Family
#line 89 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#line 91 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#pragma endregion
#pragma region Desktop Family
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#line 115 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#pragma endregion
#line 127 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\fibersapi.h"
#line 44 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
__declspec(dllimport)
BOOL
__stdcall
CreatePipe(
PHANDLE hReadPipe,
PHANDLE hWritePipe,
LPSECURITY_ATTRIBUTES lpPipeAttributes,
DWORD nSize
);
__declspec(dllimport)
BOOL
__stdcall
ConnectNamedPipe(
HANDLE hNamedPipe,
LPOVERLAPPED lpOverlapped
);
__declspec(dllimport)
BOOL
__stdcall
DisconnectNamedPipe(
HANDLE hNamedPipe
);
__declspec(dllimport)
BOOL
__stdcall
SetNamedPipeHandleState(
HANDLE hNamedPipe,
LPDWORD lpMode,
LPDWORD lpMaxCollectionCount,
LPDWORD lpCollectDataTimeout
);
__declspec(dllimport)
BOOL
__stdcall
PeekNamedPipe(
HANDLE hNamedPipe,
LPVOID lpBuffer,
DWORD nBufferSize,
LPDWORD lpBytesRead,
LPDWORD lpTotalBytesAvail,
LPDWORD lpBytesLeftThisMessage
);
__declspec(dllimport)
BOOL
__stdcall
TransactNamedPipe(
HANDLE hNamedPipe,
LPVOID lpInBuffer,
DWORD nInBufferSize,
LPVOID lpOutBuffer,
DWORD nOutBufferSize,
LPDWORD lpBytesRead,
LPOVERLAPPED lpOverlapped
);
__declspec(dllimport)
HANDLE
__stdcall
CreateNamedPipeW(
LPCWSTR lpName,
DWORD dwOpenMode,
DWORD dwPipeMode,
DWORD nMaxInstances,
DWORD nOutBufferSize,
DWORD nInBufferSize,
DWORD nDefaultTimeOut,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#line 131 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
__declspec(dllimport)
BOOL
__stdcall
WaitNamedPipeW(
LPCWSTR lpNamedPipeName,
DWORD nTimeOut
);
#line 144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 159 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 163 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 165 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
__declspec(dllimport)
BOOL
__stdcall
ImpersonateNamedPipeClient(
HANDLE hNamedPipe
);
#line 181 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 188 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namedpipeapi.h"
#line 45 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\profileapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\profileapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\profileapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\profileapi.h"
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\profileapi.h"
__declspec(dllimport)
BOOL
__stdcall
QueryPerformanceCounter(
LARGE_INTEGER * lpPerformanceCount
);
__declspec(dllimport)
BOOL
__stdcall
QueryPerformanceFrequency(
LARGE_INTEGER * lpFrequency
);
#line 60 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\profileapi.h"
#line 46 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma region Desktop Family
typedef struct _HEAP_SUMMARY {
DWORD cb;
SIZE_T cbAllocated;
SIZE_T cbCommitted;
SIZE_T cbReserved;
SIZE_T cbMaxReserve;
} HEAP_SUMMARY, *PHEAP_SUMMARY;
typedef PHEAP_SUMMARY LPHEAP_SUMMARY;
#line 56 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
HeapCreate(
DWORD flOptions,
SIZE_T dwInitialSize,
SIZE_T dwMaximumSize
);
__declspec(dllimport)
BOOL
__stdcall
HeapDestroy(
HANDLE hHeap
);
#line 86 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
LPVOID
__stdcall
HeapAlloc(
HANDLE hHeap,
DWORD dwFlags,
SIZE_T dwBytes
);
__declspec(dllimport)
LPVOID
__stdcall
HeapReAlloc(
HANDLE hHeap,
DWORD dwFlags,
LPVOID lpMem,
SIZE_T dwBytes
);
__declspec(dllimport)
BOOL
__stdcall
HeapFree(
HANDLE hHeap,
DWORD dwFlags,
LPVOID lpMem
);
__declspec(dllimport)
SIZE_T
__stdcall
HeapSize(
HANDLE hHeap,
DWORD dwFlags,
LPCVOID lpMem
);
#line 139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
HeapValidate(
HANDLE hHeap,
DWORD dwFlags,
LPCVOID lpMem
);
__declspec(dllimport)
SIZE_T
__stdcall
HeapCompact(
HANDLE hHeap,
DWORD dwFlags
);
BOOL
__stdcall
HeapSummary(
HANDLE hHeap,
DWORD dwFlags,
LPHEAP_SUMMARY lpSummary
);
#line 177 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#line 179 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
HANDLE
__stdcall
GetProcessHeap(
void
);
#line 194 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
GetProcessHeaps(
DWORD NumberOfHeaps,
PHANDLE ProcessHeaps
);
__declspec(dllimport)
BOOL
__stdcall
HeapLock(
HANDLE hHeap
);
__declspec(dllimport)
BOOL
__stdcall
HeapUnlock(
HANDLE hHeap
);
__declspec(dllimport)
BOOL
__stdcall
HeapWalk(
HANDLE hHeap,
LPPROCESS_HEAP_ENTRY lpEntry
);
__declspec(dllimport)
BOOL
__stdcall
HeapSetInformation(
HANDLE HeapHandle,
HEAP_INFORMATION_CLASS HeapInformationClass,
PVOID HeapInformation,
SIZE_T HeapInformationLength
);
__declspec(dllimport)
BOOL
__stdcall
HeapQueryInformation(
HANDLE HeapHandle,
HEAP_INFORMATION_CLASS HeapInformationClass,
PVOID HeapInformation,
SIZE_T HeapInformationLength,
PSIZE_T ReturnLength
);
#line 258 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#pragma endregion
#line 269 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\heapapi.h"
#line 47 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetOverlappedResult(
HANDLE hFile,
LPOVERLAPPED lpOverlapped,
LPDWORD lpNumberOfBytesTransferred,
BOOL bWait
);
__declspec(dllimport)
HANDLE
__stdcall
CreateIoCompletionPort(
HANDLE FileHandle,
HANDLE ExistingCompletionPort,
ULONG_PTR CompletionKey,
DWORD NumberOfConcurrentThreads
);
__declspec(dllimport)
BOOL
__stdcall
GetQueuedCompletionStatus(
HANDLE CompletionPort,
LPDWORD lpNumberOfBytesTransferred,
PULONG_PTR lpCompletionKey,
LPOVERLAPPED * lpOverlapped,
DWORD dwMilliseconds
);
#line 101 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
__declspec(dllimport)
BOOL
__stdcall
PostQueuedCompletionStatus(
HANDLE CompletionPort,
DWORD dwNumberOfBytesTransferred,
ULONG_PTR dwCompletionKey,
LPOVERLAPPED lpOverlapped
);
__declspec(dllimport)
BOOL
__stdcall
DeviceIoControl(
HANDLE hDevice,
DWORD dwIoControlCode,
LPVOID lpInBuffer,
DWORD nInBufferSize,
LPVOID lpOutBuffer,
DWORD nOutBufferSize,
LPDWORD lpBytesReturned,
LPOVERLAPPED lpOverlapped
);
#line 141 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#line 143 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
GetOverlappedResultEx(
HANDLE hFile,
LPOVERLAPPED lpOverlapped,
LPDWORD lpNumberOfBytesTransferred,
DWORD dwMilliseconds,
BOOL bAlertable
);
#line 169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CancelIo(
HANDLE hFile
);
#line 195 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#line 197 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#pragma endregion
#line 200 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#line 211 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ioapiset.h"
#line 48 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma once
#line 16 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 22 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma region Application Family
typedef RTL_SRWLOCK SRWLOCK, *PSRWLOCK;
#line 60 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Application Family
#line 137 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
void
__stdcall
InitializeCriticalSection(
LPCRITICAL_SECTION lpCriticalSection
);
#line 168 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 170 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
void
__stdcall
EnterCriticalSection(
LPCRITICAL_SECTION lpCriticalSection
);
__declspec(dllimport)
void
__stdcall
LeaveCriticalSection(
LPCRITICAL_SECTION lpCriticalSection
);
#line 193 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
InitializeCriticalSectionAndSpinCount(
LPCRITICAL_SECTION lpCriticalSection,
DWORD dwSpinCount
);
#line 210 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Application Family
#line 230 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 232 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
SetCriticalSectionSpinCount(
LPCRITICAL_SECTION lpCriticalSection,
DWORD dwSpinCount
);
#line 248 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
TryEnterCriticalSection(
LPCRITICAL_SECTION lpCriticalSection
);
#line 266 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
__declspec(dllimport)
void
__stdcall
DeleteCriticalSection(
LPCRITICAL_SECTION lpCriticalSection
);
typedef RTL_RUN_ONCE INIT_ONCE;
typedef PRTL_RUN_ONCE PINIT_ONCE;
typedef PRTL_RUN_ONCE LPINIT_ONCE;
typedef
BOOL
(__stdcall *PINIT_ONCE_FN) (
PINIT_ONCE InitOnce,
PVOID Parameter,
PVOID *Context
);
#line 356 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
typedef RTL_CONDITION_VARIABLE CONDITION_VARIABLE, *PCONDITION_VARIABLE;
#line 424 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetEvent(
HANDLE hEvent
);
__declspec(dllimport)
BOOL
__stdcall
ResetEvent(
HANDLE hEvent
);
__declspec(dllimport)
BOOL
__stdcall
ReleaseSemaphore(
HANDLE hSemaphore,
LONG lReleaseCount,
LPLONG lpPreviousCount
);
__declspec(dllimport)
BOOL
__stdcall
ReleaseMutex(
HANDLE hMutex
);
#line 464 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
WaitForSingleObject(
HANDLE hHandle,
DWORD dwMilliseconds
);
__declspec(dllimport)
DWORD
__stdcall
SleepEx(
DWORD dwMilliseconds,
BOOL bAlertable
);
#line 489 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
DWORD
__stdcall
WaitForSingleObjectEx(
HANDLE hHandle,
DWORD dwMilliseconds,
BOOL bAlertable
);
__declspec(dllimport)
DWORD
__stdcall
WaitForMultipleObjectsEx(
DWORD nCount,
const HANDLE * lpHandles,
BOOL bWaitAll,
DWORD dwMilliseconds,
BOOL bAlertable
);
#line 525 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
CreateMutexA(
LPSECURITY_ATTRIBUTES lpMutexAttributes,
BOOL bInitialOwner,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
CreateMutexW(
LPSECURITY_ATTRIBUTES lpMutexAttributes,
BOOL bInitialOwner,
LPCWSTR lpName
);
#line 556 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 558 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
HANDLE
__stdcall
OpenMutexW(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCWSTR lpName
);
#line 578 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 580 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
CreateEventA(
LPSECURITY_ATTRIBUTES lpEventAttributes,
BOOL bManualReset,
BOOL bInitialState,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
CreateEventW(
LPSECURITY_ATTRIBUTES lpEventAttributes,
BOOL bManualReset,
BOOL bInitialState,
LPCWSTR lpName
);
#line 613 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 615 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
HANDLE
__stdcall
OpenEventA(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
OpenEventW(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCWSTR lpName
);
#line 646 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
__declspec(dllimport)
HANDLE
__stdcall
OpenSemaphoreW(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCWSTR lpName
);
#line 661 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 663 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#pragma region Desktop Family
typedef
void
(__stdcall *PTIMERAPCROUTINE)(
LPVOID lpArgToCompletionRoutine,
DWORD dwTimerLowValue,
DWORD dwTimerHighValue
);
__declspec(dllimport)
HANDLE
__stdcall
OpenWaitableTimerW(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCWSTR lpTimerName
);
#line 694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 712 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetWaitableTimer(
HANDLE hTimer,
const LARGE_INTEGER * lpDueTime,
LONG lPeriod,
PTIMERAPCROUTINE pfnCompletionRoutine,
LPVOID lpArgToCompletionRoutine,
BOOL fResume
);
__declspec(dllimport)
BOOL
__stdcall
CancelWaitableTimer(
HANDLE hTimer
);
#line 735 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#line 852 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 854 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma region Desktop Family
typedef RTL_BARRIER SYNCHRONIZATION_BARRIER;
typedef PRTL_BARRIER PSYNCHRONIZATION_BARRIER;
typedef PRTL_BARRIER LPSYNCHRONIZATION_BARRIER;
BOOL
__stdcall
EnterSynchronizationBarrier(
LPSYNCHRONIZATION_BARRIER lpBarrier,
DWORD dwFlags
);
BOOL
__stdcall
InitializeSynchronizationBarrier(
LPSYNCHRONIZATION_BARRIER lpBarrier,
LONG lTotalThreads,
LONG lSpinCount
);
BOOL
__stdcall
DeleteSynchronizationBarrier(
LPSYNCHRONIZATION_BARRIER lpBarrier
);
__declspec(dllimport)
void
__stdcall
Sleep(
DWORD dwMilliseconds
);
BOOL
__stdcall
WaitOnAddress(
volatile void * Address,
PVOID CompareAddress,
SIZE_T AddressSize,
DWORD dwMilliseconds
);
void
__stdcall
WakeByAddressSingle(
PVOID Address
);
void
__stdcall
WakeByAddressAll(
PVOID Address
);
__declspec(dllimport)
DWORD
__stdcall
SignalObjectAndWait(
HANDLE hObjectToSignal,
HANDLE hObjectToWaitOn,
DWORD dwMilliseconds,
BOOL bAlertable
);
#line 944 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 946 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#pragma endregion
#line 949 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 959 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\synchapi.h"
#line 49 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
__declspec(dllimport)
LONG
__stdcall
InterlockedIncrement(
LONG volatile * lpAddend
);
__declspec(dllimport)
LONG
__stdcall
InterlockedDecrement(
LONG volatile * lpAddend
);
__declspec(dllimport)
LONG
__stdcall
InterlockedExchange(
LONG volatile * Target,
LONG Value
);
__declspec(dllimport)
LONG
__stdcall
InterlockedExchangeAdd(
LONG volatile * Addend,
LONG Value
);
__declspec(dllimport)
LONG
__stdcall
InterlockedCompareExchange(
LONG volatile * Destination,
LONG Exchange,
LONG Comperand
);
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 115 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
__declspec(dllimport)
void
__stdcall
InitializeSListHead(
PSLIST_HEADER ListHead
);
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
InterlockedPopEntrySList(
PSLIST_HEADER ListHead
);
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
InterlockedPushEntrySList(
PSLIST_HEADER ListHead,
PSLIST_ENTRY ListEntry
);
#line 161 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
InterlockedFlushSList(
PSLIST_HEADER ListHead
);
__declspec(dllimport)
USHORT
__stdcall
QueryDepthSList(
PSLIST_HEADER ListHead
);
#line 179 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 181 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 183 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\interlockedapi.h"
#line 50 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma region Desktop Family
typedef struct _PROCESS_INFORMATION {
HANDLE hProcess;
HANDLE hThread;
DWORD dwProcessId;
DWORD dwThreadId;
} PROCESS_INFORMATION, *PPROCESS_INFORMATION, *LPPROCESS_INFORMATION;
typedef struct _STARTUPINFOA {
DWORD   cb;
LPSTR   lpReserved;
LPSTR   lpDesktop;
LPSTR   lpTitle;
DWORD   dwX;
DWORD   dwY;
DWORD   dwXSize;
DWORD   dwYSize;
DWORD   dwXCountChars;
DWORD   dwYCountChars;
DWORD   dwFillAttribute;
DWORD   dwFlags;
WORD    wShowWindow;
WORD    cbReserved2;
LPBYTE  lpReserved2;
HANDLE  hStdInput;
HANDLE  hStdOutput;
HANDLE  hStdError;
} STARTUPINFOA, *LPSTARTUPINFOA;
typedef struct _STARTUPINFOW {
DWORD   cb;
LPWSTR  lpReserved;
LPWSTR  lpDesktop;
LPWSTR  lpTitle;
DWORD   dwX;
DWORD   dwY;
DWORD   dwXSize;
DWORD   dwYSize;
DWORD   dwXCountChars;
DWORD   dwYCountChars;
DWORD   dwFillAttribute;
DWORD   dwFlags;
WORD    wShowWindow;
WORD    cbReserved2;
LPBYTE  lpReserved2;
HANDLE  hStdInput;
HANDLE  hStdOutput;
HANDLE  hStdError;
} STARTUPINFOW, *LPSTARTUPINFOW;
typedef STARTUPINFOW STARTUPINFO;
typedef LPSTARTUPINFOW LPSTARTUPINFO;
#line 103 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
__declspec(dllimport)
DWORD
__stdcall
QueueUserAPC(
PAPCFUNC pfnAPC,
HANDLE hThread,
ULONG_PTR dwData
);
#line 118 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetProcessTimes(
HANDLE hProcess,
LPFILETIME lpCreationTime,
LPFILETIME lpExitTime,
LPFILETIME lpKernelTime,
LPFILETIME lpUserTime
);
#line 132 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
HANDLE
__stdcall
GetCurrentProcess(
void
);
__declspec(dllimport)
DWORD
__stdcall
GetCurrentProcessId(
void
);
#line 155 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
ExitProcess(
UINT uExitCode
);
__declspec(dllimport)
BOOL
__stdcall
TerminateProcess(
HANDLE hProcess,
UINT uExitCode
);
__declspec(dllimport)
BOOL
__stdcall
GetExitCodeProcess(
HANDLE hProcess,
LPDWORD lpExitCode
);
__declspec(dllimport)
BOOL
__stdcall
SwitchToThread(
void
);
__declspec(dllimport)
HANDLE
__stdcall
CreateThread(
LPSECURITY_ATTRIBUTES lpThreadAttributes,
SIZE_T dwStackSize,
LPTHREAD_START_ROUTINE lpStartAddress,
LPVOID lpParameter,
DWORD dwCreationFlags,
LPDWORD lpThreadId
);
__declspec(dllimport)
HANDLE
__stdcall
CreateRemoteThread(
HANDLE hProcess,
LPSECURITY_ATTRIBUTES lpThreadAttributes,
SIZE_T dwStackSize,
LPTHREAD_START_ROUTINE lpStartAddress,
LPVOID lpParameter,
DWORD dwCreationFlags,
LPDWORD lpThreadId
);
#line 226 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
HANDLE
__stdcall
GetCurrentThread(
void
);
__declspec(dllimport)
DWORD
__stdcall
GetCurrentThreadId(
void
);
#line 249 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
OpenThread(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
DWORD dwThreadId
);
__declspec(dllimport)
BOOL
__stdcall
SetThreadPriority(
HANDLE hThread,
int nPriority
);
__declspec(dllimport)
BOOL
__stdcall
SetThreadPriorityBoost(
HANDLE hThread,
BOOL bDisablePriorityBoost
);
__declspec(dllimport)
BOOL
__stdcall
GetThreadPriorityBoost(
HANDLE hThread,
PBOOL pDisablePriorityBoost
);
__declspec(dllimport)
int
__stdcall
GetThreadPriority(
HANDLE hThread
);
__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
ExitThread(
DWORD dwExitCode
);
__declspec(dllimport)
BOOL
__stdcall
TerminateThread(
HANDLE hThread,
DWORD dwExitCode
);
__declspec(dllimport)
BOOL
__stdcall
GetExitCodeThread(
HANDLE hThread,
LPDWORD lpExitCode
);
__declspec(dllimport)
DWORD
__stdcall
SuspendThread(
HANDLE hThread
);
__declspec(dllimport)
DWORD
__stdcall
ResumeThread(
HANDLE hThread
);
#line 348 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
__declspec(dllimport)
DWORD
__stdcall
TlsAlloc(
void
);
__declspec(dllimport)
LPVOID
__stdcall
TlsGetValue(
DWORD dwTlsIndex
);
__declspec(dllimport)
BOOL
__stdcall
TlsSetValue(
DWORD dwTlsIndex,
LPVOID lpTlsValue
);
__declspec(dllimport)
BOOL
__stdcall
TlsFree(
DWORD dwTlsIndex
);
__declspec(dllimport)
BOOL
__stdcall
CreateProcessA(
LPCSTR lpApplicationName,
LPSTR lpCommandLine,
LPSECURITY_ATTRIBUTES lpProcessAttributes,
LPSECURITY_ATTRIBUTES lpThreadAttributes,
BOOL bInheritHandles,
DWORD dwCreationFlags,
LPVOID lpEnvironment,
LPCSTR lpCurrentDirectory,
LPSTARTUPINFOA lpStartupInfo,
LPPROCESS_INFORMATION lpProcessInformation
);
__declspec(dllimport)
BOOL
__stdcall
CreateProcessW(
LPCWSTR lpApplicationName,
LPWSTR lpCommandLine,
LPSECURITY_ATTRIBUTES lpProcessAttributes,
LPSECURITY_ATTRIBUTES lpThreadAttributes,
BOOL bInheritHandles,
DWORD dwCreationFlags,
LPVOID lpEnvironment,
LPCWSTR lpCurrentDirectory,
LPSTARTUPINFOW lpStartupInfo,
LPPROCESS_INFORMATION lpProcessInformation
);
#line 424 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 426 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetProcessShutdownParameters(
DWORD dwLevel,
DWORD dwFlags
);
__declspec(dllimport)
DWORD
__stdcall
GetProcessVersion(
DWORD ProcessId
);
__declspec(dllimport)
void
__stdcall
GetStartupInfoW(
LPSTARTUPINFOW lpStartupInfo
);
#line 454 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 456 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CreateProcessAsUserW(
HANDLE hToken,
LPCWSTR lpApplicationName,
LPWSTR lpCommandLine,
LPSECURITY_ATTRIBUTES lpProcessAttributes,
LPSECURITY_ATTRIBUTES lpThreadAttributes,
BOOL bInheritHandles,
DWORD dwCreationFlags,
LPVOID lpEnvironment,
LPCWSTR lpCurrentDirectory,
LPSTARTUPINFOW lpStartupInfo,
LPPROCESS_INFORMATION lpProcessInformation
);
#line 487 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 489 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#line 492 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetThreadToken(
PHANDLE Thread,
HANDLE Token
);
__declspec(dllimport)
BOOL
__stdcall
OpenProcessToken(
HANDLE ProcessHandle,
DWORD DesiredAccess,
PHANDLE TokenHandle
);
__declspec(dllimport)
BOOL
__stdcall
OpenThreadToken(
HANDLE ThreadHandle,
DWORD DesiredAccess,
BOOL OpenAsSelf,
PHANDLE TokenHandle
);
#line 529 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetPriorityClass(
HANDLE hProcess,
DWORD dwPriorityClass
);
__declspec(dllimport)
BOOL
__stdcall
SetThreadStackGuarantee(
PULONG StackSizeInBytes
);
__declspec(dllimport)
DWORD
__stdcall
GetPriorityClass(
HANDLE hProcess
);
__declspec(dllimport)
BOOL
__stdcall
ProcessIdToSessionId(
DWORD dwProcessId,
DWORD * pSessionId
);
__declspec(dllimport)
DWORD
__stdcall
GetProcessId(
HANDLE Process
);
#line 584 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 597 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
typedef struct _PROC_THREAD_ATTRIBUTE_LIST *PPROC_THREAD_ATTRIBUTE_LIST, *LPPROC_THREAD_ATTRIBUTE_LIST;
#line 602 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#line 694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
CreateRemoteThreadEx(
HANDLE hProcess,
LPSECURITY_ATTRIBUTES lpThreadAttributes,
SIZE_T dwStackSize,
LPTHREAD_START_ROUTINE lpStartAddress,
LPVOID lpParameter,
DWORD dwCreationFlags,
LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
LPDWORD lpThreadId
);
#line 716 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Desktop Family
#line 743 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetThreadContext(
HANDLE hThread,
LPCONTEXT lpContext
);
__declspec(dllimport)
BOOL
__stdcall
SetThreadContext(
HANDLE hThread,
const CONTEXT * lpContext
);
#line 787 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 789 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#line 792 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 793 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
FlushInstructionCache(
HANDLE hProcess,
LPCVOID lpBaseAddress,
SIZE_T dwSize
);
__declspec(dllimport)
BOOL
__stdcall
GetThreadTimes(
HANDLE hThread,
LPFILETIME lpCreationTime,
LPFILETIME lpExitTime,
LPFILETIME lpKernelTime,
LPFILETIME lpUserTime
);
__declspec(dllimport)
HANDLE
__stdcall
OpenProcess(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
DWORD dwProcessId
);
#line 834 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#pragma region Application Family
BOOL
__stdcall
IsProcessorFeaturePresent(
DWORD ProcessorFeature
);
#line 848 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#line 851 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetProcessHandleCount(
HANDLE hProcess,
PDWORD pdwHandleCount
);
#line 869 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#pragma endregion
#line 872 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 892 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 931 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 943 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processthreadsapi.h"
#line 51 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma once
#line 16 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 22 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma warning(disable:4514)
#pragma warning(disable:4103)
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma warning(push)
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#line 39 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 51 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma region Application Family
typedef struct _SYSTEM_INFO {
union {
DWORD dwOemId;          
struct {
WORD wProcessorArchitecture;
WORD wReserved;
} ;
} ;
DWORD dwPageSize;
LPVOID lpMinimumApplicationAddress;
LPVOID lpMaximumApplicationAddress;
DWORD_PTR dwActiveProcessorMask;
DWORD dwNumberOfProcessors;
DWORD dwProcessorType;
DWORD dwAllocationGranularity;
WORD wProcessorLevel;
WORD wProcessorRevision;
} SYSTEM_INFO, *LPSYSTEM_INFO;
#line 86 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
GetVersion(
void
);
typedef struct _MEMORYSTATUSEX {
DWORD dwLength;
DWORD dwMemoryLoad;
DWORDLONG ullTotalPhys;
DWORDLONG ullAvailPhys;
DWORDLONG ullTotalPageFile;
DWORDLONG ullAvailPageFile;
DWORDLONG ullTotalVirtual;
DWORDLONG ullAvailVirtual;
DWORDLONG ullAvailExtendedVirtual;
} MEMORYSTATUSEX, *LPMEMORYSTATUSEX;
__declspec(dllimport)
BOOL
__stdcall
GlobalMemoryStatusEx(
LPMEMORYSTATUSEX lpBuffer
);
#line 126 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
void
__stdcall
GetSystemTime(
LPSYSTEMTIME lpSystemTime
);
__declspec(dllimport)
void
__stdcall
GetSystemTimeAsFileTime(
LPFILETIME lpSystemTimeAsFileTime
);
__declspec(dllimport)
void
__stdcall
GetLocalTime(
LPSYSTEMTIME lpSystemTime
);
#line 157 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetLocalTime(
const SYSTEMTIME * lpSystemTime
);
__declspec(dllimport)
void
__stdcall
GetSystemInfo(
LPSYSTEM_INFO lpSystemInfo
);
#line 180 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
GetTickCount(
void
);
#line 199 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Application Family
#line 217 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 219 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetSystemTimeAdjustment(
PDWORD lpTimeAdjustment,
PDWORD lpTimeIncrement,
PBOOL lpTimeAdjustmentDisabled
);
__declspec(dllimport)
UINT
__stdcall
GetSystemDirectoryA(
LPSTR lpBuffer,
UINT uSize
);
__declspec(dllimport)
UINT
__stdcall
GetSystemDirectoryW(
LPWSTR lpBuffer,
UINT uSize
);
#line 259 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
__declspec(dllimport)
UINT
__stdcall
GetWindowsDirectoryA(
LPSTR lpBuffer,
UINT uSize
);
__declspec(dllimport)
UINT
__stdcall
GetWindowsDirectoryW(
LPWSTR lpBuffer,
UINT uSize
);
#line 285 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
__declspec(dllimport)
UINT
__stdcall
GetSystemWindowsDirectoryA(
LPSTR lpBuffer,
UINT uSize
);
__declspec(dllimport)
UINT
__stdcall
GetSystemWindowsDirectoryW(
LPWSTR lpBuffer,
UINT uSize
);
#line 309 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 311 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Desktop Family
typedef enum _COMPUTER_NAME_FORMAT {
ComputerNameNetBIOS,
ComputerNameDnsHostname,
ComputerNameDnsDomain,
ComputerNameDnsFullyQualified,
ComputerNamePhysicalNetBIOS,
ComputerNamePhysicalDnsHostname,
ComputerNamePhysicalDnsDomain,
ComputerNamePhysicalDnsFullyQualified,
ComputerNameMax
} COMPUTER_NAME_FORMAT ;
#line 335 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetComputerNameExA(
COMPUTER_NAME_FORMAT NameType,
LPSTR lpBuffer,
LPDWORD nSize
);
__declspec(dllimport)
BOOL
__stdcall
GetComputerNameExW(
COMPUTER_NAME_FORMAT NameType,
LPWSTR lpBuffer,
LPDWORD nSize
);
#line 371 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetComputerNameExW(
COMPUTER_NAME_FORMAT NameType,
LPCWSTR lpBuffer
);
#line 391 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetSystemTime(
const SYSTEMTIME * lpSystemTime
);
#line 401 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetVersionExA(
LPOSVERSIONINFOA lpVersionInformation
);
__declspec(dllimport)
BOOL
__stdcall
GetVersionExW(
LPOSVERSIONINFOW lpVersionInformation
);
#line 425 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetLogicalProcessorInformation(
PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer,
PDWORD ReturnedLength
);
#line 449 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 451 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
void
__stdcall
GetNativeSystemInfo(
LPSYSTEM_INFO lpSystemInfo
);
#line 473 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#line 476 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 500 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma region Desktop Family
__declspec(dllimport)
ULONGLONG
__stdcall
VerSetConditionMask(
ULONGLONG ConditionMask,
ULONG TypeMask,
UCHAR Condition
);
#line 519 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 532 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
__declspec(dllimport)
void
__stdcall
GetSystemTimePreciseAsFileTime(
LPFILETIME lpSystemTimeAsFileTime
);
__declspec(dllimport)
UINT
__stdcall
EnumSystemFirmwareTables(
DWORD FirmwareTableProviderSignature,
PVOID pFirmwareTableEnumBuffer,
DWORD BufferSize
);
__declspec(dllimport)
UINT
__stdcall
GetSystemFirmwareTable(
DWORD FirmwareTableProviderSignature,
DWORD FirmwareTableID,
PVOID pFirmwareTableBuffer,
DWORD BufferSize
);
#line 566 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 568 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#pragma endregion
#pragma warning(pop)
#line 590 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 591 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 593 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\sysinfoapi.h"
#line 52 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma region Application Family
#line 53 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#pragma region Desktop Family
#line 62 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#pragma region Application Family
#line 72 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
LPVOID
__stdcall
VirtualAlloc(
LPVOID lpAddress,
SIZE_T dwSize,
DWORD flAllocationType,
DWORD flProtect
);
#line 100 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 103 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 106 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
__declspec(dllimport)
BOOL
__stdcall
VirtualFree(
LPVOID lpAddress,
SIZE_T dwSize,
DWORD dwFreeType
);
__declspec(dllimport)
BOOL
__stdcall
VirtualProtect(
LPVOID lpAddress,
SIZE_T dwSize,
DWORD flNewProtect,
PDWORD lpflOldProtect
);
#line 129 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
SIZE_T
__stdcall
VirtualQuery(
LPCVOID lpAddress,
PMEMORY_BASIC_INFORMATION lpBuffer,
SIZE_T dwLength
);
#line 146 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
LPVOID
__stdcall
VirtualAllocEx(
HANDLE hProcess,
LPVOID lpAddress,
SIZE_T dwSize,
DWORD flAllocationType,
DWORD flProtect
);
#line 167 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 170 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 176 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
__declspec(dllimport)
BOOL
__stdcall
VirtualFreeEx(
HANDLE hProcess,
LPVOID lpAddress,
SIZE_T dwSize,
DWORD dwFreeType
);
__declspec(dllimport)
BOOL
__stdcall
VirtualProtectEx(
HANDLE hProcess,
LPVOID lpAddress,
SIZE_T dwSize,
DWORD flNewProtect,
PDWORD lpflOldProtect
);
__declspec(dllimport)
SIZE_T
__stdcall
VirtualQueryEx(
HANDLE hProcess,
LPCVOID lpAddress,
PMEMORY_BASIC_INFORMATION lpBuffer,
SIZE_T dwLength
);
__declspec(dllimport)
BOOL
__stdcall
ReadProcessMemory(
HANDLE hProcess,
LPCVOID lpBaseAddress,
LPVOID lpBuffer,
SIZE_T nSize,
SIZE_T * lpNumberOfBytesRead
);
__declspec(dllimport)
BOOL
__stdcall
WriteProcessMemory(
HANDLE hProcess,
LPVOID lpBaseAddress,
LPCVOID lpBuffer,
SIZE_T nSize,
SIZE_T * lpNumberOfBytesWritten
);
__declspec(dllimport)
HANDLE
__stdcall
CreateFileMappingW(
HANDLE hFile,
LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
DWORD flProtect,
DWORD dwMaximumSizeHigh,
DWORD dwMaximumSizeLow,
LPCWSTR lpName
);
#line 254 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
__declspec(dllimport)
HANDLE
__stdcall
OpenFileMappingW(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCWSTR lpName
);
#line 269 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
__declspec(dllimport)
LPVOID
__stdcall
MapViewOfFile(
HANDLE hFileMappingObject,
DWORD dwDesiredAccess,
DWORD dwFileOffsetHigh,
DWORD dwFileOffsetLow,
SIZE_T dwNumberOfBytesToMap
);
__declspec(dllimport)
LPVOID
__stdcall
MapViewOfFileEx(
HANDLE hFileMappingObject,
DWORD dwDesiredAccess,
DWORD dwFileOffsetHigh,
DWORD dwFileOffsetLow,
SIZE_T dwNumberOfBytesToMap,
LPVOID lpBaseAddress
);
#line 298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
FlushViewOfFile(
LPCVOID lpBaseAddress,
SIZE_T dwNumberOfBytesToFlush
);
__declspec(dllimport)
BOOL
__stdcall
UnmapViewOfFile(
LPCVOID lpBaseAddress
);
#line 322 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
SIZE_T
__stdcall
GetLargePageMinimum(
void
);
__declspec(dllimport)
BOOL
__stdcall
GetProcessWorkingSetSizeEx(
HANDLE hProcess,
PSIZE_T lpMinimumWorkingSetSize,
PSIZE_T lpMaximumWorkingSetSize,
PDWORD Flags
);
__declspec(dllimport)
BOOL
__stdcall
SetProcessWorkingSetSizeEx(
HANDLE hProcess,
SIZE_T dwMinimumWorkingSetSize,
SIZE_T dwMaximumWorkingSetSize,
DWORD Flags
);
__declspec(dllimport)
BOOL
__stdcall
VirtualLock(
LPVOID lpAddress,
SIZE_T dwSize
);
__declspec(dllimport)
BOOL
__stdcall
VirtualUnlock(
LPVOID lpAddress,
SIZE_T dwSize
);
__declspec(dllimport)
UINT
__stdcall
GetWriteWatch(
DWORD dwFlags,
PVOID lpBaseAddress,
SIZE_T dwRegionSize,
PVOID * lpAddresses,
ULONG_PTR * lpdwCount,
LPDWORD lpdwGranularity
);
__declspec(dllimport)
UINT
__stdcall
ResetWriteWatch(
LPVOID lpBaseAddress,
SIZE_T dwRegionSize
);
#line 408 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#line 411 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma region Desktop Family
typedef enum _MEMORY_RESOURCE_NOTIFICATION_TYPE {
LowMemoryResourceNotification,
HighMemoryResourceNotification
} MEMORY_RESOURCE_NOTIFICATION_TYPE;
__declspec(dllimport)
HANDLE
__stdcall
CreateMemoryResourceNotification(
MEMORY_RESOURCE_NOTIFICATION_TYPE NotificationType
);
__declspec(dllimport)
BOOL
__stdcall
QueryMemoryResourceNotification(
HANDLE ResourceNotificationHandle,
PBOOL ResourceState
);
#line 444 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#pragma endregion
#line 447 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 486 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 517 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 586 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 597 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\memoryapi.h"
#line 53 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoollegacyapiset.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoollegacyapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoollegacyapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoollegacyapiset.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoollegacyapiset.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
QueueUserWorkItem(
LPTHREAD_START_ROUTINE Function,
PVOID Context,
ULONG Flags
);
__declspec(dllimport)
BOOL
__stdcall
UnregisterWaitEx(
HANDLE WaitHandle,
HANDLE CompletionEvent
);
__declspec(dllimport)
HANDLE
__stdcall
CreateTimerQueue(
void
);
__declspec(dllimport)
BOOL
__stdcall
CreateTimerQueueTimer(
PHANDLE phNewTimer,
HANDLE TimerQueue,
WAITORTIMERCALLBACK Callback,
PVOID Parameter,
DWORD DueTime,
DWORD Period,
ULONG Flags
);
__declspec(dllimport)
BOOL
__stdcall
ChangeTimerQueueTimer(
HANDLE TimerQueue,
HANDLE Timer,
ULONG DueTime,
ULONG Period
);
__declspec(dllimport)
BOOL
__stdcall
DeleteTimerQueueTimer(
HANDLE TimerQueue,
HANDLE Timer,
HANDLE CompletionEvent
);
__declspec(dllimport)
BOOL
__stdcall
DeleteTimerQueueEx(
HANDLE TimerQueue,
HANDLE CompletionEvent
);
#line 121 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoollegacyapiset.h"
#pragma endregion
#line 128 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoollegacyapiset.h"
#line 54 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#pragma once
#line 14 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#pragma region Desktop Family
typedef
void
(__stdcall *PTP_WIN32_IO_CALLBACK)(
PTP_CALLBACK_INSTANCE Instance,
PVOID                 Context,
PVOID                 Overlapped,
ULONG                 IoResult,
ULONG_PTR             NumberOfBytesTransferred,
PTP_IO                Io
);
#line 409 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#line 411 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#pragma endregion
#line 418 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\threadpoolapiset.h"
#line 55 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#pragma region Desktop Family
typedef struct _CONTRACT_DESCRIPTION CONTRACT_DESCRIPTION;
typedef struct _BEM_REFERENCE BEM_REFERENCE;
typedef void (__stdcall* BEM_FREE_INTERFACE_CALLBACK)(  void* interfaceInstance);
HRESULT
__stdcall
BemCreateReference(
const GUID * const iid,
void * interfaceInstance,
BEM_FREE_INTERFACE_CALLBACK freeCallback,
BEM_REFERENCE ** reference
);
HRESULT
__stdcall
BemCreateContractFrom(
LPCWSTR dllPath,
const GUID * const extensionId,
const CONTRACT_DESCRIPTION * contractDescription,
void * hostContract,
void ** contract
);
HRESULT
__stdcall
BemCopyReference(
BEM_REFERENCE * reference,
BEM_REFERENCE ** copiedReference
);
void
__stdcall
BemFreeReference(
BEM_REFERENCE * reference
);
void
__stdcall
BemFreeContract(
void * contract
);
#line 93 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#line 95 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#pragma endregion
#line 102 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\bemapiset.h"
#line 56 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
IsProcessInJob(
HANDLE ProcessHandle,
HANDLE JobHandle,
PBOOL Result
);
#line 54 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#line 56 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#pragma endregion
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\jobapi.h"
#line 57 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
Wow64DisableWow64FsRedirection(
PVOID * OldValue
);
__declspec(dllimport)
BOOL
__stdcall
Wow64RevertWow64FsRedirection(
PVOID OlValue
);
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#line 65 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
__declspec(dllimport)
BOOL
__stdcall
IsWow64Process(
HANDLE hProcess,
PBOOL Wow64Process
);
#line 79 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#line 81 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#pragma endregion
#line 88 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wow64apiset.h"
#line 58 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma region Desktop Family
typedef struct tagENUMUILANG{
ULONG  NumOfEnumUILang;   
ULONG  SizeOfEnumUIBuffer;     
LANGID *pEnumUIBuffer;   
}ENUMUILANG, *PENUMUILANG;
typedef BOOL (__stdcall* ENUMRESLANGPROCA)(
HMODULE hModule,
LPCSTR lpType,
LPCSTR lpName,
WORD wLanguage,
LONG_PTR lParam);
typedef BOOL (__stdcall* ENUMRESLANGPROCW)(
HMODULE hModule,
LPCWSTR lpType,
LPCWSTR lpName,
WORD wLanguage,
LONG_PTR lParam);
#line 80 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
typedef BOOL (__stdcall* ENUMRESNAMEPROCA)(
HMODULE hModule,
LPCSTR lpType,
LPSTR lpName,
LONG_PTR lParam);
typedef BOOL (__stdcall* ENUMRESNAMEPROCW)(
HMODULE hModule,
LPCWSTR lpType,
LPWSTR lpName,
LONG_PTR lParam);
#line 96 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
typedef BOOL (__stdcall* ENUMRESTYPEPROCA)(
HMODULE hModule,
LPSTR lpType,
LONG_PTR lParam
);
typedef BOOL (__stdcall* ENUMRESTYPEPROCW)(
HMODULE hModule,
LPWSTR lpType,
LONG_PTR lParam
);
#line 112 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 135 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 137 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
DisableThreadLibraryCalls(
HMODULE hLibModule
);
#line 157 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HRSRC
__stdcall
FindResourceExW(
HMODULE hModule,
LPCWSTR lpType,
LPCWSTR lpName,
WORD wLanguage
);
#line 178 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 180 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Application Family
#line 203 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
__declspec(dllimport)
BOOL
__stdcall
FreeLibrary(
HMODULE hLibModule
);
#line 213 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
FreeLibraryAndExitThread(
HMODULE hLibModule,
DWORD dwExitCode
);
__declspec(dllimport)
BOOL
__stdcall
FreeResource(
HGLOBAL hResData
);
__declspec(dllimport)
DWORD
__stdcall
GetModuleFileNameA(
HMODULE hModule,
LPSTR lpFilename,
DWORD nSize
);
__declspec(dllimport)
DWORD
__stdcall
GetModuleFileNameW(
HMODULE hModule,
LPWSTR lpFilename,
DWORD nSize
);
#line 264 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
__declspec(dllimport)
HMODULE
__stdcall
GetModuleHandleA(
LPCSTR lpModuleName
);
__declspec(dllimport)
HMODULE
__stdcall
GetModuleHandleW(
LPCWSTR lpModuleName
);
#line 288 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
typedef
BOOL
(__stdcall*
PGET_MODULE_HANDLE_EXA)(
DWORD        dwFlags,
LPCSTR     lpModuleName,
HMODULE*    phModule
);
typedef
BOOL
(__stdcall*
PGET_MODULE_HANDLE_EXW)(
DWORD        dwFlags,
LPCWSTR     lpModuleName,
HMODULE*    phModule
);
#line 317 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetModuleHandleExA(
DWORD dwFlags,
LPCSTR lpModuleName,
HMODULE * phModule
);
__declspec(dllimport)
BOOL
__stdcall
GetModuleHandleExW(
DWORD dwFlags,
LPCWSTR lpModuleName,
HMODULE * phModule
);
#line 341 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 343 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 345 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
FARPROC
__stdcall
GetProcAddress(
HMODULE hModule,
LPCSTR lpProcName
);
#line 361 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HMODULE
__stdcall
LoadLibraryExA(
LPCSTR lpLibFileName,
HANDLE hFile,
DWORD dwFlags
);
__declspec(dllimport)
HMODULE
__stdcall
LoadLibraryExW(
LPCWSTR lpLibFileName,
HANDLE hFile,
DWORD dwFlags
);
#line 392 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
__declspec(dllimport)
HGLOBAL
__stdcall
LoadResource(
HMODULE hModule,
HRSRC hResInfo
);
#line 418 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
LoadStringA(
HINSTANCE hInstance,
UINT uID,
LPSTR lpBuffer,
int cchBufferMax
);
__declspec(dllimport)
int
__stdcall
LoadStringW(
HINSTANCE hInstance,
UINT uID,
LPWSTR lpBuffer,
int cchBufferMax
);
#line 451 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 453 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
LPVOID
__stdcall
LockResource(
HGLOBAL hResData
);
__declspec(dllimport)
DWORD
__stdcall
SizeofResource(
HMODULE hModule,
HRSRC hResInfo
);
#line 479 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#line 597 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma region Desktop Family
typedef PVOID DLL_DIRECTORY_COOKIE, *PDLL_DIRECTORY_COOKIE;
__declspec(dllimport)
DLL_DIRECTORY_COOKIE
__stdcall
AddDllDirectory(
PCWSTR NewDirectory
);
__declspec(dllimport)
BOOL
__stdcall
RemoveDllDirectory(
DLL_DIRECTORY_COOKIE Cookie
);
__declspec(dllimport)
BOOL
__stdcall
SetDefaultDllDirectories(
DWORD DirectoryFlags
);
#line 631 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#pragma endregion
#line 641 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\libloaderapi.h"
#line 59 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
AccessCheck(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
HANDLE ClientToken,
DWORD DesiredAccess,
PGENERIC_MAPPING GenericMapping,
PPRIVILEGE_SET PrivilegeSet,
LPDWORD PrivilegeSetLength,
LPDWORD GrantedAccess,
LPBOOL AccessStatus
);
__declspec(dllimport)
BOOL
__stdcall
AccessCheckAndAuditAlarmW(
LPCWSTR SubsystemName,
LPVOID HandleId,
LPWSTR ObjectTypeName,
LPWSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
DWORD DesiredAccess,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccess,
LPBOOL AccessStatus,
LPBOOL pfGenerateOnClose
);
#line 89 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByType(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
PSID PrincipalSelfSid,
HANDLE ClientToken,
DWORD DesiredAccess,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
PPRIVILEGE_SET PrivilegeSet,
LPDWORD PrivilegeSetLength,
LPDWORD GrantedAccess,
LPBOOL AccessStatus
);
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultList(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
PSID PrincipalSelfSid,
HANDLE ClientToken,
DWORD DesiredAccess,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
PPRIVILEGE_SET PrivilegeSet,
LPDWORD PrivilegeSetLength,
LPDWORD GrantedAccessList,
LPDWORD AccessStatusList
);
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeAndAuditAlarmW(
LPCWSTR SubsystemName,
LPVOID HandleId,
LPCWSTR ObjectTypeName,
LPCWSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
PSID PrincipalSelfSid,
DWORD DesiredAccess,
AUDIT_EVENT_TYPE AuditType,
DWORD Flags,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccess,
LPBOOL AccessStatus,
LPBOOL pfGenerateOnClose
);
#line 152 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmW(
LPCWSTR SubsystemName,
LPVOID HandleId,
LPCWSTR ObjectTypeName,
LPCWSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
PSID PrincipalSelfSid,
DWORD DesiredAccess,
AUDIT_EVENT_TYPE AuditType,
DWORD Flags,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccessList,
LPDWORD AccessStatusList,
LPBOOL pfGenerateOnClose
);
#line 179 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmByHandleW(
LPCWSTR SubsystemName,
LPVOID HandleId,
HANDLE ClientToken,
LPCWSTR ObjectTypeName,
LPCWSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
PSID PrincipalSelfSid,
DWORD DesiredAccess,
AUDIT_EVENT_TYPE AuditType,
DWORD Flags,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccessList,
LPDWORD AccessStatusList,
LPBOOL pfGenerateOnClose
);
#line 207 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
AddAccessAllowedAce(
PACL pAcl,
DWORD dwAceRevision,
DWORD AccessMask,
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
AddAccessAllowedAceEx(
PACL pAcl,
DWORD dwAceRevision,
DWORD AceFlags,
DWORD AccessMask,
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
AddAccessAllowedObjectAce(
PACL pAcl,
DWORD dwAceRevision,
DWORD AceFlags,
DWORD AccessMask,
GUID * ObjectTypeGuid,
GUID * InheritedObjectTypeGuid,
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
AddAccessDeniedAce(
PACL pAcl,
DWORD dwAceRevision,
DWORD AccessMask,
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
AddAccessDeniedAceEx(
PACL pAcl,
DWORD dwAceRevision,
DWORD AceFlags,
DWORD AccessMask,
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
AddAccessDeniedObjectAce(
PACL pAcl,
DWORD dwAceRevision,
DWORD AceFlags,
DWORD AccessMask,
GUID * ObjectTypeGuid,
GUID * InheritedObjectTypeGuid,
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
AddAce(
PACL pAcl,
DWORD dwAceRevision,
DWORD dwStartingAceIndex,
LPVOID pAceList,
DWORD nAceListLength
);
__declspec(dllimport)
BOOL
__stdcall
AddAuditAccessAce(
PACL pAcl,
DWORD dwAceRevision,
DWORD dwAccessMask,
PSID pSid,
BOOL bAuditSuccess,
BOOL bAuditFailure
);
__declspec(dllimport)
BOOL
__stdcall
AddAuditAccessAceEx(
PACL pAcl,
DWORD dwAceRevision,
DWORD AceFlags,
DWORD dwAccessMask,
PSID pSid,
BOOL bAuditSuccess,
BOOL bAuditFailure
);
__declspec(dllimport)
BOOL
__stdcall
AddAuditAccessObjectAce(
PACL pAcl,
DWORD dwAceRevision,
DWORD AceFlags,
DWORD AccessMask,
GUID * ObjectTypeGuid,
GUID * InheritedObjectTypeGuid,
PSID pSid,
BOOL bAuditSuccess,
BOOL bAuditFailure
);
#line 353 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#line 386 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
AdjustTokenGroups(
HANDLE TokenHandle,
BOOL ResetToDefault,
PTOKEN_GROUPS NewState,
DWORD BufferLength,
PTOKEN_GROUPS PreviousState,
PDWORD ReturnLength
);
__declspec(dllimport)
BOOL
__stdcall
AdjustTokenPrivileges(
HANDLE TokenHandle,
BOOL DisableAllPrivileges,
PTOKEN_PRIVILEGES NewState,
DWORD BufferLength,
PTOKEN_PRIVILEGES PreviousState,
PDWORD ReturnLength
);
__declspec(dllimport)
BOOL
__stdcall
AllocateAndInitializeSid(
PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
BYTE nSubAuthorityCount,
DWORD nSubAuthority0,
DWORD nSubAuthority1,
DWORD nSubAuthority2,
DWORD nSubAuthority3,
DWORD nSubAuthority4,
DWORD nSubAuthority5,
DWORD nSubAuthority6,
DWORD nSubAuthority7,
PSID * pSid
);
__declspec(dllimport)
BOOL
__stdcall
AllocateLocallyUniqueId(
PLUID Luid
);
__declspec(dllimport)
BOOL
__stdcall
AreAllAccessesGranted(
DWORD GrantedAccess,
DWORD DesiredAccess
);
__declspec(dllimport)
BOOL
__stdcall
AreAnyAccessesGranted(
DWORD GrantedAccess,
DWORD DesiredAccess
);
__declspec(dllimport)
BOOL
__stdcall
CheckTokenMembership(
HANDLE TokenHandle,
PSID SidToCheck,
PBOOL IsMember
);
#line 507 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
ConvertToAutoInheritPrivateObjectSecurity(
PSECURITY_DESCRIPTOR ParentDescriptor,
PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
PSECURITY_DESCRIPTOR * NewSecurityDescriptor,
GUID * ObjectType,
BOOLEAN IsDirectoryObject,
PGENERIC_MAPPING GenericMapping
);
__declspec(dllimport)
BOOL
__stdcall
CopySid(
DWORD nDestinationSidLength,
PSID pDestinationSid,
PSID pSourceSid
);
__declspec(dllimport)
BOOL
__stdcall
CreatePrivateObjectSecurity(
PSECURITY_DESCRIPTOR ParentDescriptor,
PSECURITY_DESCRIPTOR CreatorDescriptor,
PSECURITY_DESCRIPTOR * NewDescriptor,
BOOL IsDirectoryObject,
HANDLE Token,
PGENERIC_MAPPING GenericMapping
);
__declspec(dllimport)
BOOL
__stdcall
CreatePrivateObjectSecurityEx(
PSECURITY_DESCRIPTOR ParentDescriptor,
PSECURITY_DESCRIPTOR CreatorDescriptor,
PSECURITY_DESCRIPTOR * NewDescriptor,
GUID * ObjectType,
BOOL IsContainerObject,
ULONG AutoInheritFlags,
HANDLE Token,
PGENERIC_MAPPING GenericMapping
);
__declspec(dllimport)
BOOL
__stdcall
CreatePrivateObjectSecurityWithMultipleInheritance(
PSECURITY_DESCRIPTOR ParentDescriptor,
PSECURITY_DESCRIPTOR CreatorDescriptor,
PSECURITY_DESCRIPTOR * NewDescriptor,
GUID ** ObjectTypes,
ULONG GuidCount,
BOOL IsContainerObject,
ULONG AutoInheritFlags,
HANDLE Token,
PGENERIC_MAPPING GenericMapping
);
__declspec(dllimport)
BOOL
__stdcall
CreateRestrictedToken(
HANDLE ExistingTokenHandle,
DWORD Flags,
DWORD DisableSidCount,
PSID_AND_ATTRIBUTES SidsToDisable,
DWORD DeletePrivilegeCount,
PLUID_AND_ATTRIBUTES PrivilegesToDelete,
DWORD RestrictedSidCount,
PSID_AND_ATTRIBUTES SidsToRestrict,
PHANDLE NewTokenHandle
);
__declspec(dllimport)
BOOL
__stdcall
CreateWellKnownSid(
WELL_KNOWN_SID_TYPE WellKnownSidType,
PSID DomainSid,
PSID pSid,
DWORD * cbSid
);
__declspec(dllimport)
BOOL
__stdcall
EqualDomainSid(
PSID pSid1,
PSID pSid2,
BOOL * pfEqual
);
#line 620 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
DeleteAce(
PACL pAcl,
DWORD dwAceIndex
);
__declspec(dllimport)
BOOL
__stdcall
DestroyPrivateObjectSecurity(
PSECURITY_DESCRIPTOR * ObjectDescriptor
);
__declspec(dllimport)
BOOL
__stdcall
DuplicateToken(
HANDLE ExistingTokenHandle,
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
PHANDLE DuplicateTokenHandle
);
__declspec(dllimport)
BOOL
__stdcall
DuplicateTokenEx(
HANDLE hExistingToken,
DWORD dwDesiredAccess,
LPSECURITY_ATTRIBUTES lpTokenAttributes,
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
TOKEN_TYPE TokenType,
PHANDLE phNewToken
);
__declspec(dllimport)
BOOL
__stdcall
EqualPrefixSid(
PSID pSid1,
PSID pSid2
);
__declspec(dllimport)
BOOL
__stdcall
EqualSid(
PSID pSid1,
PSID pSid2
);
__declspec(dllimport)
BOOL
__stdcall
FindFirstFreeAce(
PACL pAcl,
LPVOID * pAce
);
__declspec(dllimport)
PVOID
__stdcall
FreeSid(
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
GetAce(
PACL pAcl,
DWORD dwAceIndex,
LPVOID * pAce
);
__declspec(dllimport)
BOOL
__stdcall
GetAclInformation(
PACL pAcl,
LPVOID pAclInformation,
DWORD nAclInformationLength,
ACL_INFORMATION_CLASS dwAclInformationClass
);
__declspec(dllimport)
BOOL
__stdcall
GetFileSecurityW(
LPCWSTR lpFileName,
SECURITY_INFORMATION RequestedInformation,
PSECURITY_DESCRIPTOR pSecurityDescriptor,
DWORD nLength,
LPDWORD lpnLengthNeeded
);
#line 732 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
GetKernelObjectSecurity(
HANDLE Handle,
SECURITY_INFORMATION RequestedInformation,
PSECURITY_DESCRIPTOR pSecurityDescriptor,
DWORD nLength,
LPDWORD lpnLengthNeeded
);
__declspec(dllimport)
DWORD
__stdcall
GetLengthSid(
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
GetPrivateObjectSecurity(
PSECURITY_DESCRIPTOR ObjectDescriptor,
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR ResultantDescriptor,
DWORD DescriptorLength,
PDWORD ReturnLength
);
__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorControl(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
PSECURITY_DESCRIPTOR_CONTROL pControl,
LPDWORD lpdwRevision
);
__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorDacl(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
LPBOOL lpbDaclPresent,
PACL * pDacl,
LPBOOL lpbDaclDefaulted
);
__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorGroup(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
PSID * pGroup,
LPBOOL lpbGroupDefaulted
);
__declspec(dllimport)
DWORD
__stdcall
GetSecurityDescriptorLength(
PSECURITY_DESCRIPTOR pSecurityDescriptor
);
__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorOwner(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
PSID * pOwner,
LPBOOL lpbOwnerDefaulted
);
__declspec(dllimport)
DWORD
__stdcall
GetSecurityDescriptorRMControl(
PSECURITY_DESCRIPTOR SecurityDescriptor,
PUCHAR RMControl
);
__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorSacl(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
LPBOOL lpbSaclPresent,
PACL * pSacl,
LPBOOL lpbSaclDefaulted
);
__declspec(dllimport)
PSID_IDENTIFIER_AUTHORITY
__stdcall
GetSidIdentifierAuthority(
PSID pSid
);
__declspec(dllimport)
DWORD
__stdcall
GetSidLengthRequired(
UCHAR nSubAuthorityCount
);
__declspec(dllimport)
PDWORD
__stdcall
GetSidSubAuthority(
PSID pSid,
DWORD nSubAuthority
);
__declspec(dllimport)
PUCHAR
__stdcall
GetSidSubAuthorityCount(
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
GetTokenInformation(
HANDLE TokenHandle,
TOKEN_INFORMATION_CLASS TokenInformationClass,
LPVOID TokenInformation,
DWORD TokenInformationLength,
PDWORD ReturnLength
);
__declspec(dllimport)
BOOL
__stdcall
GetWindowsAccountDomainSid(
PSID pSid,
PSID pDomainSid,
DWORD * cbDomainSid
);
#line 895 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
ImpersonateAnonymousToken(
HANDLE ThreadHandle
);
__declspec(dllimport)
BOOL
__stdcall
ImpersonateLoggedOnUser(
HANDLE hToken
);
__declspec(dllimport)
BOOL
__stdcall
ImpersonateSelf(
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel
);
__declspec(dllimport)
BOOL
__stdcall
InitializeAcl(
PACL pAcl,
DWORD nAclLength,
DWORD dwAclRevision
);
__declspec(dllimport)
BOOL
__stdcall
InitializeSecurityDescriptor(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
DWORD dwRevision
);
__declspec(dllimport)
BOOL
__stdcall
InitializeSid(
PSID Sid,
PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
BYTE nSubAuthorityCount
);
__declspec(dllimport)
BOOL
__stdcall
IsTokenRestricted(
HANDLE TokenHandle
);
__declspec(dllimport)
BOOL
__stdcall
IsValidAcl(
PACL pAcl
);
__declspec(dllimport)
BOOL
__stdcall
IsValidSecurityDescriptor(
PSECURITY_DESCRIPTOR pSecurityDescriptor
);
__declspec(dllimport)
BOOL
__stdcall
IsValidSid(
PSID pSid
);
__declspec(dllimport)
BOOL
__stdcall
IsWellKnownSid(
PSID pSid,
WELL_KNOWN_SID_TYPE WellKnownSidType
);
#line 996 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
MakeAbsoluteSD(
PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
LPDWORD lpdwAbsoluteSecurityDescriptorSize,
PACL pDacl,
LPDWORD lpdwDaclSize,
PACL pSacl,
LPDWORD lpdwSaclSize,
PSID pOwner,
LPDWORD lpdwOwnerSize,
PSID pPrimaryGroup,
LPDWORD lpdwPrimaryGroupSize
);
__declspec(dllimport)
BOOL
__stdcall
MakeSelfRelativeSD(
PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
LPDWORD lpdwBufferLength
);
__declspec(dllimport)
void
__stdcall
MapGenericMask(
PDWORD AccessMask,
PGENERIC_MAPPING GenericMapping
);
__declspec(dllimport)
BOOL
__stdcall
ObjectCloseAuditAlarmW(
LPCWSTR SubsystemName,
LPVOID HandleId,
BOOL GenerateOnClose
);
#line 1049 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
ObjectDeleteAuditAlarmW(
LPCWSTR SubsystemName,
LPVOID HandleId,
BOOL GenerateOnClose
);
#line 1063 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
ObjectOpenAuditAlarmW(
LPCWSTR SubsystemName,
LPVOID HandleId,
LPWSTR ObjectTypeName,
LPWSTR ObjectName,
PSECURITY_DESCRIPTOR pSecurityDescriptor,
HANDLE ClientToken,
DWORD DesiredAccess,
DWORD GrantedAccess,
PPRIVILEGE_SET Privileges,
BOOL ObjectCreation,
BOOL AccessGranted,
LPBOOL GenerateOnClose
);
#line 1086 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
ObjectPrivilegeAuditAlarmW(
LPCWSTR SubsystemName,
LPVOID HandleId,
HANDLE ClientToken,
DWORD DesiredAccess,
PPRIVILEGE_SET Privileges,
BOOL AccessGranted
);
#line 1103 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
PrivilegeCheck(
HANDLE ClientToken,
PPRIVILEGE_SET RequiredPrivileges,
LPBOOL pfResult
);
__declspec(dllimport)
BOOL
__stdcall
PrivilegedServiceAuditAlarmW(
LPCWSTR SubsystemName,
LPCWSTR ServiceName,
HANDLE ClientToken,
PPRIVILEGE_SET Privileges,
BOOL AccessGranted
);
#line 1129 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#line 1143 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
RevertToSelf(
void
);
__declspec(dllimport)
BOOL
__stdcall
SetAclInformation(
PACL pAcl,
LPVOID pAclInformation,
DWORD nAclInformationLength,
ACL_INFORMATION_CLASS dwAclInformationClass
);
__declspec(dllimport)
BOOL
__stdcall
SetFileSecurityW(
LPCWSTR lpFileName,
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR pSecurityDescriptor
);
#line 1175 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetKernelObjectSecurity(
HANDLE Handle,
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR SecurityDescriptor
);
__declspec(dllimport)
BOOL
__stdcall
SetPrivateObjectSecurity(
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR ModificationDescriptor,
PSECURITY_DESCRIPTOR * ObjectsSecurityDescriptor,
PGENERIC_MAPPING GenericMapping,
HANDLE Token
);
__declspec(dllimport)
BOOL
__stdcall
SetPrivateObjectSecurityEx(
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR ModificationDescriptor,
PSECURITY_DESCRIPTOR * ObjectsSecurityDescriptor,
ULONG AutoInheritFlags,
PGENERIC_MAPPING GenericMapping,
HANDLE Token
);
#line 1224 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorControl(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet
);
__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorDacl(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
BOOL bDaclPresent,
PACL pDacl,
BOOL bDaclDefaulted
);
__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorGroup(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
PSID pGroup,
BOOL bGroupDefaulted
);
__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorOwner(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
PSID pOwner,
BOOL bOwnerDefaulted
);
__declspec(dllimport)
DWORD
__stdcall
SetSecurityDescriptorRMControl(
PSECURITY_DESCRIPTOR SecurityDescriptor,
PUCHAR RMControl
);
__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorSacl(
PSECURITY_DESCRIPTOR pSecurityDescriptor,
BOOL bSaclPresent,
PACL pSacl,
BOOL bSaclDefaulted
);
__declspec(dllimport)
BOOL
__stdcall
SetTokenInformation(
HANDLE TokenHandle,
TOKEN_INFORMATION_CLASS TokenInformationClass,
LPVOID TokenInformation,
DWORD TokenInformationLength
);
#line 1327 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#line 1329 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#pragma endregion
#line 1338 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securitybaseapi.h"
#line 60 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namespaceapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namespaceapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namespaceapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namespaceapi.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namespaceapi.h"
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
CreatePrivateNamespaceW(
LPSECURITY_ATTRIBUTES lpPrivateNamespaceAttributes,
LPVOID lpBoundaryDescriptor,
LPCWSTR lpAliasPrefix
);
__declspec(dllimport)
HANDLE
__stdcall
OpenPrivateNamespaceW(
LPVOID lpBoundaryDescriptor,
LPCWSTR lpAliasPrefix
);
__declspec(dllimport)
BOOLEAN
__stdcall
ClosePrivateNamespace(
HANDLE Handle,
ULONG Flags
);
__declspec(dllimport)
HANDLE
__stdcall
CreateBoundaryDescriptorW(
LPCWSTR Name,
ULONG Flags
);
__declspec(dllimport)
BOOL
__stdcall
AddSIDToBoundaryDescriptor(
HANDLE * BoundaryDescriptor,
PSID RequiredSid
);
__declspec(dllimport)
void
__stdcall
DeleteBoundaryDescriptor(
HANDLE BoundaryDescriptor
);
#line 97 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namespaceapi.h"
#pragma endregion
#line 104 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\namespaceapi.h"
#line 61 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetNumaHighestNodeNumber(
PULONG HighestNodeNumber
);
#line 61 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#pragma endregion
#line 70 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\systemtopologyapi.h"
#line 62 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#pragma region Desktop Family
#line 84 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#line 86 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#pragma endregion
#line 93 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\processtopologyapi.h"
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#pragma region Desktop Family
#line 60 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#line 66 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#pragma endregion
#line 69 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\securityappcontainer.h"
#line 64 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#pragma region Desktop Family
#line 70 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#line 85 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#line 87 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#pragma endregion
#pragma region Application Family
#line 105 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#line 107 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#pragma endregion
#line 114 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\realtimeapiset.h"
#line 65 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma region Application Family
#line 84 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
#line 92 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 150 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 187 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 202 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 216 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef void (__stdcall *PFIBER_START_ROUTINE)(
LPVOID lpFiberParameter
);
typedef PFIBER_START_ROUTINE LPFIBER_START_ROUTINE;
#line 285 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef PLDT_ENTRY LPLDT_ENTRY;
#line 298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef struct _COMMPROP {
WORD wPacketLength;
WORD wPacketVersion;
DWORD dwServiceMask;
DWORD dwReserved1;
DWORD dwMaxTxQueue;
DWORD dwMaxRxQueue;
DWORD dwMaxBaud;
DWORD dwProvSubType;
DWORD dwProvCapabilities;
DWORD dwSettableParams;
DWORD dwSettableBaud;
WORD wSettableData;
WORD wSettableStopParity;
DWORD dwCurrentTxQueue;
DWORD dwCurrentRxQueue;
DWORD dwProvSpec1;
DWORD dwProvSpec2;
WCHAR wcProvChar[1];
} COMMPROP,*LPCOMMPROP;
typedef struct _COMSTAT {
DWORD fCtsHold : 1;
DWORD fDsrHold : 1;
DWORD fRlsdHold : 1;
DWORD fXoffHold : 1;
DWORD fXoffSent : 1;
DWORD fEof : 1;
DWORD fTxim : 1;
DWORD fReserved : 25;
DWORD cbInQue;
DWORD cbOutQue;
} COMSTAT, *LPCOMSTAT;
typedef struct _DCB {
DWORD DCBlength;      
DWORD BaudRate;       
DWORD fBinary: 1;     
DWORD fParity: 1;     
DWORD fOutxCtsFlow:1; 
DWORD fOutxDsrFlow:1; 
DWORD fDtrControl:2;  
DWORD fDsrSensitivity:1; 
DWORD fTXContinueOnXoff: 1; 
DWORD fOutX: 1;       
DWORD fInX: 1;        
DWORD fErrorChar: 1;  
DWORD fNull: 1;       
DWORD fRtsControl:2;  
DWORD fAbortOnError:1; 
DWORD fDummy2:17;     
WORD wReserved;       
WORD XonLim;          
WORD XoffLim;         
BYTE ByteSize;        
BYTE Parity;          
BYTE StopBits;        
char XonChar;         
char XoffChar;        
char ErrorChar;       
char EofChar;         
char EvtChar;         
WORD wReserved1;      
} DCB, *LPDCB;
typedef struct _COMMTIMEOUTS {
DWORD ReadIntervalTimeout;          
DWORD ReadTotalTimeoutMultiplier;   
DWORD ReadTotalTimeoutConstant;     
DWORD WriteTotalTimeoutMultiplier;  
DWORD WriteTotalTimeoutConstant;    
} COMMTIMEOUTS,*LPCOMMTIMEOUTS;
typedef struct _COMMCONFIG {
DWORD dwSize;               
WORD wVersion;              
WORD wReserved;             
DCB dcb;                    
DWORD dwProviderSubType;    
DWORD dwProviderOffset;     
DWORD dwProviderSize;       
WCHAR wcProviderData[1];    
} COMMCONFIG,*LPCOMMCONFIG;
typedef struct _MEMORYSTATUS {
DWORD dwLength;
DWORD dwMemoryLoad;
SIZE_T dwTotalPhys;
SIZE_T dwAvailPhys;
SIZE_T dwTotalPageFile;
SIZE_T dwAvailPageFile;
SIZE_T dwTotalVirtual;
SIZE_T dwAvailVirtual;
} MEMORYSTATUS, *LPMEMORYSTATUS;
typedef struct _JIT_DEBUG_INFO {
DWORD dwSize;
DWORD dwProcessorArchitecture;
DWORD dwThreadID;
DWORD dwReserved0;
ULONG64 lpExceptionAddress;
ULONG64 lpExceptionRecord;
ULONG64 lpContextRecord;
} JIT_DEBUG_INFO, *LPJIT_DEBUG_INFO;
typedef JIT_DEBUG_INFO JIT_DEBUG_INFO32, *LPJIT_DEBUG_INFO32;
typedef JIT_DEBUG_INFO JIT_DEBUG_INFO64, *LPJIT_DEBUG_INFO64;
typedef PEXCEPTION_RECORD LPEXCEPTION_RECORD;
typedef PEXCEPTION_POINTERS LPEXCEPTION_POINTERS;
#line 659 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 674 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef struct _OFSTRUCT {
BYTE cBytes;
BYTE fFixedDisk;
WORD nErrCode;
WORD Reserved1;
WORD Reserved2;
CHAR szPathName[128];
} OFSTRUCT, *LPOFSTRUCT, *POFSTRUCT;
#line 1670 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1859 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1982 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2112 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2115 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2147 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2162 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2164 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2166 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
int
#line 2183 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__stdcall
#line 2185 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2188 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
WinMain (
HINSTANCE hInstance,
HINSTANCE hPrevInstance,
LPSTR lpCmdLine,
int nShowCmd
);
int
#line 2199 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__stdcall
#line 2201 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
wWinMain(
HINSTANCE hInstance,
HINSTANCE hPrevInstance,
LPWSTR lpCmdLine,
int nShowCmd
);
__declspec(dllimport)
HGLOBAL
__stdcall
GlobalAlloc(
UINT uFlags,
SIZE_T dwBytes
);
__declspec(dllimport)
HGLOBAL
__stdcall
GlobalReAlloc (
HGLOBAL hMem,
SIZE_T dwBytes,
UINT uFlags
);
__declspec(dllimport)
SIZE_T
__stdcall
GlobalSize (
HGLOBAL hMem
);
__declspec(dllimport)
UINT
__stdcall
GlobalFlags (
HGLOBAL hMem
);
__declspec(dllimport)
LPVOID
__stdcall
GlobalLock (
HGLOBAL hMem
);
__declspec(dllimport)
HGLOBAL
__stdcall
GlobalHandle (
LPCVOID pMem
);
__declspec(dllimport)
BOOL
__stdcall
GlobalUnlock(
HGLOBAL hMem
);
__declspec(dllimport)
HGLOBAL
__stdcall
GlobalFree(
HGLOBAL hMem
);
__declspec(dllimport)
SIZE_T
__stdcall
GlobalCompact(
DWORD dwMinFree
);
__declspec(dllimport)
void
__stdcall
GlobalFix(
HGLOBAL hMem
);
__declspec(dllimport)
void
__stdcall
GlobalUnfix(
HGLOBAL hMem
);
__declspec(dllimport)
LPVOID
__stdcall
GlobalWire(
HGLOBAL hMem
);
__declspec(dllimport)
BOOL
__stdcall
GlobalUnWire(
HGLOBAL hMem
);
__declspec(dllimport)
void
__stdcall
GlobalMemoryStatus(
LPMEMORYSTATUS lpBuffer
);
__declspec(dllimport)
HLOCAL
__stdcall
LocalAlloc(
UINT uFlags,
SIZE_T uBytes
);
__declspec(dllimport)
HLOCAL
__stdcall
LocalReAlloc(
HLOCAL hMem,
SIZE_T uBytes,
UINT uFlags
);
__declspec(dllimport)
LPVOID
__stdcall
LocalLock(
HLOCAL hMem
);
__declspec(dllimport)
HLOCAL
__stdcall
LocalHandle(
LPCVOID pMem
);
__declspec(dllimport)
BOOL
__stdcall
LocalUnlock(
HLOCAL hMem
);
__declspec(dllimport)
SIZE_T
__stdcall
LocalSize(
HLOCAL hMem
);
__declspec(dllimport)
UINT
__stdcall
LocalFlags(
HLOCAL hMem
);
__declspec(dllimport)
HLOCAL
__stdcall
LocalFree(
HLOCAL hMem
);
__declspec(dllimport)
SIZE_T
__stdcall
LocalShrink(
HLOCAL hMem,
UINT cbNewSize
);
__declspec(dllimport)
SIZE_T
__stdcall
LocalCompact(
UINT uMinFree
);
#line 2409 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2426 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2437 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2451 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2453 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetBinaryTypeA(
LPCSTR lpApplicationName,
LPDWORD  lpBinaryType
);
__declspec(dllimport)
BOOL
__stdcall
GetBinaryTypeW(
LPCWSTR lpApplicationName,
LPDWORD  lpBinaryType
);
#line 2473 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetShortPathNameA(
LPCSTR lpszLongPath,
LPSTR  lpszShortPath,
DWORD cchBuffer
);
#line 2516 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetProcessAffinityMask(
HANDLE hProcess,
PDWORD_PTR lpProcessAffinityMask,
PDWORD_PTR lpSystemAffinityMask
);
__declspec(dllimport)
BOOL
__stdcall
SetProcessAffinityMask(
HANDLE hProcess,
DWORD_PTR dwProcessAffinityMask
);
__declspec(dllimport)
BOOL
__stdcall
GetProcessIoCounters(
HANDLE hProcess,
PIO_COUNTERS lpIoCounters
);
__declspec(dllimport)
BOOL
__stdcall
GetProcessWorkingSetSize(
HANDLE hProcess,
PSIZE_T lpMinimumWorkingSetSize,
PSIZE_T lpMaximumWorkingSetSize
);
__declspec(dllimport)
BOOL
__stdcall
SetProcessWorkingSetSize(
HANDLE hProcess,
SIZE_T dwMinimumWorkingSetSize,
SIZE_T dwMaximumWorkingSetSize
);
__declspec(dllimport)
void
__stdcall
FatalExit(
int ExitCode
);
__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentStringsA(
LPCH NewEnvironment
);
#line 2579 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
void
__stdcall
RaiseFailFastException(
PEXCEPTION_RECORD pExceptionRecord,
PCONTEXT pContextRecord,
DWORD dwFlags
);
#line 2594 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
LPVOID
__stdcall
CreateFiber(
SIZE_T dwStackSize,
LPFIBER_START_ROUTINE lpStartAddress,
LPVOID lpParameter
);
__declspec(dllimport)
LPVOID
__stdcall
CreateFiberEx(
SIZE_T dwStackCommitSize,
SIZE_T dwStackReserveSize,
DWORD dwFlags,
LPFIBER_START_ROUTINE lpStartAddress,
LPVOID lpParameter
);
__declspec(dllimport)
void
__stdcall
DeleteFiber(
LPVOID lpFiber
);
__declspec(dllimport)
LPVOID
__stdcall
ConvertThreadToFiber(
LPVOID lpParameter
);
__declspec(dllimport)
LPVOID
__stdcall
ConvertThreadToFiberEx(
LPVOID lpParameter,
DWORD dwFlags
);
__declspec(dllimport)
BOOL
__stdcall
ConvertFiberToThread(
void
);
#line 2663 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
void
__stdcall
SwitchToFiber(
LPVOID lpFiber
);
#line 2836 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2842 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD_PTR
__stdcall
SetThreadAffinityMask(
HANDLE hThread,
DWORD_PTR dwThreadAffinityMask
);
__declspec(dllimport)
DWORD
__stdcall
SetThreadIdealProcessor(
HANDLE hThread,
DWORD dwIdealProcessor
);
#line 2860 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef enum _THREAD_INFORMATION_CLASS {
ThreadMemoryPriority,
ThreadAbsoluteCpuPriority,
ThreadInformationClassMax
} THREAD_INFORMATION_CLASS;
typedef enum _PROCESS_INFORMATION_CLASS {
ProcessMemoryPriority,
ProcessInformationClassMax
} PROCESS_INFORMATION_CLASS;
#line 2938 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 2961 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetProcessPriorityBoost(
HANDLE hProcess,
BOOL bDisablePriorityBoost
);
__declspec(dllimport)
BOOL
__stdcall
GetProcessPriorityBoost(
HANDLE hProcess,
PBOOL  pDisablePriorityBoost
);
__declspec(dllimport)
BOOL
__stdcall
RequestWakeupLatency(
LATENCY_TIME latency
);
__declspec(dllimport)
BOOL
__stdcall
IsSystemResumeAutomatic(
void
);
__declspec(dllimport)
BOOL
__stdcall
GetThreadIOPendingFlag(
HANDLE hThread,
PBOOL  lpIOIsPending
);
#line 3003 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetThreadSelectorEntry(
HANDLE hThread,
DWORD dwSelector,
LPLDT_ENTRY lpSelectorEntry
);
__declspec(dllimport)
EXECUTION_STATE
__stdcall
SetThreadExecutionState(
EXECUTION_STATE esFlags
);
#line 3052 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3054 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 3064 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
#line 3086 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3087 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3126 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetThreadErrorMode(
void
);
__declspec(dllimport)
BOOL
__stdcall
SetThreadErrorMode(
DWORD dwNewMode,
LPDWORD lpOldMode
);
#line 3172 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3185 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3187 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3198 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
DebugSetProcessKillOnExit(
BOOL KillOnExit
);
__declspec(dllimport)
BOOL
__stdcall
DebugBreakProcess (
HANDLE Process
);
#line 3214 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 3222 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3224 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
PulseEvent(
HANDLE hEvent
);
__declspec(dllimport)
DWORD
__stdcall
WaitForMultipleObjects(
DWORD nCount,
const HANDLE *lpHandles,
BOOL bWaitAll,
DWORD dwMilliseconds
);
__declspec(dllimport)
ATOM
__stdcall
GlobalDeleteAtom(
ATOM nAtom
);
__declspec(dllimport)
BOOL
__stdcall
InitAtomTable(
DWORD nSize
);
__declspec(dllimport)
ATOM
__stdcall
DeleteAtom(
ATOM nAtom
);
__declspec(dllimport)
UINT
__stdcall
SetHandleCount(
UINT uNumber
);
__declspec(dllimport)
BOOL
__stdcall
RequestDeviceWakeup(
HANDLE hDevice
);
__declspec(dllimport)
BOOL
__stdcall
CancelDeviceWakeupRequest(
HANDLE hDevice
);
__declspec(dllimport)
BOOL
__stdcall
GetDevicePowerState(
HANDLE hDevice,
BOOL *pfOn
);
__declspec(dllimport)
BOOL
__stdcall
SetMessageWaitingIndicator(
HANDLE hMsgIndicator,
ULONG ulMsgCount
);
__declspec(dllimport)
BOOL
__stdcall
SetFileShortNameA(
HANDLE hFile,
LPCSTR lpShortName
);
__declspec(dllimport)
BOOL
__stdcall
SetFileShortNameW(
HANDLE hFile,
LPCWSTR lpShortName
);
#line 3324 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
LoadModule(
LPCSTR lpModuleName,
LPVOID lpParameterBlock
);
__declspec(dllimport)
UINT
__stdcall
WinExec(
LPCSTR lpCmdLine,
UINT uCmdShow
);
__declspec(dllimport)
BOOL
__stdcall
ClearCommBreak(
HANDLE hFile
);
__declspec(dllimport)
BOOL
__stdcall
ClearCommError(
HANDLE hFile,
LPDWORD lpErrors,
LPCOMSTAT lpStat
);
__declspec(dllimport)
BOOL
__stdcall
SetupComm(
HANDLE hFile,
DWORD dwInQueue,
DWORD dwOutQueue
);
__declspec(dllimport)
BOOL
__stdcall
EscapeCommFunction(
HANDLE hFile,
DWORD dwFunc
);
__declspec(dllimport)
BOOL
__stdcall
GetCommConfig(
HANDLE hCommDev,
LPCOMMCONFIG lpCC,
LPDWORD lpdwSize
);
__declspec(dllimport)
BOOL
__stdcall
GetCommMask(
HANDLE hFile,
LPDWORD lpEvtMask
);
__declspec(dllimport)
BOOL
__stdcall
GetCommProperties(
HANDLE hFile,
LPCOMMPROP lpCommProp
);
__declspec(dllimport)
BOOL
__stdcall
GetCommModemStatus(
HANDLE hFile,
LPDWORD lpModemStat
);
__declspec(dllimport)
BOOL
__stdcall
GetCommState(
HANDLE hFile,
LPDCB lpDCB
);
__declspec(dllimport)
BOOL
__stdcall
GetCommTimeouts(
HANDLE hFile,
LPCOMMTIMEOUTS lpCommTimeouts
);
__declspec(dllimport)
BOOL
__stdcall
PurgeComm(
HANDLE hFile,
DWORD dwFlags
);
__declspec(dllimport)
BOOL
__stdcall
SetCommBreak(
HANDLE hFile
);
__declspec(dllimport)
BOOL
__stdcall
SetCommConfig(
HANDLE hCommDev,
LPCOMMCONFIG lpCC,
DWORD dwSize
);
__declspec(dllimport)
BOOL
__stdcall
SetCommMask(
HANDLE hFile,
DWORD dwEvtMask
);
__declspec(dllimport)
BOOL
__stdcall
SetCommState(
HANDLE hFile,
LPDCB lpDCB
);
__declspec(dllimport)
BOOL
__stdcall
SetCommTimeouts(
HANDLE hFile,
LPCOMMTIMEOUTS lpCommTimeouts
);
__declspec(dllimport)
BOOL
__stdcall
TransmitCommChar(
HANDLE hFile,
char cChar
);
__declspec(dllimport)
BOOL
__stdcall
WaitCommEvent(
HANDLE hFile,
LPDWORD lpEvtMask,
LPOVERLAPPED lpOverlapped
);
__declspec(dllimport)
DWORD
__stdcall
SetTapePosition(
HANDLE hDevice,
DWORD dwPositionMethod,
DWORD dwPartition,
DWORD dwOffsetLow,
DWORD dwOffsetHigh,
BOOL bImmediate
);
__declspec(dllimport)
DWORD
__stdcall
GetTapePosition(
HANDLE hDevice,
DWORD dwPositionType,
LPDWORD lpdwPartition,
LPDWORD lpdwOffsetLow,
LPDWORD lpdwOffsetHigh
);
__declspec(dllimport)
DWORD
__stdcall
PrepareTape(
HANDLE hDevice,
DWORD dwOperation,
BOOL bImmediate
);
__declspec(dllimport)
DWORD
__stdcall
EraseTape(
HANDLE hDevice,
DWORD dwEraseType,
BOOL bImmediate
);
__declspec(dllimport)
DWORD
__stdcall
CreateTapePartition(
HANDLE hDevice,
DWORD dwPartitionMethod,
DWORD dwCount,
DWORD dwSize
);
__declspec(dllimport)
DWORD
__stdcall
WriteTapemark(
HANDLE hDevice,
DWORD dwTapemarkType,
DWORD dwTapemarkCount,
BOOL bImmediate
);
__declspec(dllimport)
DWORD
__stdcall
GetTapeStatus(
HANDLE hDevice
);
__declspec(dllimport)
DWORD
__stdcall
GetTapeParameters(
HANDLE hDevice,
DWORD dwOperation,
LPDWORD lpdwSize,
LPVOID lpTapeInformation
);
__declspec(dllimport)
DWORD
__stdcall
SetTapeParameters(
HANDLE hDevice,
DWORD dwOperation,
LPVOID lpTapeInformation
);
#line 3591 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
int
__stdcall
MulDiv(
int nNumber,
int nNumerator,
int nDenominator
);
#line 3606 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
typedef enum _DEP_SYSTEM_POLICY_TYPE {
DEPPolicyAlwaysOff = 0,
DEPPolicyAlwaysOn,
DEPPolicyOptIn,
DEPPolicyOptOut,
DEPTotalPolicyCount
} DEP_SYSTEM_POLICY_TYPE;
#line 3629 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetSystemRegistryQuota(
PDWORD pdwQuotaAllowed,
PDWORD pdwQuotaUsed
);
BOOL
__stdcall
GetSystemTimes(
LPFILETIME lpIdleTime,
LPFILETIME lpKernelTime,
LPFILETIME lpUserTime
);
#line 3649 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
FileTimeToDosDateTime(
const FILETIME *lpFileTime,
LPWORD lpFatDate,
LPWORD lpFatTime
);
__declspec(dllimport)
BOOL
__stdcall
DosDateTimeToFileTime(
WORD wFatDate,
WORD wFatTime,
LPFILETIME lpFileTime
);
__declspec(dllimport)
BOOL
__stdcall
SetSystemTimeAdjustment(
DWORD dwTimeAdjustment,
BOOL  bTimeAdjustmentDisabled
);
#line 3681 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
DWORD
__stdcall
FormatMessageA(
DWORD dwFlags,
LPCVOID lpSource,
DWORD dwMessageId,
DWORD dwLanguageId,
LPSTR lpBuffer,
DWORD nSize,
va_list *Arguments
);
__declspec(dllimport)
DWORD
__stdcall
FormatMessageW(
DWORD dwFlags,
LPCVOID lpSource,
DWORD dwMessageId,
DWORD dwLanguageId,
LPWSTR lpBuffer,
DWORD nSize,
va_list *Arguments
);
#line 3719 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3749 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3750 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 3759 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeInfo(
HANDLE hNamedPipe,
LPDWORD lpFlags,
LPDWORD lpOutBufferSize,
LPDWORD lpInBufferSize,
LPDWORD lpMaxInstances
);
__declspec(dllimport)
HANDLE
__stdcall
CreateMailslotA(
LPCSTR lpName,
DWORD nMaxMessageSize,
DWORD lReadTimeout,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
__declspec(dllimport)
HANDLE
__stdcall
CreateMailslotW(
LPCWSTR lpName,
DWORD nMaxMessageSize,
DWORD lReadTimeout,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#line 3806 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetMailslotInfo(
HANDLE hMailslot,
LPDWORD lpMaxMessageSize,
LPDWORD lpNextSize,
LPDWORD lpMessageCount,
LPDWORD lpReadTimeout
);
__declspec(dllimport)
BOOL
__stdcall
SetMailslotInfo(
HANDLE hMailslot,
DWORD lReadTimeout
);
__declspec(dllimport)
BOOL
__stdcall
EncryptFileA(
LPCSTR lpFileName
);
__declspec(dllimport)
BOOL
__stdcall
EncryptFileW(
LPCWSTR lpFileName
);
#line 3847 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
DecryptFileA(
LPCSTR lpFileName,
DWORD dwReserved
);
__declspec(dllimport)
BOOL
__stdcall
DecryptFileW(
LPCWSTR lpFileName,
DWORD dwReserved
);
#line 3867 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
FileEncryptionStatusA(
LPCSTR lpFileName,
LPDWORD  lpStatus
);
__declspec(dllimport)
BOOL
__stdcall
FileEncryptionStatusW(
LPCWSTR lpFileName,
LPDWORD  lpStatus
);
#line 3902 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef
DWORD
(__stdcall *PFE_EXPORT_FUNC)(
PBYTE pbData,
PVOID pvCallbackContext,
ULONG ulLength
);
typedef
DWORD
(__stdcall *PFE_IMPORT_FUNC)(
PBYTE pbData,
PVOID pvCallbackContext,
PULONG ulLength
);
__declspec(dllimport)
DWORD
__stdcall
OpenEncryptedFileRawA(
LPCSTR lpFileName,
ULONG    ulFlags,
PVOID   *pvContext
);
__declspec(dllimport)
DWORD
__stdcall
OpenEncryptedFileRawW(
LPCWSTR lpFileName,
ULONG    ulFlags,
PVOID   *pvContext
);
#line 3957 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
ReadEncryptedFileRaw(
PFE_EXPORT_FUNC pfExportCallback,
PVOID           pvCallbackContext,
PVOID           pvContext
);
__declspec(dllimport)
DWORD
__stdcall
WriteEncryptedFileRaw(
PFE_IMPORT_FUNC pfImportCallback,
PVOID           pvCallbackContext,
PVOID           pvContext
);
__declspec(dllimport)
void
__stdcall
CloseEncryptedFileRaw(
PVOID           pvContext
);
__declspec(dllimport)
int
__stdcall
lstrcmpA(
LPCSTR lpString1,
LPCSTR lpString2
);
__declspec(dllimport)
int
__stdcall
lstrcmpW(
LPCWSTR lpString1,
LPCWSTR lpString2
);
#line 4006 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
int
__stdcall
lstrcmpiA(
LPCSTR lpString1,
LPCSTR lpString2
);
__declspec(dllimport)
int
__stdcall
lstrcmpiW(
LPCWSTR lpString1,
LPCWSTR lpString2
);
#line 4026 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
LPSTR
__stdcall
lstrcpynA(
LPSTR lpString1,
LPCSTR lpString2,
int iMaxLength
);
__declspec(dllimport)
LPWSTR
__stdcall
lstrcpynW(
LPWSTR lpString1,
LPCWSTR lpString2,
int iMaxLength
);
#line 4050 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma warning(push)
#pragma warning(disable:4995)
#line 4055 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
LPSTR
__stdcall
lstrcpyA(
LPSTR lpString1, 
LPCSTR lpString2
);
__declspec(dllimport)
LPWSTR
__stdcall
lstrcpyW(
LPWSTR lpString1, 
LPCWSTR lpString2
);
#line 4075 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
LPSTR
__stdcall
lstrcatA(
LPSTR lpString1, 
LPCSTR lpString2
);
__declspec(dllimport)
LPWSTR
__stdcall
lstrcatW(
LPWSTR lpString1, 
LPCWSTR lpString2
);
#line 4095 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma warning(pop)
#line 4099 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
int
__stdcall
lstrlenA(
LPCSTR lpString
);
__declspec(dllimport)
int
__stdcall
lstrlenW(
LPCWSTR lpString
);
#line 4117 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HFILE
__stdcall
OpenFile(
LPCSTR lpFileName,
LPOFSTRUCT lpReOpenBuff,
UINT uStyle
);
__declspec(dllimport)
HFILE
__stdcall
_lopen(
LPCSTR lpPathName,
int iReadWrite
);
__declspec(dllimport)
HFILE
__stdcall
_lcreat(
LPCSTR lpPathName,
int  iAttribute
);
__declspec(dllimport)
UINT
__stdcall
_lread(
HFILE hFile,
LPVOID lpBuffer,
UINT uBytes
);
__declspec(dllimport)
UINT
__stdcall
_lwrite(
HFILE hFile,
LPCCH lpBuffer,
UINT uBytes
);
__declspec(dllimport)
long
__stdcall
_hread(
HFILE hFile,
LPVOID lpBuffer,
long lBytes
);
__declspec(dllimport)
long
__stdcall
_hwrite(
HFILE hFile,
LPCCH lpBuffer,
long lBytes
);
__declspec(dllimport)
HFILE
__stdcall
_lclose(
HFILE hFile
);
__declspec(dllimport)
LONG
__stdcall
_llseek(
HFILE hFile,
LONG lOffset,
int iOrigin
);
__declspec(dllimport)
BOOL
__stdcall
IsTextUnicode(
const void* lpv,
int iSize,
LPINT lpiResult
);
__declspec(dllimport)
DWORD
__stdcall
SignalObjectAndWait(
HANDLE hObjectToSignal,
HANDLE hObjectToWaitOn,
DWORD dwMilliseconds,
BOOL bAlertable
);
#line 4215 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
BackupRead(
HANDLE hFile,
LPBYTE lpBuffer,
DWORD nNumberOfBytesToRead,
LPDWORD lpNumberOfBytesRead,
BOOL bAbort,
BOOL bProcessSecurity,
LPVOID *lpContext
);
__declspec(dllimport)
BOOL
__stdcall
BackupSeek(
HANDLE hFile,
DWORD  dwLowBytesToSeek,
DWORD  dwHighBytesToSeek,
LPDWORD lpdwLowByteSeeked,
LPDWORD lpdwHighByteSeeked,
LPVOID *lpContext
);
__declspec(dllimport)
BOOL
__stdcall
BackupWrite(
HANDLE hFile,
LPBYTE lpBuffer,
DWORD nNumberOfBytesToWrite,
LPDWORD lpNumberOfBytesWritten,
BOOL bAbort,
BOOL bProcessSecurity,
LPVOID *lpContext
);
typedef struct _WIN32_STREAM_ID {
DWORD          dwStreamId ;
DWORD          dwStreamAttributes ;
LARGE_INTEGER  Size ;
DWORD          dwStreamNameSize ;
WCHAR          cStreamName[ 1 ] ;
} WIN32_STREAM_ID, *LPWIN32_STREAM_ID ;
#line 4313 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4333 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4337 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
OpenMutexA(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
CreateSemaphoreA(
LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
LONG lInitialCount,
LONG lMaximumCount,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
CreateSemaphoreW(
LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
LONG lInitialCount,
LONG lMaximumCount,
LPCWSTR lpName
);
#line 4380 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
OpenSemaphoreA(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
CreateWaitableTimerA(
LPSECURITY_ATTRIBUTES lpTimerAttributes,
BOOL bManualReset,
LPCSTR lpTimerName
);
__declspec(dllimport)
HANDLE
__stdcall
CreateWaitableTimerW(
LPSECURITY_ATTRIBUTES lpTimerAttributes,
BOOL bManualReset,
LPCWSTR lpTimerName
);
#line 4419 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
OpenWaitableTimerA(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCSTR lpTimerName
);
#line 4466 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4468 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
CreateFileMappingA(
HANDLE hFile,
LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
DWORD flProtect,
DWORD dwMaximumSizeHigh,
DWORD dwMaximumSizeLow,
LPCSTR lpName
);
#line 4506 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
OpenFileMappingA(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCSTR lpName
);
__declspec(dllimport)
DWORD
__stdcall
GetLogicalDriveStringsA(
DWORD nBufferLength,
LPSTR lpBuffer
);
__declspec(dllimport)
HMODULE
__stdcall
LoadLibraryA(
LPCSTR lpLibFileName
);
__declspec(dllimport)
HMODULE
__stdcall
LoadLibraryW(
LPCWSTR lpLibFileName
);
#line 4551 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4553 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 4570 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4572 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
#line 4606 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4648 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4661 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4666 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4677 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4768 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetProcessShutdownParameters(
LPDWORD lpdwLevel,
LPDWORD lpdwFlags
);
__declspec(dllimport)
void
__stdcall
FatalAppExitA(
UINT uAction,
LPCSTR lpMessageText
);
__declspec(dllimport)
void
__stdcall
FatalAppExitW(
UINT uAction,
LPCWSTR lpMessageText
);
#line 4797 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
void
__stdcall
GetStartupInfoA(
LPSTARTUPINFOA lpStartupInfo
);
#line 4829 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4849 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetFirmwareEnvironmentVariableA(
LPCSTR lpName,
LPCSTR lpGuid,
PVOID pBuffer,
DWORD    nSize
);
__declspec(dllimport)
DWORD
__stdcall
GetFirmwareEnvironmentVariableW(
LPCWSTR lpName,
LPCWSTR lpGuid,
PVOID pBuffer,
DWORD    nSize
);
#line 4873 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4903 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetFirmwareEnvironmentVariableA(
LPCSTR lpName,
LPCSTR lpGuid,
PVOID pValue,
DWORD    nSize
);
__declspec(dllimport)
BOOL
__stdcall
SetFirmwareEnvironmentVariableW(
LPCWSTR lpName,
LPCWSTR lpGuid,
PVOID pValue,
DWORD    nSize
);
#line 4927 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4957 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 4976 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HRSRC
__stdcall
FindResourceA(
HMODULE hModule,
LPCSTR lpName,
LPCSTR lpType
);
__declspec(dllimport)
HRSRC
__stdcall
FindResourceW(
HMODULE hModule,
LPCWSTR lpName,
LPCWSTR lpType
);
#line 5000 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HRSRC
__stdcall
FindResourceExA(
HMODULE hModule,
LPCSTR lpType,
LPCSTR lpName,
WORD    wLanguage
);
__declspec(dllimport)
BOOL
__stdcall
EnumResourceTypesA(
HMODULE hModule,
ENUMRESTYPEPROCA lpEnumFunc,
LONG_PTR lParam
);
__declspec(dllimport)
BOOL
__stdcall
EnumResourceTypesW(
HMODULE hModule,
ENUMRESTYPEPROCW lpEnumFunc,
LONG_PTR lParam
);
#line 5036 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
EnumResourceNamesA(
HMODULE hModule,
LPCSTR lpType,
ENUMRESNAMEPROCA lpEnumFunc,
LONG_PTR lParam
);
__declspec(dllimport)
BOOL
__stdcall
EnumResourceNamesW(
HMODULE hModule,
LPCWSTR lpType,
ENUMRESNAMEPROCW lpEnumFunc,
LONG_PTR lParam
);
#line 5060 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
EnumResourceLanguagesA(
HMODULE hModule,
LPCSTR lpType,
LPCSTR lpName,
ENUMRESLANGPROCA lpEnumFunc,
LONG_PTR lParam
);
__declspec(dllimport)
BOOL
__stdcall
EnumResourceLanguagesW(
HMODULE hModule,
LPCWSTR lpType,
LPCWSTR lpName,
ENUMRESLANGPROCW lpEnumFunc,
LONG_PTR lParam
);
#line 5086 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
BeginUpdateResourceA(
LPCSTR pFileName,
BOOL bDeleteExistingResources
);
__declspec(dllimport)
HANDLE
__stdcall
BeginUpdateResourceW(
LPCWSTR pFileName,
BOOL bDeleteExistingResources
);
#line 5106 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
UpdateResourceA(
HANDLE hUpdate,
LPCSTR lpType,
LPCSTR lpName,
WORD wLanguage,
LPVOID lpData,
DWORD cb
);
__declspec(dllimport)
BOOL
__stdcall
UpdateResourceW(
HANDLE hUpdate,
LPCWSTR lpType,
LPCWSTR lpName,
WORD wLanguage,
LPVOID lpData,
DWORD cb
);
#line 5134 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
EndUpdateResourceA(
HANDLE hUpdate,
BOOL   fDiscard
);
__declspec(dllimport)
BOOL
__stdcall
EndUpdateResourceW(
HANDLE hUpdate,
BOOL   fDiscard
);
#line 5154 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomA(
LPCSTR lpString
);
__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomW(
LPCWSTR lpString
);
#line 5174 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomExA(
LPCSTR lpString,
DWORD Flags
);
__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomExW(
LPCWSTR lpString,
DWORD Flags
);
#line 5194 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
ATOM
__stdcall
GlobalFindAtomA(
LPCSTR lpString
);
__declspec(dllimport)
ATOM
__stdcall
GlobalFindAtomW(
LPCWSTR lpString
);
#line 5212 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
UINT
__stdcall
GlobalGetAtomNameA(
ATOM nAtom,
LPSTR lpBuffer,
int nSize
);
__declspec(dllimport)
UINT
__stdcall
GlobalGetAtomNameW(
ATOM nAtom,
LPWSTR lpBuffer,
int nSize
);
#line 5234 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
ATOM
__stdcall
AddAtomA(
LPCSTR lpString
);
__declspec(dllimport)
ATOM
__stdcall
AddAtomW(
LPCWSTR lpString
);
#line 5252 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
ATOM
__stdcall
FindAtomA(
LPCSTR lpString
);
__declspec(dllimport)
ATOM
__stdcall
FindAtomW(
LPCWSTR lpString
);
#line 5270 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
UINT
__stdcall
GetAtomNameA(
ATOM nAtom,
LPSTR lpBuffer,
int nSize
);
__declspec(dllimport)
UINT
__stdcall
GetAtomNameW(
ATOM nAtom,
LPWSTR lpBuffer,
int nSize
);
#line 5292 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
UINT
__stdcall
GetProfileIntA(
LPCSTR lpAppName,
LPCSTR lpKeyName,
INT nDefault
);
__declspec(dllimport)
UINT
__stdcall
GetProfileIntW(
LPCWSTR lpAppName,
LPCWSTR lpKeyName,
INT nDefault
);
#line 5314 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetProfileStringA(
LPCSTR lpAppName,
LPCSTR lpKeyName,
LPCSTR lpDefault,
LPSTR lpReturnedString,
DWORD nSize
);
__declspec(dllimport)
DWORD
__stdcall
GetProfileStringW(
LPCWSTR lpAppName,
LPCWSTR lpKeyName,
LPCWSTR lpDefault,
LPWSTR lpReturnedString,
DWORD nSize
);
#line 5340 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
WriteProfileStringA(
LPCSTR lpAppName,
LPCSTR lpKeyName,
LPCSTR lpString
);
__declspec(dllimport)
BOOL
__stdcall
WriteProfileStringW(
LPCWSTR lpAppName,
LPCWSTR lpKeyName,
LPCWSTR lpString
);
#line 5362 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetProfileSectionA(
LPCSTR lpAppName,
LPSTR lpReturnedString,
DWORD nSize
);
__declspec(dllimport)
DWORD
__stdcall
GetProfileSectionW(
LPCWSTR lpAppName,
LPWSTR lpReturnedString,
DWORD nSize
);
#line 5384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
WriteProfileSectionA(
LPCSTR lpAppName,
LPCSTR lpString
);
__declspec(dllimport)
BOOL
__stdcall
WriteProfileSectionW(
LPCWSTR lpAppName,
LPCWSTR lpString
);
#line 5404 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
UINT
__stdcall
GetPrivateProfileIntA(
LPCSTR lpAppName,
LPCSTR lpKeyName,
INT nDefault,
LPCSTR lpFileName
);
__declspec(dllimport)
UINT
__stdcall
GetPrivateProfileIntW(
LPCWSTR lpAppName,
LPCWSTR lpKeyName,
INT nDefault,
LPCWSTR lpFileName
);
#line 5428 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5452 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileStringA(
LPCSTR lpAppName,
LPCSTR lpKeyName,
LPCSTR lpDefault,
LPSTR lpReturnedString,
DWORD nSize,
LPCSTR lpFileName
);
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileStringW(
LPCWSTR lpAppName,
LPCWSTR lpKeyName,
LPCWSTR lpDefault,
LPWSTR lpReturnedString,
DWORD nSize,
LPCWSTR lpFileName
);
#line 5480 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5508 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStringA(
LPCSTR lpAppName,
LPCSTR lpKeyName,
LPCSTR lpString,
LPCSTR lpFileName
);
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStringW(
LPCWSTR lpAppName,
LPCWSTR lpKeyName,
LPCWSTR lpString,
LPCWSTR lpFileName
);
#line 5532 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionA(
LPCSTR lpAppName,
LPSTR lpReturnedString,
DWORD nSize,
LPCSTR lpFileName
);
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionW(
LPCWSTR lpAppName,
LPWSTR lpReturnedString,
DWORD nSize,
LPCWSTR lpFileName
);
#line 5556 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5580 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileSectionA(
LPCSTR lpAppName,
LPCSTR lpString,
LPCSTR lpFileName
);
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileSectionW(
LPCWSTR lpAppName,
LPCWSTR lpString,
LPCWSTR lpFileName
);
#line 5602 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionNamesA(
LPSTR lpszReturnBuffer,
DWORD nSize,
LPCSTR lpFileName
);
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionNamesW(
LPWSTR lpszReturnBuffer,
DWORD nSize,
LPCWSTR lpFileName
);
#line 5625 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5647 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetPrivateProfileStructA(
LPCSTR lpszSection,
LPCSTR lpszKey,
LPVOID   lpStruct,
UINT     uSizeStruct,
LPCSTR szFile
);
__declspec(dllimport)
BOOL
__stdcall
GetPrivateProfileStructW(
LPCWSTR lpszSection,
LPCWSTR lpszKey,
LPVOID   lpStruct,
UINT     uSizeStruct,
LPCWSTR szFile
);
#line 5673 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5699 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStructA(
LPCSTR lpszSection,
LPCSTR lpszKey,
LPVOID lpStruct,
UINT     uSizeStruct,
LPCSTR szFile
);
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStructW(
LPCWSTR lpszSection,
LPCWSTR lpszKey,
LPVOID lpStruct,
UINT     uSizeStruct,
LPCWSTR szFile
);
#line 5725 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetTempPathA(
DWORD nBufferLength,
LPSTR lpBuffer
);
__declspec(dllimport)
UINT
__stdcall
GetTempFileNameA(
LPCSTR lpPathName,
LPCSTR lpPrefixString,
UINT uUnique,
LPSTR lpTempFileName
);
#line 5773 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
UINT
__stdcall
GetSystemWow64DirectoryA(
LPSTR lpBuffer,
UINT uSize
);
__declspec(dllimport)
UINT
__stdcall
GetSystemWow64DirectoryW(
LPWSTR lpBuffer,
UINT uSize
);
#line 5798 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOLEAN
__stdcall
Wow64EnableWow64FsRedirection (
BOOLEAN Wow64FsEnableRedirection
);
typedef UINT (__stdcall* PGET_SYSTEM_WOW64_DIRECTORY_A)(  LPSTR lpBuffer,   UINT uSize);
typedef UINT (__stdcall* PGET_SYSTEM_WOW64_DIRECTORY_W)(  LPWSTR lpBuffer,   UINT uSize);
#line 5833 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5835 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5836 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5854 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5874 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5918 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetSearchPathMode (
DWORD Flags
);
#line 5932 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 5956 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 5958 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryExA(
LPCSTR lpTemplateDirectory,
LPCSTR lpNewDirectory,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryExW(
LPCWSTR lpTemplateDirectory,
LPCWSTR lpNewDirectory,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#line 5984 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6060 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
DefineDosDeviceA(
DWORD dwFlags,
LPCSTR lpDeviceName,
LPCSTR lpTargetPath
);
__declspec(dllimport)
DWORD
__stdcall
QueryDosDeviceA(
LPCSTR lpDeviceName,
LPSTR lpTargetPath,
DWORD ucchMax
);
#line 6132 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6147 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6198 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
GetCompressedFileSizeA(
LPCSTR lpFileName,
LPDWORD  lpFileSizeHigh
);
__declspec(dllimport)
DWORD
__stdcall
GetCompressedFileSizeW(
LPCWSTR lpFileName,
LPDWORD  lpFileSizeHigh
);
#line 6218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6264 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6266 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 6288 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6290 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CheckNameLegalDOS8Dot3A(
LPCSTR lpName,
LPSTR lpOemName,
DWORD OemNameSize,
PBOOL pbNameContainsSpaces ,
PBOOL pbNameLegal
);
__declspec(dllimport)
BOOL
__stdcall
CheckNameLegalDOS8Dot3W(
LPCWSTR lpName,
LPSTR lpOemName,
DWORD OemNameSize,
PBOOL pbNameContainsSpaces ,
PBOOL pbNameLegal
);
#line 6322 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6324 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6326 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
#line 6366 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6368 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#line 6371 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CopyFileA(
LPCSTR lpExistingFileName,
LPCSTR lpNewFileName,
BOOL bFailIfExists
);
__declspec(dllimport)
BOOL
__stdcall
CopyFileW(
LPCWSTR lpExistingFileName,
LPCWSTR lpNewFileName,
BOOL bFailIfExists
);
#line 6397 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6419 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6421 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
typedef
DWORD
(__stdcall *LPPROGRESS_ROUTINE)(
LARGE_INTEGER TotalFileSize,
LARGE_INTEGER TotalBytesTransferred,
LARGE_INTEGER StreamSize,
LARGE_INTEGER StreamBytesTransferred,
DWORD dwStreamNumber,
DWORD dwCallbackReason,
HANDLE hSourceFile,
HANDLE hDestinationFile,
LPVOID lpData
);
__declspec(dllimport)
BOOL
__stdcall
CopyFileExA(
LPCSTR lpExistingFileName,
LPCSTR lpNewFileName,
LPPROGRESS_ROUTINE lpProgressRoutine,
LPVOID lpData,
LPBOOL pbCancel,
DWORD dwCopyFlags
);
__declspec(dllimport)
BOOL
__stdcall
CopyFileExW(
LPCWSTR lpExistingFileName,
LPCWSTR lpNewFileName,
LPPROGRESS_ROUTINE lpProgressRoutine,
LPVOID lpData,
LPBOOL pbCancel,
DWORD dwCopyFlags
);
#line 6471 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6505 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6507 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 6646 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6648 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#line 6651 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
MoveFileA(
LPCSTR lpExistingFileName,
LPCSTR lpNewFileName
);
__declspec(dllimport)
BOOL
__stdcall
MoveFileW(
LPCWSTR lpExistingFileName,
LPCWSTR lpNewFileName
);
#line 6674 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6696 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
MoveFileExA(
LPCSTR lpExistingFileName,
LPCSTR lpNewFileName,
DWORD    dwFlags
);
__declspec(dllimport)
BOOL
__stdcall
MoveFileExW(
LPCWSTR lpExistingFileName,
LPCWSTR lpNewFileName,
DWORD    dwFlags
);
#line 6722 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6724 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
MoveFileWithProgressA(
LPCSTR lpExistingFileName,
LPCSTR lpNewFileName,
LPPROGRESS_ROUTINE lpProgressRoutine,
LPVOID lpData,
DWORD dwFlags
);
__declspec(dllimport)
BOOL
__stdcall
MoveFileWithProgressW(
LPCWSTR lpExistingFileName,
LPCWSTR lpNewFileName,
LPPROGRESS_ROUTINE lpProgressRoutine,
LPVOID lpData,
DWORD dwFlags
);
#line 6755 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6756 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6786 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6788 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
#line 6801 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6803 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
ReplaceFileA(
LPCSTR lpReplacedFileName,
LPCSTR lpReplacementFileName,
LPCSTR lpBackupFileName,
DWORD    dwReplaceFlags,
LPVOID   lpExclude,
LPVOID  lpReserved
);
__declspec(dllimport)
BOOL
__stdcall
ReplaceFileW(
LPCWSTR lpReplacedFileName,
LPCWSTR lpReplacementFileName,
LPCWSTR lpBackupFileName,
DWORD    dwReplaceFlags,
LPVOID   lpExclude,
LPVOID  lpReserved
);
#line 6838 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6839 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
CreateHardLinkA(
LPCSTR lpFileName,
LPCSTR lpExistingFileName,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
__declspec(dllimport)
BOOL
__stdcall
CreateHardLinkW(
LPCWSTR lpFileName,
LPCWSTR lpExistingFileName,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#line 6867 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6869 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6900 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef enum _STREAM_INFO_LEVELS {
FindStreamInfoStandard,
FindStreamInfoMaxInfoLevel
} STREAM_INFO_LEVELS;
typedef struct _WIN32_FIND_STREAM_DATA {
LARGE_INTEGER StreamSize;
WCHAR cStreamName[ 260 + 36 ];
} WIN32_FIND_STREAM_DATA, *PWIN32_FIND_STREAM_DATA;
__declspec(dllimport)
HANDLE
__stdcall
FindFirstStreamW(
LPCWSTR lpFileName,
STREAM_INFO_LEVELS InfoLevel,
LPVOID lpFindStreamData,
DWORD dwFlags
);
#line 6944 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
FindNextStreamW(
HANDLE hFindStream,
LPVOID lpFindStreamData
);
#line 6953 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 6987 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
CreateNamedPipeA(
LPCSTR lpName,
DWORD dwOpenMode,
DWORD dwPipeMode,
DWORD nMaxInstances,
DWORD nOutBufferSize,
DWORD nInBufferSize,
DWORD nDefaultTimeOut,
LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeHandleStateA(
HANDLE hNamedPipe,
LPDWORD lpState,
LPDWORD lpCurInstances,
LPDWORD lpMaxCollectionCount,
LPDWORD lpCollectDataTimeout,
LPSTR lpUserName,
DWORD nMaxUserNameSize
);
__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeHandleStateW(
HANDLE hNamedPipe,
LPDWORD lpState,
LPDWORD lpCurInstances,
LPDWORD lpMaxCollectionCount,
LPDWORD lpCollectDataTimeout,
LPWSTR lpUserName,
DWORD nMaxUserNameSize
);
#line 7034 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
CallNamedPipeA(
LPCSTR lpNamedPipeName,
LPVOID lpInBuffer,
DWORD nInBufferSize,
LPVOID lpOutBuffer,
DWORD nOutBufferSize,
LPDWORD lpBytesRead,
DWORD nTimeOut
);
__declspec(dllimport)
BOOL
__stdcall
CallNamedPipeW(
LPCWSTR lpNamedPipeName,
LPVOID lpInBuffer,
DWORD nInBufferSize,
LPVOID lpOutBuffer,
DWORD nOutBufferSize,
LPDWORD lpBytesRead,
DWORD nTimeOut
);
#line 7064 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
WaitNamedPipeA(
LPCSTR lpNamedPipeName,
DWORD nTimeOut
);
#line 7125 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetVolumeLabelA(
LPCSTR lpRootPathName,
LPCSTR lpVolumeName
);
__declspec(dllimport)
BOOL
__stdcall
SetVolumeLabelW(
LPCWSTR lpRootPathName,
LPCWSTR lpVolumeName
);
#line 7145 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
void
__stdcall
SetFileApisToOEM( void );
__declspec(dllimport)
void
__stdcall
SetFileApisToANSI( void );
__declspec(dllimport)
BOOL
__stdcall
AreFileApisANSI( void );
__declspec(dllimport)
BOOL
__stdcall
GetVolumeInformationA(
LPCSTR lpRootPathName,
LPSTR lpVolumeNameBuffer,
DWORD nVolumeNameSize,
LPDWORD lpVolumeSerialNumber,
LPDWORD lpMaximumComponentLength,
LPDWORD lpFileSystemFlags,
LPSTR lpFileSystemNameBuffer,
DWORD nFileSystemNameSize
);
#line 7206 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
ClearEventLogA (
HANDLE hEventLog,
LPCSTR lpBackupFileName
);
__declspec(dllimport)
BOOL
__stdcall
ClearEventLogW (
HANDLE hEventLog,
LPCWSTR lpBackupFileName
);
#line 7230 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
BackupEventLogA (
HANDLE hEventLog,
LPCSTR lpBackupFileName
);
__declspec(dllimport)
BOOL
__stdcall
BackupEventLogW (
HANDLE hEventLog,
LPCWSTR lpBackupFileName
);
#line 7250 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
CloseEventLog (
HANDLE hEventLog
);
__declspec(dllimport)
BOOL
__stdcall
DeregisterEventSource (
HANDLE hEventLog
);
__declspec(dllimport)
BOOL
__stdcall
NotifyChangeEventLog(
HANDLE  hEventLog,
HANDLE  hEvent
);
__declspec(dllimport)
BOOL
__stdcall
GetNumberOfEventLogRecords (
HANDLE hEventLog,
PDWORD NumberOfRecords
);
__declspec(dllimport)
BOOL
__stdcall
GetOldestEventLogRecord (
HANDLE hEventLog,
PDWORD OldestRecord
);
__declspec(dllimport)
HANDLE
__stdcall
OpenEventLogA (
LPCSTR lpUNCServerName,
LPCSTR lpSourceName
);
__declspec(dllimport)
HANDLE
__stdcall
OpenEventLogW (
LPCWSTR lpUNCServerName,
LPCWSTR lpSourceName
);
#line 7308 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
RegisterEventSourceA (
LPCSTR lpUNCServerName,
LPCSTR lpSourceName
);
__declspec(dllimport)
HANDLE
__stdcall
RegisterEventSourceW (
LPCWSTR lpUNCServerName,
LPCWSTR lpSourceName
);
#line 7328 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
OpenBackupEventLogA (
LPCSTR lpUNCServerName,
LPCSTR lpFileName
);
__declspec(dllimport)
HANDLE
__stdcall
OpenBackupEventLogW (
LPCWSTR lpUNCServerName,
LPCWSTR lpFileName
);
#line 7348 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
ReadEventLogA (
HANDLE     hEventLog,
DWORD      dwReadFlags,
DWORD      dwRecordOffset,
LPVOID     lpBuffer,
DWORD      nNumberOfBytesToRead,
DWORD      *pnBytesRead,
DWORD      *pnMinNumberOfBytesNeeded
);
__declspec(dllimport)
BOOL
__stdcall
ReadEventLogW (
HANDLE     hEventLog,
DWORD      dwReadFlags,
DWORD      dwRecordOffset,
LPVOID     lpBuffer,
DWORD      nNumberOfBytesToRead,
DWORD      *pnBytesRead,
DWORD      *pnMinNumberOfBytesNeeded
);
#line 7378 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
ReportEventA (
HANDLE     hEventLog,
WORD       wType,
WORD       wCategory,
DWORD      dwEventID,
PSID       lpUserSid,
WORD       wNumStrings,
DWORD      dwDataSize,
LPCSTR *lpStrings,
LPVOID lpRawData
);
__declspec(dllimport)
BOOL
__stdcall
ReportEventW (
HANDLE     hEventLog,
WORD       wType,
WORD       wCategory,
DWORD      dwEventID,
PSID       lpUserSid,
WORD       wNumStrings,
DWORD      dwDataSize,
LPCWSTR *lpStrings,
LPVOID lpRawData
);
#line 7412 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef struct _EVENTLOG_FULL_INFORMATION
{
DWORD    dwFull;
}
EVENTLOG_FULL_INFORMATION, *LPEVENTLOG_FULL_INFORMATION;
__declspec(dllimport)
BOOL
__stdcall
GetEventLogInformation (
HANDLE     hEventLog,
DWORD      dwInfoLevel,
LPVOID lpBuffer,
DWORD      cbBufSize,
LPDWORD    pcbBytesNeeded
);
#line 7481 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
AccessCheckAndAuditAlarmA (
LPCSTR SubsystemName,
LPVOID HandleId,
LPSTR ObjectTypeName,
LPSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
DWORD DesiredAccess,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccess,
LPBOOL AccessStatus,
LPBOOL pfGenerateOnClose
);
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeAndAuditAlarmA (
LPCSTR SubsystemName,
LPVOID HandleId,
LPCSTR ObjectTypeName,
LPCSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
PSID PrincipalSelfSid,
DWORD DesiredAccess,
AUDIT_EVENT_TYPE AuditType,
DWORD Flags,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccess,
LPBOOL AccessStatus,
LPBOOL pfGenerateOnClose
);
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmA (
LPCSTR SubsystemName,
LPVOID HandleId,
LPCSTR ObjectTypeName,
LPCSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
PSID PrincipalSelfSid,
DWORD DesiredAccess,
AUDIT_EVENT_TYPE AuditType,
DWORD Flags,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccess,
LPDWORD AccessStatusList,
LPBOOL pfGenerateOnClose
);
__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmByHandleA (
LPCSTR SubsystemName,
LPVOID HandleId,
HANDLE ClientToken,
LPCSTR ObjectTypeName,
LPCSTR ObjectName,
PSECURITY_DESCRIPTOR SecurityDescriptor,
PSID PrincipalSelfSid,
DWORD DesiredAccess,
AUDIT_EVENT_TYPE AuditType,
DWORD Flags,
POBJECT_TYPE_LIST ObjectTypeList,
DWORD ObjectTypeListLength,
PGENERIC_MAPPING GenericMapping,
BOOL ObjectCreation,
LPDWORD GrantedAccess,
LPDWORD AccessStatusList,
LPBOOL pfGenerateOnClose
);
#line 7586 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
ObjectOpenAuditAlarmA (
LPCSTR SubsystemName,
LPVOID HandleId,
LPSTR ObjectTypeName,
LPSTR ObjectName,
PSECURITY_DESCRIPTOR pSecurityDescriptor,
HANDLE ClientToken,
DWORD DesiredAccess,
DWORD GrantedAccess,
PPRIVILEGE_SET Privileges,
BOOL ObjectCreation,
BOOL AccessGranted,
LPBOOL GenerateOnClose
);
__declspec(dllimport)
BOOL
__stdcall
ObjectPrivilegeAuditAlarmA (
LPCSTR SubsystemName,
LPVOID HandleId,
HANDLE ClientToken,
DWORD DesiredAccess,
PPRIVILEGE_SET Privileges,
BOOL AccessGranted
);
__declspec(dllimport)
BOOL
__stdcall
ObjectCloseAuditAlarmA (
LPCSTR SubsystemName,
LPVOID HandleId,
BOOL GenerateOnClose
);
__declspec(dllimport)
BOOL
__stdcall
ObjectDeleteAuditAlarmA (
LPCSTR SubsystemName,
LPVOID HandleId,
BOOL GenerateOnClose
);
__declspec(dllimport)
BOOL
__stdcall
PrivilegedServiceAuditAlarmA (
LPCSTR SubsystemName,
LPCSTR ServiceName,
HANDLE ClientToken,
PPRIVILEGE_SET Privileges,
BOOL AccessGranted
);
#line 7676 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetFileSecurityA (
LPCSTR lpFileName,
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR pSecurityDescriptor
);
__declspec(dllimport)
BOOL
__stdcall
GetFileSecurityA (
LPCSTR lpFileName,
SECURITY_INFORMATION RequestedInformation,
PSECURITY_DESCRIPTOR pSecurityDescriptor,
DWORD nLength,
LPDWORD lpnLengthNeeded
);
__declspec(dllimport)
BOOL
__stdcall
ReadDirectoryChangesW(
HANDLE hDirectory,
LPVOID lpBuffer,
DWORD nBufferLength,
BOOL bWatchSubtree,
DWORD dwNotifyFilter,
LPDWORD lpBytesReturned,
LPOVERLAPPED lpOverlapped,
LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#line 7718 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 7736 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
IsBadReadPtr(
const void *lp,
UINT_PTR ucb
);
__declspec(dllimport)
BOOL
__stdcall
IsBadWritePtr(
LPVOID lp,
UINT_PTR ucb
);
__declspec(dllimport)
BOOL
__stdcall
IsBadHugeReadPtr(
const void *lp,
UINT_PTR ucb
);
__declspec(dllimport)
BOOL
__stdcall
IsBadHugeWritePtr(
LPVOID lp,
UINT_PTR ucb
);
__declspec(dllimport)
BOOL
__stdcall
IsBadCodePtr(
FARPROC lpfn
);
__declspec(dllimport)
BOOL
__stdcall
IsBadStringPtrA(
LPCSTR lpsz,
UINT_PTR ucchMax
);
__declspec(dllimport)
BOOL
__stdcall
IsBadStringPtrW(
LPCWSTR lpsz,
UINT_PTR ucchMax
);
#line 7795 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
LookupAccountSidA(
LPCSTR lpSystemName,
PSID Sid,
LPSTR Name,
LPDWORD cchName,
LPSTR ReferencedDomainName,
LPDWORD cchReferencedDomainName,
PSID_NAME_USE peUse
);
__declspec(dllimport)
BOOL
__stdcall
LookupAccountSidW(
LPCWSTR lpSystemName,
PSID Sid,
LPWSTR Name,
LPDWORD cchName,
LPWSTR ReferencedDomainName,
LPDWORD cchReferencedDomainName,
PSID_NAME_USE peUse
);
#line 7825 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
LookupAccountNameA(
LPCSTR lpSystemName,
LPCSTR lpAccountName,
PSID Sid,
LPDWORD cbSid,
LPSTR ReferencedDomainName,
LPDWORD cchReferencedDomainName,
PSID_NAME_USE peUse
);
__declspec(dllimport)
BOOL
__stdcall
LookupAccountNameW(
LPCWSTR lpSystemName,
LPCWSTR lpAccountName,
PSID Sid,
LPDWORD cbSid,
LPWSTR ReferencedDomainName,
LPDWORD cchReferencedDomainName,
PSID_NAME_USE peUse
);
#line 7855 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 7915 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 7925 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 7935 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 7937 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeValueA(
LPCSTR lpSystemName,
LPCSTR lpName,
PLUID   lpLuid
);
__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeValueW(
LPCWSTR lpSystemName,
LPCWSTR lpName,
PLUID   lpLuid
);
#line 7959 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeNameA(
LPCSTR lpSystemName,
PLUID   lpLuid,
LPSTR lpName,
LPDWORD cchName
);
__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeNameW(
LPCWSTR lpSystemName,
PLUID   lpLuid,
LPWSTR lpName,
LPDWORD cchName
);
#line 7983 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeDisplayNameA(
LPCSTR lpSystemName,
LPCSTR lpName,
LPSTR lpDisplayName,
LPDWORD cchDisplayName,
LPDWORD lpLanguageId
);
__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeDisplayNameW(
LPCWSTR lpSystemName,
LPCWSTR lpName,
LPWSTR lpDisplayName,
LPDWORD cchDisplayName,
LPDWORD lpLanguageId
);
#line 8009 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBA(
LPCSTR lpDef,
LPDCB lpDCB
);
__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBW(
LPCWSTR lpDef,
LPDCB lpDCB
);
#line 8029 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBAndTimeoutsA(
LPCSTR lpDef,
LPDCB lpDCB,
LPCOMMTIMEOUTS lpCommTimeouts
);
__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBAndTimeoutsW(
LPCWSTR lpDef,
LPDCB lpDCB,
LPCOMMTIMEOUTS lpCommTimeouts
);
#line 8051 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
CommConfigDialogA(
LPCSTR lpszName,
HWND hWnd,
LPCOMMCONFIG lpCC
);
__declspec(dllimport)
BOOL
__stdcall
CommConfigDialogW(
LPCWSTR lpszName,
HWND hWnd,
LPCOMMCONFIG lpCC
);
#line 8073 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetDefaultCommConfigA(
LPCSTR lpszName,
LPCOMMCONFIG lpCC,
LPDWORD lpdwSize
);
__declspec(dllimport)
BOOL
__stdcall
GetDefaultCommConfigW(
LPCWSTR lpszName,
LPCOMMCONFIG lpCC,
LPDWORD lpdwSize
);
#line 8095 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetDefaultCommConfigA(
LPCSTR lpszName,
LPCOMMCONFIG lpCC,
DWORD dwSize
);
__declspec(dllimport)
BOOL
__stdcall
SetDefaultCommConfigW(
LPCWSTR lpszName,
LPCOMMCONFIG lpCC,
DWORD dwSize
);
#line 8117 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8123 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetComputerNameA (
LPSTR lpBuffer,
LPDWORD nSize
);
__declspec(dllimport)
BOOL
__stdcall
GetComputerNameW (
LPWSTR lpBuffer,
LPDWORD nSize
);
#line 8145 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetComputerNameA (
LPCSTR lpComputerName
);
__declspec(dllimport)
BOOL
__stdcall
SetComputerNameW (
LPCWSTR lpComputerName
);
#line 8163 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
SetComputerNameExA (
COMPUTER_NAME_FORMAT NameType,
LPCTSTR lpBuffer
);
__declspec(dllimport)
BOOL
__stdcall
DnsHostnameToComputerNameA (
LPCSTR Hostname,
LPSTR ComputerName,
LPDWORD nSize
);
__declspec(dllimport)
BOOL
__stdcall
DnsHostnameToComputerNameW (
LPCWSTR Hostname,
LPWSTR ComputerName,
LPDWORD nSize
);
#line 8202 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetUserNameA (
LPSTR lpBuffer,
LPDWORD pcbBuffer
);
__declspec(dllimport)
BOOL
__stdcall
GetUserNameW (
LPWSTR lpBuffer,
LPDWORD pcbBuffer
);
#line 8224 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8238 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8244 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8247 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8250 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
LogonUserA (
LPCSTR lpszUsername,
LPCSTR lpszDomain,
LPCSTR lpszPassword,
DWORD dwLogonType,
DWORD dwLogonProvider,
PHANDLE phToken
);
__declspec(dllimport)
BOOL
__stdcall
LogonUserW (
LPCWSTR lpszUsername,
LPCWSTR lpszDomain,
LPCWSTR lpszPassword,
DWORD dwLogonType,
DWORD dwLogonProvider,
PHANDLE phToken
);
#line 8280 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
LogonUserExA (
LPCSTR lpszUsername,
LPCSTR lpszDomain,
LPCSTR lpszPassword,
DWORD dwLogonType,
DWORD dwLogonProvider,
PHANDLE phToken,
PSID  *ppLogonSid,
PVOID *ppProfileBuffer,
LPDWORD pdwProfileLength,
PQUOTA_LIMITS pQuotaLimits
);
__declspec(dllimport)
BOOL
__stdcall
LogonUserExW (
LPCWSTR lpszUsername,
LPCWSTR lpszDomain,
LPCWSTR lpszPassword,
DWORD dwLogonType,
DWORD dwLogonProvider,
PHANDLE phToken,
PSID  *ppLogonSid,
PVOID *ppProfileBuffer,
LPDWORD pdwProfileLength,
PQUOTA_LIMITS pQuotaLimits
);
#line 8316 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8322 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
CreateProcessAsUserA (
HANDLE hToken,
LPCSTR lpApplicationName,
LPSTR lpCommandLine,
LPSECURITY_ATTRIBUTES lpProcessAttributes,
LPSECURITY_ATTRIBUTES lpThreadAttributes,
BOOL bInheritHandles,
DWORD dwCreationFlags,
LPVOID lpEnvironment,
LPCSTR lpCurrentDirectory,
LPSTARTUPINFOA lpStartupInfo,
LPPROCESS_INFORMATION lpProcessInformation
);
__declspec(dllimport)
BOOL
__stdcall
CreateProcessWithLogonW(
LPCWSTR lpUsername,
LPCWSTR lpDomain,
LPCWSTR lpPassword,
DWORD dwLogonFlags,
LPCWSTR lpApplicationName,
LPWSTR lpCommandLine,
DWORD dwCreationFlags,
LPVOID lpEnvironment,
LPCWSTR lpCurrentDirectory,
LPSTARTUPINFOW lpStartupInfo,
LPPROCESS_INFORMATION lpProcessInformation
);
__declspec(dllimport)
BOOL
__stdcall
CreateProcessWithTokenW(
HANDLE hToken,
DWORD dwLogonFlags,
LPCWSTR lpApplicationName,
LPWSTR lpCommandLine,
DWORD dwCreationFlags,
LPVOID lpEnvironment,
LPCWSTR lpCurrentDirectory,
LPSTARTUPINFOW lpStartupInfo,
LPPROCESS_INFORMATION lpProcessInformation
);
#line 8386 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
IsTokenUntrusted(
HANDLE TokenHandle
);
__declspec(dllimport)
BOOL
__stdcall
RegisterWaitForSingleObject(
PHANDLE phNewWaitObject,
HANDLE hObject,
WAITORTIMERCALLBACK Callback,
PVOID Context,
ULONG dwMilliseconds,
ULONG dwFlags
);
__declspec(dllimport)
BOOL
__stdcall
UnregisterWait(
HANDLE WaitHandle
);
__declspec(dllimport)
BOOL
__stdcall
BindIoCompletionCallback (
HANDLE FileHandle,
LPOVERLAPPED_COMPLETION_ROUTINE Function,
ULONG Flags
);
__declspec(dllimport)
HANDLE
__stdcall
SetTimerQueueTimer(
HANDLE TimerQueue,
WAITORTIMERCALLBACK Callback,
PVOID Parameter,
DWORD DueTime,
DWORD Period,
BOOL PreferIo
);
__declspec(dllimport)
BOOL
__stdcall
CancelTimerQueueTimer(
HANDLE TimerQueue,
HANDLE Timer
);
__declspec(dllimport)
BOOL
__stdcall
DeleteTimerQueue(
HANDLE TimerQueue
);
#line 8611 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8613 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef struct tagHW_PROFILE_INFOA {
DWORD  dwDockInfo;
CHAR   szHwProfileGuid[39];
CHAR   szHwProfileName[80];
} HW_PROFILE_INFOA, *LPHW_PROFILE_INFOA;
typedef struct tagHW_PROFILE_INFOW {
DWORD  dwDockInfo;
WCHAR  szHwProfileGuid[39];
WCHAR  szHwProfileName[80];
} HW_PROFILE_INFOW, *LPHW_PROFILE_INFOW;
typedef HW_PROFILE_INFOW HW_PROFILE_INFO;
typedef LPHW_PROFILE_INFOW LPHW_PROFILE_INFO;
#line 8646 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetCurrentHwProfileA (
LPHW_PROFILE_INFOA  lpHwProfileInfo
);
__declspec(dllimport)
BOOL
__stdcall
GetCurrentHwProfileW (
LPHW_PROFILE_INFOW  lpHwProfileInfo
);
#line 8665 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8666 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
VerifyVersionInfoA(
LPOSVERSIONINFOEXA lpVersionInformation,
DWORD dwTypeMask,
DWORDLONG dwlConditionMask
);
__declspec(dllimport)
BOOL
__stdcall
VerifyVersionInfoW(
LPOSVERSIONINFOEXW lpVersionInformation,
DWORD dwTypeMask,
DWORDLONG dwlConditionMask
);
#line 8688 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8691 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#line 21938 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#line 25982 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
__forceinline HRESULT HRESULT_FROM_WIN32(unsigned long x) { return (HRESULT)(x) <= 0 ? (HRESULT)(x) : (HRESULT) (((x) & 0x0000FFFF) | (7 << 16) | 0x80000000);}
#line 25988 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#line 26031 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#line 26218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#line 45072 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#line 52798 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\winerror.h"
#line 8698 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#pragma once
#line 14 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 32 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#pragma region Application Family
typedef struct _TIME_ZONE_INFORMATION {
LONG Bias;
WCHAR StandardName[ 32 ];
SYSTEMTIME StandardDate;
LONG StandardBias;
WCHAR DaylightName[ 32 ];
SYSTEMTIME DaylightDate;
LONG DaylightBias;
} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION, *LPTIME_ZONE_INFORMATION;
typedef struct _TIME_DYNAMIC_ZONE_INFORMATION {
LONG Bias;
WCHAR StandardName[ 32 ];
SYSTEMTIME StandardDate;
LONG StandardBias;
WCHAR DaylightName[ 32 ];
SYSTEMTIME DaylightDate;
LONG DaylightBias;
WCHAR TimeZoneKeyName[ 128 ];
BOOLEAN DynamicDaylightTimeDisabled;
} DYNAMIC_TIME_ZONE_INFORMATION, *PDYNAMIC_TIME_ZONE_INFORMATION;
__declspec(dllimport)
BOOL
__stdcall
SystemTimeToTzSpecificLocalTime(
const TIME_ZONE_INFORMATION * lpTimeZoneInformation,
const SYSTEMTIME * lpUniversalTime,
LPSYSTEMTIME lpLocalTime
);
__declspec(dllimport)
BOOL
__stdcall
TzSpecificLocalTimeToSystemTime(
const TIME_ZONE_INFORMATION * lpTimeZoneInformation,
const SYSTEMTIME * lpLocalTime,
LPSYSTEMTIME lpUniversalTime
);
__declspec(dllimport)
BOOL
__stdcall
FileTimeToSystemTime(
const FILETIME * lpFileTime,
LPSYSTEMTIME lpSystemTime
);
__declspec(dllimport)
BOOL
__stdcall
SystemTimeToFileTime(
const SYSTEMTIME * lpSystemTime,
LPFILETIME lpFileTime
);
__declspec(dllimport)
DWORD
__stdcall
GetTimeZoneInformation(
LPTIME_ZONE_INFORMATION lpTimeZoneInformation
);
#line 121 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetTimeZoneInformation(
const TIME_ZONE_INFORMATION * lpTimeZoneInformation
);
#line 147 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 149 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#pragma endregion
#pragma region Application Family
#line 168 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 183 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 233 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 235 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#pragma endregion
#line 244 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\timezoneapi.h"
#line 8699 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma region Desktop Family
typedef struct _SYSTEM_POWER_STATUS {
BYTE ACLineStatus;
BYTE BatteryFlag;
BYTE BatteryLifePercent;
BYTE Reserved1;
DWORD BatteryLifeTime;
DWORD BatteryFullLifeTime;
}   SYSTEM_POWER_STATUS, *LPSYSTEM_POWER_STATUS;
__declspec(dllimport)
BOOL
__stdcall
GetSystemPowerStatus(
LPSYSTEM_POWER_STATUS lpSystemPowerStatus
);
__declspec(dllimport)
BOOL
__stdcall
SetSystemPowerState(
BOOL fSuspend,
BOOL fForce
);
#line 8756 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 8793 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
AllocateUserPhysicalPages(
HANDLE hProcess,
PULONG_PTR NumberOfPages,
PULONG_PTR PageArray
);
#line 8821 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
FreeUserPhysicalPages(
HANDLE hProcess,
PULONG_PTR NumberOfPages,
PULONG_PTR PageArray
);
__declspec(dllimport)
BOOL
__stdcall
MapUserPhysicalPages(
PVOID VirtualAddress,
ULONG_PTR NumberOfPages,
PULONG_PTR PageArray
);
__declspec(dllimport)
BOOL
__stdcall
MapUserPhysicalPagesScatter(
PVOID *VirtualAddresses,
ULONG_PTR NumberOfPages,
PULONG_PTR PageArray
);
__declspec(dllimport)
HANDLE
__stdcall
CreateJobObjectA(
LPSECURITY_ATTRIBUTES lpJobAttributes,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
CreateJobObjectW(
LPSECURITY_ATTRIBUTES lpJobAttributes,
LPCWSTR lpName
);
#line 8870 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
OpenJobObjectA(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCSTR lpName
);
__declspec(dllimport)
HANDLE
__stdcall
OpenJobObjectW(
DWORD dwDesiredAccess,
BOOL bInheritHandle,
LPCWSTR lpName
);
#line 8894 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
AssignProcessToJobObject(
HANDLE hJob,
HANDLE hProcess
);
__declspec(dllimport)
BOOL
__stdcall
TerminateJobObject(
HANDLE hJob,
UINT uExitCode
);
__declspec(dllimport)
BOOL
__stdcall
QueryInformationJobObject(
HANDLE hJob,
JOBOBJECTINFOCLASS JobObjectInformationClass,
LPVOID lpJobObjectInformation,
DWORD cbJobObjectInformationLength,
LPDWORD lpReturnLength
);
__declspec(dllimport)
BOOL
__stdcall
SetInformationJobObject(
HANDLE hJob,
JOBOBJECTINFOCLASS JobObjectInformationClass,
LPVOID lpJobObjectInformation,
DWORD cbJobObjectInformationLength
);
__declspec(dllimport)
BOOL
__stdcall
CreateJobSet (
ULONG NumJob,
PJOB_SET_ARRAY UserJobSet,
ULONG Flags);
__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeA(
LPSTR lpszVolumeName,
DWORD cchBufferLength
);
__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeA(
HANDLE hFindVolume,
LPSTR lpszVolumeName,
DWORD cchBufferLength
);
__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeMountPointA(
LPCSTR lpszRootPathName,
LPSTR lpszVolumeMountPoint,
DWORD cchBufferLength
);
__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeMountPointW(
LPCWSTR lpszRootPathName,
LPWSTR lpszVolumeMountPoint,
DWORD cchBufferLength
);
#line 8984 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeMountPointA(
HANDLE hFindVolumeMountPoint,
LPSTR lpszVolumeMountPoint,
DWORD cchBufferLength
);
__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeMountPointW(
HANDLE hFindVolumeMountPoint,
LPWSTR lpszVolumeMountPoint,
DWORD cchBufferLength
);
#line 9006 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
FindVolumeMountPointClose(
HANDLE hFindVolumeMountPoint
);
__declspec(dllimport)
BOOL
__stdcall
SetVolumeMountPointA(
LPCSTR lpszVolumeMountPoint,
LPCSTR lpszVolumeName
);
__declspec(dllimport)
BOOL
__stdcall
SetVolumeMountPointW(
LPCWSTR lpszVolumeMountPoint,
LPCWSTR lpszVolumeName
);
#line 9033 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
DeleteVolumeMountPointA(
LPCSTR lpszVolumeMountPoint
);
__declspec(dllimport)
BOOL
__stdcall
GetVolumeNameForVolumeMountPointA(
LPCSTR lpszVolumeMountPoint,
LPSTR lpszVolumeName,
DWORD cchBufferLength
);
__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNameA(
LPCSTR lpszFileName,
LPSTR lpszVolumePathName,
DWORD cchBufferLength
);
#line 9069 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNamesForVolumeNameA(
LPCSTR lpszVolumeName,
LPCH lpszVolumePathNames,
DWORD cchBufferLength,
PDWORD lpcchReturnLength
);
#line 9087 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef struct tagACTCTXA {
ULONG       cbSize;
DWORD       dwFlags;
LPCSTR      lpSource;
USHORT      wProcessorArchitecture;
LANGID      wLangId;
LPCSTR      lpAssemblyDirectory;
LPCSTR      lpResourceName;
LPCSTR      lpApplicationName;
HMODULE     hModule;
} ACTCTXA, *PACTCTXA;
typedef struct tagACTCTXW {
ULONG       cbSize;
DWORD       dwFlags;
LPCWSTR     lpSource;
USHORT      wProcessorArchitecture;
LANGID      wLangId;
LPCWSTR     lpAssemblyDirectory;
LPCWSTR     lpResourceName;
LPCWSTR     lpApplicationName;
HMODULE     hModule;
} ACTCTXW, *PACTCTXW;
typedef ACTCTXW ACTCTX;
typedef PACTCTXW PACTCTX;
#line 9128 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef const ACTCTXA *PCACTCTXA;
typedef const ACTCTXW *PCACTCTXW;
typedef PCACTCTXW PCACTCTX;
#line 9136 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
HANDLE
__stdcall
CreateActCtxA(
PCACTCTXA pActCtx
);
__declspec(dllimport)
HANDLE
__stdcall
CreateActCtxW(
PCACTCTXW pActCtx
);
#line 9156 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
void
__stdcall
AddRefActCtx(
HANDLE hActCtx
);
__declspec(dllimport)
void
__stdcall
ReleaseActCtx(
HANDLE hActCtx
);
__declspec(dllimport)
BOOL
__stdcall
ZombifyActCtx(
HANDLE hActCtx
);
__declspec(dllimport)
BOOL
__stdcall
ActivateActCtx(
HANDLE hActCtx,
ULONG_PTR *lpCookie
);
__declspec(dllimport)
BOOL
__stdcall
DeactivateActCtx(
DWORD dwFlags,
ULONG_PTR ulCookie
);
__declspec(dllimport)
BOOL
__stdcall
GetCurrentActCtx(
HANDLE *lphActCtx);
typedef struct tagACTCTX_SECTION_KEYED_DATA_2600 {
ULONG cbSize;
ULONG ulDataFormatVersion;
PVOID lpData;
ULONG ulLength;
PVOID lpSectionGlobalData;
ULONG ulSectionGlobalDataLength;
PVOID lpSectionBase;
ULONG ulSectionTotalLength;
HANDLE hActCtx;
ULONG ulAssemblyRosterIndex;
} ACTCTX_SECTION_KEYED_DATA_2600, *PACTCTX_SECTION_KEYED_DATA_2600;
typedef const ACTCTX_SECTION_KEYED_DATA_2600 * PCACTCTX_SECTION_KEYED_DATA_2600;
typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA {
PVOID lpInformation;
PVOID lpSectionBase;
ULONG ulSectionLength;
PVOID lpSectionGlobalDataBase;
ULONG ulSectionGlobalDataLength;
} ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;
typedef const ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *PCACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;
typedef struct tagACTCTX_SECTION_KEYED_DATA {
ULONG cbSize;
ULONG ulDataFormatVersion;
PVOID lpData;
ULONG ulLength;
PVOID lpSectionGlobalData;
ULONG ulSectionGlobalDataLength;
PVOID lpSectionBase;
ULONG ulSectionTotalLength;
HANDLE hActCtx;
ULONG ulAssemblyRosterIndex;
ULONG ulFlags;
ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
} ACTCTX_SECTION_KEYED_DATA, *PACTCTX_SECTION_KEYED_DATA;
typedef const ACTCTX_SECTION_KEYED_DATA * PCACTCTX_SECTION_KEYED_DATA;
__declspec(dllimport)
BOOL
__stdcall
FindActCtxSectionStringA(
DWORD dwFlags,
const GUID *lpExtensionGuid,
ULONG ulSectionId,
LPCSTR lpStringToFind,
PACTCTX_SECTION_KEYED_DATA ReturnedData
);
__declspec(dllimport)
BOOL
__stdcall
FindActCtxSectionStringW(
DWORD dwFlags,
const GUID *lpExtensionGuid,
ULONG ulSectionId,
LPCWSTR lpStringToFind,
PACTCTX_SECTION_KEYED_DATA ReturnedData
);
#line 9281 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
FindActCtxSectionGuid(
DWORD dwFlags,
const GUID *lpExtensionGuid,
ULONG ulSectionId,
const GUID *lpGuidToFind,
PACTCTX_SECTION_KEYED_DATA ReturnedData
);
typedef struct _ACTIVATION_CONTEXT_BASIC_INFORMATION {
HANDLE  hActCtx;
DWORD   dwFlags;
} ACTIVATION_CONTEXT_BASIC_INFORMATION, *PACTIVATION_CONTEXT_BASIC_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_BASIC_INFORMATION *PCACTIVATION_CONTEXT_BASIC_INFORMATION;
#line 9307 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 9308 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
QueryActCtxW(
DWORD dwFlags,
HANDLE hActCtx,
PVOID pvSubInstance,
ULONG ulInfoClass,
PVOID pvBuffer,
SIZE_T cbBuffer,
SIZE_T *pcbWrittenOrRequired
);
typedef   BOOL (__stdcall * PQUERYACTCTXW_FUNC)(
DWORD dwFlags,
HANDLE hActCtx,
PVOID pvSubInstance,
ULONG ulInfoClass,
PVOID pvBuffer,
SIZE_T cbBuffer,
SIZE_T *pcbWrittenOrRequired
);
#line 9369 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
DWORD
__stdcall
WTSGetActiveConsoleSessionId(
void
);
#line 9381 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 9413 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetNumaProcessorNode(
UCHAR Processor,
PUCHAR NodeNumber
);
#line 9437 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 9449 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
__declspec(dllimport)
BOOL
__stdcall
GetNumaNodeProcessorMask(
UCHAR Node,
PULONGLONG ProcessorMask
);
__declspec(dllimport)
BOOL
__stdcall
GetNumaAvailableMemoryNode(
UCHAR Node,
PULONGLONG AvailableBytes
);
#line 9477 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 9489 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 9501 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
typedef DWORD (__stdcall *APPLICATION_RECOVERY_CALLBACK)(PVOID pvParameter);
#line 9601 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 9603 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#line 9920 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma region Desktop Family
#line 9981 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 9999 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10012 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10031 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10033 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CopyContext(
PCONTEXT Destination,
DWORD ContextFlags,
PCONTEXT Source
);
#line 10051 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
InitializeContext(
PVOID Buffer,
DWORD ContextFlags,
PCONTEXT* Context,
PDWORD ContextLength
);
#line 10067 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
DWORD64
__stdcall
GetEnabledXStateFeatures(
void
);
__declspec(dllimport)
BOOL
__stdcall
GetXStateFeaturesMask(
PCONTEXT Context,
PDWORD64 FeatureMask
);
__declspec(dllimport)
PVOID
__stdcall
LocateXStateFeature(
PCONTEXT Context,
DWORD FeatureId,
PDWORD Length
);
#line 10101 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetXStateFeaturesMask(
PCONTEXT Context,
DWORD64 FeatureMask
);
#line 10116 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma endregion
#line 10119 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10121 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10165 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10172 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma warning(pop)
#line 10186 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10187 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10191 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#pragma once
#line 10221 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10232 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10468 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10470 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10475 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10476 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10477 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10478 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10479 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 10480 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winbase.h"
#line 166 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma once
#pragma warning(push)
#pragma warning(disable: 4201)      
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 46 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 99 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 105 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 112 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 143 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 157 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 175 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 195 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 198 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct _DRAWPATRECT {
POINT ptPosition;
POINT ptSize;
WORD wStyle;
WORD wPattern;
} DRAWPATRECT, *PDRAWPATRECT;
#line 296 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 301 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 402 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct _PSINJECTDATA {
DWORD   DataBytes;      
WORD    InjectionPoint; 
WORD    PageNumber;     
} PSINJECTDATA, *PPSINJECTDATA;
#line 431 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 500 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct _PSFEATURE_OUTPUT {
BOOL bPageIndependent;
BOOL bSetPageDevice;
} PSFEATURE_OUTPUT, *PPSFEATURE_OUTPUT;
typedef struct _PSFEATURE_CUSTPAPER {
LONG lOrientation;
LONG lWidth;
LONG lHeight;
LONG lWidthOffset;
LONG lHeightOffset;
} PSFEATURE_CUSTPAPER, *PPSFEATURE_CUSTPAPER;
#line 530 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct  tagXFORM
{
FLOAT   eM11;
FLOAT   eM12;
FLOAT   eM21;
FLOAT   eM22;
FLOAT   eDx;
FLOAT   eDy;
} XFORM, *PXFORM,  *LPXFORM;
typedef struct tagBITMAP
{
LONG        bmType;
LONG        bmWidth;
LONG        bmHeight;
LONG        bmWidthBytes;
WORD        bmPlanes;
WORD        bmBitsPixel;
LPVOID      bmBits;
} BITMAP, *PBITMAP,  *NPBITMAP,  *LPBITMAP;
#line 608 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack1.h"
#pragma warning(disable:4103)
#pragma pack(push,1)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack1.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack1.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack1.h"
#line 611 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagRGBTRIPLE {
BYTE    rgbtBlue;
BYTE    rgbtGreen;
BYTE    rgbtRed;
} RGBTRIPLE, *PRGBTRIPLE,  *NPRGBTRIPLE,  *LPRGBTRIPLE;
#line 622 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 625 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagRGBQUAD {
BYTE    rgbBlue;
BYTE    rgbGreen;
BYTE    rgbRed;
BYTE    rgbReserved;
} RGBQUAD;
#line 637 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef RGBQUAD * LPRGBQUAD;
#line 645 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef LONG   LCSCSTYPE;
typedef LONG    LCSGAMUTMATCH;
typedef long            FXPT16DOT16,  *LPFXPT16DOT16;
typedef long            FXPT2DOT30,  *LPFXPT2DOT30;
typedef struct tagCIEXYZ
{
FXPT2DOT30 ciexyzX;
FXPT2DOT30 ciexyzY;
FXPT2DOT30 ciexyzZ;
} CIEXYZ;
#line 713 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef CIEXYZ   *LPCIEXYZ;
#line 721 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagICEXYZTRIPLE
{
CIEXYZ  ciexyzRed;
CIEXYZ  ciexyzGreen;
CIEXYZ  ciexyzBlue;
} CIEXYZTRIPLE;
#line 734 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef CIEXYZTRIPLE     *LPCIEXYZTRIPLE;
#line 742 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagLOGCOLORSPACEA {
DWORD lcsSignature;
DWORD lcsVersion;
DWORD lcsSize;
LCSCSTYPE lcsCSType;
LCSGAMUTMATCH lcsIntent;
CIEXYZTRIPLE lcsEndpoints;
DWORD lcsGammaRed;
DWORD lcsGammaGreen;
DWORD lcsGammaBlue;
CHAR   lcsFilename[260];
} LOGCOLORSPACEA, *LPLOGCOLORSPACEA;
typedef struct tagLOGCOLORSPACEW {
DWORD lcsSignature;
DWORD lcsVersion;
DWORD lcsSize;
LCSCSTYPE lcsCSType;
LCSGAMUTMATCH lcsIntent;
CIEXYZTRIPLE lcsEndpoints;
DWORD lcsGammaRed;
DWORD lcsGammaGreen;
DWORD lcsGammaBlue;
WCHAR  lcsFilename[260];
} LOGCOLORSPACEW, *LPLOGCOLORSPACEW;
typedef LOGCOLORSPACEW LOGCOLORSPACE;
typedef LPLOGCOLORSPACEW LPLOGCOLORSPACE;
#line 783 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 785 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 788 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagBITMAPCOREHEADER {
DWORD   bcSize;                 
WORD    bcWidth;
WORD    bcHeight;
WORD    bcPlanes;
WORD    bcBitCount;
} BITMAPCOREHEADER,  *LPBITMAPCOREHEADER, *PBITMAPCOREHEADER;
#line 802 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagBITMAPINFOHEADER{
DWORD      biSize;
LONG       biWidth;
LONG       biHeight;
WORD       biPlanes;
WORD       biBitCount;
DWORD      biCompression;
DWORD      biSizeImage;
LONG       biXPelsPerMeter;
LONG       biYPelsPerMeter;
DWORD      biClrUsed;
DWORD      biClrImportant;
} BITMAPINFOHEADER,  *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;
#line 822 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct {
DWORD        bV4Size;
LONG         bV4Width;
LONG         bV4Height;
WORD         bV4Planes;
WORD         bV4BitCount;
DWORD        bV4V4Compression;
DWORD        bV4SizeImage;
LONG         bV4XPelsPerMeter;
LONG         bV4YPelsPerMeter;
DWORD        bV4ClrUsed;
DWORD        bV4ClrImportant;
DWORD        bV4RedMask;
DWORD        bV4GreenMask;
DWORD        bV4BlueMask;
DWORD        bV4AlphaMask;
DWORD        bV4CSType;
CIEXYZTRIPLE bV4Endpoints;
DWORD        bV4GammaRed;
DWORD        bV4GammaGreen;
DWORD        bV4GammaBlue;
} BITMAPV4HEADER,  *LPBITMAPV4HEADER, *PBITMAPV4HEADER;
#line 853 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 855 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct {
DWORD        bV5Size;
LONG         bV5Width;
LONG         bV5Height;
WORD         bV5Planes;
WORD         bV5BitCount;
DWORD        bV5Compression;
DWORD        bV5SizeImage;
LONG         bV5XPelsPerMeter;
LONG         bV5YPelsPerMeter;
DWORD        bV5ClrUsed;
DWORD        bV5ClrImportant;
DWORD        bV5RedMask;
DWORD        bV5GreenMask;
DWORD        bV5BlueMask;
DWORD        bV5AlphaMask;
DWORD        bV5CSType;
CIEXYZTRIPLE bV5Endpoints;
DWORD        bV5GammaRed;
DWORD        bV5GammaGreen;
DWORD        bV5GammaBlue;
DWORD        bV5Intent;
DWORD        bV5ProfileData;
DWORD        bV5ProfileSize;
DWORD        bV5Reserved;
} BITMAPV5HEADER,  *LPBITMAPV5HEADER, *PBITMAPV5HEADER;
#line 888 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 894 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 904 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagBITMAPINFO {
BITMAPINFOHEADER    bmiHeader;
RGBQUAD             bmiColors[1];
} BITMAPINFO,  *LPBITMAPINFO, *PBITMAPINFO;
#line 914 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagBITMAPCOREINFO {
BITMAPCOREHEADER    bmciHeader;
RGBTRIPLE           bmciColors[1];
} BITMAPCOREINFO,  *LPBITMAPCOREINFO, *PBITMAPCOREINFO;
#line 925 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#pragma warning(disable:4103)
#pragma pack(push,2)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 928 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagBITMAPFILEHEADER {
WORD    bfType;
DWORD   bfSize;
WORD    bfReserved1;
WORD    bfReserved2;
DWORD   bfOffBits;
} BITMAPFILEHEADER,  *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;
#line 941 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 944 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagFONTSIGNATURE
{
DWORD fsUsb[4];
DWORD fsCsb[2];
} FONTSIGNATURE, *PFONTSIGNATURE, *LPFONTSIGNATURE;
typedef struct tagCHARSETINFO
{
UINT ciCharset;
UINT ciACP;
FONTSIGNATURE fs;
} CHARSETINFO, *PCHARSETINFO,  *NPCHARSETINFO,  *LPCHARSETINFO;
#line 967 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 975 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagLOCALESIGNATURE
{
DWORD lsUsb[4];
DWORD lsCsbDefault[2];
DWORD lsCsbSupported[2];
} LOCALESIGNATURE, *PLOCALESIGNATURE, *LPLOCALESIGNATURE;
#line 987 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 990 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 991 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagHANDLETABLE
{
HGDIOBJ     objectHandle[1];
} HANDLETABLE, *PHANDLETABLE,  *LPHANDLETABLE;
typedef struct tagMETARECORD
{
DWORD       rdSize;
WORD        rdFunction;
WORD        rdParm[1];
} METARECORD;
#line 1012 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagMETARECORD  *PMETARECORD;
#line 1020 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagMETARECORD   *LPMETARECORD;
typedef struct tagMETAFILEPICT
{
LONG        mm;
LONG        xExt;
LONG        yExt;
HMETAFILE   hMF;
} METAFILEPICT,  *LPMETAFILEPICT;
#line 1036 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#pragma warning(disable:4103)
#pragma pack(push,2)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 1039 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagMETAHEADER
{
WORD        mtType;
WORD        mtHeaderSize;
WORD        mtVersion;
DWORD       mtSize;
WORD        mtNoObjects;
DWORD       mtMaxRecord;
WORD        mtNoParameters;
} METAHEADER;
typedef struct tagMETAHEADER  *PMETAHEADER;
typedef struct tagMETAHEADER   *LPMETAHEADER;
#line 1057 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 1060 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagENHMETARECORD
{
DWORD   iType;              
DWORD   nSize;              
DWORD   dParm[1];           
} ENHMETARECORD, *PENHMETARECORD, *LPENHMETARECORD;
typedef struct tagENHMETAHEADER
{
DWORD   iType;              
DWORD   nSize;              
RECTL   rclBounds;          
RECTL   rclFrame;           
DWORD   dSignature;         
DWORD   nVersion;           
DWORD   nBytes;             
DWORD   nRecords;           
WORD    nHandles;           
WORD    sReserved;          
DWORD   nDescription;       
DWORD   offDescription;     
DWORD   nPalEntries;        
SIZEL   szlDevice;          
SIZEL   szlMillimeters;     
DWORD   cbPixelFormat;      
DWORD   offPixelFormat;     
DWORD   bOpenGL;            
#line 1101 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
SIZEL   szlMicrometers;     
#line 1104 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
} ENHMETAHEADER, *PENHMETAHEADER, *LPENHMETAHEADER;
#line 1108 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1111 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef WCHAR BCHAR;
#line 1131 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1133 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#pragma warning(disable:4103)
#pragma pack(push,4)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 1138 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagTEXTMETRICA
{
LONG        tmHeight;
LONG        tmAscent;
LONG        tmDescent;
LONG        tmInternalLeading;
LONG        tmExternalLeading;
LONG        tmAveCharWidth;
LONG        tmMaxCharWidth;
LONG        tmWeight;
LONG        tmOverhang;
LONG        tmDigitizedAspectX;
LONG        tmDigitizedAspectY;
BYTE        tmFirstChar;
BYTE        tmLastChar;
BYTE        tmDefaultChar;
BYTE        tmBreakChar;
BYTE        tmItalic;
BYTE        tmUnderlined;
BYTE        tmStruckOut;
BYTE        tmPitchAndFamily;
BYTE        tmCharSet;
} TEXTMETRICA, *PTEXTMETRICA,  *NPTEXTMETRICA,  *LPTEXTMETRICA;
typedef struct tagTEXTMETRICW
{
LONG        tmHeight;
LONG        tmAscent;
LONG        tmDescent;
LONG        tmInternalLeading;
LONG        tmExternalLeading;
LONG        tmAveCharWidth;
LONG        tmMaxCharWidth;
LONG        tmWeight;
LONG        tmOverhang;
LONG        tmDigitizedAspectX;
LONG        tmDigitizedAspectY;
WCHAR       tmFirstChar;
WCHAR       tmLastChar;
WCHAR       tmDefaultChar;
WCHAR       tmBreakChar;
BYTE        tmItalic;
BYTE        tmUnderlined;
BYTE        tmStruckOut;
BYTE        tmPitchAndFamily;
BYTE        tmCharSet;
} TEXTMETRICW, *PTEXTMETRICW,  *NPTEXTMETRICW,  *LPTEXTMETRICW;
typedef TEXTMETRICW TEXTMETRIC;
typedef PTEXTMETRICW PTEXTMETRIC;
typedef NPTEXTMETRICW NPTEXTMETRIC;
typedef LPTEXTMETRICW LPTEXTMETRIC;
#line 1199 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1201 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 1204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1205 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#pragma warning(disable:4103)
#pragma pack(push,4)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack4.h"
#line 1221 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagNEWTEXTMETRICA
{
LONG        tmHeight;
LONG        tmAscent;
LONG        tmDescent;
LONG        tmInternalLeading;
LONG        tmExternalLeading;
LONG        tmAveCharWidth;
LONG        tmMaxCharWidth;
LONG        tmWeight;
LONG        tmOverhang;
LONG        tmDigitizedAspectX;
LONG        tmDigitizedAspectY;
BYTE        tmFirstChar;
BYTE        tmLastChar;
BYTE        tmDefaultChar;
BYTE        tmBreakChar;
BYTE        tmItalic;
BYTE        tmUnderlined;
BYTE        tmStruckOut;
BYTE        tmPitchAndFamily;
BYTE        tmCharSet;
DWORD   ntmFlags;
UINT    ntmSizeEM;
UINT    ntmCellHeight;
UINT    ntmAvgWidth;
} NEWTEXTMETRICA, *PNEWTEXTMETRICA,  *NPNEWTEXTMETRICA,  *LPNEWTEXTMETRICA;
typedef struct tagNEWTEXTMETRICW
{
LONG        tmHeight;
LONG        tmAscent;
LONG        tmDescent;
LONG        tmInternalLeading;
LONG        tmExternalLeading;
LONG        tmAveCharWidth;
LONG        tmMaxCharWidth;
LONG        tmWeight;
LONG        tmOverhang;
LONG        tmDigitizedAspectX;
LONG        tmDigitizedAspectY;
WCHAR       tmFirstChar;
WCHAR       tmLastChar;
WCHAR       tmDefaultChar;
WCHAR       tmBreakChar;
BYTE        tmItalic;
BYTE        tmUnderlined;
BYTE        tmStruckOut;
BYTE        tmPitchAndFamily;
BYTE        tmCharSet;
DWORD   ntmFlags;
UINT    ntmSizeEM;
UINT    ntmCellHeight;
UINT    ntmAvgWidth;
} NEWTEXTMETRICW, *PNEWTEXTMETRICW,  *NPNEWTEXTMETRICW,  *LPNEWTEXTMETRICW;
typedef NEWTEXTMETRICW NEWTEXTMETRIC;
typedef PNEWTEXTMETRICW PNEWTEXTMETRIC;
typedef NPNEWTEXTMETRICW NPNEWTEXTMETRIC;
typedef LPNEWTEXTMETRICW LPNEWTEXTMETRIC;
#line 1290 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1292 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 1295 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagNEWTEXTMETRICEXA
{
NEWTEXTMETRICA  ntmTm;
FONTSIGNATURE   ntmFontSig;
}NEWTEXTMETRICEXA;
typedef struct tagNEWTEXTMETRICEXW
{
NEWTEXTMETRICW  ntmTm;
FONTSIGNATURE   ntmFontSig;
}NEWTEXTMETRICEXW;
typedef NEWTEXTMETRICEXW NEWTEXTMETRICEX;
#line 1316 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1318 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1320 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1322 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagPELARRAY
{
LONG        paXCount;
LONG        paYCount;
LONG        paXExt;
LONG        paYExt;
BYTE        paRGBs;
} PELARRAY, *PPELARRAY,  *NPPELARRAY,  *LPPELARRAY;
#line 1338 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagLOGBRUSH
{
UINT        lbStyle;
COLORREF    lbColor;
ULONG_PTR   lbHatch;
} LOGBRUSH, *PLOGBRUSH,  *NPLOGBRUSH,  *LPLOGBRUSH;
typedef struct tagLOGBRUSH32
{
UINT        lbStyle;
COLORREF    lbColor;
ULONG       lbHatch;
} LOGBRUSH32, *PLOGBRUSH32,  *NPLOGBRUSH32,  *LPLOGBRUSH32;
#line 1359 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef LOGBRUSH            PATTERN;
typedef PATTERN             *PPATTERN;
typedef PATTERN         *NPPATTERN;
typedef PATTERN          *LPPATTERN;
#line 1370 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagLOGPEN
{
UINT        lopnStyle;
POINT       lopnWidth;
COLORREF    lopnColor;
} LOGPEN, *PLOGPEN,  *NPLOGPEN,  *LPLOGPEN;
#line 1384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagEXTLOGPEN {
DWORD       elpPenStyle;
DWORD       elpWidth;
UINT        elpBrushStyle;
COLORREF    elpColor;
ULONG_PTR   elpHatch;
DWORD       elpNumEntries;
DWORD       elpStyleEntry[1];
} EXTLOGPEN, *PEXTLOGPEN,  *NPEXTLOGPEN,  *LPEXTLOGPEN;
#line 1400 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagEXTLOGPEN32 {
DWORD       elpPenStyle;
DWORD       elpWidth;
UINT        elpBrushStyle;
COLORREF    elpColor;
ULONG       elpHatch;
DWORD       elpNumEntries;
DWORD       elpStyleEntry[1];
} EXTLOGPEN32, *PEXTLOGPEN32,  *NPEXTLOGPEN32,  *LPEXTLOGPEN32;
typedef struct tagPALETTEENTRY {
BYTE        peRed;
BYTE        peGreen;
BYTE        peBlue;
BYTE        peFlags;
} PALETTEENTRY, *PPALETTEENTRY,  *LPPALETTEENTRY;
#line 1424 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagLOGPALETTE {
WORD        palVersion;
WORD        palNumEntries;
PALETTEENTRY        palPalEntry[1];
} LOGPALETTE, *PLOGPALETTE,  *NPLOGPALETTE,  *LPLOGPALETTE;
#line 1434 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagLOGFONTA
{
LONG      lfHeight;
LONG      lfWidth;
LONG      lfEscapement;
LONG      lfOrientation;
LONG      lfWeight;
BYTE      lfItalic;
BYTE      lfUnderline;
BYTE      lfStrikeOut;
BYTE      lfCharSet;
BYTE      lfOutPrecision;
BYTE      lfClipPrecision;
BYTE      lfQuality;
BYTE      lfPitchAndFamily;
CHAR      lfFaceName[32];
} LOGFONTA, *PLOGFONTA,  *NPLOGFONTA,  *LPLOGFONTA;
typedef struct tagLOGFONTW
{
LONG      lfHeight;
LONG      lfWidth;
LONG      lfEscapement;
LONG      lfOrientation;
LONG      lfWeight;
BYTE      lfItalic;
BYTE      lfUnderline;
BYTE      lfStrikeOut;
BYTE      lfCharSet;
BYTE      lfOutPrecision;
BYTE      lfClipPrecision;
BYTE      lfQuality;
BYTE      lfPitchAndFamily;
WCHAR     lfFaceName[32];
} LOGFONTW, *PLOGFONTW,  *NPLOGFONTW,  *LPLOGFONTW;
typedef LOGFONTW LOGFONT;
typedef PLOGFONTW PLOGFONT;
typedef NPLOGFONTW NPLOGFONT;
typedef LPLOGFONTW LPLOGFONT;
#line 1484 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1486 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagENUMLOGFONTA
{
LOGFONTA elfLogFont;
BYTE     elfFullName[64];
BYTE     elfStyle[32];
} ENUMLOGFONTA, * LPENUMLOGFONTA;
typedef struct tagENUMLOGFONTW
{
LOGFONTW elfLogFont;
WCHAR    elfFullName[64];
WCHAR    elfStyle[32];
} ENUMLOGFONTW, * LPENUMLOGFONTW;
typedef ENUMLOGFONTW ENUMLOGFONT;
typedef LPENUMLOGFONTW LPENUMLOGFONT;
#line 1514 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagENUMLOGFONTEXA
{
LOGFONTA    elfLogFont;
BYTE        elfFullName[64];
BYTE        elfStyle[32];
BYTE        elfScript[32];
} ENUMLOGFONTEXA,  *LPENUMLOGFONTEXA;
typedef struct tagENUMLOGFONTEXW
{
LOGFONTW    elfLogFont;
WCHAR       elfFullName[64];
WCHAR       elfStyle[32];
WCHAR       elfScript[32];
} ENUMLOGFONTEXW,  *LPENUMLOGFONTEXW;
typedef ENUMLOGFONTEXW ENUMLOGFONTEX;
typedef LPENUMLOGFONTEXW LPENUMLOGFONTEX;
#line 1537 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1538 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1540 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1563 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1572 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1577 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1584 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1625 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagPANOSE
{
BYTE    bFamilyType;
BYTE    bSerifStyle;
BYTE    bWeight;
BYTE    bProportion;
BYTE    bContrast;
BYTE    bStrokeVariation;
BYTE    bArmStyle;
BYTE    bLetterform;
BYTE    bMidline;
BYTE    bXHeight;
} PANOSE, * LPPANOSE;
typedef struct tagEXTLOGFONTA {
LOGFONTA    elfLogFont;
BYTE        elfFullName[64];
BYTE        elfStyle[32];
DWORD       elfVersion;     
DWORD       elfStyleSize;
DWORD       elfMatch;
DWORD       elfReserved;
BYTE        elfVendorId[4];
DWORD       elfCulture;     
PANOSE      elfPanose;
} EXTLOGFONTA, *PEXTLOGFONTA,  *NPEXTLOGFONTA,  *LPEXTLOGFONTA;
typedef struct tagEXTLOGFONTW {
LOGFONTW    elfLogFont;
WCHAR       elfFullName[64];
WCHAR       elfStyle[32];
DWORD       elfVersion;     
DWORD       elfStyleSize;
DWORD       elfMatch;
DWORD       elfReserved;
BYTE        elfVendorId[4];
DWORD       elfCulture;     
PANOSE      elfPanose;
} EXTLOGFONTW, *PEXTLOGFONTW,  *NPEXTLOGFONTW,  *LPEXTLOGFONTW;
typedef EXTLOGFONTW EXTLOGFONT;
typedef PEXTLOGFONTW PEXTLOGFONT;
typedef NPEXTLOGFONTW NPEXTLOGFONT;
typedef LPEXTLOGFONTW LPEXTLOGFONT;
#line 1833 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1835 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 1917 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1922 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 1930 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2039 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2114 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2152 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct _devicemodeA {
BYTE   dmDeviceName[32];
WORD dmSpecVersion;
WORD dmDriverVersion;
WORD dmSize;
WORD dmDriverExtra;
DWORD dmFields;
union {
struct {
short dmOrientation;
short dmPaperSize;
short dmPaperLength;
short dmPaperWidth;
short dmScale;
short dmCopies;
short dmDefaultSource;
short dmPrintQuality;
};
struct {
POINTL dmPosition;
DWORD  dmDisplayOrientation;
DWORD  dmDisplayFixedOutput;
};
};
short dmColor;
short dmDuplex;
short dmYResolution;
short dmTTOption;
short dmCollate;
BYTE   dmFormName[32];
WORD   dmLogPixels;
DWORD  dmBitsPerPel;
DWORD  dmPelsWidth;
DWORD  dmPelsHeight;
union {
DWORD  dmDisplayFlags;
DWORD  dmNup;
};
DWORD  dmDisplayFrequency;
DWORD  dmICMMethod;
DWORD  dmICMIntent;
DWORD  dmMediaType;
DWORD  dmDitherType;
DWORD  dmReserved1;
DWORD  dmReserved2;
DWORD  dmPanningWidth;
DWORD  dmPanningHeight;
#line 2236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2237 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
} DEVMODEA, *PDEVMODEA, *NPDEVMODEA, *LPDEVMODEA;
typedef struct _devicemodeW {
WCHAR  dmDeviceName[32];
WORD dmSpecVersion;
WORD dmDriverVersion;
WORD dmSize;
WORD dmDriverExtra;
DWORD dmFields;
union {
struct {
short dmOrientation;
short dmPaperSize;
short dmPaperLength;
short dmPaperWidth;
short dmScale;
short dmCopies;
short dmDefaultSource;
short dmPrintQuality;
};
struct {
POINTL dmPosition;
DWORD  dmDisplayOrientation;
DWORD  dmDisplayFixedOutput;
};
};
short dmColor;
short dmDuplex;
short dmYResolution;
short dmTTOption;
short dmCollate;
WCHAR  dmFormName[32];
WORD   dmLogPixels;
DWORD  dmBitsPerPel;
DWORD  dmPelsWidth;
DWORD  dmPelsHeight;
union {
DWORD  dmDisplayFlags;
DWORD  dmNup;
};
DWORD  dmDisplayFrequency;
DWORD  dmICMMethod;
DWORD  dmICMIntent;
DWORD  dmMediaType;
DWORD  dmDitherType;
DWORD  dmReserved1;
DWORD  dmReserved2;
DWORD  dmPanningWidth;
DWORD  dmPanningHeight;
#line 2290 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2291 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
} DEVMODEW, *PDEVMODEW, *NPDEVMODEW, *LPDEVMODEW;
typedef DEVMODEW DEVMODE;
typedef PDEVMODEW PDEVMODE;
typedef NPDEVMODEW NPDEVMODE;
typedef LPDEVMODEW LPDEVMODE;
#line 2303 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2412 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2414 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 2424 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2435 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2438 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2461 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2464 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2542 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2595 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2603 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2648 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2665 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2715 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct _DISPLAY_DEVICEA {
DWORD  cb;
CHAR   DeviceName[32];
CHAR   DeviceString[128];
DWORD  StateFlags;
CHAR   DeviceID[128];
CHAR   DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA, *LPDISPLAY_DEVICEA;
typedef struct _DISPLAY_DEVICEW {
DWORD  cb;
WCHAR  DeviceName[32];
WCHAR  DeviceString[128];
DWORD  StateFlags;
WCHAR  DeviceID[128];
WCHAR  DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW, *LPDISPLAY_DEVICEW;
typedef DISPLAY_DEVICEW DISPLAY_DEVICE;
typedef PDISPLAY_DEVICEW PDISPLAY_DEVICE;
typedef LPDISPLAY_DEVICEW LPDISPLAY_DEVICE;
#line 2744 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2746 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 2756 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2759 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2764 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2768 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 2774 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3088 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct _RGNDATAHEADER {
DWORD   dwSize;
DWORD   iType;
DWORD   nCount;
DWORD   nRgnSize;
RECT    rcBound;
} RGNDATAHEADER, *PRGNDATAHEADER;
typedef struct _RGNDATA {
RGNDATAHEADER   rdh;
char            Buffer[1];
} RGNDATA, *PRGNDATA,  *NPRGNDATA,  *LPRGNDATA;
#line 3110 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _ABC {
int     abcA;
UINT    abcB;
int     abcC;
} ABC, *PABC,  *NPABC,  *LPABC;
typedef struct _ABCFLOAT {
FLOAT   abcfA;
FLOAT   abcfB;
FLOAT   abcfC;
} ABCFLOAT, *PABCFLOAT,  *NPABCFLOAT,  *LPABCFLOAT;
#line 3133 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _OUTLINETEXTMETRICA {
UINT    otmSize;
TEXTMETRICA otmTextMetrics;
BYTE    otmFiller;
PANOSE  otmPanoseNumber;
UINT    otmfsSelection;
UINT    otmfsType;
int    otmsCharSlopeRise;
int    otmsCharSlopeRun;
int    otmItalicAngle;
UINT    otmEMSquare;
int    otmAscent;
int    otmDescent;
UINT    otmLineGap;
UINT    otmsCapEmHeight;
UINT    otmsXHeight;
RECT    otmrcFontBox;
int    otmMacAscent;
int    otmMacDescent;
UINT    otmMacLineGap;
UINT    otmusMinimumPPEM;
POINT   otmptSubscriptSize;
POINT   otmptSubscriptOffset;
POINT   otmptSuperscriptSize;
POINT   otmptSuperscriptOffset;
UINT    otmsStrikeoutSize;
int    otmsStrikeoutPosition;
int    otmsUnderscoreSize;
int    otmsUnderscorePosition;
PSTR    otmpFamilyName;
PSTR    otmpFaceName;
PSTR    otmpStyleName;
PSTR    otmpFullName;
} OUTLINETEXTMETRICA, *POUTLINETEXTMETRICA,  *NPOUTLINETEXTMETRICA,  *LPOUTLINETEXTMETRICA;
typedef struct _OUTLINETEXTMETRICW {
UINT    otmSize;
TEXTMETRICW otmTextMetrics;
BYTE    otmFiller;
PANOSE  otmPanoseNumber;
UINT    otmfsSelection;
UINT    otmfsType;
int    otmsCharSlopeRise;
int    otmsCharSlopeRun;
int    otmItalicAngle;
UINT    otmEMSquare;
int    otmAscent;
int    otmDescent;
UINT    otmLineGap;
UINT    otmsCapEmHeight;
UINT    otmsXHeight;
RECT    otmrcFontBox;
int    otmMacAscent;
int    otmMacDescent;
UINT    otmMacLineGap;
UINT    otmusMinimumPPEM;
POINT   otmptSubscriptSize;
POINT   otmptSubscriptOffset;
POINT   otmptSuperscriptSize;
POINT   otmptSuperscriptOffset;
UINT    otmsStrikeoutSize;
int    otmsStrikeoutPosition;
int    otmsUnderscoreSize;
int    otmsUnderscorePosition;
PSTR    otmpFamilyName;
PSTR    otmpFaceName;
PSTR    otmpStyleName;
PSTR    otmpFullName;
} OUTLINETEXTMETRICW, *POUTLINETEXTMETRICW,  *NPOUTLINETEXTMETRICW,  *LPOUTLINETEXTMETRICW;
typedef OUTLINETEXTMETRICW OUTLINETEXTMETRIC;
typedef POUTLINETEXTMETRICW POUTLINETEXTMETRIC;
typedef NPOUTLINETEXTMETRICW NPOUTLINETEXTMETRIC;
typedef LPOUTLINETEXTMETRICW LPOUTLINETEXTMETRIC;
#line 3223 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3225 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 3232 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Application Family
typedef struct tagPOLYTEXTA
{
int       x;
int       y;
UINT      n;
LPCSTR    lpstr;
UINT      uiFlags;
RECT      rcl;
int      *pdx;
} POLYTEXTA, *PPOLYTEXTA,  *NPPOLYTEXTA,  *LPPOLYTEXTA;
typedef struct tagPOLYTEXTW
{
int       x;
int       y;
UINT      n;
LPCWSTR   lpstr;
UINT      uiFlags;
RECT      rcl;
int      *pdx;
} POLYTEXTW, *PPOLYTEXTW,  *NPPOLYTEXTW,  *LPPOLYTEXTW;
typedef POLYTEXTW POLYTEXT;
typedef PPOLYTEXTW PPOLYTEXT;
typedef NPPOLYTEXTW NPPOLYTEXT;
typedef LPPOLYTEXTW LPPOLYTEXT;
#line 3267 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3269 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _FIXED {
WORD    fract;
short   value;
#line 3282 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
} FIXED;
typedef struct _MAT2 {
FIXED  eM11;
FIXED  eM12;
FIXED  eM21;
FIXED  eM22;
} MAT2,  *LPMAT2;
typedef struct _GLYPHMETRICS {
UINT    gmBlackBoxX;
UINT    gmBlackBoxY;
POINT   gmptGlyphOrigin;
short   gmCellIncX;
short   gmCellIncY;
} GLYPHMETRICS,  *LPGLYPHMETRICS;
#line 3303 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 3318 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3322 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct tagPOINTFX
{
FIXED x;
FIXED y;
} POINTFX, * LPPOINTFX;
typedef struct tagTTPOLYCURVE
{
WORD    wType;
WORD    cpfx;
POINTFX apfx[1];
} TTPOLYCURVE, * LPTTPOLYCURVE;
typedef struct tagTTPOLYGONHEADER
{
DWORD   cb;
DWORD   dwType;
POINTFX pfxStart;
} TTPOLYGONHEADER, * LPTTPOLYGONHEADER;
#line 3353 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagGCP_RESULTSA
{
DWORD   lStructSize;
LPSTR     lpOutString;
UINT  *lpOrder;
int   *lpDx;
int   *lpCaretPos;
LPSTR   lpClass;
LPWSTR  lpGlyphs;
UINT    nGlyphs;
int     nMaxFit;
} GCP_RESULTSA, * LPGCP_RESULTSA;
typedef struct tagGCP_RESULTSW
{
DWORD   lStructSize;
LPWSTR    lpOutString;
UINT  *lpOrder;
int   *lpDx;
int   *lpCaretPos;
LPSTR   lpClass;
LPWSTR  lpGlyphs;
UINT    nGlyphs;
int     nMaxFit;
} GCP_RESULTSW, * LPGCP_RESULTSW;
typedef GCP_RESULTSW GCP_RESULTS;
typedef LPGCP_RESULTSW LPGCP_RESULTS;
#line 3433 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3435 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 3437 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
typedef struct _RASTERIZER_STATUS {
short   nSize;
short   wFlags;
short   nLanguageID;
} RASTERIZER_STATUS,  *LPRASTERIZER_STATUS;
#line 3448 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct tagPIXELFORMATDESCRIPTOR
{
WORD  nSize;
WORD  nVersion;
DWORD dwFlags;
BYTE  iPixelType;
BYTE  cColorBits;
BYTE  cRedBits;
BYTE  cRedShift;
BYTE  cGreenBits;
BYTE  cGreenShift;
BYTE  cBlueBits;
BYTE  cBlueShift;
BYTE  cAlphaBits;
BYTE  cAlphaShift;
BYTE  cAccumBits;
BYTE  cAccumRedBits;
BYTE  cAccumGreenBits;
BYTE  cAccumBlueBits;
BYTE  cAccumAlphaBits;
BYTE  cDepthBits;
BYTE  cStencilBits;
BYTE  cAuxBuffers;
BYTE  iLayerType;
BYTE  bReserved;
DWORD dwLayerMask;
DWORD dwVisibleMask;
DWORD dwDamageMask;
} PIXELFORMATDESCRIPTOR, *PPIXELFORMATDESCRIPTOR,  *LPPIXELFORMATDESCRIPTOR;
#line 3489 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef int (__stdcall* OLDFONTENUMPROCA)(const LOGFONTA *, const TEXTMETRICA *, DWORD, LPARAM);
typedef int (__stdcall* OLDFONTENUMPROCW)(const LOGFONTW *, const TEXTMETRICW *, DWORD, LPARAM);
#line 3537 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3546 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef OLDFONTENUMPROCA    FONTENUMPROCA;
typedef OLDFONTENUMPROCW    FONTENUMPROCW;
typedef FONTENUMPROCW FONTENUMPROC;
#line 3554 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef int (__stdcall* GOBJENUMPROC)(LPVOID, LPARAM);
typedef void (__stdcall* LINEDDAPROC)(int, int, LPARAM);
#line 3569 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3571 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport) int __stdcall AddFontResourceA(  LPCSTR);
__declspec(dllimport) int __stdcall AddFontResourceW(  LPCWSTR);
#line 3585 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall AnimatePalette(   HPALETTE hPal,   UINT iStartIndex,    UINT cEntries,   const PALETTEENTRY * ppe);
__declspec(dllimport) BOOL  __stdcall Arc(   HDC hdc,   int x1,   int y1,   int x2,   int y2,   int x3,   int y3,   int x4,   int y4);
__declspec(dllimport) BOOL  __stdcall BitBlt(   HDC hdc,   int x,   int y,   int cx,   int cy,   HDC hdcSrc,   int x1,   int y1,   DWORD rop);
__declspec(dllimport) BOOL  __stdcall CancelDC(   HDC hdc);
__declspec(dllimport) BOOL  __stdcall Chord(   HDC hdc,   int x1,   int y1,   int x2,   int y2,   int x3,   int y3,   int x4,   int y4);
__declspec(dllimport) int   __stdcall ChoosePixelFormat(   HDC hdc,   const PIXELFORMATDESCRIPTOR *ppfd);
__declspec(dllimport) HMETAFILE  __stdcall CloseMetaFile(   HDC hdc);
__declspec(dllimport) int     __stdcall CombineRgn(   HRGN hrgnDst,   HRGN hrgnSrc1,   HRGN hrgnSrc2,   int iMode);
__declspec(dllimport) HMETAFILE __stdcall CopyMetaFileA(   HMETAFILE,   LPCSTR);
__declspec(dllimport) HMETAFILE __stdcall CopyMetaFileW(   HMETAFILE,   LPCWSTR);
#line 3601 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HBITMAP __stdcall CreateBitmap(   int nWidth,   int nHeight,   UINT nPlanes,   UINT nBitCount,   const void *lpBits);
__declspec(dllimport) HBITMAP __stdcall CreateBitmapIndirect(   const BITMAP *pbm);
__declspec(dllimport) HBRUSH  __stdcall CreateBrushIndirect(   const LOGBRUSH *plbrush);
__declspec(dllimport) HBITMAP __stdcall CreateCompatibleBitmap(   HDC hdc,   int cx,   int cy);
__declspec(dllimport) HBITMAP __stdcall CreateDiscardableBitmap(   HDC hdc,   int cx,   int cy);
__declspec(dllimport) HDC     __stdcall CreateCompatibleDC(   HDC hdc);
__declspec(dllimport) HDC     __stdcall CreateDCA(   LPCSTR pwszDriver,   LPCSTR pwszDevice,   LPCSTR pszPort,   const DEVMODEA * pdm);
__declspec(dllimport) HDC     __stdcall CreateDCW(   LPCWSTR pwszDriver,   LPCWSTR pwszDevice,   LPCWSTR pszPort,   const DEVMODEW * pdm);
#line 3614 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HBITMAP __stdcall CreateDIBitmap(   HDC hdc,   const BITMAPINFOHEADER *pbmih,   DWORD flInit,   const void *pjBits,   const BITMAPINFO *pbmi,   UINT iUsage);
__declspec(dllimport) HBRUSH  __stdcall CreateDIBPatternBrush(   HGLOBAL h,   UINT iUsage);
__declspec(dllimport) HBRUSH  __stdcall CreateDIBPatternBrushPt(   const void *lpPackedDIB,   UINT iUsage);
__declspec(dllimport) HRGN    __stdcall CreateEllipticRgn(   int x1,   int y1,   int x2,   int y2);
__declspec(dllimport) HRGN    __stdcall CreateEllipticRgnIndirect(   const RECT *lprect);
__declspec(dllimport) HFONT   __stdcall CreateFontIndirectA(   const LOGFONTA *lplf);
__declspec(dllimport) HFONT   __stdcall CreateFontIndirectW(   const LOGFONTW *lplf);
#line 3626 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HFONT   __stdcall CreateFontA(   int cHeight,   int cWidth,   int cEscapement,   int cOrientation,   int cWeight,   DWORD bItalic,
DWORD bUnderline,   DWORD bStrikeOut,   DWORD iCharSet,   DWORD iOutPrecision,   DWORD iClipPrecision,
DWORD iQuality,   DWORD iPitchAndFamily,   LPCSTR pszFaceName);
__declspec(dllimport) HFONT   __stdcall CreateFontW(   int cHeight,   int cWidth,   int cEscapement,   int cOrientation,   int cWeight,   DWORD bItalic,
DWORD bUnderline,   DWORD bStrikeOut,   DWORD iCharSet,   DWORD iOutPrecision,   DWORD iClipPrecision,
DWORD iQuality,   DWORD iPitchAndFamily,   LPCWSTR pszFaceName);
#line 3637 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HBRUSH  __stdcall CreateHatchBrush(   int iHatch,   COLORREF color);
__declspec(dllimport) HDC     __stdcall CreateICA(   LPCSTR pszDriver,   LPCSTR pszDevice,   LPCSTR pszPort,   const DEVMODEA * pdm);
__declspec(dllimport) HDC     __stdcall CreateICW(   LPCWSTR pszDriver,   LPCWSTR pszDevice,   LPCWSTR pszPort,   const DEVMODEW * pdm);
#line 3646 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HDC     __stdcall CreateMetaFileA(   LPCSTR pszFile);
__declspec(dllimport) HDC     __stdcall CreateMetaFileW(   LPCWSTR pszFile);
#line 3653 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HPALETTE __stdcall CreatePalette(   const LOGPALETTE * plpal);
__declspec(dllimport) HPEN    __stdcall CreatePen(   int iStyle,   int cWidth,   COLORREF color);
__declspec(dllimport) HPEN    __stdcall CreatePenIndirect(   const LOGPEN *plpen);
__declspec(dllimport) HRGN    __stdcall CreatePolyPolygonRgn(    const POINT *pptl,
const INT  *pc,
int cPoly,
int iMode);
__declspec(dllimport) HBRUSH  __stdcall CreatePatternBrush(   HBITMAP hbm);
__declspec(dllimport) HRGN    __stdcall CreateRectRgn(   int x1,   int y1,   int x2,   int y2);
__declspec(dllimport) HRGN    __stdcall CreateRectRgnIndirect(   const RECT *lprect);
__declspec(dllimport) HRGN    __stdcall CreateRoundRectRgn(   int x1,   int y1,   int x2,   int y2,   int w,   int h);
__declspec(dllimport) BOOL    __stdcall CreateScalableFontResourceA(   DWORD fdwHidden,   LPCSTR lpszFont,   LPCSTR lpszFile,   LPCSTR lpszPath);
__declspec(dllimport) BOOL    __stdcall CreateScalableFontResourceW(   DWORD fdwHidden,   LPCWSTR lpszFont,   LPCWSTR lpszFile,   LPCWSTR lpszPath);
#line 3671 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HBRUSH  __stdcall CreateSolidBrush(   COLORREF color);
__declspec(dllimport) BOOL __stdcall DeleteDC(   HDC hdc);
__declspec(dllimport) BOOL __stdcall DeleteMetaFile(   HMETAFILE hmf);
__declspec(dllimport) BOOL __stdcall DeleteObject(   HGDIOBJ ho);
__declspec(dllimport) int  __stdcall DescribePixelFormat(    HDC hdc,
int iPixelFormat,
UINT nBytes,
LPPIXELFORMATDESCRIPTOR ppfd);
typedef UINT   (__stdcall* LPFNDEVMODE)(HWND, HMODULE, LPDEVMODE, LPSTR, LPSTR, LPDEVMODE, LPSTR, UINT);
typedef DWORD  (__stdcall* LPFNDEVCAPS)(LPSTR, LPSTR, UINT, LPSTR, LPDEVMODE);
#line 3690 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 3730 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3749 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3750 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3768 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
DeviceCapabilitiesA(
LPCSTR         pDevice,
LPCSTR         pPort,
WORD             fwCapability,
LPSTR          pOutput,
const DEVMODEA   *pDevMode
);
__declspec(dllimport)
int
__stdcall
DeviceCapabilitiesW(
LPCWSTR         pDevice,
LPCWSTR         pPort,
WORD             fwCapability,
LPWSTR          pOutput,
const DEVMODEW   *pDevMode
);
#line 3797 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int  __stdcall DrawEscape(     HDC    hdc,
int    iEscape,
int    cjIn,
LPCSTR lpIn);
__declspec(dllimport) BOOL __stdcall Ellipse(   HDC hdc,   int left,   int top,    int right,   int bottom);
__declspec(dllimport) int  __stdcall EnumFontFamiliesExA(   HDC hdc,   LPLOGFONTA lpLogfont,   FONTENUMPROCA lpProc,   LPARAM lParam,   DWORD dwFlags);
__declspec(dllimport) int  __stdcall EnumFontFamiliesExW(   HDC hdc,   LPLOGFONTW lpLogfont,   FONTENUMPROCW lpProc,   LPARAM lParam,   DWORD dwFlags);
#line 3813 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3814 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int  __stdcall EnumFontFamiliesA(   HDC hdc,   LPCSTR lpLogfont,   FONTENUMPROCA lpProc,   LPARAM lParam);
__declspec(dllimport) int  __stdcall EnumFontFamiliesW(   HDC hdc,   LPCWSTR lpLogfont,   FONTENUMPROCW lpProc,   LPARAM lParam);
#line 3822 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int  __stdcall EnumFontsA(   HDC hdc,   LPCSTR lpLogfont,    FONTENUMPROCA lpProc,   LPARAM lParam);
__declspec(dllimport) int  __stdcall EnumFontsW(   HDC hdc,   LPCWSTR lpLogfont,    FONTENUMPROCW lpProc,   LPARAM lParam);
#line 3829 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int  __stdcall EnumObjects(   HDC hdc,   int nType,   GOBJENUMPROC lpFunc,   LPARAM lParam);
#line 3835 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL __stdcall EqualRgn(   HRGN hrgn1,   HRGN hrgn2);
__declspec(dllimport) int  __stdcall Escape(     HDC hdc,
int iEscape,
int cjIn,
LPCSTR pvIn,
LPVOID pvOut);
__declspec(dllimport) int  __stdcall ExtEscape(      HDC hdc,
int iEscape,
int cjInput,
LPCSTR lpInData,
int cjOutput,
LPSTR lpOutData);
__declspec(dllimport) int  __stdcall ExcludeClipRect(   HDC hdc,   int left,   int top,   int right,   int bottom);
__declspec(dllimport) HRGN __stdcall ExtCreateRegion(   const XFORM * lpx,   DWORD nCount,   const RGNDATA * lpData);
__declspec(dllimport) BOOL __stdcall ExtFloodFill(   HDC hdc,   int x,   int y,   COLORREF color,   UINT type);
__declspec(dllimport) BOOL __stdcall FillRgn(   HDC hdc,   HRGN hrgn,   HBRUSH hbr);
__declspec(dllimport) BOOL __stdcall FloodFill(   HDC hdc,   int x,   int y,   COLORREF color);
__declspec(dllimport) BOOL __stdcall FrameRgn(   HDC hdc,   HRGN hrgn,   HBRUSH hbr,   int w,   int h);
__declspec(dllimport) int  __stdcall GetROP2(   HDC hdc);
__declspec(dllimport) BOOL __stdcall GetAspectRatioFilterEx(   HDC hdc,   LPSIZE lpsize);
__declspec(dllimport) COLORREF __stdcall GetBkColor(   HDC hdc);
__declspec(dllimport) COLORREF __stdcall GetDCBrushColor(   HDC hdc);
__declspec(dllimport) COLORREF __stdcall GetDCPenColor(   HDC hdc);
#line 3863 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport)
int
__stdcall
GetBkMode(
HDC hdc
);
__declspec(dllimport)
LONG
__stdcall
GetBitmapBits(
HBITMAP hbit,
LONG cb,
LPVOID lpvBits
);
__declspec(dllimport) BOOL  __stdcall GetBitmapDimensionEx(   HBITMAP hbit,   LPSIZE lpsize);
__declspec(dllimport) UINT  __stdcall GetBoundsRect(   HDC hdc,   LPRECT lprect,   UINT flags);
__declspec(dllimport) BOOL  __stdcall GetBrushOrgEx(   HDC hdc,   LPPOINT lppt);
__declspec(dllimport) BOOL  __stdcall GetCharWidthA(   HDC hdc,   UINT iFirst,   UINT iLast,   LPINT lpBuffer);
__declspec(dllimport) BOOL  __stdcall GetCharWidthW(   HDC hdc,   UINT iFirst,   UINT iLast,   LPINT lpBuffer);
#line 3892 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall GetCharWidth32A(   HDC hdc,   UINT iFirst,   UINT iLast,    LPINT lpBuffer);
__declspec(dllimport) BOOL  __stdcall GetCharWidth32W(   HDC hdc,   UINT iFirst,   UINT iLast,    LPINT lpBuffer);
#line 3899 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall GetCharWidthFloatA(   HDC hdc,   UINT iFirst,   UINT iLast,   PFLOAT lpBuffer);
__declspec(dllimport) BOOL  __stdcall GetCharWidthFloatW(   HDC hdc,   UINT iFirst,   UINT iLast,   PFLOAT lpBuffer);
#line 3906 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall GetCharABCWidthsA(   HDC hdc,
UINT wFirst,
UINT wLast,
LPABC lpABC);
__declspec(dllimport) BOOL  __stdcall GetCharABCWidthsW(   HDC hdc,
UINT wFirst,
UINT wLast,
LPABC lpABC);
#line 3920 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall GetCharABCWidthsFloatA(   HDC hdc,   UINT iFirst,   UINT iLast,   LPABCFLOAT lpABC);
__declspec(dllimport) BOOL  __stdcall GetCharABCWidthsFloatW(   HDC hdc,   UINT iFirst,   UINT iLast,   LPABCFLOAT lpABC);
#line 3928 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int   __stdcall GetClipBox(   HDC hdc,    LPRECT lprect);
__declspec(dllimport) int   __stdcall GetClipRgn(   HDC hdc,   HRGN hrgn);
__declspec(dllimport) int   __stdcall GetMetaRgn(   HDC hdc,   HRGN hrgn);
__declspec(dllimport) HGDIOBJ __stdcall GetCurrentObject(   HDC hdc,   UINT type);
__declspec(dllimport) BOOL  __stdcall GetCurrentPositionEx(   HDC hdc,    LPPOINT lppt);
__declspec(dllimport) int   __stdcall GetDeviceCaps(   HDC hdc,   int index);
__declspec(dllimport) int   __stdcall GetDIBits(   HDC hdc,   HBITMAP hbm,   UINT start,   UINT cLines,
LPVOID lpvBits,  LPBITMAPINFO lpbmi,   UINT usage);  
__declspec(dllimport) DWORD __stdcall GetFontData (      HDC     hdc,
DWORD   dwTable,
DWORD   dwOffset,
PVOID pvBuffer,
DWORD   cjBuffer
);
__declspec(dllimport) DWORD __stdcall GetGlyphOutlineA(      HDC hdc,
UINT uChar,
UINT fuFormat,
LPGLYPHMETRICS lpgm,
DWORD cjBuffer,
LPVOID pvBuffer,
const MAT2 *lpmat2
);
__declspec(dllimport) DWORD __stdcall GetGlyphOutlineW(      HDC hdc,
UINT uChar,
UINT fuFormat,
LPGLYPHMETRICS lpgm,
DWORD cjBuffer,
LPVOID pvBuffer,
const MAT2 *lpmat2
);
#line 3966 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int   __stdcall GetGraphicsMode(   HDC hdc);
__declspec(dllimport) int   __stdcall GetMapMode(   HDC hdc);
__declspec(dllimport) UINT  __stdcall GetMetaFileBitsEx(  HMETAFILE hMF,   UINT cbBuffer,   LPVOID lpData);
__declspec(dllimport) HMETAFILE   __stdcall GetMetaFileA(   LPCSTR lpName);
__declspec(dllimport) HMETAFILE   __stdcall GetMetaFileW(   LPCWSTR lpName);
#line 3977 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) COLORREF __stdcall GetNearestColor(   HDC hdc,   COLORREF color);
__declspec(dllimport) UINT  __stdcall GetNearestPaletteIndex(   HPALETTE h,   COLORREF color);
__declspec(dllimport) DWORD __stdcall GetObjectType(   HGDIOBJ h);
__declspec(dllimport) UINT __stdcall GetOutlineTextMetricsA(   HDC hdc,
UINT cjCopy,
LPOUTLINETEXTMETRICA potm);
__declspec(dllimport) UINT __stdcall GetOutlineTextMetricsW(   HDC hdc,
UINT cjCopy,
LPOUTLINETEXTMETRICW potm);
#line 3994 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 3996 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) UINT  __stdcall GetPaletteEntries(     HPALETTE hpal,
UINT iStart,
UINT cEntries,
LPPALETTEENTRY pPalEntries);
__declspec(dllimport) COLORREF __stdcall GetPixel(   HDC hdc,   int x,   int y);
__declspec(dllimport) int   __stdcall GetPixelFormat(   HDC hdc);
__declspec(dllimport) int   __stdcall GetPolyFillMode(   HDC hdc);
__declspec(dllimport) BOOL  __stdcall GetRasterizerCaps(     LPRASTERIZER_STATUS lpraststat,
UINT cjBytes);
__declspec(dllimport) int   __stdcall GetRandomRgn (  HDC hdc,   HRGN hrgn,   INT i);
__declspec(dllimport) DWORD __stdcall GetRegionData(     HRGN hrgn,
DWORD nCount,
LPRGNDATA lpRgnData);
__declspec(dllimport) int   __stdcall GetRgnBox(   HRGN hrgn,    LPRECT lprc);
__declspec(dllimport) HGDIOBJ __stdcall GetStockObject(   int i);
__declspec(dllimport) int   __stdcall GetStretchBltMode(  HDC hdc);
__declspec(dllimport)
UINT
__stdcall
GetSystemPaletteEntries(
HDC  hdc,
UINT iStart,
UINT cEntries,
LPPALETTEENTRY pPalEntries
);
__declspec(dllimport) UINT  __stdcall GetSystemPaletteUse(  HDC hdc);
__declspec(dllimport) int   __stdcall GetTextCharacterExtra(  HDC hdc);
__declspec(dllimport) UINT  __stdcall GetTextAlign(  HDC hdc);
__declspec(dllimport) COLORREF __stdcall GetTextColor(  HDC hdc);
__declspec(dllimport)
BOOL
__stdcall
GetTextExtentPointA(
HDC hdc,
LPCSTR lpString,
int c,
LPSIZE lpsz
);
__declspec(dllimport)
BOOL
__stdcall
GetTextExtentPointW(
HDC hdc,
LPCWSTR lpString,
int c,
LPSIZE lpsz
);
#line 4053 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport)
BOOL
__stdcall
GetTextExtentPoint32A(
HDC hdc,
LPCSTR lpString,
int c,
LPSIZE psizl
);
__declspec(dllimport)
BOOL
__stdcall
GetTextExtentPoint32W(
HDC hdc,
LPCWSTR lpString,
int c,
LPSIZE psizl
);
#line 4077 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport)
BOOL
__stdcall
GetTextExtentExPointA(
HDC hdc,
LPCSTR lpszString,
int cchString,
int nMaxExtent,
LPINT lpnFit,
LPINT lpnDx,
LPSIZE lpSize
);
__declspec(dllimport)
BOOL
__stdcall
GetTextExtentExPointW(
HDC hdc,
LPCWSTR lpszString,
int cchString,
int nMaxExtent,
LPINT lpnFit,
LPINT lpnDx,
LPSIZE lpSize
);
#line 4107 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int __stdcall GetTextCharset(   HDC hdc);
__declspec(dllimport) int __stdcall GetTextCharsetInfo(   HDC hdc,   LPFONTSIGNATURE lpSig,   DWORD dwFlags);
__declspec(dllimport) BOOL __stdcall TranslateCharsetInfo(   DWORD  *lpSrc,    LPCHARSETINFO lpCs,   DWORD dwFlags);
__declspec(dllimport) DWORD __stdcall GetFontLanguageInfo(   HDC hdc);
__declspec(dllimport) DWORD __stdcall GetCharacterPlacementA(    HDC hdc,   LPCSTR lpString,   int nCount,   int nMexExtent,   LPGCP_RESULTSA lpResults,   DWORD dwFlags);
__declspec(dllimport) DWORD __stdcall GetCharacterPlacementW(    HDC hdc,   LPCWSTR lpString,   int nCount,   int nMexExtent,   LPGCP_RESULTSW lpResults,   DWORD dwFlags);
#line 4120 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4121 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4123 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagWCRANGE
{
WCHAR  wcLow;
USHORT cGlyphs;
} WCRANGE, *PWCRANGE, *LPWCRANGE;
typedef struct tagGLYPHSET
{
DWORD    cbThis;
DWORD    flAccel;
DWORD    cGlyphsSupported;
DWORD    cRanges;
WCRANGE  ranges[1];
} GLYPHSET, *PGLYPHSET,  *LPGLYPHSET;
__declspec(dllimport) DWORD __stdcall GetFontUnicodeRanges(   HDC hdc,   LPGLYPHSET lpgs);
__declspec(dllimport) DWORD __stdcall GetGlyphIndicesA(   HDC hdc,   LPCSTR lpstr,   int c,   LPWORD pgi,   DWORD fl);
__declspec(dllimport) DWORD __stdcall GetGlyphIndicesW(   HDC hdc,   LPCWSTR lpstr,   int c,   LPWORD pgi,   DWORD fl);
#line 4162 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall GetTextExtentPointI(  HDC hdc,   LPWORD pgiIn,   int cgi,   LPSIZE psize);
__declspec(dllimport) BOOL  __stdcall GetTextExtentExPointI (    HDC hdc,
LPWORD lpwszString,
int cwchString,
int nMaxExtent,
LPINT lpnFit,
LPINT lpnDx,
LPSIZE lpSize
);
__declspec(dllimport) BOOL  __stdcall GetCharWidthI(     HDC hdc,
UINT giFirst,
UINT cgi,
LPWORD pgi,
LPINT piWidths
);
__declspec(dllimport) BOOL  __stdcall GetCharABCWidthsI(     HDC    hdc,
UINT   giFirst,
UINT   cgi,
LPWORD pgi,
LPABC  pabc
);
typedef struct tagDESIGNVECTOR
{
DWORD  dvReserved;
DWORD  dvNumAxes;
LONG   dvValues[16];
} DESIGNVECTOR, *PDESIGNVECTOR,  *LPDESIGNVECTOR;
__declspec(dllimport) int  __stdcall AddFontResourceExA(   LPCSTR name,   DWORD fl,   PVOID res);
__declspec(dllimport) int  __stdcall AddFontResourceExW(   LPCWSTR name,   DWORD fl,   PVOID res);
#line 4207 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL __stdcall RemoveFontResourceExA(   LPCSTR name,   DWORD fl,   PVOID pdv);
__declspec(dllimport) BOOL __stdcall RemoveFontResourceExW(   LPCWSTR name,   DWORD fl,   PVOID pdv);
#line 4214 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HANDLE __stdcall AddFontMemResourceEx(     PVOID pFileView,
DWORD cjSize,
PVOID pvResrved,
DWORD* pNumFonts);
__declspec(dllimport) BOOL __stdcall RemoveFontMemResourceEx(   HANDLE h);
typedef struct tagAXISINFOA
{
LONG   axMinValue;
LONG   axMaxValue;
BYTE   axAxisName[16];
} AXISINFOA, *PAXISINFOA,  *LPAXISINFOA;
typedef struct tagAXISINFOW
{
LONG   axMinValue;
LONG   axMaxValue;
WCHAR  axAxisName[16];
} AXISINFOW, *PAXISINFOW,  *LPAXISINFOW;
typedef AXISINFOW AXISINFO;
typedef PAXISINFOW PAXISINFO;
typedef LPAXISINFOW LPAXISINFO;
#line 4250 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagAXESLISTA
{
DWORD     axlReserved;
DWORD     axlNumAxes;
AXISINFOA axlAxisInfo[16];
} AXESLISTA, *PAXESLISTA,  *LPAXESLISTA;
typedef struct tagAXESLISTW
{
DWORD     axlReserved;
DWORD     axlNumAxes;
AXISINFOW axlAxisInfo[16];
} AXESLISTW, *PAXESLISTW,  *LPAXESLISTW;
typedef AXESLISTW AXESLIST;
typedef PAXESLISTW PAXESLIST;
typedef LPAXESLISTW LPAXESLIST;
#line 4272 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagENUMLOGFONTEXDVA
{
ENUMLOGFONTEXA elfEnumLogfontEx;
DESIGNVECTOR   elfDesignVector;
} ENUMLOGFONTEXDVA, *PENUMLOGFONTEXDVA,  *LPENUMLOGFONTEXDVA;
typedef struct tagENUMLOGFONTEXDVW
{
ENUMLOGFONTEXW elfEnumLogfontEx;
DESIGNVECTOR   elfDesignVector;
} ENUMLOGFONTEXDVW, *PENUMLOGFONTEXDVW,  *LPENUMLOGFONTEXDVW;
typedef ENUMLOGFONTEXDVW ENUMLOGFONTEXDV;
typedef PENUMLOGFONTEXDVW PENUMLOGFONTEXDV;
typedef LPENUMLOGFONTEXDVW LPENUMLOGFONTEXDV;
#line 4296 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HFONT  __stdcall CreateFontIndirectExA(   const ENUMLOGFONTEXDVA *);
__declspec(dllimport) HFONT  __stdcall CreateFontIndirectExW(   const ENUMLOGFONTEXDVW *);
#line 4304 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagENUMTEXTMETRICA
{
NEWTEXTMETRICEXA etmNewTextMetricEx;
AXESLISTA        etmAxesList;
} ENUMTEXTMETRICA, *PENUMTEXTMETRICA,  *LPENUMTEXTMETRICA;
typedef struct tagENUMTEXTMETRICW
{
NEWTEXTMETRICEXW etmNewTextMetricEx;
AXESLISTW        etmAxesList;
} ENUMTEXTMETRICW, *PENUMTEXTMETRICW,  *LPENUMTEXTMETRICW;
typedef ENUMTEXTMETRICW ENUMTEXTMETRIC;
typedef PENUMTEXTMETRICW PENUMTEXTMETRIC;
typedef LPENUMTEXTMETRICW LPENUMTEXTMETRIC;
#line 4325 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4326 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4328 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 4331 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
__declspec(dllimport) BOOL  __stdcall GetViewportExtEx(   HDC hdc,   LPSIZE lpsize);
__declspec(dllimport) BOOL  __stdcall GetViewportOrgEx(   HDC hdc,   LPPOINT lppoint);
__declspec(dllimport) BOOL  __stdcall GetWindowExtEx(   HDC hdc,   LPSIZE lpsize);
__declspec(dllimport) BOOL  __stdcall GetWindowOrgEx(   HDC hdc,   LPPOINT lppoint);
__declspec(dllimport) int  __stdcall IntersectClipRect(   HDC hdc,   int left,   int top,   int right,   int bottom);
__declspec(dllimport) BOOL __stdcall InvertRgn(   HDC hdc,   HRGN hrgn);
__declspec(dllimport) BOOL __stdcall LineDDA(   int xStart,   int yStart,   int xEnd,   int yEnd,   LINEDDAPROC lpProc,   LPARAM data);
__declspec(dllimport) BOOL __stdcall LineTo(   HDC hdc,   int x,   int y);
__declspec(dllimport) BOOL __stdcall MaskBlt(   HDC hdcDest,   int xDest,   int yDest,   int width,   int height,
HDC hdcSrc,   int xSrc,   int ySrc,   HBITMAP hbmMask,   int xMask,   int yMask,   DWORD rop);
__declspec(dllimport) BOOL __stdcall PlgBlt(   HDC hdcDest,   const POINT * lpPoint,   HDC hdcSrc,   int xSrc,   int ySrc,   int width,
int height,   HBITMAP hbmMask,   int xMask,   int yMask);
__declspec(dllimport) int  __stdcall OffsetClipRgn(  HDC hdc,   int x,   int y);
__declspec(dllimport) int  __stdcall OffsetRgn(  HRGN hrgn,   int x,   int y);
__declspec(dllimport) BOOL __stdcall PatBlt(  HDC hdc,   int x,   int y,   int w,   int h,   DWORD rop);
__declspec(dllimport) BOOL __stdcall Pie(  HDC hdc,   int left,   int top,   int right,   int bottom,   int xr1,   int yr1,   int xr2,   int yr2);
__declspec(dllimport) BOOL __stdcall PlayMetaFile(  HDC hdc,   HMETAFILE hmf);
__declspec(dllimport) BOOL __stdcall PaintRgn(  HDC hdc,   HRGN hrgn);
__declspec(dllimport) BOOL __stdcall PolyPolygon(  HDC hdc,    const POINT *apt,    const INT *asz,    int csz);
__declspec(dllimport) BOOL __stdcall PtInRegion(  HRGN hrgn,   int x,   int y);
__declspec(dllimport) BOOL __stdcall PtVisible(  HDC hdc,   int x,   int y);
__declspec(dllimport) BOOL __stdcall RectInRegion(  HRGN hrgn,   const RECT * lprect);
__declspec(dllimport) BOOL __stdcall RectVisible(  HDC hdc,   const RECT * lprect);
__declspec(dllimport) BOOL __stdcall Rectangle(  HDC hdc,   int left,   int top,   int right,   int bottom);
__declspec(dllimport) BOOL __stdcall RestoreDC(  HDC hdc,   int nSavedDC);
__declspec(dllimport) HDC  __stdcall ResetDCA(  HDC hdc,   const DEVMODEA * lpdm);
__declspec(dllimport) HDC  __stdcall ResetDCW(  HDC hdc,   const DEVMODEW * lpdm);
#line 4369 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) UINT __stdcall RealizePalette(  HDC hdc);
__declspec(dllimport) BOOL __stdcall RemoveFontResourceA(  LPCSTR lpFileName);
__declspec(dllimport) BOOL __stdcall RemoveFontResourceW(  LPCWSTR lpFileName);
#line 4377 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall RoundRect(  HDC hdc,   int left,   int top,   int right,   int bottom,   int width,   int height);
__declspec(dllimport) BOOL __stdcall ResizePalette(  HPALETTE hpal,   UINT n);
__declspec(dllimport) int  __stdcall SaveDC(  HDC hdc);
__declspec(dllimport) int  __stdcall SelectClipRgn(  HDC hdc,   HRGN hrgn);
__declspec(dllimport) int  __stdcall ExtSelectClipRgn(  HDC hdc,   HRGN hrgn,   int mode);
__declspec(dllimport) int  __stdcall SetMetaRgn(  HDC hdc);
__declspec(dllimport) HGDIOBJ __stdcall SelectObject(  HDC hdc,   HGDIOBJ h);
__declspec(dllimport) HPALETTE __stdcall SelectPalette(  HDC hdc,   HPALETTE hPal,   BOOL bForceBkgd);
__declspec(dllimport) COLORREF __stdcall SetBkColor(  HDC hdc,   COLORREF color);
__declspec(dllimport) COLORREF __stdcall SetDCBrushColor(  HDC hdc,   COLORREF color);
__declspec(dllimport) COLORREF __stdcall SetDCPenColor(  HDC hdc,   COLORREF color);
#line 4392 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int   __stdcall SetBkMode(  HDC hdc,   int mode);
__declspec(dllimport)
LONG __stdcall
SetBitmapBits(
HBITMAP hbm,
DWORD cb,
const void *pvBits);
__declspec(dllimport) UINT  __stdcall SetBoundsRect(  HDC hdc,   const RECT * lprect,   UINT flags);
__declspec(dllimport) int   __stdcall SetDIBits(  HDC hdc,   HBITMAP hbm,   UINT start,   UINT cLines,   const void *lpBits,   const BITMAPINFO * lpbmi,   UINT ColorUse);
__declspec(dllimport) int   __stdcall SetDIBitsToDevice(  HDC hdc,   int xDest,   int yDest,   DWORD w,   DWORD h,   int xSrc,
int ySrc,   UINT StartScan,   UINT cLines,   const void * lpvBits,   const BITMAPINFO * lpbmi,   UINT ColorUse);
__declspec(dllimport) DWORD __stdcall SetMapperFlags(  HDC hdc,   DWORD flags);
__declspec(dllimport) int   __stdcall SetGraphicsMode(  HDC hdc,   int iMode);
__declspec(dllimport) int   __stdcall SetMapMode(  HDC hdc,   int iMode);
__declspec(dllimport) DWORD __stdcall SetLayout(  HDC hdc,   DWORD l);
__declspec(dllimport) DWORD __stdcall GetLayout(  HDC hdc);
#line 4414 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HMETAFILE   __stdcall SetMetaFileBitsEx(  UINT cbBuffer,   const BYTE *lpData);
__declspec(dllimport) UINT  __stdcall SetPaletteEntries(     HPALETTE hpal,
UINT iStart,
UINT cEntries,
const PALETTEENTRY *pPalEntries);
__declspec(dllimport) COLORREF __stdcall SetPixel(  HDC hdc,   int x,   int y,   COLORREF color);
__declspec(dllimport) BOOL   __stdcall SetPixelV(  HDC hdc,   int x,   int y,   COLORREF color);
__declspec(dllimport) BOOL  __stdcall SetPixelFormat(  HDC hdc,   int format,   const PIXELFORMATDESCRIPTOR * ppfd);
__declspec(dllimport) int   __stdcall SetPolyFillMode(  HDC hdc,   int mode);
__declspec(dllimport) BOOL  __stdcall StretchBlt(  HDC hdcDest,   int xDest,   int yDest,   int wDest,   int hDest,   HDC hdcSrc,   int xSrc,   int ySrc,   int wSrc,   int hSrc,   DWORD rop);
__declspec(dllimport) BOOL   __stdcall SetRectRgn(  HRGN hrgn,   int left,   int top,   int right,   int bottom);
__declspec(dllimport) int   __stdcall StretchDIBits(  HDC hdc,   int xDest,   int yDest,   int DestWidth,   int DestHeight,   int xSrc,   int ySrc,   int SrcWidth,   int SrcHeight,
const void * lpBits,   const BITMAPINFO * lpbmi,   UINT iUsage,   DWORD rop);
__declspec(dllimport) int   __stdcall SetROP2(  HDC hdc,   int rop2);
__declspec(dllimport) int   __stdcall SetStretchBltMode(  HDC hdc,   int mode);
__declspec(dllimport) UINT  __stdcall SetSystemPaletteUse(  HDC hdc,   UINT use);
__declspec(dllimport) int   __stdcall SetTextCharacterExtra(  HDC hdc,   int extra);
__declspec(dllimport) COLORREF __stdcall SetTextColor(  HDC hdc,   COLORREF color);
__declspec(dllimport) UINT  __stdcall SetTextAlign(  HDC hdc,   UINT align);
__declspec(dllimport) BOOL  __stdcall SetTextJustification(  HDC hdc,   int extra,   int count);
__declspec(dllimport) BOOL  __stdcall UpdateColors(  HDC hdc);
#line 4438 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef USHORT COLOR16;
typedef struct _TRIVERTEX
{
LONG    x;
LONG    y;
COLOR16 Red;
COLOR16 Green;
COLOR16 Blue;
COLOR16 Alpha;
}TRIVERTEX,*PTRIVERTEX,*LPTRIVERTEX;
#line 4499 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _GRADIENT_TRIANGLE
{
ULONG Vertex1;
ULONG Vertex2;
ULONG Vertex3;
} GRADIENT_TRIANGLE,*PGRADIENT_TRIANGLE,*LPGRADIENT_TRIANGLE;
typedef struct _GRADIENT_RECT
{
ULONG UpperLeft;
ULONG LowerRight;
}GRADIENT_RECT,*PGRADIENT_RECT,*LPGRADIENT_RECT;
#line 4518 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Application Family
typedef struct _BLENDFUNCTION
{
BYTE   BlendOp;
BYTE   BlendFlags;
BYTE   SourceConstantAlpha;
BYTE   AlphaFormat;
}BLENDFUNCTION,*PBLENDFUNCTION;
#line 4532 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport) BOOL __stdcall AlphaBlend(
HDC hdcDest,
int xoriginDest,
int yoriginDest,
int wDest,
int hDest,
HDC hdcSrc,
int xoriginSrc,
int yoriginSrc,
int wSrc,
int hSrc,
BLENDFUNCTION ftn);
__declspec(dllimport) BOOL __stdcall TransparentBlt(
HDC hdcDest,
int xoriginDest,
int yoriginDest,
int wDest,
int hDest,
HDC hdcSrc,
int xoriginSrc,
int yoriginSrc,
int wSrc,
int hSrc,
UINT crTransparent);
__declspec(dllimport)
BOOL
__stdcall
GradientFill(
HDC hdc,
PTRIVERTEX pVertex,
ULONG nVertex,
PVOID pMesh,
ULONG nMesh,
ULONG ulMode
);
#line 4599 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 4602 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
__declspec(dllimport) BOOL  __stdcall GdiAlphaBlend(  HDC hdcDest,   int xoriginDest,   int yoriginDest,   int wDest,   int hDest,   HDC hdcSrc,   int xoriginSrc,   int yoriginSrc,   int wSrc,   int hSrc,   BLENDFUNCTION ftn);
__declspec(dllimport) BOOL  __stdcall GdiTransparentBlt(  HDC hdcDest,  int xoriginDest,   int yoriginDest,   int wDest,   int hDest,   HDC hdcSrc,
int xoriginSrc,   int yoriginSrc,   int wSrc,   int hSrc,   UINT crTransparent);
__declspec(dllimport) BOOL  __stdcall GdiGradientFill(   HDC hdc,
PTRIVERTEX pVertex,
ULONG nVertex,
PVOID pMesh,
ULONG nCount,
ULONG ulMode);
#line 4622 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall PlayMetaFileRecord(    HDC hdc,
LPHANDLETABLE lpHandleTable,
LPMETARECORD lpMR,
UINT noObjs);
typedef int (__stdcall* MFENUMPROC)(   HDC hdc,   HANDLETABLE * lpht,   METARECORD * lpMR,   int nObj,   LPARAM param);
__declspec(dllimport) BOOL  __stdcall EnumMetaFile(   HDC hdc,   HMETAFILE hmf,   MFENUMPROC proc,   LPARAM param);
typedef int (__stdcall* ENHMFENUMPROC)(  HDC hdc,   HANDLETABLE * lpht,   const ENHMETARECORD * lpmr,   int nHandles,   LPARAM data);
__declspec(dllimport) HENHMETAFILE __stdcall CloseEnhMetaFile(   HDC hdc);
__declspec(dllimport) HENHMETAFILE __stdcall CopyEnhMetaFileA(   HENHMETAFILE hEnh,   LPCSTR lpFileName);
__declspec(dllimport) HENHMETAFILE __stdcall CopyEnhMetaFileW(   HENHMETAFILE hEnh,   LPCWSTR lpFileName);
#line 4647 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HDC   __stdcall CreateEnhMetaFileA(   HDC hdc,   LPCSTR lpFilename,   const RECT *lprc,   LPCSTR lpDesc);
__declspec(dllimport) HDC   __stdcall CreateEnhMetaFileW(   HDC hdc,   LPCWSTR lpFilename,   const RECT *lprc,   LPCWSTR lpDesc);
#line 4654 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall DeleteEnhMetaFile(   HENHMETAFILE hmf);
__declspec(dllimport) BOOL  __stdcall EnumEnhMetaFile(   HDC hdc,   HENHMETAFILE hmf,   ENHMFENUMPROC proc,
LPVOID param,   const RECT * lpRect);
__declspec(dllimport) HENHMETAFILE  __stdcall GetEnhMetaFileA(   LPCSTR lpName);
__declspec(dllimport) HENHMETAFILE  __stdcall GetEnhMetaFileW(   LPCWSTR lpName);
#line 4664 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) UINT  __stdcall GetEnhMetaFileBits(    HENHMETAFILE hEMF,
UINT nSize,
LPBYTE lpData);
__declspec(dllimport) UINT  __stdcall GetEnhMetaFileDescriptionA(    HENHMETAFILE hemf,
UINT cchBuffer,
LPSTR lpDescription);
__declspec(dllimport) UINT  __stdcall GetEnhMetaFileDescriptionW(    HENHMETAFILE hemf,
UINT cchBuffer,
LPWSTR lpDescription);
#line 4678 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) UINT  __stdcall GetEnhMetaFileHeader(      HENHMETAFILE hemf,
UINT nSize,
LPENHMETAHEADER lpEnhMetaHeader);
__declspec(dllimport) UINT  __stdcall GetEnhMetaFilePaletteEntries(  HENHMETAFILE hemf,
UINT nNumEntries,
LPPALETTEENTRY lpPaletteEntries);
__declspec(dllimport) UINT  __stdcall GetEnhMetaFilePixelFormat(     HENHMETAFILE hemf,
UINT cbBuffer,
PIXELFORMATDESCRIPTOR *ppfd);
__declspec(dllimport) UINT  __stdcall GetWinMetaFileBits(    HENHMETAFILE hemf,
UINT cbData16,
LPBYTE pData16,
INT iMapMode,
HDC hdcRef);
__declspec(dllimport) BOOL  __stdcall PlayEnhMetaFile(   HDC hdc,   HENHMETAFILE hmf,   const RECT * lprect);
__declspec(dllimport) BOOL  __stdcall PlayEnhMetaFileRecord(     HDC hdc,
LPHANDLETABLE pht,
const ENHMETARECORD *pmr,
UINT cht);
__declspec(dllimport) HENHMETAFILE  __stdcall SetEnhMetaFileBits(    UINT nSize,
const BYTE * pb);
__declspec(dllimport) HENHMETAFILE  __stdcall SetWinMetaFileBits(    UINT nSize,
const BYTE *lpMeta16Data,
HDC hdcRef,
const METAFILEPICT *lpMFP);
__declspec(dllimport) BOOL  __stdcall GdiComment(  HDC hdc,   UINT nSize,   const BYTE *lpData);
#line 4709 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL __stdcall GetTextMetricsA(   HDC hdc,   LPTEXTMETRICA lptm);
__declspec(dllimport) BOOL __stdcall GetTextMetricsW(   HDC hdc,   LPTEXTMETRICW lptm);
#line 4719 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4739 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4741 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagDIBSECTION {
BITMAP       dsBm;
BITMAPINFOHEADER    dsBmih;
DWORD               dsBitfields[3];
HANDLE              dshSection;
DWORD               dsOffset;
} DIBSECTION,  *LPDIBSECTION, *PDIBSECTION;
__declspec(dllimport) BOOL __stdcall AngleArc(   HDC hdc,   int x,   int y,   DWORD r,   FLOAT StartAngle,   FLOAT SweepAngle);
__declspec(dllimport) BOOL __stdcall PolyPolyline(  HDC hdc,   const POINT *apt,   const DWORD *asz,   DWORD csz);
__declspec(dllimport) BOOL __stdcall GetWorldTransform(   HDC hdc,   LPXFORM lpxf);
__declspec(dllimport) BOOL __stdcall SetWorldTransform(   HDC hdc,   const XFORM * lpxf);
__declspec(dllimport) BOOL __stdcall ModifyWorldTransform(   HDC hdc,   const XFORM * lpxf,   DWORD mode);
__declspec(dllimport) BOOL __stdcall CombineTransform(   LPXFORM lpxfOut,   const XFORM *lpxf1,   const XFORM *lpxf2);
__declspec(dllimport)   HBITMAP __stdcall CreateDIBSection(
HDC               hdc, 
const BITMAPINFO *pbmi, 
UINT              usage, 
void            **ppvBits, 
HANDLE            hSection, 
DWORD             offset);
__declspec(dllimport) UINT __stdcall GetDIBColorTable(   HDC  hdc,
UINT iStart,
UINT cEntries,
RGBQUAD *prgbq);
__declspec(dllimport) UINT __stdcall SetDIBColorTable(   HDC  hdc,
UINT iStart,
UINT cEntries,
const RGBQUAD *prgbq);
typedef struct  tagCOLORADJUSTMENT {
WORD   caSize;
WORD   caFlags;
WORD   caIlluminantIndex;
WORD   caRedGamma;
WORD   caGreenGamma;
WORD   caBlueGamma;
WORD   caReferenceBlack;
WORD   caReferenceWhite;
SHORT  caContrast;
SHORT  caBrightness;
SHORT  caColorfulness;
SHORT  caRedGreenTint;
} COLORADJUSTMENT, *PCOLORADJUSTMENT,  *LPCOLORADJUSTMENT;
__declspec(dllimport) BOOL __stdcall SetColorAdjustment(   HDC hdc,   const COLORADJUSTMENT *lpca);
__declspec(dllimport) BOOL __stdcall GetColorAdjustment(   HDC hdc,   LPCOLORADJUSTMENT lpca);
__declspec(dllimport) HPALETTE __stdcall CreateHalftonePalette(   HDC hdc);
typedef BOOL (__stdcall* ABORTPROC)(   HDC,   int);
#line 4845 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct _DOCINFOA {
int     cbSize;
LPCSTR   lpszDocName;
LPCSTR   lpszOutput;
LPCSTR   lpszDatatype;
DWORD    fwType;
#line 4854 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
} DOCINFOA, *LPDOCINFOA;
typedef struct _DOCINFOW {
int     cbSize;
LPCWSTR  lpszDocName;
LPCWSTR  lpszOutput;
LPCWSTR  lpszDatatype;
DWORD    fwType;
#line 4863 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
} DOCINFOW, *LPDOCINFOW;
typedef DOCINFOW DOCINFO;
typedef LPDOCINFOW LPDOCINFO;
#line 4871 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4876 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int __stdcall StartDocA(  HDC hdc,   const DOCINFOA *lpdi);
__declspec(dllimport) int __stdcall StartDocW(  HDC hdc,   const DOCINFOW *lpdi);
#line 4884 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int __stdcall EndDoc(  HDC hdc);
__declspec(dllimport) int __stdcall StartPage(  HDC hdc);
__declspec(dllimport) int __stdcall EndPage(  HDC hdc);
__declspec(dllimport) int __stdcall AbortDoc(  HDC hdc);
__declspec(dllimport) int __stdcall SetAbortProc(  HDC hdc,   ABORTPROC proc);
__declspec(dllimport) BOOL __stdcall AbortPath(  HDC hdc);
__declspec(dllimport) BOOL __stdcall ArcTo(  HDC hdc,   int left,   int top,   int right,   int bottom,   int xr1,   int yr1,   int xr2,   int yr2);
__declspec(dllimport) BOOL __stdcall BeginPath(  HDC hdc);
__declspec(dllimport) BOOL __stdcall CloseFigure(  HDC hdc);
__declspec(dllimport) BOOL __stdcall EndPath(  HDC hdc);
__declspec(dllimport) BOOL __stdcall FillPath(  HDC hdc);
__declspec(dllimport) BOOL __stdcall FlattenPath(  HDC hdc);
__declspec(dllimport) int  __stdcall GetPath(  HDC hdc,   LPPOINT apt,   LPBYTE aj, int cpt);
__declspec(dllimport) HRGN __stdcall PathToRegion(  HDC hdc);
__declspec(dllimport) BOOL __stdcall PolyDraw(  HDC hdc,   const POINT * apt,   const BYTE * aj,   int cpt);
__declspec(dllimport) BOOL __stdcall SelectClipPath(  HDC hdc,   int mode);
__declspec(dllimport) int  __stdcall SetArcDirection(  HDC hdc,   int dir);
__declspec(dllimport) BOOL __stdcall SetMiterLimit(  HDC hdc,   FLOAT limit,   PFLOAT old);
__declspec(dllimport) BOOL __stdcall StrokeAndFillPath(  HDC hdc);
__declspec(dllimport) BOOL __stdcall StrokePath(  HDC hdc);
__declspec(dllimport) BOOL __stdcall WidenPath(  HDC hdc);
__declspec(dllimport) HPEN __stdcall ExtCreatePen(   DWORD iPenStyle,
DWORD cWidth,
const LOGBRUSH *plbrush,
DWORD cStyle,
const DWORD *pstyle);
__declspec(dllimport) BOOL __stdcall GetMiterLimit(  HDC hdc,   PFLOAT plimit);
__declspec(dllimport) int  __stdcall GetArcDirection(  HDC hdc);
__declspec(dllimport) int   __stdcall GetObjectA(  HANDLE h,   int c,   LPVOID pv);
__declspec(dllimport) int   __stdcall GetObjectW(  HANDLE h,   int c,   LPVOID pv);
#line 4921 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 4942 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall MoveToEx(   HDC hdc,   int x,   int y,   LPPOINT lppt);
__declspec(dllimport) BOOL  __stdcall TextOutA(   HDC hdc,   int x,   int y,   LPCSTR lpString,   int c);
__declspec(dllimport) BOOL  __stdcall TextOutW(   HDC hdc,   int x,   int y,   LPCWSTR lpString,   int c);
#line 4952 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall ExtTextOutA(   HDC hdc,   int x,   int y,   UINT options,   const RECT * lprect,   LPCSTR lpString,   UINT c,   const INT * lpDx);
__declspec(dllimport) BOOL  __stdcall ExtTextOutW(   HDC hdc,   int x,   int y,   UINT options,   const RECT * lprect,   LPCWSTR lpString,   UINT c,   const INT * lpDx);
#line 4959 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall PolyTextOutA(  HDC hdc,   const POLYTEXTA * ppt,   int nstrings);
__declspec(dllimport) BOOL  __stdcall PolyTextOutW(  HDC hdc,   const POLYTEXTW * ppt,   int nstrings);
#line 4966 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HRGN  __stdcall CreatePolygonRgn(      const POINT *pptl,
int cPoint,
int iMode);
__declspec(dllimport) BOOL  __stdcall DPtoLP(   HDC hdc,   LPPOINT lppt,   int c);
__declspec(dllimport) BOOL  __stdcall LPtoDP(   HDC hdc,   LPPOINT lppt,   int c);
__declspec(dllimport) BOOL  __stdcall Polygon(  HDC hdc,   const POINT *apt,   int cpt);
__declspec(dllimport) BOOL  __stdcall Polyline(  HDC hdc,   const POINT *apt,   int cpt);
__declspec(dllimport) BOOL  __stdcall PolyBezier(  HDC hdc,   const POINT * apt,   DWORD cpt);
__declspec(dllimport) BOOL  __stdcall PolyBezierTo(  HDC hdc,   const POINT * apt,   DWORD cpt);
__declspec(dllimport) BOOL  __stdcall PolylineTo(  HDC hdc,   const POINT * apt,   DWORD cpt);
__declspec(dllimport) BOOL  __stdcall SetViewportExtEx(   HDC hdc,   int x,   int y,   LPSIZE lpsz);
__declspec(dllimport) BOOL  __stdcall SetViewportOrgEx(   HDC hdc,   int x,   int y,   LPPOINT lppt);
__declspec(dllimport) BOOL  __stdcall SetWindowExtEx(   HDC hdc,   int x,   int y,   LPSIZE lpsz);
__declspec(dllimport) BOOL  __stdcall SetWindowOrgEx(   HDC hdc,   int x,   int y,   LPPOINT lppt);
__declspec(dllimport) BOOL  __stdcall OffsetViewportOrgEx(   HDC hdc,   int x,   int y,   LPPOINT lppt);
__declspec(dllimport) BOOL  __stdcall OffsetWindowOrgEx(   HDC hdc,   int x,   int y,   LPPOINT lppt);
__declspec(dllimport) BOOL  __stdcall ScaleViewportExtEx(   HDC hdc,   int xn,   int dx,   int yn,   int yd,   LPSIZE lpsz);
__declspec(dllimport) BOOL  __stdcall ScaleWindowExtEx(   HDC hdc,   int xn,   int xd,   int yn,   int yd,   LPSIZE lpsz);
__declspec(dllimport) BOOL  __stdcall SetBitmapDimensionEx(   HBITMAP hbm,   int w,   int h,   LPSIZE lpsz);
__declspec(dllimport) BOOL  __stdcall SetBrushOrgEx(   HDC hdc,   int x,   int y,   LPPOINT lppt);
__declspec(dllimport) int   __stdcall GetTextFaceA(   HDC hdc,   int c,    LPSTR lpName);
__declspec(dllimport) int   __stdcall GetTextFaceW(   HDC hdc,   int c,    LPWSTR lpName);
#line 4998 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagKERNINGPAIR {
WORD wFirst;
WORD wSecond;
int  iKernAmount;
} KERNINGPAIR, *LPKERNINGPAIR;
__declspec(dllimport) DWORD __stdcall GetKerningPairsA(      HDC hdc,
DWORD nPairs,
LPKERNINGPAIR   lpKernPair);
__declspec(dllimport) DWORD __stdcall GetKerningPairsW(      HDC hdc,
DWORD nPairs,
LPKERNINGPAIR   lpKernPair);
#line 5018 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall GetDCOrgEx(   HDC hdc,   LPPOINT lppt);
__declspec(dllimport) BOOL  __stdcall FixBrushOrgEx(   HDC hdc,   int x,   int y,    LPPOINT ptl);
__declspec(dllimport) BOOL  __stdcall UnrealizeObject(   HGDIOBJ h);
__declspec(dllimport) BOOL  __stdcall GdiFlush(void);
__declspec(dllimport) DWORD __stdcall GdiSetBatchLimit(   DWORD dw);
__declspec(dllimport) DWORD __stdcall GdiGetBatchLimit(void);
typedef int (__stdcall* ICMENUMPROCA)(LPSTR, LPARAM);
typedef int (__stdcall* ICMENUMPROCW)(LPWSTR, LPARAM);
#line 5042 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) int         __stdcall SetICMMode(   HDC hdc,   int mode);
__declspec(dllimport) BOOL        __stdcall CheckColorsInGamut(      HDC hdc,
LPRGBTRIPLE lpRGBTriple,
LPVOID dlpBuffer,
DWORD nCount);
__declspec(dllimport) HCOLORSPACE __stdcall GetColorSpace(   HDC hdc);
__declspec(dllimport) BOOL        __stdcall GetLogColorSpaceA(   HCOLORSPACE hColorSpace,
LPLOGCOLORSPACEA lpBuffer,
DWORD nSize);
__declspec(dllimport) BOOL        __stdcall GetLogColorSpaceW(   HCOLORSPACE hColorSpace,
LPLOGCOLORSPACEW lpBuffer,
DWORD nSize);
#line 5061 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HCOLORSPACE __stdcall CreateColorSpaceA(   LPLOGCOLORSPACEA lplcs);
__declspec(dllimport) HCOLORSPACE __stdcall CreateColorSpaceW(   LPLOGCOLORSPACEW lplcs);
#line 5069 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) HCOLORSPACE __stdcall SetColorSpace(   HDC hdc,   HCOLORSPACE hcs);
__declspec(dllimport) BOOL        __stdcall DeleteColorSpace(   HCOLORSPACE hcs);
__declspec(dllimport) BOOL        __stdcall GetICMProfileA(      HDC hdc,
LPDWORD pBufSize,
LPSTR pszFilename);
__declspec(dllimport) BOOL        __stdcall GetICMProfileW(      HDC hdc,
LPDWORD pBufSize,
LPWSTR pszFilename);
#line 5082 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL        __stdcall SetICMProfileA(   HDC hdc,   LPSTR lpFileName);
__declspec(dllimport) BOOL        __stdcall SetICMProfileW(   HDC hdc,   LPWSTR lpFileName);
#line 5090 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL        __stdcall GetDeviceGammaRamp(   HDC hdc,   LPVOID lpRamp);
__declspec(dllimport) BOOL        __stdcall SetDeviceGammaRamp(   HDC hdc,    LPVOID lpRamp);
__declspec(dllimport) BOOL        __stdcall ColorMatchToTarget(   HDC hdc,   HDC hdcTarget,   DWORD action);
__declspec(dllimport) int         __stdcall EnumICMProfilesA(   HDC hdc,   ICMENUMPROCA proc,   LPARAM param);
__declspec(dllimport) int         __stdcall EnumICMProfilesW(   HDC hdc,   ICMENUMPROCW proc,   LPARAM param);
#line 5100 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL        __stdcall UpdateICMRegKeyA(   DWORD reserved,   LPSTR lpszCMID,   LPSTR lpszFileName,   UINT command);
__declspec(dllimport) BOOL        __stdcall UpdateICMRegKeyW(   DWORD reserved,   LPWSTR lpszCMID,   LPWSTR lpszFileName,   UINT command);
#line 5109 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma deprecated (UpdateICMRegKeyW)
#pragma deprecated (UpdateICMRegKeyA)
#line 5113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL        __stdcall ColorCorrectPalette(   HDC hdc,   HPALETTE hPal,   DWORD deFirst,   DWORD num);
#line 5117 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 5127 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 5244 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 5261 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 5267 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 5277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagEMR
{
DWORD   iType;              
DWORD   nSize;              
} EMR, *PEMR;
typedef struct tagEMRTEXT
{
POINTL  ptlReference;
DWORD   nChars;
DWORD   offString;          
DWORD   fOptions;
RECTL   rcl;
DWORD   offDx;              
} EMRTEXT, *PEMRTEXT;
typedef struct tagABORTPATH
{
EMR     emr;
} EMRABORTPATH,      *PEMRABORTPATH,
EMRBEGINPATH,      *PEMRBEGINPATH,
EMRENDPATH,        *PEMRENDPATH,
EMRCLOSEFIGURE,    *PEMRCLOSEFIGURE,
EMRFLATTENPATH,    *PEMRFLATTENPATH,
EMRWIDENPATH,      *PEMRWIDENPATH,
EMRSETMETARGN,     *PEMRSETMETARGN,
EMRSAVEDC,         *PEMRSAVEDC,
EMRREALIZEPALETTE, *PEMRREALIZEPALETTE;
typedef struct tagEMRSELECTCLIPPATH
{
EMR     emr;
DWORD   iMode;
} EMRSELECTCLIPPATH,    *PEMRSELECTCLIPPATH,
EMRSETBKMODE,         *PEMRSETBKMODE,
EMRSETMAPMODE,        *PEMRSETMAPMODE,
EMRSETLAYOUT,         *PEMRSETLAYOUT,
#line 5325 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
EMRSETPOLYFILLMODE,   *PEMRSETPOLYFILLMODE,
EMRSETROP2,           *PEMRSETROP2,
EMRSETSTRETCHBLTMODE, *PEMRSETSTRETCHBLTMODE,
EMRSETICMMODE,        *PEMRSETICMMODE,
EMRSETTEXTALIGN,      *PEMRSETTEXTALIGN;
typedef struct tagEMRSETMITERLIMIT
{
EMR     emr;
FLOAT   eMiterLimit;
} EMRSETMITERLIMIT, *PEMRSETMITERLIMIT;
typedef struct tagEMRRESTOREDC
{
EMR     emr;
LONG    iRelative;          
} EMRRESTOREDC, *PEMRRESTOREDC;
typedef struct tagEMRSETARCDIRECTION
{
EMR     emr;
DWORD   iArcDirection;      
} EMRSETARCDIRECTION, *PEMRSETARCDIRECTION;
typedef struct tagEMRSETMAPPERFLAGS
{
EMR     emr;
DWORD   dwFlags;
} EMRSETMAPPERFLAGS, *PEMRSETMAPPERFLAGS;
typedef struct tagEMRSETTEXTCOLOR
{
EMR     emr;
COLORREF crColor;
} EMRSETBKCOLOR,   *PEMRSETBKCOLOR,
EMRSETTEXTCOLOR, *PEMRSETTEXTCOLOR;
typedef struct tagEMRSELECTOBJECT
{
EMR     emr;
DWORD   ihObject;           
} EMRSELECTOBJECT, *PEMRSELECTOBJECT,
EMRDELETEOBJECT, *PEMRDELETEOBJECT;
typedef struct tagEMRSELECTPALETTE
{
EMR     emr;
DWORD   ihPal;              
} EMRSELECTPALETTE, *PEMRSELECTPALETTE;
typedef struct tagEMRRESIZEPALETTE
{
EMR     emr;
DWORD   ihPal;              
DWORD   cEntries;
} EMRRESIZEPALETTE, *PEMRRESIZEPALETTE;
typedef struct tagEMRSETPALETTEENTRIES
{
EMR     emr;
DWORD   ihPal;              
DWORD   iStart;
DWORD   cEntries;
PALETTEENTRY aPalEntries[1];
} EMRSETPALETTEENTRIES, *PEMRSETPALETTEENTRIES;
typedef struct tagEMRSETCOLORADJUSTMENT
{
EMR     emr;
COLORADJUSTMENT ColorAdjustment;
} EMRSETCOLORADJUSTMENT, *PEMRSETCOLORADJUSTMENT;
typedef struct tagEMRGDICOMMENT
{
EMR     emr;
DWORD   cbData;             
BYTE    Data[1];
} EMRGDICOMMENT, *PEMRGDICOMMENT;
typedef struct tagEMREOF
{
EMR     emr;
DWORD   nPalEntries;        
DWORD   offPalEntries;      
DWORD   nSizeLast;          
} EMREOF, *PEMREOF;
typedef struct tagEMRLINETO
{
EMR     emr;
POINTL  ptl;
} EMRLINETO,   *PEMRLINETO,
EMRMOVETOEX, *PEMRMOVETOEX;
typedef struct tagEMROFFSETCLIPRGN
{
EMR     emr;
POINTL  ptlOffset;
} EMROFFSETCLIPRGN, *PEMROFFSETCLIPRGN;
typedef struct tagEMRFILLPATH
{
EMR     emr;
RECTL   rclBounds;          
} EMRFILLPATH,          *PEMRFILLPATH,
EMRSTROKEANDFILLPATH, *PEMRSTROKEANDFILLPATH,
EMRSTROKEPATH,        *PEMRSTROKEPATH;
typedef struct tagEMREXCLUDECLIPRECT
{
EMR     emr;
RECTL   rclClip;
} EMREXCLUDECLIPRECT,   *PEMREXCLUDECLIPRECT,
EMRINTERSECTCLIPRECT, *PEMRINTERSECTCLIPRECT;
typedef struct tagEMRSETVIEWPORTORGEX
{
EMR     emr;
POINTL  ptlOrigin;
} EMRSETVIEWPORTORGEX, *PEMRSETVIEWPORTORGEX,
EMRSETWINDOWORGEX,   *PEMRSETWINDOWORGEX,
EMRSETBRUSHORGEX,    *PEMRSETBRUSHORGEX;
typedef struct tagEMRSETVIEWPORTEXTEX
{
EMR     emr;
SIZEL   szlExtent;
} EMRSETVIEWPORTEXTEX, *PEMRSETVIEWPORTEXTEX,
EMRSETWINDOWEXTEX,   *PEMRSETWINDOWEXTEX;
typedef struct tagEMRSCALEVIEWPORTEXTEX
{
EMR     emr;
LONG    xNum;
LONG    xDenom;
LONG    yNum;
LONG    yDenom;
} EMRSCALEVIEWPORTEXTEX, *PEMRSCALEVIEWPORTEXTEX,
EMRSCALEWINDOWEXTEX,   *PEMRSCALEWINDOWEXTEX;
typedef struct tagEMRSETWORLDTRANSFORM
{
EMR     emr;
XFORM   xform;
} EMRSETWORLDTRANSFORM, *PEMRSETWORLDTRANSFORM;
typedef struct tagEMRMODIFYWORLDTRANSFORM
{
EMR     emr;
XFORM   xform;
DWORD   iMode;
} EMRMODIFYWORLDTRANSFORM, *PEMRMODIFYWORLDTRANSFORM;
typedef struct tagEMRSETPIXELV
{
EMR     emr;
POINTL  ptlPixel;
COLORREF crColor;
} EMRSETPIXELV, *PEMRSETPIXELV;
typedef struct tagEMREXTFLOODFILL
{
EMR     emr;
POINTL  ptlStart;
COLORREF crColor;
DWORD   iMode;
} EMREXTFLOODFILL, *PEMREXTFLOODFILL;
typedef struct tagEMRELLIPSE
{
EMR     emr;
RECTL   rclBox;             
} EMRELLIPSE,  *PEMRELLIPSE,
EMRRECTANGLE, *PEMRRECTANGLE;
typedef struct tagEMRROUNDRECT
{
EMR     emr;
RECTL   rclBox;             
SIZEL   szlCorner;
} EMRROUNDRECT, *PEMRROUNDRECT;
typedef struct tagEMRARC
{
EMR     emr;
RECTL   rclBox;             
POINTL  ptlStart;
POINTL  ptlEnd;
} EMRARC,   *PEMRARC,
EMRARCTO, *PEMRARCTO,
EMRCHORD, *PEMRCHORD,
EMRPIE,   *PEMRPIE;
typedef struct tagEMRANGLEARC
{
EMR     emr;
POINTL  ptlCenter;
DWORD   nRadius;
FLOAT   eStartAngle;
FLOAT   eSweepAngle;
} EMRANGLEARC, *PEMRANGLEARC;
typedef struct tagEMRPOLYLINE
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cptl;
POINTL  aptl[1];
} EMRPOLYLINE,     *PEMRPOLYLINE,
EMRPOLYBEZIER,   *PEMRPOLYBEZIER,
EMRPOLYGON,      *PEMRPOLYGON,
EMRPOLYBEZIERTO, *PEMRPOLYBEZIERTO,
EMRPOLYLINETO,   *PEMRPOLYLINETO;
typedef struct tagEMRPOLYLINE16
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cpts;
POINTS  apts[1];
} EMRPOLYLINE16,     *PEMRPOLYLINE16,
EMRPOLYBEZIER16,   *PEMRPOLYBEZIER16,
EMRPOLYGON16,      *PEMRPOLYGON16,
EMRPOLYBEZIERTO16, *PEMRPOLYBEZIERTO16,
EMRPOLYLINETO16,   *PEMRPOLYLINETO16;
typedef struct tagEMRPOLYDRAW
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cptl;               
POINTL  aptl[1];            
BYTE    abTypes[1];         
} EMRPOLYDRAW, *PEMRPOLYDRAW;
typedef struct tagEMRPOLYDRAW16
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cpts;               
POINTS  apts[1];            
BYTE    abTypes[1];         
} EMRPOLYDRAW16, *PEMRPOLYDRAW16;
typedef struct tagEMRPOLYPOLYLINE
{
EMR     emr;
RECTL   rclBounds;          
DWORD   nPolys;             
DWORD   cptl;               
DWORD   aPolyCounts[1];     
POINTL  aptl[1];            
} EMRPOLYPOLYLINE, *PEMRPOLYPOLYLINE,
EMRPOLYPOLYGON,  *PEMRPOLYPOLYGON;
typedef struct tagEMRPOLYPOLYLINE16
{
EMR     emr;
RECTL   rclBounds;          
DWORD   nPolys;             
DWORD   cpts;               
DWORD   aPolyCounts[1];     
POINTS  apts[1];            
} EMRPOLYPOLYLINE16, *PEMRPOLYPOLYLINE16,
EMRPOLYPOLYGON16,  *PEMRPOLYPOLYGON16;
typedef struct tagEMRINVERTRGN
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cbRgnData;          
BYTE    RgnData[1];
} EMRINVERTRGN, *PEMRINVERTRGN,
EMRPAINTRGN,  *PEMRPAINTRGN;
typedef struct tagEMRFILLRGN
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cbRgnData;          
DWORD   ihBrush;            
BYTE    RgnData[1];
} EMRFILLRGN, *PEMRFILLRGN;
typedef struct tagEMRFRAMERGN
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cbRgnData;          
DWORD   ihBrush;            
SIZEL   szlStroke;
BYTE    RgnData[1];
} EMRFRAMERGN, *PEMRFRAMERGN;
typedef struct tagEMREXTSELECTCLIPRGN
{
EMR     emr;
DWORD   cbRgnData;          
DWORD   iMode;
BYTE    RgnData[1];
} EMREXTSELECTCLIPRGN, *PEMREXTSELECTCLIPRGN;
typedef struct tagEMREXTTEXTOUTA
{
EMR     emr;
RECTL   rclBounds;          
DWORD   iGraphicsMode;      
FLOAT   exScale;            
FLOAT   eyScale;            
EMRTEXT emrtext;            
} EMREXTTEXTOUTA, *PEMREXTTEXTOUTA,
EMREXTTEXTOUTW, *PEMREXTTEXTOUTW;
typedef struct tagEMRPOLYTEXTOUTA
{
EMR     emr;
RECTL   rclBounds;          
DWORD   iGraphicsMode;      
FLOAT   exScale;            
FLOAT   eyScale;            
LONG    cStrings;
EMRTEXT aemrtext[1];        
} EMRPOLYTEXTOUTA, *PEMRPOLYTEXTOUTA,
EMRPOLYTEXTOUTW, *PEMRPOLYTEXTOUTW;
typedef struct tagEMRBITBLT
{
EMR     emr;
RECTL   rclBounds;          
LONG    xDest;
LONG    yDest;
LONG    cxDest;
LONG    cyDest;
DWORD   dwRop;
LONG    xSrc;
LONG    ySrc;
XFORM   xformSrc;           
COLORREF crBkColorSrc;      
DWORD   iUsageSrc;          
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
} EMRBITBLT, *PEMRBITBLT;
typedef struct tagEMRSTRETCHBLT
{
EMR     emr;
RECTL   rclBounds;          
LONG    xDest;
LONG    yDest;
LONG    cxDest;
LONG    cyDest;
DWORD   dwRop;
LONG    xSrc;
LONG    ySrc;
XFORM   xformSrc;           
COLORREF crBkColorSrc;      
DWORD   iUsageSrc;          
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
LONG    cxSrc;
LONG    cySrc;
} EMRSTRETCHBLT, *PEMRSTRETCHBLT;
typedef struct tagEMRMASKBLT
{
EMR     emr;
RECTL   rclBounds;          
LONG    xDest;
LONG    yDest;
LONG    cxDest;
LONG    cyDest;
DWORD   dwRop;
LONG    xSrc;
LONG    ySrc;
XFORM   xformSrc;           
COLORREF crBkColorSrc;      
DWORD   iUsageSrc;          
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
LONG    xMask;
LONG    yMask;
DWORD   iUsageMask;         
DWORD   offBmiMask;         
DWORD   cbBmiMask;          
DWORD   offBitsMask;        
DWORD   cbBitsMask;         
} EMRMASKBLT, *PEMRMASKBLT;
typedef struct tagEMRPLGBLT
{
EMR     emr;
RECTL   rclBounds;          
POINTL  aptlDest[3];
LONG    xSrc;
LONG    ySrc;
LONG    cxSrc;
LONG    cySrc;
XFORM   xformSrc;           
COLORREF crBkColorSrc;      
DWORD   iUsageSrc;          
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
LONG    xMask;
LONG    yMask;
DWORD   iUsageMask;         
DWORD   offBmiMask;         
DWORD   cbBmiMask;          
DWORD   offBitsMask;        
DWORD   cbBitsMask;         
} EMRPLGBLT, *PEMRPLGBLT;
typedef struct tagEMRSETDIBITSTODEVICE
{
EMR     emr;
RECTL   rclBounds;          
LONG    xDest;
LONG    yDest;
LONG    xSrc;
LONG    ySrc;
LONG    cxSrc;
LONG    cySrc;
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
DWORD   iUsageSrc;          
DWORD   iStartScan;
DWORD   cScans;
} EMRSETDIBITSTODEVICE, *PEMRSETDIBITSTODEVICE;
typedef struct tagEMRSTRETCHDIBITS
{
EMR     emr;
RECTL   rclBounds;          
LONG    xDest;
LONG    yDest;
LONG    xSrc;
LONG    ySrc;
LONG    cxSrc;
LONG    cySrc;
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
DWORD   iUsageSrc;          
DWORD   dwRop;
LONG    cxDest;
LONG    cyDest;
} EMRSTRETCHDIBITS, *PEMRSTRETCHDIBITS;
typedef struct tagEMREXTCREATEFONTINDIRECTW
{
EMR     emr;
DWORD   ihFont;             
EXTLOGFONTW elfw;
} EMREXTCREATEFONTINDIRECTW, *PEMREXTCREATEFONTINDIRECTW;
typedef struct tagEMRCREATEPALETTE
{
EMR     emr;
DWORD   ihPal;              
LOGPALETTE lgpl;            
} EMRCREATEPALETTE, *PEMRCREATEPALETTE;
typedef struct tagEMRCREATEPEN
{
EMR     emr;
DWORD   ihPen;              
LOGPEN  lopn;
} EMRCREATEPEN, *PEMRCREATEPEN;
typedef struct tagEMREXTCREATEPEN
{
EMR     emr;
DWORD   ihPen;              
DWORD   offBmi;             
DWORD   cbBmi;              
DWORD   offBits;            
DWORD   cbBits;             
EXTLOGPEN32 elp;            
} EMREXTCREATEPEN, *PEMREXTCREATEPEN;
typedef struct tagEMRCREATEBRUSHINDIRECT
{
EMR        emr;
DWORD      ihBrush;          
LOGBRUSH32 lb;               
} EMRCREATEBRUSHINDIRECT, *PEMRCREATEBRUSHINDIRECT;
typedef struct tagEMRCREATEMONOBRUSH
{
EMR     emr;
DWORD   ihBrush;            
DWORD   iUsage;             
DWORD   offBmi;             
DWORD   cbBmi;              
DWORD   offBits;            
DWORD   cbBits;             
} EMRCREATEMONOBRUSH, *PEMRCREATEMONOBRUSH;
typedef struct tagEMRCREATEDIBPATTERNBRUSHPT
{
EMR     emr;
DWORD   ihBrush;            
DWORD   iUsage;             
DWORD   offBmi;             
DWORD   cbBmi;              
DWORD   offBits;            
DWORD   cbBits;             
} EMRCREATEDIBPATTERNBRUSHPT, *PEMRCREATEDIBPATTERNBRUSHPT;
typedef struct tagEMRFORMAT
{
DWORD   dSignature;         
DWORD   nVersion;           
DWORD   cbData;             
DWORD   offData;            
} EMRFORMAT, *PEMRFORMAT;
typedef struct tagEMRGLSRECORD
{
EMR     emr;
DWORD   cbData;             
BYTE    Data[1];
} EMRGLSRECORD, *PEMRGLSRECORD;
typedef struct tagEMRGLSBOUNDEDRECORD
{
EMR     emr;
RECTL   rclBounds;          
DWORD   cbData;             
BYTE    Data[1];
} EMRGLSBOUNDEDRECORD, *PEMRGLSBOUNDEDRECORD;
typedef struct tagEMRPIXELFORMAT
{
EMR     emr;
PIXELFORMATDESCRIPTOR pfd;
} EMRPIXELFORMAT, *PEMRPIXELFORMAT;
typedef struct tagEMRCREATECOLORSPACE
{
EMR             emr;
DWORD           ihCS;       
LOGCOLORSPACEA  lcs;        
} EMRCREATECOLORSPACE, *PEMRCREATECOLORSPACE;
typedef struct tagEMRSETCOLORSPACE
{
EMR     emr;
DWORD   ihCS;               
} EMRSETCOLORSPACE,    *PEMRSETCOLORSPACE,
EMRSELECTCOLORSPACE, *PEMRSELECTCOLORSPACE,
EMRDELETECOLORSPACE, *PEMRDELETECOLORSPACE;
#line 5908 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagEMREXTESCAPE
{
EMR     emr;
INT     iEscape;            
INT     cbEscData;          
BYTE    EscData[1];         
} EMREXTESCAPE,  *PEMREXTESCAPE,
EMRDRAWESCAPE, *PEMRDRAWESCAPE;
typedef struct tagEMRNAMEDESCAPE
{
EMR     emr;
INT     iEscape;            
INT     cbDriver;           
INT     cbEscData;          
BYTE    EscData[1];         
} EMRNAMEDESCAPE, *PEMRNAMEDESCAPE;
typedef struct tagEMRSETICMPROFILE
{
EMR     emr;
DWORD   dwFlags;            
DWORD   cbName;             
DWORD   cbData;             
BYTE    Data[1];            
} EMRSETICMPROFILE,  *PEMRSETICMPROFILE,
EMRSETICMPROFILEA, *PEMRSETICMPROFILEA,
EMRSETICMPROFILEW, *PEMRSETICMPROFILEW;
typedef struct tagEMRCREATECOLORSPACEW
{
EMR             emr;
DWORD           ihCS;       
LOGCOLORSPACEW  lcs;        
DWORD           dwFlags;    
DWORD           cbData;     
BYTE            Data[1];    
} EMRCREATECOLORSPACEW, *PEMRCREATECOLORSPACEW;
typedef struct tagCOLORMATCHTOTARGET
{
EMR     emr;
DWORD   dwAction;           
DWORD   dwFlags;            
DWORD   cbName;             
DWORD   cbData;             
BYTE    Data[1];            
} EMRCOLORMATCHTOTARGET, *PEMRCOLORMATCHTOTARGET;
typedef struct tagCOLORCORRECTPALETTE
{
EMR     emr;
DWORD   ihPalette;          
DWORD   nFirstEntry;        
DWORD   nPalEntries;        
DWORD   nReserved;          
} EMRCOLORCORRECTPALETTE, *PEMRCOLORCORRECTPALETTE;
typedef struct tagEMRALPHABLEND
{
EMR     emr;
RECTL   rclBounds;          
LONG    xDest;
LONG    yDest;
LONG    cxDest;
LONG    cyDest;
DWORD   dwRop;
LONG    xSrc;
LONG    ySrc;
XFORM   xformSrc;           
COLORREF crBkColorSrc;      
DWORD   iUsageSrc;          
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
LONG    cxSrc;
LONG    cySrc;
} EMRALPHABLEND, *PEMRALPHABLEND;
typedef struct tagEMRGRADIENTFILL
{
EMR       emr;
RECTL     rclBounds;          
DWORD     nVer;
DWORD     nTri;
ULONG     ulMode;
TRIVERTEX Ver[1];
}EMRGRADIENTFILL,*PEMRGRADIENTFILL;
typedef struct tagEMRTRANSPARENTBLT
{
EMR     emr;
RECTL   rclBounds;          
LONG    xDest;
LONG    yDest;
LONG    cxDest;
LONG    cyDest;
DWORD   dwRop;
LONG    xSrc;
LONG    ySrc;
XFORM   xformSrc;           
COLORREF crBkColorSrc;      
DWORD   iUsageSrc;          
DWORD   offBmiSrc;          
DWORD   cbBmiSrc;           
DWORD   offBitsSrc;         
DWORD   cbBitsSrc;          
LONG    cxSrc;
LONG    cySrc;
} EMRTRANSPARENTBLT, *PEMRTRANSPARENTBLT;
#line 6033 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 6044 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall wglCopyContext(HGLRC, HGLRC, UINT);
__declspec(dllimport) HGLRC __stdcall wglCreateContext(HDC);
__declspec(dllimport) HGLRC __stdcall wglCreateLayerContext(HDC, int);
__declspec(dllimport) BOOL  __stdcall wglDeleteContext(HGLRC);
__declspec(dllimport) HGLRC __stdcall wglGetCurrentContext(void);
__declspec(dllimport) HDC   __stdcall wglGetCurrentDC(void);
__declspec(dllimport) PROC  __stdcall wglGetProcAddress(LPCSTR);
__declspec(dllimport) BOOL  __stdcall wglMakeCurrent(HDC, HGLRC);
__declspec(dllimport) BOOL  __stdcall wglShareLists(HGLRC, HGLRC);
__declspec(dllimport) BOOL  __stdcall wglUseFontBitmapsA(HDC, DWORD, DWORD, DWORD);
__declspec(dllimport) BOOL  __stdcall wglUseFontBitmapsW(HDC, DWORD, DWORD, DWORD);
#line 6064 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
__declspec(dllimport) BOOL  __stdcall SwapBuffers(HDC);
typedef struct _POINTFLOAT {
FLOAT   x;
FLOAT   y;
} POINTFLOAT, *PPOINTFLOAT;
typedef struct _GLYPHMETRICSFLOAT {
FLOAT       gmfBlackBoxX;
FLOAT       gmfBlackBoxY;
POINTFLOAT  gmfptGlyphOrigin;
FLOAT       gmfCellIncX;
FLOAT       gmfCellIncY;
} GLYPHMETRICSFLOAT, *PGLYPHMETRICSFLOAT,  *LPGLYPHMETRICSFLOAT;
__declspec(dllimport) BOOL  __stdcall wglUseFontOutlinesA(HDC, DWORD, DWORD, DWORD, FLOAT,
FLOAT, int, LPGLYPHMETRICSFLOAT);
__declspec(dllimport) BOOL  __stdcall wglUseFontOutlinesW(HDC, DWORD, DWORD, DWORD, FLOAT,
FLOAT, int, LPGLYPHMETRICSFLOAT);
#line 6090 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
typedef struct tagLAYERPLANEDESCRIPTOR { 
WORD  nSize;
WORD  nVersion;
DWORD dwFlags;
BYTE  iPixelType;
BYTE  cColorBits;
BYTE  cRedBits;
BYTE  cRedShift;
BYTE  cGreenBits;
BYTE  cGreenShift;
BYTE  cBlueBits;
BYTE  cBlueShift;
BYTE  cAlphaBits;
BYTE  cAlphaShift;
BYTE  cAccumBits;
BYTE  cAccumRedBits;
BYTE  cAccumGreenBits;
BYTE  cAccumBlueBits;
BYTE  cAccumAlphaBits;
BYTE  cDepthBits;
BYTE  cStencilBits;
BYTE  cAuxBuffers;
BYTE  iLayerPlane;
BYTE  bReserved;
COLORREF crTransparent;
} LAYERPLANEDESCRIPTOR, *PLAYERPLANEDESCRIPTOR,  *LPLAYERPLANEDESCRIPTOR;
__declspec(dllimport) BOOL  __stdcall wglDescribeLayerPlane(HDC, int, int, UINT,
LPLAYERPLANEDESCRIPTOR);
__declspec(dllimport) int   __stdcall wglSetLayerPaletteEntries(HDC, int, int, int,
const COLORREF *);
__declspec(dllimport) int   __stdcall wglGetLayerPaletteEntries(HDC, int, int, int,
COLORREF *);
__declspec(dllimport) BOOL  __stdcall wglRealizeLayerPalette(HDC, int, BOOL);
__declspec(dllimport) BOOL  __stdcall wglSwapLayerBuffers(HDC, UINT);
typedef struct _WGLSWAP
{
HDC hdc;
UINT uiFlags;
} WGLSWAP, *PWGLSWAP,  *LPWGLSWAP;
__declspec(dllimport) DWORD __stdcall wglSwapMultipleBuffers(UINT, const WGLSWAP *);
#line 6189 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 6191 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 6194 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma region Desktop Family
#line 6200 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#pragma endregion
#pragma warning(pop)
#line 6209 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 6211 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wingdi.h"
#line 167 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma once
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 38 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 56 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef HANDLE HDWP;
typedef void MENUTEMPLATEA;
typedef void MENUTEMPLATEW;
typedef MENUTEMPLATEW MENUTEMPLATE;
#line 70 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef PVOID LPMENUTEMPLATEA;
typedef PVOID LPMENUTEMPLATEW;
typedef LPMENUTEMPLATEW LPMENUTEMPLATE;
#line 77 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef LRESULT (__stdcall* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
#line 81 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Application Family
typedef INT_PTR (__stdcall* DLGPROC)(HWND, UINT, WPARAM, LPARAM);
#line 91 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef void (__stdcall* TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);
typedef BOOL (__stdcall* GRAYSTRINGPROC)(HDC, LPARAM, int);
typedef BOOL (__stdcall* WNDENUMPROC)(HWND, LPARAM);
typedef LRESULT (__stdcall* HOOKPROC)(int code, WPARAM wParam, LPARAM lParam);
typedef void (__stdcall* SENDASYNCPROC)(HWND, UINT, ULONG_PTR, LRESULT);
typedef BOOL (__stdcall* PROPENUMPROCA)(HWND, LPCSTR, HANDLE);
typedef BOOL (__stdcall* PROPENUMPROCW)(HWND, LPCWSTR, HANDLE);
typedef BOOL (__stdcall* PROPENUMPROCEXA)(HWND, LPSTR, HANDLE, ULONG_PTR);
typedef BOOL (__stdcall* PROPENUMPROCEXW)(HWND, LPWSTR, HANDLE, ULONG_PTR);
typedef int (__stdcall* EDITWORDBREAKPROCA)(LPSTR lpch, int ichCurrent, int cch, int code);
typedef int (__stdcall* EDITWORDBREAKPROCW)(LPWSTR lpch, int ichCurrent, int cch, int code);
typedef BOOL (__stdcall* DRAWSTATEPROC)(HDC hdc, LPARAM lData, WPARAM wData, int cx, int cy);
#line 114 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 117 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 156 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef PROPENUMPROCW        PROPENUMPROC;
typedef PROPENUMPROCEXW      PROPENUMPROCEX;
typedef EDITWORDBREAKPROCW   EDITWORDBREAKPROC;
#line 169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef BOOL (__stdcall* NAMEENUMPROCA)(LPSTR, LPARAM);
typedef BOOL (__stdcall* NAMEENUMPROCW)(LPWSTR, LPARAM);
typedef NAMEENUMPROCA   WINSTAENUMPROCA;
typedef NAMEENUMPROCA   DESKTOPENUMPROCA;
typedef NAMEENUMPROCW   WINSTAENUMPROCW;
typedef NAMEENUMPROCW   DESKTOPENUMPROCW;
#line 192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef WINSTAENUMPROCW     WINSTAENUMPROC;
typedef DESKTOPENUMPROCW    DESKTOPENUMPROC;
#line 203 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 205 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 215 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 244 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 260 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 263 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma warning(push)
#pragma warning(disable:4995)
#line 268 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
wvsprintfA(
LPSTR,
LPCSTR,
va_list arglist);
__declspec(dllimport)
int
__stdcall
wvsprintfW(
LPWSTR,
LPCWSTR,
va_list arglist);
#line 291 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__cdecl
wsprintfA(
LPSTR,
LPCSTR,
...);
__declspec(dllimport)
int
__cdecl
wsprintfW(
LPWSTR,
LPCWSTR,
...);
#line 311 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma warning(pop)
#line 315 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 317 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 355 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 398 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 414 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 441 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 610 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 652 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 659 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 697 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 716 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 722 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 727 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 734 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 737 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagCBT_CREATEWNDA
{
struct tagCREATESTRUCTA *lpcs;
HWND           hwndInsertAfter;
} CBT_CREATEWNDA, *LPCBT_CREATEWNDA;
typedef struct tagCBT_CREATEWNDW
{
struct tagCREATESTRUCTW *lpcs;
HWND           hwndInsertAfter;
} CBT_CREATEWNDW, *LPCBT_CREATEWNDW;
typedef CBT_CREATEWNDW CBT_CREATEWND;
typedef LPCBT_CREATEWNDW LPCBT_CREATEWND;
#line 792 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagCBTACTIVATESTRUCT
{
BOOL    fMouse;
HWND    hWndActive;
} CBTACTIVATESTRUCT, *LPCBTACTIVATESTRUCT;
#line 803 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagWTSSESSION_NOTIFICATION
{
DWORD cbSize;
DWORD dwSessionId;
} WTSSESSION_NOTIFICATION, *PWTSSESSION_NOTIFICATION;
#line 821 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 840 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 868 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 872 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 877 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 882 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 943 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 947 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 959 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct
{
HWND    hwnd;
RECT    rc;
} SHELLHOOKINFO, *LPSHELLHOOKINFO;
typedef struct tagEVENTMSG {
UINT    message;
UINT    paramL;
UINT    paramH;
DWORD    time;
HWND     hwnd;
} EVENTMSG, *PEVENTMSGMSG,  *NPEVENTMSGMSG,  *LPEVENTMSGMSG;
typedef struct tagEVENTMSG *PEVENTMSG,  *NPEVENTMSG,  *LPEVENTMSG;
typedef struct tagCWPSTRUCT {
LPARAM  lParam;
WPARAM  wParam;
UINT    message;
HWND    hwnd;
} CWPSTRUCT, *PCWPSTRUCT,  *NPCWPSTRUCT,  *LPCWPSTRUCT;
typedef struct tagCWPRETSTRUCT {
LRESULT lResult;
LPARAM  lParam;
WPARAM  wParam;
UINT    message;
HWND    hwnd;
} CWPRETSTRUCT, *PCWPRETSTRUCT,  *NPCWPRETSTRUCT,  *LPCWPRETSTRUCT;
#line 1005 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1007 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagKBDLLHOOKSTRUCT {
DWORD   vkCode;
DWORD   scanCode;
DWORD   flags;
DWORD   time;
ULONG_PTR dwExtraInfo;
} KBDLLHOOKSTRUCT,  *LPKBDLLHOOKSTRUCT, *PKBDLLHOOKSTRUCT;
typedef struct tagMSLLHOOKSTRUCT {
POINT   pt;
DWORD   mouseData;
DWORD   flags;
DWORD   time;
ULONG_PTR dwExtraInfo;
} MSLLHOOKSTRUCT,  *LPMSLLHOOKSTRUCT, *PMSLLHOOKSTRUCT;
#line 1048 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1051 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagDEBUGHOOKINFO
{
DWORD   idThread;
DWORD   idThreadInstaller;
LPARAM  lParam;
WPARAM  wParam;
int     code;
} DEBUGHOOKINFO, *PDEBUGHOOKINFO,  *NPDEBUGHOOKINFO, * LPDEBUGHOOKINFO;
typedef struct tagMOUSEHOOKSTRUCT {
POINT   pt;
HWND    hwnd;
UINT    wHitTestCode;
ULONG_PTR dwExtraInfo;
} MOUSEHOOKSTRUCT,  *LPMOUSEHOOKSTRUCT, *PMOUSEHOOKSTRUCT;
typedef struct tagMOUSEHOOKSTRUCTEX
{
MOUSEHOOKSTRUCT;
DWORD   mouseData;
} MOUSEHOOKSTRUCTEX, *LPMOUSEHOOKSTRUCTEX, *PMOUSEHOOKSTRUCTEX;
#line 1090 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1091 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagHARDWAREHOOKSTRUCT {
HWND    hwnd;
UINT    message;
WPARAM  wParam;
LPARAM  lParam;
} HARDWAREHOOKSTRUCT,  *LPHARDWAREHOOKSTRUCT, *PHARDWAREHOOKSTRUCT;
#line 1103 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1105 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1108 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1123 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1128 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1138 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HKL
__stdcall
LoadKeyboardLayoutA(
LPCSTR pwszKLID,
UINT Flags);
__declspec(dllimport)
HKL
__stdcall
LoadKeyboardLayoutW(
LPCWSTR pwszKLID,
UINT Flags);
#line 1164 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HKL
__stdcall
ActivateKeyboardLayout(
HKL hkl,
UINT Flags);
#line 1181 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
ToUnicodeEx(
UINT wVirtKey,
UINT wScanCode,
const BYTE *lpKeyState,
LPWSTR pwszBuff,
int cchBuff,
UINT wFlags,
HKL dwhkl);
#line 1195 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UnloadKeyboardLayout(
HKL hkl);
__declspec(dllimport)
BOOL
__stdcall
GetKeyboardLayoutNameA(
LPSTR pwszKLID);
__declspec(dllimport)
BOOL
__stdcall
GetKeyboardLayoutNameW(
LPWSTR pwszKLID);
#line 1217 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
GetKeyboardLayoutList(
int nBuff,
HKL  *lpList);
__declspec(dllimport)
HKL
__stdcall
GetKeyboardLayout(
DWORD idThread);
#line 1233 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagMOUSEMOVEPOINT {
int   x;
int   y;
DWORD time;
ULONG_PTR dwExtraInfo;
} MOUSEMOVEPOINT, *PMOUSEMOVEPOINT, * LPMOUSEMOVEPOINT;
#line 1251 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
GetMouseMovePointsEx(
UINT cbSize,
LPMOUSEMOVEPOINT lppt,
LPMOUSEMOVEPOINT lpptBuf,
int nBufPoints,
DWORD resolution);
#line 1273 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1276 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HDESK
__stdcall
CreateDesktopA(
LPCSTR lpszDesktop,
LPCSTR lpszDevice,
DEVMODEA* pDevmode,
DWORD dwFlags,
ACCESS_MASK dwDesiredAccess,
LPSECURITY_ATTRIBUTES lpsa);
__declspec(dllimport)
HDESK
__stdcall
CreateDesktopW(
LPCWSTR lpszDesktop,
LPCWSTR lpszDevice,
DEVMODEW* pDevmode,
DWORD dwFlags,
ACCESS_MASK dwDesiredAccess,
LPSECURITY_ATTRIBUTES lpsa);
#line 1327 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HDESK
__stdcall
CreateDesktopExA(
LPCSTR lpszDesktop,
LPCSTR lpszDevice,
DEVMODEA* pDevmode,
DWORD dwFlags,
ACCESS_MASK dwDesiredAccess,
LPSECURITY_ATTRIBUTES lpsa,
ULONG ulHeapSize,
PVOID pvoid);
__declspec(dllimport)
HDESK
__stdcall
CreateDesktopExW(
LPCWSTR lpszDesktop,
LPCWSTR lpszDevice,
DEVMODEW* pDevmode,
DWORD dwFlags,
ACCESS_MASK dwDesiredAccess,
LPSECURITY_ATTRIBUTES lpsa,
ULONG ulHeapSize,
PVOID pvoid);
#line 1357 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1359 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1362 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1363 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HDESK
__stdcall
OpenDesktopA(
LPCSTR lpszDesktop,
DWORD dwFlags,
BOOL fInherit,
ACCESS_MASK dwDesiredAccess);
__declspec(dllimport)
HDESK
__stdcall
OpenDesktopW(
LPCWSTR lpszDesktop,
DWORD dwFlags,
BOOL fInherit,
ACCESS_MASK dwDesiredAccess);
#line 1388 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HDESK
__stdcall
OpenInputDesktop(
DWORD dwFlags,
BOOL fInherit,
ACCESS_MASK dwDesiredAccess);
__declspec(dllimport)
BOOL
__stdcall
EnumDesktopsA(
HWINSTA hwinsta,
DESKTOPENUMPROCA lpEnumFunc,
LPARAM lParam);
__declspec(dllimport)
BOOL
__stdcall
EnumDesktopsW(
HWINSTA hwinsta,
DESKTOPENUMPROCW lpEnumFunc,
LPARAM lParam);
#line 1417 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
EnumDesktopWindows(
HDESK hDesktop,
WNDENUMPROC lpfn,
LPARAM lParam);
__declspec(dllimport)
BOOL
__stdcall
SwitchDesktop(
HDESK hDesktop);
__declspec(dllimport)
BOOL
__stdcall
SetThreadDesktop(
HDESK hDesktop);
__declspec(dllimport)
BOOL
__stdcall
CloseDesktop(
HDESK hDesktop);
__declspec(dllimport)
HDESK
__stdcall
GetThreadDesktop(
DWORD dwThreadId);
#line 1453 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1456 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HWINSTA
__stdcall
CreateWindowStationA(
LPCSTR lpwinsta,
DWORD dwFlags,
ACCESS_MASK dwDesiredAccess,
LPSECURITY_ATTRIBUTES lpsa);
__declspec(dllimport)
HWINSTA
__stdcall
CreateWindowStationW(
LPCWSTR lpwinsta,
DWORD dwFlags,
ACCESS_MASK dwDesiredAccess,
LPSECURITY_ATTRIBUTES lpsa);
#line 1509 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWINSTA
__stdcall
OpenWindowStationA(
LPCSTR lpszWinSta,
BOOL fInherit,
ACCESS_MASK dwDesiredAccess);
__declspec(dllimport)
HWINSTA
__stdcall
OpenWindowStationW(
LPCWSTR lpszWinSta,
BOOL fInherit,
ACCESS_MASK dwDesiredAccess);
#line 1529 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
EnumWindowStationsA(
WINSTAENUMPROCA lpEnumFunc,
LPARAM lParam);
__declspec(dllimport)
BOOL
__stdcall
EnumWindowStationsW(
WINSTAENUMPROCW lpEnumFunc,
LPARAM lParam);
#line 1547 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
CloseWindowStation(
HWINSTA hWinSta);
__declspec(dllimport)
BOOL
__stdcall
SetProcessWindowStation(
HWINSTA hWinSta);
__declspec(dllimport)
HWINSTA
__stdcall
GetProcessWindowStation(
void);
#line 1567 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1570 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetUserObjectSecurity(
HANDLE hObj,
PSECURITY_INFORMATION pSIRequested,
PSECURITY_DESCRIPTOR pSID);
__declspec(dllimport)
BOOL
__stdcall
GetUserObjectSecurity(
HANDLE hObj,
PSECURITY_INFORMATION pSIRequested,
PSECURITY_DESCRIPTOR pSID,
DWORD nLength,
LPDWORD lpnLengthNeeded);
#line 1595 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1605 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagUSEROBJECTFLAGS {
BOOL fInherit;
BOOL fReserved;
DWORD dwFlags;
} USEROBJECTFLAGS, *PUSEROBJECTFLAGS;
__declspec(dllimport)
BOOL
__stdcall
GetUserObjectInformationA(
HANDLE hObj,
int nIndex,
PVOID pvInfo,
DWORD nLength,
LPDWORD lpnLengthNeeded);
__declspec(dllimport)
BOOL
__stdcall
GetUserObjectInformationW(
HANDLE hObj,
int nIndex,
PVOID pvInfo,
DWORD nLength,
LPDWORD lpnLengthNeeded);
#line 1638 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SetUserObjectInformationA(
HANDLE hObj,
int nIndex,
PVOID pvInfo,
DWORD nLength);
__declspec(dllimport)
BOOL
__stdcall
SetUserObjectInformationW(
HANDLE hObj,
int nIndex,
PVOID pvInfo,
DWORD nLength);
#line 1660 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1662 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1665 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagWNDCLASSEXA {
UINT        cbSize;
UINT        style;
WNDPROC     lpfnWndProc;
int         cbClsExtra;
int         cbWndExtra;
HINSTANCE   hInstance;
HICON       hIcon;
HCURSOR     hCursor;
HBRUSH      hbrBackground;
LPCSTR      lpszMenuName;
LPCSTR      lpszClassName;
HICON       hIconSm;
} WNDCLASSEXA, *PWNDCLASSEXA,  *NPWNDCLASSEXA,  *LPWNDCLASSEXA;
typedef struct tagWNDCLASSEXW {
UINT        cbSize;
UINT        style;
WNDPROC     lpfnWndProc;
int         cbClsExtra;
int         cbWndExtra;
HINSTANCE   hInstance;
HICON       hIcon;
HCURSOR     hCursor;
HBRUSH      hbrBackground;
LPCWSTR     lpszMenuName;
LPCWSTR     lpszClassName;
HICON       hIconSm;
} WNDCLASSEXW, *PWNDCLASSEXW,  *NPWNDCLASSEXW,  *LPWNDCLASSEXW;
typedef WNDCLASSEXW WNDCLASSEX;
typedef PWNDCLASSEXW PWNDCLASSEX;
typedef NPWNDCLASSEXW NPWNDCLASSEX;
typedef LPWNDCLASSEXW LPWNDCLASSEX;
#line 1713 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1714 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagWNDCLASSA {
UINT        style;
WNDPROC     lpfnWndProc;
int         cbClsExtra;
int         cbWndExtra;
HINSTANCE   hInstance;
HICON       hIcon;
HCURSOR     hCursor;
HBRUSH      hbrBackground;
LPCSTR      lpszMenuName;
LPCSTR      lpszClassName;
} WNDCLASSA, *PWNDCLASSA,  *NPWNDCLASSA,  *LPWNDCLASSA;
typedef struct tagWNDCLASSW {
UINT        style;
WNDPROC     lpfnWndProc;
int         cbClsExtra;
int         cbWndExtra;
HINSTANCE   hInstance;
HICON       hIcon;
HCURSOR     hCursor;
HBRUSH      hbrBackground;
LPCWSTR     lpszMenuName;
LPCWSTR     lpszClassName;
} WNDCLASSW, *PWNDCLASSW,  *NPWNDCLASSW,  *LPWNDCLASSW;
typedef WNDCLASSW WNDCLASS;
typedef PWNDCLASSW PWNDCLASS;
typedef NPWNDCLASSW NPWNDCLASS;
typedef LPWNDCLASSW LPWNDCLASS;
#line 1750 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
IsHungAppWindow(
HWND hwnd);
__declspec(dllimport)
void
__stdcall
DisableProcessWindowsGhosting(
void);
#line 1765 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1767 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Application Family
typedef struct tagMSG {
HWND        hwnd;
UINT        message;
WPARAM      wParam;
LPARAM      lParam;
DWORD       time;
POINT       pt;
} MSG, *PMSG,  *NPMSG,  *LPMSG;
#line 1791 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1804 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1850 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1872 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1908 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1916 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagMINMAXINFO {
POINT ptReserved;
POINT ptMaxSize;
POINT ptMaxPosition;
POINT ptMinTrackSize;
POINT ptMaxTrackSize;
} MINMAXINFO, *PMINMAXINFO, *LPMINMAXINFO;
#line 1945 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1966 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1967 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagCOPYDATASTRUCT {
ULONG_PTR dwData;
DWORD cbData;
PVOID lpData;
} COPYDATASTRUCT, *PCOPYDATASTRUCT;
typedef struct tagMDINEXTMENU
{
HMENU   hmenuIn;
HMENU   hmenuNext;
HWND    hwndNext;
} MDINEXTMENU, * PMDINEXTMENU,  * LPMDINEXTMENU;
#line 2006 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2008 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 2032 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2043 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2061 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2066 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2070 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2087 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2094 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2107 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2140 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2141 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2143 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2168 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2176 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2180 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2186 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2196 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2207 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2267 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2268 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2270 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2274 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2302 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2318 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2328 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2331 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2335 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2340 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2344 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2351 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2376 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2380 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2389 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2396 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2401 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2406 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2415 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2423 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2444 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2481 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2492 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2495 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2497 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2499 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2516 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
UINT
__stdcall
RegisterWindowMessageA(
LPCSTR lpString);
__declspec(dllimport)
UINT
__stdcall
RegisterWindowMessageW(
LPCWSTR lpString);
#line 2536 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2538 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagWINDOWPOS {
HWND    hwnd;
HWND    hwndInsertAfter;
int     x;
int     y;
int     cx;
int     cy;
UINT    flags;
} WINDOWPOS, *LPWINDOWPOS, *PWINDOWPOS;
typedef struct tagNCCALCSIZE_PARAMS {
RECT       rgrc[3];
PWINDOWPOS lppos;
} NCCALCSIZE_PARAMS, *LPNCCALCSIZE_PARAMS;
#line 2585 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 2615 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2617 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2627 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2633 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagTRACKMOUSEEVENT {
DWORD cbSize;
DWORD dwFlags;
HWND  hwndTrack;
DWORD dwHoverTime;
} TRACKMOUSEEVENT, *LPTRACKMOUSEEVENT;
__declspec(dllimport)
BOOL
__stdcall
TrackMouseEvent(
LPTRACKMOUSEEVENT lpEventTrack);
#line 2653 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 2656 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2660 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2661 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2664 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2731 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2749 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2754 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2759 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2763 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2767 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2771 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2774 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2795 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2799 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DrawEdge(
HDC hdc,
LPRECT qrc,
UINT edge,
UINT grfFlags);
#line 2867 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 2878 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2912 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DrawFrameControl(
HDC,
LPRECT,
UINT,
UINT);
#line 2931 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 2943 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 2946 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DrawCaption(
HWND hwnd,
HDC hdc,
const RECT * lprect,
UINT flags);
#line 2961 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DrawAnimatedRects(
HWND hwnd,
int idAni,
const RECT *lprcFrom,
const RECT *lprcTo);
#line 2979 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 2982 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3007 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3010 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3018 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3039 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagACCEL {
BYTE   fVirt;               
WORD   key;
WORD   cmd;
#line 3062 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
} ACCEL, *LPACCEL;
typedef struct tagPAINTSTRUCT {
HDC         hdc;
BOOL        fErase;
RECT        rcPaint;
BOOL        fRestore;
BOOL        fIncUpdate;
BYTE        rgbReserved[32];
} PAINTSTRUCT, *PPAINTSTRUCT, *NPPAINTSTRUCT, *LPPAINTSTRUCT;
typedef struct tagCREATESTRUCTA {
LPVOID      lpCreateParams;
HINSTANCE   hInstance;
HMENU       hMenu;
HWND        hwndParent;
int         cy;
int         cx;
int         y;
int         x;
LONG        style;
LPCSTR      lpszName;
LPCSTR      lpszClass;
DWORD       dwExStyle;
} CREATESTRUCTA, *LPCREATESTRUCTA;
typedef struct tagCREATESTRUCTW {
LPVOID      lpCreateParams;
HINSTANCE   hInstance;
HMENU       hMenu;
HWND        hwndParent;
int         cy;
int         cx;
int         y;
int         x;
LONG        style;
LPCWSTR     lpszName;
LPCWSTR     lpszClass;
DWORD       dwExStyle;
} CREATESTRUCTW, *LPCREATESTRUCTW;
typedef CREATESTRUCTW CREATESTRUCT;
typedef LPCREATESTRUCTW LPCREATESTRUCT;
#line 3108 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagWINDOWPLACEMENT {
UINT  length;
UINT  flags;
UINT  showCmd;
POINT ptMinPosition;
POINT ptMaxPosition;
RECT  rcNormalPosition;
} WINDOWPLACEMENT;
typedef WINDOWPLACEMENT *PWINDOWPLACEMENT, *LPWINDOWPLACEMENT;
#line 3127 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3129 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Application Family
typedef struct tagNMHDR
{
HWND      hwndFrom;
UINT_PTR  idFrom;
UINT      code;         
}   NMHDR;
#line 3144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef NMHDR  * LPNMHDR;
typedef struct tagSTYLESTRUCT
{
DWORD   styleOld;
DWORD   styleNew;
} STYLESTRUCT, * LPSTYLESTRUCT;
#line 3158 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 3160 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3172 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3199 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3200 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagMEASUREITEMSTRUCT {
UINT       CtlType;
UINT       CtlID;
UINT       itemID;
UINT       itemWidth;
UINT       itemHeight;
ULONG_PTR  itemData;
} MEASUREITEMSTRUCT,  *PMEASUREITEMSTRUCT,  *LPMEASUREITEMSTRUCT;
typedef struct tagDRAWITEMSTRUCT {
UINT        CtlType;
UINT        CtlID;
UINT        itemID;
UINT        itemAction;
UINT        itemState;
HWND        hwndItem;
HDC         hDC;
RECT        rcItem;
ULONG_PTR   itemData;
} DRAWITEMSTRUCT,  *PDRAWITEMSTRUCT,  *LPDRAWITEMSTRUCT;
typedef struct tagDELETEITEMSTRUCT {
UINT       CtlType;
UINT       CtlID;
UINT       itemID;
HWND       hwndItem;
ULONG_PTR  itemData;
} DELETEITEMSTRUCT,  *PDELETEITEMSTRUCT,  *LPDELETEITEMSTRUCT;
typedef struct tagCOMPAREITEMSTRUCT {
UINT        CtlType;
UINT        CtlID;
HWND        hwndItem;
UINT        itemID1;
ULONG_PTR   itemData1;
UINT        itemID2;
ULONG_PTR   itemData2;
DWORD       dwLocaleId;
} COMPAREITEMSTRUCT,  *PCOMPAREITEMSTRUCT,  *LPCOMPAREITEMSTRUCT;
#line 3257 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetMessageA(
LPMSG lpMsg,
HWND hWnd,
UINT wMsgFilterMin,
UINT wMsgFilterMax);
__declspec(dllimport)
BOOL
__stdcall
GetMessageW(
LPMSG lpMsg,
HWND hWnd,
UINT wMsgFilterMin,
UINT wMsgFilterMax);
#line 3289 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3313 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
TranslateMessage(
const MSG *lpMsg);
__declspec(dllimport)
LRESULT
__stdcall
DispatchMessageA(
const MSG *lpMsg);
__declspec(dllimport)
LRESULT
__stdcall
DispatchMessageW(
const MSG *lpMsg);
#line 3336 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3354 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SetMessageQueue(
int cMessagesMax);
__declspec(dllimport)
BOOL
__stdcall
PeekMessageA(
LPMSG lpMsg,
HWND hWnd,
UINT wMsgFilterMin,
UINT wMsgFilterMax,
UINT wRemoveMsg);
__declspec(dllimport)
BOOL
__stdcall
PeekMessageW(
LPMSG lpMsg,
HWND hWnd,
UINT wMsgFilterMin,
UINT wMsgFilterMax,
UINT wRemoveMsg);
#line 3384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3386 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 3400 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3403 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
RegisterHotKey(
HWND hWnd,
int id,
UINT fsModifiers,
UINT vk);
__declspec(dllimport)
BOOL
__stdcall
UnregisterHotKey(
HWND hWnd,
int id);
#line 3424 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 3433 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3449 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3453 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3456 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3459 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3468 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3472 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
#line 3484 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
ExitWindowsEx(
UINT uFlags,
DWORD dwReason);
__declspec(dllimport)
BOOL
__stdcall
SwapMouseButton(
BOOL fSwap);
__declspec(dllimport)
DWORD
__stdcall
GetMessagePos(
void);
__declspec(dllimport)
LONG
__stdcall
GetMessageTime(
void);
__declspec(dllimport)
LPARAM
__stdcall
GetMessageExtraInfo(
void);
#line 3522 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
IsWow64Message(
void);
#line 3530 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LPARAM
__stdcall
SetMessageExtraInfo(
LPARAM lParam);
#line 3538 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LRESULT
__stdcall
SendMessageA(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
LRESULT
__stdcall
SendMessageW(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 3560 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3584 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LRESULT
__stdcall
SendMessageTimeoutA(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam,
UINT fuFlags,
UINT uTimeout,
PDWORD_PTR lpdwResult);
__declspec(dllimport)
LRESULT
__stdcall
SendMessageTimeoutW(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam,
UINT fuFlags,
UINT uTimeout,
PDWORD_PTR lpdwResult);
#line 3614 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SendNotifyMessageA(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
BOOL
__stdcall
SendNotifyMessageW(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 3636 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SendMessageCallbackA(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam,
SENDASYNCPROC lpResultCallBack,
ULONG_PTR dwData);
__declspec(dllimport)
BOOL
__stdcall
SendMessageCallbackW(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam,
SENDASYNCPROC lpResultCallBack,
ULONG_PTR dwData);
#line 3662 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct {
UINT  cbSize;
HDESK hdesk;
HWND  hwnd;
LUID  luid;
} BSMINFO, *PBSMINFO;
__declspec(dllimport)
long
__stdcall
BroadcastSystemMessageExA(
DWORD flags,
LPDWORD lpInfo,
UINT Msg,
WPARAM wParam,
LPARAM lParam,
PBSMINFO pbsmInfo);
__declspec(dllimport)
long
__stdcall
BroadcastSystemMessageExW(
DWORD flags,
LPDWORD lpInfo,
UINT Msg,
WPARAM wParam,
LPARAM lParam,
PBSMINFO pbsmInfo);
#line 3696 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3697 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3699 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
long
__stdcall
BroadcastSystemMessageA(
DWORD flags,
LPDWORD lpInfo,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
long
__stdcall
BroadcastSystemMessageW(
DWORD flags,
LPDWORD lpInfo,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 3730 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3743 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3745 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 3767 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3771 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3774 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef  PVOID           HDEVNOTIFY;
typedef  HDEVNOTIFY     *PHDEVNOTIFY;
#line 3789 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HDEVNOTIFY
__stdcall
RegisterDeviceNotificationA(
HANDLE hRecipient,
LPVOID NotificationFilter,
DWORD Flags);
__declspec(dllimport)
HDEVNOTIFY
__stdcall
RegisterDeviceNotificationW(
HANDLE hRecipient,
LPVOID NotificationFilter,
DWORD Flags);
#line 3809 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UnregisterDeviceNotification(
HDEVNOTIFY Handle
);
#line 3861 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3862 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3864 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
PostMessageA(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
BOOL
__stdcall
PostMessageW(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 3892 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
PostThreadMessageA(
DWORD idThread,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
BOOL
__stdcall
PostThreadMessageW(
DWORD idThread,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 3914 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3916 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 3927 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 3936 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
AttachThreadInput(
DWORD idAttach,
DWORD idAttachTo,
BOOL fAttach);
__declspec(dllimport)
BOOL
__stdcall
ReplyMessage(
LRESULT lResult);
__declspec(dllimport)
BOOL
__stdcall
WaitMessage(
void);
#line 3963 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
DWORD
__stdcall
WaitForInputIdle(
HANDLE hProcess,
DWORD dwMilliseconds);
__declspec(dllimport)
LRESULT
__stdcall
#line 3980 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
DefWindowProcA(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
LRESULT
__stdcall
#line 3993 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
DefWindowProcW(
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 4003 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
void
__stdcall
PostQuitMessage(
int nExitCode);
__declspec(dllimport)
LRESULT
__stdcall
CallWindowProcA(
WNDPROC lpPrevWndFunc,
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
LRESULT
__stdcall
CallWindowProcW(
WNDPROC lpPrevWndFunc,
HWND hWnd,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 4036 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4064 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
InSendMessage(
void);
#line 4072 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
InSendMessageEx(
LPVOID lpReserved);
#line 4086 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 4097 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
UINT
__stdcall
GetDoubleClickTime(
void);
__declspec(dllimport)
BOOL
__stdcall
SetDoubleClickTime(
UINT);
__declspec(dllimport)
ATOM
__stdcall
RegisterClassA(
const WNDCLASSA *lpWndClass);
__declspec(dllimport)
ATOM
__stdcall
RegisterClassW(
const WNDCLASSW *lpWndClass);
#line 4129 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UnregisterClassA(
LPCSTR lpClassName,
HINSTANCE hInstance);
__declspec(dllimport)
BOOL
__stdcall
UnregisterClassW(
LPCWSTR lpClassName,
HINSTANCE hInstance);
#line 4147 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetClassInfoA(
HINSTANCE hInstance,
LPCSTR lpClassName,
LPWNDCLASSA lpWndClass);
__declspec(dllimport)
BOOL
__stdcall
GetClassInfoW(
HINSTANCE hInstance,
LPCWSTR lpClassName,
LPWNDCLASSW lpWndClass);
#line 4169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
ATOM
__stdcall
RegisterClassExA(
const WNDCLASSEXA *);
__declspec(dllimport)
ATOM
__stdcall
RegisterClassExW(
const WNDCLASSEXW *);
#line 4186 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetClassInfoExA(
HINSTANCE hInstance,
LPCSTR lpszClass,
LPWNDCLASSEXA lpwcx);
__declspec(dllimport)
BOOL
__stdcall
GetClassInfoExW(
HINSTANCE hInstance,
LPCWSTR lpszClass,
LPWNDCLASSEXW lpwcx);
#line 4208 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4210 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4212 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef BOOLEAN (__stdcall * PREGISTERCLASSNAMEW)(LPCWSTR);
#line 4227 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
CreateWindowExA(
DWORD dwExStyle,
LPCSTR lpClassName,
LPCSTR lpWindowName,
DWORD dwStyle,
int X,
int Y,
int nWidth,
int nHeight,
HWND hWndParent,
HMENU hMenu,
HINSTANCE hInstance,
LPVOID lpParam);
__declspec(dllimport)
HWND
__stdcall
CreateWindowExW(
DWORD dwExStyle,
LPCWSTR lpClassName,
LPCWSTR lpWindowName,
DWORD dwStyle,
int X,
int Y,
int nWidth,
int nHeight,
HWND hWndParent,
HMENU hMenu,
HINSTANCE hInstance,
LPVOID lpParam);
#line 4265 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4267 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 4282 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
IsWindow(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
IsMenu(
HMENU hMenu);
__declspec(dllimport)
BOOL
__stdcall
IsChild(
HWND hWndParent,
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
DestroyWindow(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
ShowWindow(
HWND hWnd,
int nCmdShow);
__declspec(dllimport)
BOOL
__stdcall
AnimateWindow(
HWND hWnd,
DWORD dwTime,
DWORD dwFlags);
#line 4329 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4331 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
UpdateLayeredWindow(
HWND hWnd,
HDC hdcDst,
POINT* pptDst,
SIZE* psize,
HDC hdcSrc,
POINT* pptSrc,
COLORREF crKey,
BLENDFUNCTION* pblend,
DWORD dwFlags);
typedef struct tagUPDATELAYEREDWINDOWINFO
{
DWORD cbSize;
HDC hdcDst;
const POINT* pptDst;
const SIZE* psize;
HDC hdcSrc;
const POINT* pptSrc;
COLORREF crKey;
const BLENDFUNCTION* pblend;
DWORD dwFlags;
const RECT* prcDirty;
} UPDATELAYEREDWINDOWINFO, *PUPDATELAYEREDWINDOWINFO;
typedef
#line 4374 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UpdateLayeredWindowIndirect(
HWND hWnd,
const UPDATELAYEREDWINDOWINFO* pULWInfo);
#line 4382 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 4385 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetLayeredWindowAttributes(
HWND hwnd,
COLORREF* pcrKey,
BYTE* pbAlpha,
DWORD* pdwFlags);
__declspec(dllimport)
BOOL
__stdcall
PrintWindow(
HWND hwnd,
HDC hdcBlt,
UINT nFlags);
#line 4412 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 4415 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetLayeredWindowAttributes(
HWND hwnd,
COLORREF crKey,
BYTE bAlpha,
DWORD dwFlags);
#line 4429 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 4442 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
ShowWindowAsync(
HWND hWnd,
int nCmdShow);
#line 4456 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
FlashWindow(
HWND hWnd,
BOOL bInvert);
typedef struct {
UINT  cbSize;
HWND  hwnd;
DWORD dwFlags;
UINT  uCount;
DWORD dwTimeout;
} FLASHWINFO, *PFLASHWINFO;
__declspec(dllimport)
BOOL
__stdcall
FlashWindowEx(
PFLASHWINFO pfwi);
#line 4487 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
ShowOwnedPopups(
HWND hWnd,
BOOL fShow);
__declspec(dllimport)
BOOL
__stdcall
OpenIcon(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
CloseWindow(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
MoveWindow(
HWND hWnd,
int X,
int Y,
int nWidth,
int nHeight,
BOOL bRepaint);
__declspec(dllimport)
BOOL
__stdcall
SetWindowPos(
HWND hWnd,
HWND hWndInsertAfter,
int X,
int Y,
int cx,
int cy,
UINT uFlags);
__declspec(dllimport)
BOOL
__stdcall
GetWindowPlacement(
HWND hWnd,
WINDOWPLACEMENT *lpwndpl);
__declspec(dllimport)
BOOL
__stdcall
SetWindowPlacement(
HWND hWnd,
const WINDOWPLACEMENT *lpwndpl);
#line 4564 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4566 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HDWP
__stdcall
BeginDeferWindowPos(
int nNumWindows);
__declspec(dllimport)
HDWP
__stdcall
DeferWindowPos(
HDWP hWinPosInfo,
HWND hWnd,
HWND hWndInsertAfter,
int x,
int y,
int cx,
int cy,
UINT uFlags);
__declspec(dllimport)
BOOL
__stdcall
EndDeferWindowPos(
HDWP hWinPosInfo);
#line 4600 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 4603 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
IsWindowVisible(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
IsIconic(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
AnyPopup(
void);
__declspec(dllimport)
BOOL
__stdcall
BringWindowToTop(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
IsZoomed(
HWND hWnd);
#line 4638 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 4662 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#pragma warning(disable:4103)
#pragma pack(push,2)
#line 30 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\pshpack2.h"
#line 4677 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Application Family
typedef struct {
DWORD style;
DWORD dwExtendedStyle;
WORD cdit;
short x;
short y;
short cx;
short cy;
} DLGTEMPLATE;
#line 4695 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef DLGTEMPLATE *LPDLGTEMPLATEA;
typedef DLGTEMPLATE *LPDLGTEMPLATEW;
typedef LPDLGTEMPLATEW LPDLGTEMPLATE;
#line 4707 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4709 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Application Family
typedef const DLGTEMPLATE *LPCDLGTEMPLATEA;
typedef const DLGTEMPLATE *LPCDLGTEMPLATEW;
typedef LPCDLGTEMPLATEW LPCDLGTEMPLATE;
#line 4721 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4723 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct {
DWORD style;
DWORD dwExtendedStyle;
short x;
short y;
short cx;
short cy;
WORD id;
} DLGITEMTEMPLATE;
typedef DLGITEMTEMPLATE *PDLGITEMTEMPLATEA;
typedef DLGITEMTEMPLATE *PDLGITEMTEMPLATEW;
typedef PDLGITEMTEMPLATEW PDLGITEMTEMPLATE;
#line 4748 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEA;
typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEW;
typedef LPDLGITEMTEMPLATEW LPDLGITEMTEMPLATE;
#line 4755 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4757 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#pragma warning(disable:4103)
#pragma pack(pop)
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\poppack.h"
#line 4761 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HWND
__stdcall
CreateDialogParamA(
HINSTANCE hInstance,
LPCSTR lpTemplateName,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
__declspec(dllimport)
HWND
__stdcall
CreateDialogParamW(
HINSTANCE hInstance,
LPCWSTR lpTemplateName,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
#line 4788 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
CreateDialogIndirectParamA(
HINSTANCE hInstance,
LPCDLGTEMPLATEA lpTemplate,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
__declspec(dllimport)
HWND
__stdcall
CreateDialogIndirectParamW(
HINSTANCE hInstance,
LPCDLGTEMPLATEW lpTemplate,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
#line 4812 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4822 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4832 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
INT_PTR
__stdcall
DialogBoxParamA(
HINSTANCE hInstance,
LPCSTR lpTemplateName,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
__declspec(dllimport)
INT_PTR
__stdcall
DialogBoxParamW(
HINSTANCE hInstance,
LPCWSTR lpTemplateName,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
#line 4856 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
INT_PTR
__stdcall
DialogBoxIndirectParamA(
HINSTANCE hInstance,
LPCDLGTEMPLATEA hDialogTemplate,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
__declspec(dllimport)
INT_PTR
__stdcall
DialogBoxIndirectParamW(
HINSTANCE hInstance,
LPCDLGTEMPLATEW hDialogTemplate,
HWND hWndParent,
DLGPROC lpDialogFunc,
LPARAM dwInitParam);
#line 4880 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4890 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 4900 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
EndDialog(
HWND hDlg,
INT_PTR nResult);
__declspec(dllimport)
HWND
__stdcall
GetDlgItem(
HWND hDlg,
int nIDDlgItem);
__declspec(dllimport)
BOOL
__stdcall
SetDlgItemInt(
HWND hDlg,
int nIDDlgItem,
UINT uValue,
BOOL bSigned);
__declspec(dllimport)
UINT
__stdcall
GetDlgItemInt(
HWND hDlg,
int nIDDlgItem,
BOOL *lpTranslated,
BOOL bSigned);
__declspec(dllimport)
BOOL
__stdcall
SetDlgItemTextA(
HWND hDlg,
int nIDDlgItem,
LPCSTR lpString);
__declspec(dllimport)
BOOL
__stdcall
SetDlgItemTextW(
HWND hDlg,
int nIDDlgItem,
LPCWSTR lpString);
#line 4952 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
GetDlgItemTextA(
HWND hDlg,
int nIDDlgItem,
LPSTR lpString,
int cchMax);
__declspec(dllimport)
UINT
__stdcall
GetDlgItemTextW(
HWND hDlg,
int nIDDlgItem,
LPWSTR lpString,
int cchMax);
#line 4976 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
CheckDlgButton(
HWND hDlg,
int nIDButton,
UINT uCheck);
__declspec(dllimport)
BOOL
__stdcall
CheckRadioButton(
HWND hDlg,
int nIDFirstButton,
int nIDLastButton,
int nIDCheckButton);
__declspec(dllimport)
UINT
__stdcall
IsDlgButtonChecked(
HWND hDlg,
int nIDButton);
__declspec(dllimport)
LRESULT
__stdcall
SendDlgItemMessageA(
HWND hDlg,
int nIDDlgItem,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
LRESULT
__stdcall
SendDlgItemMessageW(
HWND hDlg,
int nIDDlgItem,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 5024 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
GetNextDlgGroupItem(
HWND hDlg,
HWND hCtl,
BOOL bPrevious);
__declspec(dllimport)
HWND
__stdcall
GetNextDlgTabItem(
HWND hDlg,
HWND hCtl,
BOOL bPrevious);
__declspec(dllimport)
int
__stdcall
GetDlgCtrlID(
HWND hWnd);
__declspec(dllimport)
long
__stdcall
GetDialogBaseUnits(void);
__declspec(dllimport)
LRESULT
__stdcall
#line 5060 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
DefDlgProcA(
HWND hDlg,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
LRESULT
__stdcall
#line 5073 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
DefDlgProcW(
HWND hDlg,
UINT Msg,
WPARAM wParam,
LPARAM lParam);
#line 5083 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5085 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 5095 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5097 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CallMsgFilterA(
LPMSG lpMsg,
int nCode);
__declspec(dllimport)
BOOL
__stdcall
CallMsgFilterW(
LPMSG lpMsg,
int nCode);
#line 5120 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5122 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
OpenClipboard(
HWND hWndNewOwner);
__declspec(dllimport)
BOOL
__stdcall
CloseClipboard(
void);
__declspec(dllimport)
DWORD
__stdcall
GetClipboardSequenceNumber(
void);
#line 5151 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
GetClipboardOwner(
void);
__declspec(dllimport)
HWND
__stdcall
SetClipboardViewer(
HWND hWndNewViewer);
__declspec(dllimport)
HWND
__stdcall
GetClipboardViewer(
void);
__declspec(dllimport)
BOOL
__stdcall
ChangeClipboardChain(
HWND hWndRemove,
HWND hWndNewNext);
__declspec(dllimport)
HANDLE
__stdcall
SetClipboardData(
UINT uFormat,
HANDLE hMem);
__declspec(dllimport)
HANDLE
__stdcall
GetClipboardData(
UINT uFormat);
__declspec(dllimport)
UINT
__stdcall
RegisterClipboardFormatA(
LPCSTR lpszFormat);
__declspec(dllimport)
UINT
__stdcall
RegisterClipboardFormatW(
LPCWSTR lpszFormat);
#line 5205 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
CountClipboardFormats(
void);
__declspec(dllimport)
UINT
__stdcall
EnumClipboardFormats(
UINT format);
__declspec(dllimport)
int
__stdcall
GetClipboardFormatNameA(
UINT format,
LPSTR lpszFormatName,
int cchMaxCount);
__declspec(dllimport)
int
__stdcall
GetClipboardFormatNameW(
UINT format,
LPWSTR lpszFormatName,
int cchMaxCount);
#line 5237 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
EmptyClipboard(
void);
__declspec(dllimport)
BOOL
__stdcall
IsClipboardFormatAvailable(
UINT format);
__declspec(dllimport)
int
__stdcall
GetPriorityClipboardFormat(
UINT *paFormatPriorityList,
int cFormats);
__declspec(dllimport)
HWND
__stdcall
GetOpenClipboardWindow(
void);
#line 5284 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5286 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
CharToOemA(
LPCSTR pSrc,
LPSTR pDst);
__declspec(dllimport)
BOOL
__stdcall
CharToOemW(
LPCWSTR pSrc,
LPSTR pDst);
#line 5308 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
OemToCharA(
LPCSTR pSrc,
LPSTR pDst);
__declspec(dllimport)
BOOL
__stdcall
OemToCharW(
LPCSTR pSrc,
LPWSTR pDst);
#line 5328 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
CharToOemBuffA(
LPCSTR lpszSrc,
LPSTR lpszDst,
DWORD cchDstLength);
__declspec(dllimport)
BOOL
__stdcall
CharToOemBuffW(
LPCWSTR lpszSrc,
LPSTR lpszDst,
DWORD cchDstLength);
#line 5348 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
OemToCharBuffA(
LPCSTR lpszSrc,
LPSTR lpszDst,
DWORD cchDstLength);
__declspec(dllimport)
BOOL
__stdcall
OemToCharBuffW(
LPCSTR lpszSrc,
LPWSTR lpszDst,
DWORD cchDstLength);
#line 5368 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LPSTR
__stdcall
CharUpperA(
LPSTR lpsz);
__declspec(dllimport)
LPWSTR
__stdcall
CharUpperW(
LPWSTR lpsz);
#line 5384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
DWORD
__stdcall
CharUpperBuffA(
LPSTR lpsz,
DWORD cchLength);
__declspec(dllimport)
DWORD
__stdcall
CharUpperBuffW(
LPWSTR lpsz,
DWORD cchLength);
#line 5402 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LPSTR
__stdcall
CharLowerA(
LPSTR lpsz);
__declspec(dllimport)
LPWSTR
__stdcall
CharLowerW(
LPWSTR lpsz);
#line 5418 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
DWORD
__stdcall
CharLowerBuffA(
LPSTR lpsz,
DWORD cchLength);
__declspec(dllimport)
DWORD
__stdcall
CharLowerBuffW(
LPWSTR lpsz,
DWORD cchLength);
#line 5436 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LPSTR
__stdcall
CharNextA(
LPCSTR lpsz);
__declspec(dllimport)
LPWSTR
__stdcall
CharNextW(
LPCWSTR lpsz);
#line 5452 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LPSTR
__stdcall
CharPrevA(
LPCSTR lpszStart,
LPCSTR lpszCurrent);
__declspec(dllimport)
LPWSTR
__stdcall
CharPrevW(
LPCWSTR lpszStart,
LPCWSTR lpszCurrent);
#line 5470 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LPSTR
__stdcall
CharNextExA(
WORD CodePage,
LPCSTR lpCurrentChar,
DWORD dwFlags);
__declspec(dllimport)
LPSTR
__stdcall
CharPrevExA(
WORD CodePage,
LPCSTR lpStart,
LPCSTR lpCurrentChar,
DWORD dwFlags);
#line 5489 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5491 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
IsCharAlphaA(
CHAR ch);
__declspec(dllimport)
BOOL
__stdcall
IsCharAlphaW(
WCHAR ch);
#line 5530 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
IsCharAlphaNumericA(
CHAR ch);
__declspec(dllimport)
BOOL
__stdcall
IsCharAlphaNumericW(
WCHAR ch);
#line 5546 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
IsCharUpperA(
CHAR ch);
__declspec(dllimport)
BOOL
__stdcall
IsCharUpperW(
WCHAR ch);
#line 5562 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
IsCharLowerA(
CHAR ch);
__declspec(dllimport)
BOOL
__stdcall
IsCharLowerW(
WCHAR ch);
#line 5578 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5580 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
SetFocus(
HWND hWnd);
__declspec(dllimport)
HWND
__stdcall
GetActiveWindow(
void);
__declspec(dllimport)
HWND
__stdcall
GetFocus(
void);
__declspec(dllimport)
UINT
__stdcall
GetKBCodePage(
void);
__declspec(dllimport)
SHORT
__stdcall
GetKeyState(
int nVirtKey);
__declspec(dllimport)
SHORT
__stdcall
GetAsyncKeyState(
int vKey);
__declspec(dllimport)
BOOL
__stdcall
GetKeyboardState(
PBYTE lpKeyState);
__declspec(dllimport)
BOOL
__stdcall
SetKeyboardState(
LPBYTE lpKeyState);
__declspec(dllimport)
int
__stdcall
GetKeyNameTextA(
LONG lParam,
LPSTR lpString,
int cchSize);
__declspec(dllimport)
int
__stdcall
GetKeyNameTextW(
LONG lParam,
LPWSTR lpString,
int cchSize);
#line 5649 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
GetKeyboardType(
int nTypeFlag);
__declspec(dllimport)
int
__stdcall
ToAscii(
UINT uVirtKey,
UINT uScanCode,
const BYTE *lpKeyState,
LPWORD lpChar,
UINT uFlags);
__declspec(dllimport)
int
__stdcall
ToAsciiEx(
UINT uVirtKey,
UINT uScanCode,
const BYTE *lpKeyState,
LPWORD lpChar,
UINT uFlags,
HKL dwhkl);
#line 5678 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
ToUnicode(
UINT wVirtKey,
UINT wScanCode,
const BYTE *lpKeyState,
LPWSTR pwszBuff,
int cchBuff,
UINT wFlags);
__declspec(dllimport)
DWORD
__stdcall
OemKeyScan(
WORD wOemChar);
__declspec(dllimport)
SHORT
__stdcall
VkKeyScanA(
CHAR ch);
__declspec(dllimport)
SHORT
__stdcall
VkKeyScanW(
WCHAR ch);
#line 5711 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
SHORT
__stdcall
VkKeyScanExA(
CHAR ch,
HKL dwhkl);
__declspec(dllimport)
SHORT
__stdcall
VkKeyScanExW(
WCHAR ch,
HKL dwhkl);
#line 5730 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5731 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5737 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
void
__stdcall
keybd_event(
BYTE bVk,
BYTE bScan,
DWORD dwFlags,
ULONG_PTR dwExtraInfo);
#line 5748 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 5763 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5766 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
void
__stdcall
mouse_event(
DWORD dwFlags,
DWORD dx,
DWORD dy,
DWORD dwData,
ULONG_PTR dwExtraInfo);
#line 5783 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagMOUSEINPUT {
LONG    dx;
LONG    dy;
DWORD   mouseData;
DWORD   dwFlags;
DWORD   time;
ULONG_PTR dwExtraInfo;
} MOUSEINPUT, *PMOUSEINPUT, * LPMOUSEINPUT;
typedef struct tagKEYBDINPUT {
WORD    wVk;
WORD    wScan;
DWORD   dwFlags;
DWORD   time;
ULONG_PTR dwExtraInfo;
} KEYBDINPUT, *PKEYBDINPUT, * LPKEYBDINPUT;
typedef struct tagHARDWAREINPUT {
DWORD   uMsg;
WORD    wParamL;
WORD    wParamH;
} HARDWAREINPUT, *PHARDWAREINPUT, * LPHARDWAREINPUT;
typedef struct tagINPUT {
DWORD   type;
union
{
MOUSEINPUT      mi;
KEYBDINPUT      ki;
HARDWAREINPUT   hi;
};
} INPUT, *PINPUT, * LPINPUT;
__declspec(dllimport)
UINT
__stdcall
SendInput(
UINT cInputs,                     
LPINPUT pInputs,  
int cbSize);                      
#line 5837 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 5840 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 5960 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6394 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagLASTINPUTINFO {
UINT cbSize;
DWORD dwTime;
} LASTINPUTINFO, * PLASTINPUTINFO;
__declspec(dllimport)
BOOL
__stdcall
GetLastInputInfo(
PLASTINPUTINFO plii);
#line 6410 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
MapVirtualKeyA(
UINT uCode,
UINT uMapType);
__declspec(dllimport)
UINT
__stdcall
MapVirtualKeyW(
UINT uCode,
UINT uMapType);
#line 6428 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
MapVirtualKeyExA(
UINT uCode,
UINT uMapType,
HKL dwhkl);
__declspec(dllimport)
UINT
__stdcall
MapVirtualKeyExW(
UINT uCode,
UINT uMapType,
HKL dwhkl);
#line 6449 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6455 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6458 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetInputState(
void);
__declspec(dllimport)
DWORD
__stdcall
GetQueueStatus(
UINT flags);
__declspec(dllimport)
HWND
__stdcall
GetCapture(
void);
__declspec(dllimport)
HWND
__stdcall
SetCapture(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
ReleaseCapture(
void);
__declspec(dllimport)
DWORD
__stdcall
MsgWaitForMultipleObjects(
DWORD nCount,
const HANDLE *pHandles,
BOOL fWaitAll,
DWORD dwMilliseconds,
DWORD dwWakeMask);
__declspec(dllimport)
DWORD
__stdcall
MsgWaitForMultipleObjectsEx(
DWORD nCount,
const HANDLE *pHandles,
DWORD dwMilliseconds,
DWORD dwWakeMask,
DWORD dwFlags);
#line 6512 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 6534 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6540 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6553 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6561 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6562 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
UINT_PTR
__stdcall
SetTimer(
HWND hWnd,
UINT_PTR nIDEvent,
UINT uElapse,
TIMERPROC lpTimerFunc);
#line 6615 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
KillTimer(
HWND hWnd,
UINT_PTR uIDEvent);
__declspec(dllimport)
BOOL
__stdcall
IsWindowUnicode(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
EnableWindow(
HWND hWnd,
BOOL bEnable);
__declspec(dllimport)
BOOL
__stdcall
IsWindowEnabled(
HWND hWnd);
__declspec(dllimport)
HACCEL
__stdcall
LoadAcceleratorsA(
HINSTANCE hInstance,
LPCSTR lpTableName);
__declspec(dllimport)
HACCEL
__stdcall
LoadAcceleratorsW(
HINSTANCE hInstance,
LPCWSTR lpTableName);
#line 6659 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HACCEL
__stdcall
CreateAcceleratorTableA(
LPACCEL paccel,
int cAccel);
__declspec(dllimport)
HACCEL
__stdcall
CreateAcceleratorTableW(
LPACCEL paccel,
int cAccel);
#line 6677 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
DestroyAcceleratorTable(
HACCEL hAccel);
__declspec(dllimport)
int
__stdcall
CopyAcceleratorTableA(
HACCEL hAccelSrc,
LPACCEL lpAccelDst,
int cAccelEntries);
__declspec(dllimport)
int
__stdcall
CopyAcceleratorTableW(
HACCEL hAccelSrc,
LPACCEL lpAccelDst,
int cAccelEntries);
#line 6703 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
TranslateAcceleratorA(
HWND hWnd,
HACCEL hAccTable,
LPMSG lpMsg);
__declspec(dllimport)
int
__stdcall
TranslateAcceleratorW(
HWND hWnd,
HACCEL hAccTable,
LPMSG lpMsg);
#line 6725 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6727 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6729 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 6812 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6819 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6823 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6831 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6834 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6838 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6845 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6850 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6856 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6860 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6862 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6868 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6876 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6880 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6884 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6889 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 6891 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
GetSystemMetrics(
int nIndex);
#line 6904 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 6907 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HMENU
__stdcall
LoadMenuA(
HINSTANCE hInstance,
LPCSTR lpMenuName);
__declspec(dllimport)
HMENU
__stdcall
LoadMenuW(
HINSTANCE hInstance,
LPCWSTR lpMenuName);
#line 6930 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HMENU
__stdcall
LoadMenuIndirectA(
const MENUTEMPLATEA *lpMenuTemplate);
__declspec(dllimport)
HMENU
__stdcall
LoadMenuIndirectW(
const MENUTEMPLATEW *lpMenuTemplate);
#line 6946 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HMENU
__stdcall
GetMenu(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
SetMenu(
HWND hWnd,
HMENU hMenu);
__declspec(dllimport)
BOOL
__stdcall
ChangeMenuA(
HMENU hMenu,
UINT cmd,
LPCSTR lpszNewItem,
UINT cmdInsert,
UINT flags);
__declspec(dllimport)
BOOL
__stdcall
ChangeMenuW(
HMENU hMenu,
UINT cmd,
LPCWSTR lpszNewItem,
UINT cmdInsert,
UINT flags);
#line 6983 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
HiliteMenuItem(
HWND hWnd,
HMENU hMenu,
UINT uIDHiliteItem,
UINT uHilite);
__declspec(dllimport)
int
__stdcall
GetMenuStringA(
HMENU hMenu,
UINT uIDItem,
LPSTR lpString,
int cchMax,
UINT flags);
__declspec(dllimport)
int
__stdcall
GetMenuStringW(
HMENU hMenu,
UINT uIDItem,
LPWSTR lpString,
int cchMax,
UINT flags);
#line 7016 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
GetMenuState(
HMENU hMenu,
UINT uId,
UINT uFlags);
__declspec(dllimport)
BOOL
__stdcall
DrawMenuBar(
HWND hWnd);
#line 7035 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HMENU
__stdcall
GetSystemMenu(
HWND hWnd,
BOOL bRevert);
__declspec(dllimport)
HMENU
__stdcall
CreateMenu(
void);
__declspec(dllimport)
HMENU
__stdcall
CreatePopupMenu(
void);
__declspec(dllimport)
BOOL
__stdcall
DestroyMenu(
HMENU hMenu);
__declspec(dllimport)
DWORD
__stdcall
CheckMenuItem(
HMENU hMenu,
UINT uIDCheckItem,
UINT uCheck);
__declspec(dllimport)
BOOL
__stdcall
EnableMenuItem(
HMENU hMenu,
UINT uIDEnableItem,
UINT uEnable);
__declspec(dllimport)
HMENU
__stdcall
GetSubMenu(
HMENU hMenu,
int nPos);
__declspec(dllimport)
UINT
__stdcall
GetMenuItemID(
HMENU hMenu,
int nPos);
__declspec(dllimport)
int
__stdcall
GetMenuItemCount(
HMENU hMenu);
__declspec(dllimport)
BOOL
__stdcall
InsertMenuA(
HMENU hMenu,
UINT uPosition,
UINT uFlags,
UINT_PTR uIDNewItem,
LPCSTR lpNewItem);
__declspec(dllimport)
BOOL
__stdcall
InsertMenuW(
HMENU hMenu,
UINT uPosition,
UINT uFlags,
UINT_PTR uIDNewItem,
LPCWSTR lpNewItem);
#line 7122 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
AppendMenuA(
HMENU hMenu,
UINT uFlags,
UINT_PTR uIDNewItem,
LPCSTR lpNewItem);
__declspec(dllimport)
BOOL
__stdcall
AppendMenuW(
HMENU hMenu,
UINT uFlags,
UINT_PTR uIDNewItem,
LPCWSTR lpNewItem);
#line 7144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
ModifyMenuA(
HMENU hMnu,
UINT uPosition,
UINT uFlags,
UINT_PTR uIDNewItem,
LPCSTR lpNewItem);
__declspec(dllimport)
BOOL
__stdcall
ModifyMenuW(
HMENU hMnu,
UINT uPosition,
UINT uFlags,
UINT_PTR uIDNewItem,
LPCWSTR lpNewItem);
#line 7168 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall RemoveMenu(
HMENU hMenu,
UINT uPosition,
UINT uFlags);
__declspec(dllimport)
BOOL
__stdcall
DeleteMenu(
HMENU hMenu,
UINT uPosition,
UINT uFlags);
__declspec(dllimport)
BOOL
__stdcall
SetMenuItemBitmaps(
HMENU hMenu,
UINT uPosition,
UINT uFlags,
HBITMAP hBitmapUnchecked,
HBITMAP hBitmapChecked);
__declspec(dllimport)
LONG
__stdcall
GetMenuCheckMarkDimensions(
void);
__declspec(dllimport)
BOOL
__stdcall
TrackPopupMenu(
HMENU hMenu,
UINT uFlags,
int x,
int y,
int nReserved,
HWND hWnd,
const RECT *prcRect);
typedef struct tagTPMPARAMS
{
UINT    cbSize;     
RECT    rcExclude;  
}   TPMPARAMS;
typedef TPMPARAMS  *LPTPMPARAMS;
__declspec(dllimport)
BOOL
__stdcall
TrackPopupMenuEx(
HMENU hMenu,
UINT uFlags,
int x,
int y,
HWND hwnd,
LPTPMPARAMS lptpm);
#line 7237 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7250 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagMENUINFO
{
DWORD   cbSize;
DWORD   fMask;
DWORD   dwStyle;
UINT    cyMax;
HBRUSH  hbrBack;
DWORD   dwContextHelpID;
ULONG_PTR dwMenuData;
}   MENUINFO,  *LPMENUINFO;
typedef MENUINFO const  *LPCMENUINFO;
__declspec(dllimport)
BOOL
__stdcall
GetMenuInfo(
HMENU,
LPMENUINFO);
__declspec(dllimport)
BOOL
__stdcall
SetMenuInfo(
HMENU,
LPCMENUINFO);
__declspec(dllimport)
BOOL
__stdcall
EndMenu(
void);
typedef struct tagMENUGETOBJECTINFO
{
DWORD dwFlags;
UINT uPos;
HMENU hmenu;
PVOID riid;
PVOID pvObj;
} MENUGETOBJECTINFO, * PMENUGETOBJECTINFO;
#line 7326 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7335 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7353 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagMENUITEMINFOA
{
UINT     cbSize;
UINT     fMask;
UINT     fType;         
UINT     fState;        
UINT     wID;           
HMENU    hSubMenu;      
HBITMAP  hbmpChecked;   
HBITMAP  hbmpUnchecked; 
ULONG_PTR dwItemData;   
LPSTR    dwTypeData;    
UINT     cch;           
HBITMAP  hbmpItem;      
#line 7371 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
}   MENUITEMINFOA,  *LPMENUITEMINFOA;
typedef struct tagMENUITEMINFOW
{
UINT     cbSize;
UINT     fMask;
UINT     fType;         
UINT     fState;        
UINT     wID;           
HMENU    hSubMenu;      
HBITMAP  hbmpChecked;   
HBITMAP  hbmpUnchecked; 
ULONG_PTR dwItemData;   
LPWSTR   dwTypeData;    
UINT     cch;           
HBITMAP  hbmpItem;      
#line 7388 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
}   MENUITEMINFOW,  *LPMENUITEMINFOW;
typedef MENUITEMINFOW MENUITEMINFO;
typedef LPMENUITEMINFOW LPMENUITEMINFO;
#line 7396 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef MENUITEMINFOA const  *LPCMENUITEMINFOA;
typedef MENUITEMINFOW const  *LPCMENUITEMINFOW;
typedef LPCMENUITEMINFOW LPCMENUITEMINFO;
#line 7403 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
InsertMenuItemA(
HMENU hmenu,
UINT item,
BOOL fByPosition,
LPCMENUITEMINFOA lpmi);
__declspec(dllimport)
BOOL
__stdcall
InsertMenuItemW(
HMENU hmenu,
UINT item,
BOOL fByPosition,
LPCMENUITEMINFOW lpmi);
#line 7426 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetMenuItemInfoA(
HMENU hmenu,
UINT item,
BOOL fByPosition,
LPMENUITEMINFOA lpmii);
__declspec(dllimport)
BOOL
__stdcall
GetMenuItemInfoW(
HMENU hmenu,
UINT item,
BOOL fByPosition,
LPMENUITEMINFOW lpmii);
#line 7448 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SetMenuItemInfoA(
HMENU hmenu,
UINT item,
BOOL fByPositon,
LPCMENUITEMINFOA lpmii);
__declspec(dllimport)
BOOL
__stdcall
SetMenuItemInfoW(
HMENU hmenu,
UINT item,
BOOL fByPositon,
LPCMENUITEMINFOW lpmii);
#line 7470 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
GetMenuDefaultItem(
HMENU hMenu,
UINT fByPos,
UINT gmdiFlags);
__declspec(dllimport)
BOOL
__stdcall
SetMenuDefaultItem(
HMENU hMenu,
UINT uItem,
UINT fByPos);
__declspec(dllimport)
BOOL
__stdcall
GetMenuItemRect(
HWND hWnd,
HMENU hMenu,
UINT uItem,
LPRECT lprcItem);
__declspec(dllimport)
int
__stdcall
MenuItemFromPoint(
HWND hWnd,
HMENU hMenu,
POINT ptScreen);
#line 7508 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7527 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7536 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7539 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7540 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7543 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7546 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7548 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagDROPSTRUCT
{
HWND    hwndSource;
HWND    hwndSink;
DWORD   wFmt;
ULONG_PTR dwData;
POINT   ptDrop;
DWORD   dwControlData;
} DROPSTRUCT, *PDROPSTRUCT, *LPDROPSTRUCT;
#line 7571 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
DragObject(
HWND hwndParent,
HWND hwndFrom,
UINT fmt,
ULONG_PTR data,
HCURSOR hcur);
__declspec(dllimport)
BOOL
__stdcall
DragDetect(
HWND hwnd,
POINT pt);
#line 7604 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 7607 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DrawIcon(
HDC hDC,
int X,
int Y,
HICON hIcon);
#line 7621 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 7657 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7658 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagDRAWTEXTPARAMS
{
UINT    cbSize;
int     iTabLength;
int     iLeftMargin;
int     iRightMargin;
UINT    uiLengthDrawn;
} DRAWTEXTPARAMS,  *LPDRAWTEXTPARAMS;
#line 7672 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 7675 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
DrawTextA(
HDC hdc,
LPCSTR lpchText,
int cchText,
LPRECT lprc,
UINT format);
__declspec(dllimport)
int
__stdcall
DrawTextW(
HDC hdc,
LPCWSTR lpchText,
int cchText,
LPRECT lprc,
UINT format);
#line 7705 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7731 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
DrawTextExA(
HDC hdc,
LPSTR lpchText,
int cchText,
LPRECT lprc,
UINT format,
LPDRAWTEXTPARAMS lpdtp);
__declspec(dllimport)
int
__stdcall
DrawTextExW(
HDC hdc,
LPWSTR lpchText,
int cchText,
LPRECT lprc,
UINT format,
LPDRAWTEXTPARAMS lpdtp);
#line 7761 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7762 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7764 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 7767 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GrayStringA(
HDC hDC,
HBRUSH hBrush,
GRAYSTRINGPROC lpOutputFunc,
LPARAM lpData,
int nCount,
int X,
int Y,
int nWidth,
int nHeight);
__declspec(dllimport)
BOOL
__stdcall
GrayStringW(
HDC hDC,
HBRUSH hBrush,
GRAYSTRINGPROC lpOutputFunc,
LPARAM lpData,
int nCount,
int X,
int Y,
int nWidth,
int nHeight);
#line 7802 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7804 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 7824 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DrawStateA(
HDC hdc,
HBRUSH hbrFore,
DRAWSTATEPROC qfnCallBack,
LPARAM lData,
WPARAM wData,
int x,
int y,
int cx,
int cy,
UINT uFlags);
__declspec(dllimport)
BOOL
__stdcall
DrawStateW(
HDC hdc,
HBRUSH hbrFore,
DRAWSTATEPROC qfnCallBack,
LPARAM lData,
WPARAM wData,
int x,
int y,
int cx,
int cy,
UINT uFlags);
#line 7862 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 7864 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 7867 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
LONG
__stdcall
TabbedTextOutA(
HDC hdc,
int x,
int y,
LPCSTR lpString,
int chCount,
int nTabPositions,
const INT *lpnTabStopPositions,
int nTabOrigin);
__declspec(dllimport)
LONG
__stdcall
TabbedTextOutW(
HDC hdc,
int x,
int y,
LPCWSTR lpString,
int chCount,
int nTabPositions,
const INT *lpnTabStopPositions,
int nTabOrigin);
#line 7900 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
DWORD
__stdcall
GetTabbedTextExtentA(
HDC hdc,
LPCSTR lpString,
int chCount,
int nTabPositions,
const INT *lpnTabStopPositions);
__declspec(dllimport)
DWORD
__stdcall
GetTabbedTextExtentW(
HDC hdc,
LPCWSTR lpString,
int chCount,
int nTabPositions,
const INT *lpnTabStopPositions);
#line 7924 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UpdateWindow(
HWND hWnd);
__declspec(dllimport)
HWND
__stdcall
SetActiveWindow(
HWND hWnd);
__declspec(dllimport)
HWND
__stdcall
GetForegroundWindow(
void);
__declspec(dllimport)
BOOL
__stdcall
PaintDesktop(
HDC hdc);
__declspec(dllimport)
void
__stdcall
SwitchToThisWindow(
HWND hwnd,
BOOL fUnknown);
#line 7958 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SetForegroundWindow(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
AllowSetForegroundWindow(
DWORD dwProcessId);
__declspec(dllimport)
BOOL
__stdcall
LockSetForegroundWindow(
UINT uLockCode);
#line 7985 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
WindowFromDC(
HDC hDC);
__declspec(dllimport)
HDC
__stdcall
GetDC(
HWND hWnd);
__declspec(dllimport)
HDC
__stdcall
GetDCEx(
HWND hWnd,
HRGN hrgnClip,
DWORD flags);
#line 8007 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HDC
__stdcall
GetWindowDC(
HWND hWnd);
__declspec(dllimport)
int
__stdcall
ReleaseDC(
HWND hWnd,
HDC hDC);
__declspec(dllimport)
HDC
__stdcall
BeginPaint(
HWND hWnd,
LPPAINTSTRUCT lpPaint);
__declspec(dllimport)
BOOL
__stdcall
EndPaint(
HWND hWnd,
const PAINTSTRUCT *lpPaint);
__declspec(dllimport)
BOOL
__stdcall
GetUpdateRect(
HWND hWnd,
LPRECT lpRect,
BOOL bErase);
__declspec(dllimport)
int
__stdcall
GetUpdateRgn(
HWND hWnd,
HRGN hRgn,
BOOL bErase);
__declspec(dllimport)
int
__stdcall
SetWindowRgn(
HWND hWnd,
HRGN hRgn,
BOOL bRedraw);
#line 8081 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
GetWindowRgn(
HWND hWnd,
HRGN hRgn);
__declspec(dllimport)
int
__stdcall
GetWindowRgnBox(
HWND hWnd,
LPRECT lprc);
#line 8104 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
ExcludeUpdateRgn(
HDC hDC,
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
InvalidateRect(
HWND hWnd,
const RECT *lpRect,
BOOL bErase);
__declspec(dllimport)
BOOL
__stdcall
ValidateRect(
HWND hWnd,
const RECT *lpRect);
__declspec(dllimport)
BOOL
__stdcall
InvalidateRgn(
HWND hWnd,
HRGN hRgn,
BOOL bErase);
__declspec(dllimport)
BOOL
__stdcall
ValidateRgn(
HWND hWnd,
HRGN hRgn);
__declspec(dllimport)
BOOL
__stdcall
RedrawWindow(
HWND hWnd,
const RECT *lprcUpdate,
HRGN hrgnUpdate,
UINT flags);
#line 8153 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
LockWindowUpdate(
HWND hWndLock);
__declspec(dllimport)
BOOL
__stdcall
ScrollWindow(
HWND hWnd,
int XAmount,
int YAmount,
const RECT *lpRect,
const RECT *lpClipRect);
__declspec(dllimport)
BOOL
__stdcall
ScrollDC(
HDC hDC,
int dx,
int dy,
const RECT *lprcScroll,
const RECT *lprcClip,
HRGN hrgnUpdate,
LPRECT lprcUpdate);
__declspec(dllimport)
int
__stdcall
ScrollWindowEx(
HWND hWnd,
int dx,
int dy,
const RECT *prcScroll,
const RECT *prcClip,
HRGN hrgnUpdate,
LPRECT prcUpdate,
UINT flags);
#line 8225 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 8233 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
SetScrollPos(
HWND hWnd,
int nBar,
int nPos,
BOOL bRedraw);
__declspec(dllimport)
int
__stdcall
GetScrollPos(
HWND hWnd,
int nBar);
__declspec(dllimport)
BOOL
__stdcall
SetScrollRange(
HWND hWnd,
int nBar,
int nMinPos,
int nMaxPos,
BOOL bRedraw);
__declspec(dllimport)
BOOL
__stdcall
GetScrollRange(
HWND hWnd,
int nBar,
LPINT lpMinPos,
LPINT lpMaxPos);
__declspec(dllimport)
BOOL
__stdcall
ShowScrollBar(
HWND hWnd,
int wBar,
BOOL bShow);
__declspec(dllimport)
BOOL
__stdcall
EnableScrollBar(
HWND hWnd,
UINT wSBflags,
UINT wArrows);
#line 8308 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SetPropA(
HWND hWnd,
LPCSTR lpString,
HANDLE hData);
__declspec(dllimport)
BOOL
__stdcall
SetPropW(
HWND hWnd,
LPCWSTR lpString,
HANDLE hData);
#line 8328 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HANDLE
__stdcall
GetPropA(
HWND hWnd,
LPCSTR lpString);
__declspec(dllimport)
HANDLE
__stdcall
GetPropW(
HWND hWnd,
LPCWSTR lpString);
#line 8346 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HANDLE
__stdcall
RemovePropA(
HWND hWnd,
LPCSTR lpString);
__declspec(dllimport)
HANDLE
__stdcall
RemovePropW(
HWND hWnd,
LPCWSTR lpString);
#line 8364 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
EnumPropsExA(
HWND hWnd,
PROPENUMPROCEXA lpEnumFunc,
LPARAM lParam);
__declspec(dllimport)
int
__stdcall
EnumPropsExW(
HWND hWnd,
PROPENUMPROCEXW lpEnumFunc,
LPARAM lParam);
#line 8384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
EnumPropsA(
HWND hWnd,
PROPENUMPROCA lpEnumFunc);
__declspec(dllimport)
int
__stdcall
EnumPropsW(
HWND hWnd,
PROPENUMPROCW lpEnumFunc);
#line 8402 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SetWindowTextA(
HWND hWnd,
LPCSTR lpString);
__declspec(dllimport)
BOOL
__stdcall
SetWindowTextW(
HWND hWnd,
LPCWSTR lpString);
#line 8420 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
GetWindowTextA(
HWND hWnd,
LPSTR lpString,
int nMaxCount);
__declspec(dllimport)
int
__stdcall
GetWindowTextW(
HWND hWnd,
LPWSTR lpString,
int nMaxCount);
#line 8442 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
GetWindowTextLengthA(
HWND hWnd);
__declspec(dllimport)
int
__stdcall
GetWindowTextLengthW(
HWND hWnd);
#line 8458 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetClientRect(
HWND hWnd,
LPRECT lpRect);
__declspec(dllimport)
BOOL
__stdcall
GetWindowRect(
HWND hWnd,
LPRECT lpRect);
__declspec(dllimport)
BOOL
__stdcall
AdjustWindowRect(
LPRECT lpRect,
DWORD dwStyle,
BOOL bMenu);
__declspec(dllimport)
BOOL
__stdcall
AdjustWindowRectEx(
LPRECT lpRect,
DWORD dwStyle,
BOOL bMenu,
DWORD dwExStyle);
#line 8492 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagHELPINFO      
{
UINT    cbSize;             
int     iContextType;       
int     iCtrlId;            
HANDLE  hItemHandle;        
DWORD_PTR dwContextId;      
POINT   MousePos;           
}  HELPINFO,  *LPHELPINFO;
__declspec(dllimport)
BOOL
__stdcall
SetWindowContextHelpId(
HWND,
DWORD);
__declspec(dllimport)
DWORD
__stdcall
GetWindowContextHelpId(
HWND);
__declspec(dllimport)
BOOL
__stdcall
SetMenuContextHelpId(
HMENU,
DWORD);
__declspec(dllimport)
DWORD
__stdcall
GetMenuContextHelpId(
HMENU);
#line 8538 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 8541 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8557 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8569 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8579 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8586 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8597 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8604 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8606 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
MessageBoxA(
HWND hWnd,
LPCSTR lpText,
LPCSTR lpCaption,
UINT uType);
__declspec(dllimport)
int
__stdcall
MessageBoxW(
HWND hWnd,
LPCWSTR lpText,
LPCWSTR lpCaption,
UINT uType);
#line 8637 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8661 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
MessageBoxExA(
HWND hWnd,
LPCSTR lpText,
LPCSTR lpCaption,
UINT uType,
WORD wLanguageId);
__declspec(dllimport)
int
__stdcall
MessageBoxExW(
HWND hWnd,
LPCWSTR lpText,
LPCWSTR lpCaption,
UINT uType,
WORD wLanguageId);
#line 8685 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef void (__stdcall *MSGBOXCALLBACK)(LPHELPINFO lpHelpInfo);
typedef struct tagMSGBOXPARAMSA
{
UINT        cbSize;
HWND        hwndOwner;
HINSTANCE   hInstance;
LPCSTR      lpszText;
LPCSTR      lpszCaption;
DWORD       dwStyle;
LPCSTR      lpszIcon;
DWORD_PTR   dwContextHelpId;
MSGBOXCALLBACK      lpfnMsgBoxCallback;
DWORD       dwLanguageId;
} MSGBOXPARAMSA, *PMSGBOXPARAMSA, *LPMSGBOXPARAMSA;
typedef struct tagMSGBOXPARAMSW
{
UINT        cbSize;
HWND        hwndOwner;
HINSTANCE   hInstance;
LPCWSTR     lpszText;
LPCWSTR     lpszCaption;
DWORD       dwStyle;
LPCWSTR     lpszIcon;
DWORD_PTR   dwContextHelpId;
MSGBOXCALLBACK      lpfnMsgBoxCallback;
DWORD       dwLanguageId;
} MSGBOXPARAMSW, *PMSGBOXPARAMSW, *LPMSGBOXPARAMSW;
typedef MSGBOXPARAMSW MSGBOXPARAMS;
typedef PMSGBOXPARAMSW PMSGBOXPARAMS;
typedef LPMSGBOXPARAMSW LPMSGBOXPARAMS;
#line 8725 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
MessageBoxIndirectA(
const MSGBOXPARAMSA * lpmbp);
__declspec(dllimport)
int
__stdcall
MessageBoxIndirectW(
const MSGBOXPARAMSW * lpmbp);
#line 8741 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8742 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 8745 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
MessageBeep(
UINT uType);
#line 8758 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 8761 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
ShowCursor(
BOOL bShow);
__declspec(dllimport)
BOOL
__stdcall
SetCursorPos(
int X,
int Y);
#line 8787 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HCURSOR
__stdcall
SetCursor(
HCURSOR hCursor);
__declspec(dllimport)
BOOL
__stdcall
GetCursorPos(
LPPOINT lpPoint);
#line 8807 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
ClipCursor(
const RECT *lpRect);
__declspec(dllimport)
BOOL
__stdcall
GetClipCursor(
LPRECT lpRect);
__declspec(dllimport)
HCURSOR
__stdcall
GetCursor(
void);
__declspec(dllimport)
BOOL
__stdcall
CreateCaret(
HWND hWnd,
HBITMAP hBitmap,
int nWidth,
int nHeight);
__declspec(dllimport)
UINT
__stdcall
GetCaretBlinkTime(
void);
__declspec(dllimport)
BOOL
__stdcall
SetCaretBlinkTime(
UINT uMSeconds);
__declspec(dllimport)
BOOL
__stdcall
DestroyCaret(
void);
__declspec(dllimport)
BOOL
__stdcall
HideCaret(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
ShowCaret(
HWND hWnd);
__declspec(dllimport)
BOOL
__stdcall
SetCaretPos(
int X,
int Y);
__declspec(dllimport)
BOOL
__stdcall
GetCaretPos(
LPPOINT lpPoint);
__declspec(dllimport)
BOOL
__stdcall
ClientToScreen(
HWND hWnd,
LPPOINT lpPoint);
__declspec(dllimport)
BOOL
__stdcall
ScreenToClient(
HWND hWnd,
LPPOINT lpPoint);
#line 8909 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
MapWindowPoints(
HWND hWndFrom,
HWND hWndTo,
LPPOINT lpPoints,
UINT cPoints);
__declspec(dllimport)
HWND
__stdcall
WindowFromPoint(
POINT Point);
#line 8932 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
ChildWindowFromPoint(
HWND hWndParent,
POINT Point);
#line 8941 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HWND
__stdcall
ChildWindowFromPointEx(
HWND hwnd,
POINT pt,
UINT flags);
#line 8961 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 8964 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9007 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9016 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9017 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9026 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
GetSysColor(
int nIndex);
__declspec(dllimport)
HBRUSH
__stdcall
GetSysColorBrush(
int nIndex);
#line 9046 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SetSysColors(
int cElements,
const INT * lpaElements,
const COLORREF * lpaRgbValues);
#line 9056 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 9059 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DrawFocusRect(
HDC hDC,
const RECT * lprc);
__declspec(dllimport)
int
__stdcall
FillRect(
HDC hDC,
const RECT *lprc,
HBRUSH hbr);
__declspec(dllimport)
int
__stdcall
FrameRect(
HDC hDC,
const RECT *lprc,
HBRUSH hbr);
__declspec(dllimport)
BOOL
__stdcall
InvertRect(
HDC hDC,
const RECT *lprc);
__declspec(dllimport)
BOOL
__stdcall
SetRect(
LPRECT lprc,
int xLeft,
int yTop,
int xRight,
int yBottom);
__declspec(dllimport)
BOOL
__stdcall
SetRectEmpty(
LPRECT lprc);
__declspec(dllimport)
BOOL
__stdcall
CopyRect(
LPRECT lprcDst,
const RECT *lprcSrc);
__declspec(dllimport)
BOOL
__stdcall
InflateRect(
LPRECT lprc,
int dx,
int dy);
__declspec(dllimport)
BOOL
__stdcall
IntersectRect(
LPRECT lprcDst,
const RECT *lprcSrc1,
const RECT *lprcSrc2);
__declspec(dllimport)
BOOL
__stdcall
UnionRect(
LPRECT lprcDst,
const RECT *lprcSrc1,
const RECT *lprcSrc2);
__declspec(dllimport)
BOOL
__stdcall
SubtractRect(
LPRECT lprcDst,
const RECT *lprcSrc1,
const RECT *lprcSrc2);
__declspec(dllimport)
BOOL
__stdcall
OffsetRect(
LPRECT lprc,
int dx,
int dy);
__declspec(dllimport)
BOOL
__stdcall
IsRectEmpty(
const RECT *lprc);
__declspec(dllimport)
BOOL
__stdcall
EqualRect(
const RECT *lprc1,
const RECT *lprc2);
__declspec(dllimport)
BOOL
__stdcall
PtInRect(
const RECT *lprc,
POINT pt);
__declspec(dllimport)
WORD
__stdcall
GetWindowWord(
HWND hWnd,
int nIndex);
__declspec(dllimport)
WORD
__stdcall
SetWindowWord(
HWND hWnd,
int nIndex,
WORD wNewWord);
__declspec(dllimport)
LONG
__stdcall
GetWindowLongA(
HWND hWnd,
int nIndex);
__declspec(dllimport)
LONG
__stdcall
GetWindowLongW(
HWND hWnd,
int nIndex);
#line 9210 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LONG
__stdcall
SetWindowLongA(
HWND hWnd,
int nIndex,
LONG dwNewLong);
__declspec(dllimport)
LONG
__stdcall
SetWindowLongW(
HWND hWnd,
int nIndex,
LONG dwNewLong);
#line 9230 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9280 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9288 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9290 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
WORD
__stdcall
GetClassWord(
HWND hWnd,
int nIndex);
__declspec(dllimport)
WORD
__stdcall
SetClassWord(
HWND hWnd,
int nIndex,
WORD wNewWord);
__declspec(dllimport)
DWORD
__stdcall
GetClassLongA(
HWND hWnd,
int nIndex);
__declspec(dllimport)
DWORD
__stdcall
GetClassLongW(
HWND hWnd,
int nIndex);
#line 9323 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
DWORD
__stdcall
SetClassLongA(
HWND hWnd,
int nIndex,
LONG dwNewLong);
__declspec(dllimport)
DWORD
__stdcall
SetClassLongW(
HWND hWnd,
int nIndex,
LONG dwNewLong);
#line 9343 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9393 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9401 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9403 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9405 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetProcessDefaultLayout(
DWORD *pdwDefaultLayout);
__declspec(dllimport)
BOOL
__stdcall
SetProcessDefaultLayout(
DWORD dwDefaultLayout);
#line 9419 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
GetDesktopWindow(
void);
__declspec(dllimport)
HWND
__stdcall
GetParent(
HWND hWnd);
__declspec(dllimport)
HWND
__stdcall
SetParent(
HWND hWndChild,
HWND hWndNewParent);
__declspec(dllimport)
BOOL
__stdcall
EnumChildWindows(
HWND hWndParent,
WNDENUMPROC lpEnumFunc,
LPARAM lParam);
__declspec(dllimport)
HWND
__stdcall
FindWindowA(
LPCSTR lpClassName,
LPCSTR lpWindowName);
__declspec(dllimport)
HWND
__stdcall
FindWindowW(
LPCWSTR lpClassName,
LPCWSTR lpWindowName);
#line 9466 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
FindWindowExA(
HWND hWndParent,
HWND hWndChildAfter,
LPCSTR lpszClass,
LPCSTR lpszWindow);
__declspec(dllimport)
HWND
__stdcall
FindWindowExW(
HWND hWndParent,
HWND hWndChildAfter,
LPCWSTR lpszClass,
LPCWSTR lpszWindow);
#line 9489 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
GetShellWindow(
void);
#line 9497 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
RegisterShellHookWindow(
HWND hwnd);
__declspec(dllimport)
BOOL
__stdcall
DeregisterShellHookWindow(
HWND hwnd);
__declspec(dllimport)
BOOL
__stdcall
EnumWindows(
WNDENUMPROC lpEnumFunc,
LPARAM lParam);
__declspec(dllimport)
BOOL
__stdcall
EnumThreadWindows(
DWORD dwThreadId,
WNDENUMPROC lpfn,
LPARAM lParam);
__declspec(dllimport)
int
__stdcall
GetClassNameA(
HWND hWnd,
LPSTR lpClassName,
int nMaxCount
);
__declspec(dllimport)
int
__stdcall
GetClassNameW(
HWND hWnd,
LPWSTR lpClassName,
int nMaxCount
);
#line 9550 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9572 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
GetTopWindow(
HWND hWnd);
__declspec(dllimport)
DWORD
__stdcall
GetWindowThreadProcessId(
HWND hWnd,
LPDWORD lpdwProcessId);
__declspec(dllimport)
BOOL
__stdcall
IsGUIThread(
BOOL bConvert);
#line 9600 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
GetLastActivePopup(
HWND hWnd);
#line 9623 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9626 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HWND
__stdcall
GetWindow(
HWND hWnd,
UINT uCmd);
__declspec(dllimport)
HHOOK
__stdcall
SetWindowsHookA(
int nFilterType,
HOOKPROC pfnFilterProc);
__declspec(dllimport)
HHOOK
__stdcall
SetWindowsHookW(
int nFilterType,
HOOKPROC pfnFilterProc);
#line 9656 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9678 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UnhookWindowsHook(
int nCode,
HOOKPROC pfnFilterProc);
__declspec(dllimport)
HHOOK
__stdcall
SetWindowsHookExA(
int idHook,
HOOKPROC lpfn,
HINSTANCE hmod,
DWORD dwThreadId);
__declspec(dllimport)
HHOOK
__stdcall
SetWindowsHookExW(
int idHook,
HOOKPROC lpfn,
HINSTANCE hmod,
DWORD dwThreadId);
#line 9707 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UnhookWindowsHookEx(
HHOOK hhk);
__declspec(dllimport)
LRESULT
__stdcall
CallNextHookEx(
HHOOK hhk,
int nCode,
WPARAM wParam,
LPARAM lParam);
#line 9733 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9734 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9736 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 9778 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9783 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9788 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9811 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
CheckMenuRadioItem(
HMENU hmenu,
UINT first,
UINT last,
UINT check,
UINT flags);
#line 9828 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct {
WORD versionNumber;
WORD offset;
} MENUITEMTEMPLATEHEADER, *PMENUITEMTEMPLATEHEADER;
typedef struct {        
WORD mtOption;
WORD mtID;
WCHAR mtString[1];
} MENUITEMTEMPLATE, *PMENUITEMTEMPLATE;
#line 9845 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 9848 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9876 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9880 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9890 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HBITMAP
__stdcall
LoadBitmapA(
HINSTANCE hInstance,
LPCSTR lpBitmapName);
__declspec(dllimport)
HBITMAP
__stdcall
LoadBitmapW(
HINSTANCE hInstance,
LPCWSTR lpBitmapName);
#line 9915 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HCURSOR
__stdcall
LoadCursorA(
HINSTANCE hInstance,
LPCSTR lpCursorName);
__declspec(dllimport)
HCURSOR
__stdcall
LoadCursorW(
HINSTANCE hInstance,
LPCWSTR lpCursorName);
#line 9933 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HCURSOR
__stdcall
LoadCursorFromFileA(
LPCSTR lpFileName);
__declspec(dllimport)
HCURSOR
__stdcall
LoadCursorFromFileW(
LPCWSTR lpFileName);
#line 9949 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HCURSOR
__stdcall
CreateCursor(
HINSTANCE hInst,
int xHotSpot,
int yHotSpot,
int nWidth,
int nHeight,
const void *pvANDPlane,
const void *pvXORPlane);
__declspec(dllimport)
BOOL
__stdcall
DestroyCursor(
HCURSOR hCursor);
#line 9977 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 9979 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 10000 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10004 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetSystemCursor(
HCURSOR hcur,
DWORD id);
typedef struct _ICONINFO {
BOOL    fIcon;
DWORD   xHotspot;
DWORD   yHotspot;
HBITMAP hbmMask;
HBITMAP hbmColor;
} ICONINFO;
typedef ICONINFO *PICONINFO;
__declspec(dllimport)
HICON
__stdcall
LoadIconA(
HINSTANCE hInstance,
LPCSTR lpIconName);
__declspec(dllimport)
HICON
__stdcall
LoadIconW(
HINSTANCE hInstance,
LPCWSTR lpIconName);
#line 10041 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
PrivateExtractIconsA(
LPCSTR szFileName,
int nIconIndex,
int cxIcon,
int cyIcon,
HICON *phicon,
UINT *piconid,
UINT nIcons,
UINT flags);
__declspec(dllimport)
UINT
__stdcall
PrivateExtractIconsW(
LPCWSTR szFileName,
int nIconIndex,
int cxIcon,
int cyIcon,
HICON *phicon,
UINT *piconid,
UINT nIcons,
UINT flags);
#line 10072 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HICON
__stdcall
CreateIcon(
HINSTANCE hInstance,
int nWidth,
int nHeight,
BYTE cPlanes,
BYTE cBitsPixel,
const BYTE *lpbANDbits,
const BYTE *lpbXORbits);
__declspec(dllimport)
BOOL
__stdcall
DestroyIcon(
HICON hIcon);
__declspec(dllimport)
int
__stdcall
LookupIconIdFromDirectory(
PBYTE presbits,
BOOL fIcon);
__declspec(dllimport)
int
__stdcall
LookupIconIdFromDirectoryEx(
PBYTE presbits,
BOOL fIcon,
int cxDesired,
int cyDesired,
UINT Flags);
#line 10109 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HICON
__stdcall
CreateIconFromResource(
PBYTE presbits,
DWORD dwResSize,
BOOL fIcon,
DWORD dwVer);
__declspec(dllimport)
HICON
__stdcall
CreateIconFromResourceEx(
PBYTE presbits,
DWORD dwResSize,
BOOL fIcon,
DWORD dwVer,
int cxDesired,
int cyDesired,
UINT Flags);
typedef struct tagCURSORSHAPE
{
int     xHotSpot;
int     yHotSpot;
int     cx;
int     cy;
int     cbWidth;
BYTE    Planes;
BYTE    BitsPixel;
} CURSORSHAPE,  *LPCURSORSHAPE;
#line 10144 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10146 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
LoadImageA(
HINSTANCE hInst,
LPCSTR name,
UINT type,
int cx,
int cy,
UINT fuLoad);
__declspec(dllimport)
HANDLE
__stdcall
LoadImageW(
HINSTANCE hInst,
LPCWSTR name,
UINT type,
int cx,
int cy,
UINT fuLoad);
#line 10196 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
HANDLE
__stdcall
CopyImage(
HANDLE h,
UINT type,
int cx,
int cy,
UINT flags);
#line 10215 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport) BOOL __stdcall DrawIconEx(
HDC hdc,
int xLeft,
int yTop,
HICON hIcon,
int cxWidth,
int cyWidth,
UINT istepIfAniCur,
HBRUSH hbrFlickerFreeDraw,
UINT diFlags);
#line 10228 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 10231 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
HICON
__stdcall
CreateIconIndirect(
PICONINFO piconinfo);
__declspec(dllimport)
HICON
__stdcall
CopyIcon(
HICON hIcon);
__declspec(dllimport)
BOOL
__stdcall
GetIconInfo(
HICON hIcon,
PICONINFO piconinfo);
#line 10303 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10308 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10310 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 10426 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10429 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10430 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10436 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10439 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10488 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10493 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10498 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10499 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10529 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10532 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10549 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10556 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10566 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10612 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10617 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10620 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10662 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10679 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10693 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10696 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10704 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10730 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10733 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10746 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10763 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10765 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
IsDialogMessageA(
HWND hDlg,
LPMSG lpMsg);
__declspec(dllimport)
BOOL
__stdcall
IsDialogMessageW(
HWND hDlg,
LPMSG lpMsg);
#line 10816 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10818 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
MapDialogRect(
HWND hDlg,
LPRECT lpRect);
__declspec(dllimport)
int
__stdcall
DlgDirListA(
HWND hDlg,
LPSTR lpPathSpec,
int nIDListBox,
int nIDStaticPath,
UINT uFileType);
__declspec(dllimport)
int
__stdcall
DlgDirListW(
HWND hDlg,
LPWSTR lpPathSpec,
int nIDListBox,
int nIDStaticPath,
UINT uFileType);
#line 10849 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10851 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
DlgDirSelectExA(
HWND hwndDlg,
LPSTR lpString,
int chCount,
int idListBox);
__declspec(dllimport)
BOOL
__stdcall
DlgDirSelectExW(
HWND hwndDlg,
LPWSTR lpString,
int chCount,
int idListBox);
#line 10891 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
int
__stdcall
DlgDirListComboBoxA(
HWND hDlg,
LPSTR lpPathSpec,
int nIDComboBox,
int nIDStaticPath,
UINT uFiletype);
__declspec(dllimport)
int
__stdcall
DlgDirListComboBoxW(
HWND hDlg,
LPWSTR lpPathSpec,
int nIDComboBox,
int nIDStaticPath,
UINT uFiletype);
#line 10915 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
DlgDirSelectComboBoxExA(
HWND hwndDlg,
LPSTR lpString,
int cchOut,
int idComboBox);
__declspec(dllimport)
BOOL
__stdcall
DlgDirSelectComboBoxExW(
HWND hwndDlg,
LPWSTR lpString,
int cchOut,
int idComboBox);
#line 10937 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10939 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 10966 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10970 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 10978 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11074 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11077 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11082 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11092 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11094 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11118 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11124 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11171 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11215 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11216 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11220 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11230 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11231 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11252 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11255 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11270 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11274 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagSCROLLINFO
{
UINT    cbSize;
UINT    fMask;
int     nMin;
int     nMax;
UINT    nPage;
int     nPos;
int     nTrackPos;
}   SCROLLINFO,  *LPSCROLLINFO;
typedef SCROLLINFO const  *LPCSCROLLINFO;
__declspec(dllimport)
int
__stdcall
SetScrollInfo(
HWND hwnd,
int nBar,
LPCSCROLLINFO lpsi,
BOOL redraw);
__declspec(dllimport)
BOOL
__stdcall
GetScrollInfo(
HWND hwnd,
int nBar,
LPSCROLLINFO lpsi);
#line 11317 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 11319 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11321 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11322 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11339 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagMDICREATESTRUCTA {
LPCSTR   szClass;
LPCSTR   szTitle;
HANDLE hOwner;
int x;
int y;
int cx;
int cy;
DWORD style;
LPARAM lParam;        
} MDICREATESTRUCTA, *LPMDICREATESTRUCTA;
typedef struct tagMDICREATESTRUCTW {
LPCWSTR  szClass;
LPCWSTR  szTitle;
HANDLE hOwner;
int x;
int y;
int cx;
int cy;
DWORD style;
LPARAM lParam;        
} MDICREATESTRUCTW, *LPMDICREATESTRUCTW;
typedef MDICREATESTRUCTW MDICREATESTRUCT;
typedef LPMDICREATESTRUCTW LPMDICREATESTRUCT;
#line 11372 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagCLIENTCREATESTRUCT {
HANDLE hWindowMenu;
UINT idFirstChild;
} CLIENTCREATESTRUCT, *LPCLIENTCREATESTRUCT;
__declspec(dllimport)
LRESULT
__stdcall
DefFrameProcA(
HWND hWnd,
HWND hWndMDIClient,
UINT uMsg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
LRESULT
__stdcall
DefFrameProcW(
HWND hWnd,
HWND hWndMDIClient,
UINT uMsg,
WPARAM wParam,
LPARAM lParam);
#line 11401 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LRESULT
__stdcall
#line 11410 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
DefMDIChildProcA(
HWND hWnd,
UINT uMsg,
WPARAM wParam,
LPARAM lParam);
__declspec(dllimport)
LRESULT
__stdcall
#line 11423 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
DefMDIChildProcW(
HWND hWnd,
UINT uMsg,
WPARAM wParam,
LPARAM lParam);
#line 11433 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
TranslateMDISysAccel(
HWND hWndClient,
LPMSG lpMsg);
#line 11444 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
ArrangeIconicWindows(
HWND hWnd);
__declspec(dllimport)
HWND
__stdcall
CreateMDIWindowA(
LPCSTR lpClassName,
LPCSTR lpWindowName,
DWORD dwStyle,
int X,
int Y,
int nWidth,
int nHeight,
HWND hWndParent,
HINSTANCE hInstance,
LPARAM lParam);
__declspec(dllimport)
HWND
__stdcall
CreateMDIWindowW(
LPCWSTR lpClassName,
LPCWSTR lpWindowName,
DWORD dwStyle,
int X,
int Y,
int nWidth,
int nHeight,
HWND hWndParent,
HINSTANCE hInstance,
LPARAM lParam);
#line 11484 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
WORD
__stdcall
TileWindows(
HWND hwndParent,
UINT wHow,
const RECT * lpRect,
UINT cKids,
const HWND  * lpKids);
__declspec(dllimport)
WORD
__stdcall CascadeWindows(
HWND hwndParent,
UINT wHow,
const RECT * lpRect,
UINT cKids,
const HWND  * lpKids);
#line 11506 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11508 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 11511 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11513 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef DWORD HELPPOLY;
typedef struct tagMULTIKEYHELPA {
DWORD  mkSize;
#line 11528 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
CHAR   mkKeylist;
CHAR   szKeyphrase[1];
} MULTIKEYHELPA, *PMULTIKEYHELPA, *LPMULTIKEYHELPA;
typedef struct tagMULTIKEYHELPW {
DWORD  mkSize;
#line 11537 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
WCHAR  mkKeylist;
WCHAR  szKeyphrase[1];
} MULTIKEYHELPW, *PMULTIKEYHELPW, *LPMULTIKEYHELPW;
typedef MULTIKEYHELPW MULTIKEYHELP;
typedef PMULTIKEYHELPW PMULTIKEYHELP;
typedef LPMULTIKEYHELPW LPMULTIKEYHELP;
#line 11549 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagHELPWININFOA {
int  wStructSize;
int  x;
int  y;
int  dx;
int  dy;
int  wMax;
CHAR   rgchMember[2];
} HELPWININFOA, *PHELPWININFOA, *LPHELPWININFOA;
typedef struct tagHELPWININFOW {
int  wStructSize;
int  x;
int  y;
int  dx;
int  dy;
int  wMax;
WCHAR  rgchMember[2];
} HELPWININFOW, *PHELPWININFOW, *LPHELPWININFOW;
typedef HELPWININFOW HELPWININFO;
typedef PHELPWININFOW PHELPWININFO;
typedef LPHELPWININFOW LPHELPWININFO;
#line 11577 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11615 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
WinHelpA(
HWND hWndMain,
LPCSTR lpszHelp,
UINT uCommand,
ULONG_PTR dwData);
__declspec(dllimport)
BOOL
__stdcall
WinHelpW(
HWND hWndMain,
LPCWSTR lpszHelp,
UINT uCommand,
ULONG_PTR dwData);
#line 11639 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11641 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11643 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 11650 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11654 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11658 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
DWORD
__stdcall
GetGuiResources(
HANDLE hProcess,
DWORD uiFlags);
#line 11670 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11673 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
#line 11681 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 11767 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11783 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11789 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11805 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11809 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11817 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11825 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11854 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11897 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11942 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11956 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 11965 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12000 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12007 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12027 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12029 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagNONCLIENTMETRICSA
{
UINT    cbSize;
int     iBorderWidth;
int     iScrollWidth;
int     iScrollHeight;
int     iCaptionWidth;
int     iCaptionHeight;
LOGFONTA lfCaptionFont;
int     iSmCaptionWidth;
int     iSmCaptionHeight;
LOGFONTA lfSmCaptionFont;
int     iMenuWidth;
int     iMenuHeight;
LOGFONTA lfMenuFont;
LOGFONTA lfStatusFont;
LOGFONTA lfMessageFont;
#line 12065 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
}   NONCLIENTMETRICSA, *PNONCLIENTMETRICSA, * LPNONCLIENTMETRICSA;
typedef struct tagNONCLIENTMETRICSW
{
UINT    cbSize;
int     iBorderWidth;
int     iScrollWidth;
int     iScrollHeight;
int     iCaptionWidth;
int     iCaptionHeight;
LOGFONTW lfCaptionFont;
int     iSmCaptionWidth;
int     iSmCaptionHeight;
LOGFONTW lfSmCaptionFont;
int     iMenuWidth;
int     iMenuHeight;
LOGFONTW lfMenuFont;
LOGFONTW lfStatusFont;
LOGFONTW lfMessageFont;
#line 12086 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
}   NONCLIENTMETRICSW, *PNONCLIENTMETRICSW, * LPNONCLIENTMETRICSW;
typedef NONCLIENTMETRICSW NONCLIENTMETRICS;
typedef PNONCLIENTMETRICSW PNONCLIENTMETRICS;
typedef LPNONCLIENTMETRICSW LPNONCLIENTMETRICS;
#line 12096 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12098 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 12101 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12102 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagMINIMIZEDMETRICS
{
UINT    cbSize;
int     iWidth;
int     iHorzGap;
int     iVertGap;
int     iArrange;
}   MINIMIZEDMETRICS, *PMINIMIZEDMETRICS, *LPMINIMIZEDMETRICS;
typedef struct tagICONMETRICSA
{
UINT    cbSize;
int     iHorzSpacing;
int     iVertSpacing;
int     iTitleWrap;
LOGFONTA lfFont;
}   ICONMETRICSA, *PICONMETRICSA, *LPICONMETRICSA;
typedef struct tagICONMETRICSW
{
UINT    cbSize;
int     iHorzSpacing;
int     iVertSpacing;
int     iTitleWrap;
LOGFONTW lfFont;
}   ICONMETRICSW, *PICONMETRICSW, *LPICONMETRICSW;
typedef ICONMETRICSW ICONMETRICS;
typedef PICONMETRICSW PICONMETRICS;
typedef LPICONMETRICSW LPICONMETRICS;
#line 12156 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12157 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12158 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagANIMATIONINFO
{
UINT    cbSize;
int     iMinAnimate;
}   ANIMATIONINFO, *LPANIMATIONINFO;
typedef struct tagSERIALKEYSA
{
UINT    cbSize;
DWORD   dwFlags;
LPSTR     lpszActivePort;
LPSTR     lpszPort;
UINT    iBaudRate;
UINT    iPortState;
UINT    iActive;
}   SERIALKEYSA, *LPSERIALKEYSA;
typedef struct tagSERIALKEYSW
{
UINT    cbSize;
DWORD   dwFlags;
LPWSTR    lpszActivePort;
LPWSTR    lpszPort;
UINT    iBaudRate;
UINT    iPortState;
UINT    iActive;
}   SERIALKEYSW, *LPSERIALKEYSW;
typedef SERIALKEYSW SERIALKEYS;
typedef LPSERIALKEYSW LPSERIALKEYS;
#line 12192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagHIGHCONTRASTA
{
UINT    cbSize;
DWORD   dwFlags;
LPSTR   lpszDefaultScheme;
}   HIGHCONTRASTA, *LPHIGHCONTRASTA;
typedef struct tagHIGHCONTRASTW
{
UINT    cbSize;
DWORD   dwFlags;
LPWSTR  lpszDefaultScheme;
}   HIGHCONTRASTW, *LPHIGHCONTRASTW;
typedef HIGHCONTRASTW HIGHCONTRAST;
typedef LPHIGHCONTRASTW LPHIGHCONTRAST;
#line 12218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12220 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 12244 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\tvout.h"
#pragma once
#line 14 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\tvout.h"
#pragma region Desktop Family
typedef struct _VIDEOPARAMETERS {
GUID  Guid;                         
ULONG dwOffset;                     
ULONG dwCommand;                    
ULONG dwFlags;                      
ULONG dwMode;                       
ULONG dwTVStandard;                 
ULONG dwAvailableModes;             
ULONG dwAvailableTVStandard;        
ULONG dwFlickerFilter;              
ULONG dwOverScanX;                  
ULONG dwOverScanY;                  
ULONG dwMaxUnscaledX;               
ULONG dwMaxUnscaledY;               
ULONG dwPositionX;                  
ULONG dwPositionY;                  
ULONG dwBrightness;                 
ULONG dwContrast;                   
ULONG dwCPType;                     
ULONG dwCPCommand;                  
ULONG dwCPStandard;                 
ULONG dwCPKey;
ULONG bCP_APSTriggerBits;           
UCHAR bOEMCopyProtection[256];      
} VIDEOPARAMETERS, *PVIDEOPARAMETERS, *LPVIDEOPARAMETERS;
#line 95 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\tvout.h"
#pragma endregion
#line 98 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\tvout.h"
#line 12249 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12261 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
LONG
__stdcall
ChangeDisplaySettingsA(
DEVMODEA* lpDevMode,
DWORD dwFlags);
__declspec(dllimport)
LONG
__stdcall
ChangeDisplaySettingsW(
DEVMODEW* lpDevMode,
DWORD dwFlags);
#line 12285 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
LONG
__stdcall
ChangeDisplaySettingsExA(
LPCSTR lpszDeviceName,
DEVMODEA* lpDevMode,
HWND hwnd,
DWORD dwflags,
LPVOID lParam);
__declspec(dllimport)
LONG
__stdcall
ChangeDisplaySettingsExW(
LPCWSTR lpszDeviceName,
DEVMODEW* lpDevMode,
HWND hwnd,
DWORD dwflags,
LPVOID lParam);
#line 12309 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
EnumDisplaySettingsA(
LPCSTR lpszDeviceName,
DWORD iModeNum,
DEVMODEA* lpDevMode);
__declspec(dllimport)
BOOL
__stdcall
EnumDisplaySettingsW(
LPCWSTR lpszDeviceName,
DWORD iModeNum,
DEVMODEW* lpDevMode);
#line 12333 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
EnumDisplaySettingsExA(
LPCSTR lpszDeviceName,
DWORD iModeNum,
DEVMODEA* lpDevMode,
DWORD dwFlags);
__declspec(dllimport)
BOOL
__stdcall
EnumDisplaySettingsExW(
LPCWSTR lpszDeviceName,
DWORD iModeNum,
DEVMODEW* lpDevMode,
DWORD dwFlags);
#line 12357 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
EnumDisplayDevicesA(
LPCSTR lpDevice,
DWORD iDevNum,
PDISPLAY_DEVICEA lpDisplayDevice,
DWORD dwFlags);
__declspec(dllimport)
BOOL
__stdcall
EnumDisplayDevicesW(
LPCWSTR lpDevice,
DWORD iDevNum,
PDISPLAY_DEVICEW lpDisplayDevice,
DWORD dwFlags);
#line 12383 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12388 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12435 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12437 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12438 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
SystemParametersInfoA(
UINT uiAction,
UINT uiParam,
PVOID pvParam,
UINT fWinIni);
__declspec(dllimport)
BOOL
__stdcall
SystemParametersInfoW(
UINT uiAction,
UINT uiParam,
PVOID pvParam,
UINT fWinIni);
#line 12461 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12464 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 12467 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagFILTERKEYS
{
UINT  cbSize;
DWORD dwFlags;
DWORD iWaitMSec;            
DWORD iDelayMSec;           
DWORD iRepeatMSec;          
DWORD iBounceMSec;          
} FILTERKEYS, *LPFILTERKEYS;
#line 12485 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagSTICKYKEYS
{
UINT  cbSize;
DWORD dwFlags;
} STICKYKEYS, *LPSTICKYKEYS;
#line 12508 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 12540 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagMOUSEKEYS
{
UINT cbSize;
DWORD dwFlags;
DWORD iMaxSpeed;
DWORD iTimeToMaxSpeed;
DWORD iCtrlSpeed;
DWORD dwReserved1;
DWORD dwReserved2;
} MOUSEKEYS, *LPMOUSEKEYS;
#line 12556 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 12576 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagACCESSTIMEOUT
{
UINT  cbSize;
DWORD dwFlags;
DWORD iTimeOutMSec;
} ACCESSTIMEOUT, *LPACCESSTIMEOUT;
#line 12588 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagSOUNDSENTRYA
{
UINT cbSize;
DWORD dwFlags;
DWORD iFSTextEffect;
DWORD iFSTextEffectMSec;
DWORD iFSTextEffectColorBits;
DWORD iFSGrafEffect;
DWORD iFSGrafEffectMSec;
DWORD iFSGrafEffectColor;
DWORD iWindowsEffect;
DWORD iWindowsEffectMSec;
LPSTR   lpszWindowsEffectDLL;
DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYA, *LPSOUNDSENTRYA;
typedef struct tagSOUNDSENTRYW
{
UINT cbSize;
DWORD dwFlags;
DWORD iFSTextEffect;
DWORD iFSTextEffectMSec;
DWORD iFSTextEffectColorBits;
DWORD iFSGrafEffect;
DWORD iFSGrafEffectMSec;
DWORD iFSGrafEffectColor;
DWORD iWindowsEffect;
DWORD iWindowsEffectMSec;
LPWSTR  lpszWindowsEffectDLL;
DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYW, *LPSOUNDSENTRYW;
typedef SOUNDSENTRYW SOUNDSENTRY;
typedef LPSOUNDSENTRYW LPSOUNDSENTRY;
#line 12653 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12655 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
#line 12673 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagTOGGLEKEYS
{
UINT cbSize;
DWORD dwFlags;
} TOGGLEKEYS, *LPTOGGLEKEYS;
#line 12681 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
#line 12703 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
void
__stdcall
SetDebugErrorLevel(
DWORD dwLevel);
#line 12716 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
void
__stdcall
SetLastErrorEx(
DWORD dwErrCode,
DWORD dwType);
__declspec(dllimport)
int
__stdcall
InternalGetWindowText(
HWND hWnd,
LPWSTR pString,
int cchMaxCount);
#line 12754 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
CancelShutdown(
void);
#line 12762 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HMONITOR
__stdcall
MonitorFromPoint(
POINT pt,
DWORD dwFlags);
__declspec(dllimport)
HMONITOR
__stdcall
MonitorFromRect(
LPCRECT lprc,
DWORD dwFlags);
__declspec(dllimport)
HMONITOR
__stdcall
MonitorFromWindow(
HWND hwnd,
DWORD dwFlags);
#line 12800 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagMONITORINFO
{
DWORD   cbSize;
RECT    rcMonitor;
RECT    rcWork;
DWORD   dwFlags;
} MONITORINFO, *LPMONITORINFO;
typedef struct tagMONITORINFOEXA
{
MONITORINFO;
CHAR        szDevice[32];
} MONITORINFOEXA, *LPMONITORINFOEXA;
typedef struct tagMONITORINFOEXW
{
MONITORINFO;
WCHAR       szDevice[32];
} MONITORINFOEXW, *LPMONITORINFOEXW;
typedef MONITORINFOEXW MONITORINFOEX;
typedef LPMONITORINFOEXW LPMONITORINFOEX;
#line 12853 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12854 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetMonitorInfoA(
HMONITOR hMonitor,
LPMONITORINFO lpmi);
__declspec(dllimport)
BOOL
__stdcall
GetMonitorInfoW(
HMONITOR hMonitor,
LPMONITORINFO lpmi);
#line 12872 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef BOOL (__stdcall* MONITORENUMPROC)(HMONITOR, HDC, LPRECT, LPARAM);
__declspec(dllimport)
BOOL
__stdcall
EnumDisplayMonitors(
HDC hdc,
LPCRECT lprcClip,
MONITORENUMPROC lpfnEnum,
LPARAM dwData);
#line 12885 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
void
__stdcall
NotifyWinEvent(
DWORD event,
HWND  hwnd,
LONG  idObject,
LONG  idChild);
typedef void (__stdcall* WINEVENTPROC)(
HWINEVENTHOOK hWinEventHook,
DWORD         event,
HWND          hwnd,
LONG          idObject,
LONG          idChild,
DWORD         idEventThread,
DWORD         dwmsEventTime);
__declspec(dllimport)
HWINEVENTHOOK
__stdcall
SetWinEventHook(
DWORD eventMin,
DWORD eventMax,
HMODULE hmodWinEventProc,
WINEVENTPROC pfnWinEventProc,
DWORD idProcess,
DWORD idThread,
DWORD dwFlags);
__declspec(dllimport)
BOOL
__stdcall
IsWinEventHookInstalled(
DWORD event);
#line 12933 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 12935 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
UnhookWinEvent(
HWINEVENTHOOK hWinEventHook);
#line 12955 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 13164 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13181 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13197 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13211 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13227 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13229 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13240 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13439 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13443 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13516 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13523 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagGUITHREADINFO
{
DWORD   cbSize;
DWORD   flags;
HWND    hwndActive;
HWND    hwndFocus;
HWND    hwndCapture;
HWND    hwndMenuOwner;
HWND    hwndMoveSize;
HWND    hwndCaret;
RECT    rcCaret;
} GUITHREADINFO, *PGUITHREADINFO,  * LPGUITHREADINFO;
#line 13578 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 13589 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13591 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13592 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
GetGUIThreadInfo(
DWORD idThread,
PGUITHREADINFO pgui);
__declspec(dllimport)
BOOL
__stdcall
BlockInput(
BOOL fBlockIt);
#line 13625 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
GetWindowModuleFileNameA(
HWND hwnd,
LPSTR pszFileName,
UINT cchFileNameMax);
__declspec(dllimport)
UINT
__stdcall
GetWindowModuleFileNameW(
HWND hwnd,
LPWSTR pszFileName,
UINT cchFileNameMax);
#line 13645 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13647 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 13683 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagCURSORINFO
{
DWORD   cbSize;
DWORD   flags;
HCURSOR hCursor;
POINT   ptScreenPos;
} CURSORINFO, *PCURSORINFO, *LPCURSORINFO;
#line 13705 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
GetCursorInfo(
PCURSORINFO pci);
typedef struct tagWINDOWINFO
{
DWORD cbSize;
RECT rcWindow;
RECT rcClient;
DWORD dwStyle;
DWORD dwExStyle;
DWORD dwWindowStatus;
UINT cxWindowBorders;
UINT cyWindowBorders;
ATOM atomWindowType;
WORD wCreatorVersion;
} WINDOWINFO, *PWINDOWINFO, *LPWINDOWINFO;
__declspec(dllimport)
BOOL
__stdcall
GetWindowInfo(
HWND hwnd,
PWINDOWINFO pwi);
typedef struct tagTITLEBARINFO
{
DWORD cbSize;
RECT rcTitleBar;
DWORD rgstate[5 + 1];
} TITLEBARINFO, *PTITLEBARINFO, *LPTITLEBARINFO;
__declspec(dllimport)
BOOL
__stdcall
GetTitleBarInfo(
HWND hwnd,
PTITLEBARINFO pti);
#line 13764 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagMENUBARINFO
{
DWORD cbSize;
RECT rcBar;          
HMENU hMenu;         
HWND hwndMenu;       
BOOL fBarFocused:1;  
BOOL fFocused:1;     
} MENUBARINFO, *PMENUBARINFO, *LPMENUBARINFO;
__declspec(dllimport)
BOOL
__stdcall
GetMenuBarInfo(
HWND hwnd,
LONG idObject,
LONG idItem,
PMENUBARINFO pmbi);
typedef struct tagSCROLLBARINFO
{
DWORD cbSize;
RECT rcScrollBar;
int dxyLineButton;
int xyThumbTop;
int xyThumbBottom;
int reserved;
DWORD rgstate[5 + 1];
} SCROLLBARINFO, *PSCROLLBARINFO, *LPSCROLLBARINFO;
__declspec(dllimport)
BOOL
__stdcall
GetScrollBarInfo(
HWND hwnd,
LONG idObject,
PSCROLLBARINFO psbi);
typedef struct tagCOMBOBOXINFO
{
DWORD cbSize;
RECT rcItem;
RECT rcButton;
DWORD stateButton;
HWND hwndCombo;
HWND hwndItem;
HWND hwndList;
} COMBOBOXINFO, *PCOMBOBOXINFO, *LPCOMBOBOXINFO;
__declspec(dllimport)
BOOL
__stdcall
GetComboBoxInfo(
HWND hwndCombo,
PCOMBOBOXINFO pcbi);
#line 13831 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
HWND
__stdcall
GetAncestor(
HWND hwnd,
UINT gaFlags);
__declspec(dllimport)
HWND
__stdcall
RealChildWindowFromPoint(
HWND hwndParent,
POINT ptParentClientCoords);
__declspec(dllimport)
UINT
__stdcall
RealGetWindowClassA(
HWND hwnd,
LPSTR ptszClassName,
UINT cchClassNameMax);
__declspec(dllimport)
UINT
__stdcall
RealGetWindowClassW(
HWND hwnd,
LPWSTR ptszClassName,
UINT cchClassNameMax);
#line 13892 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
typedef struct tagALTTABINFO
{
DWORD cbSize;
int cItems;
int cColumns;
int cRows;
int iColFocus;
int iRowFocus;
int cxItem;
int cyItem;
POINT ptStart;
} ALTTABINFO, *PALTTABINFO, *LPALTTABINFO;
__declspec(dllimport)
BOOL
__stdcall
GetAltTabInfoA(
HWND hwnd,
int iItem,
PALTTABINFO pati,
LPSTR pszItemText,
UINT cchItemText);
__declspec(dllimport)
BOOL
__stdcall
GetAltTabInfoW(
HWND hwnd,
int iItem,
PALTTABINFO pati,
LPWSTR pszItemText,
UINT cchItemText);
#line 13932 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
DWORD
__stdcall
GetListBoxInfo(
HWND hwnd);
#line 13944 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 13947 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13948 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
LockWorkStation(
void);
#line 13960 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
BOOL
__stdcall
UserHandleGrantAccess(
HANDLE hUserHandle,
HANDLE hJob,
BOOL   bGrant);
#line 13972 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 13974 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
struct HRAWINPUT__{int unused;}; typedef struct HRAWINPUT__ *HRAWINPUT;
#line 13988 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagRAWINPUTHEADER {
DWORD dwType;
DWORD dwSize;
HANDLE hDevice;
WPARAM wParam;
} RAWINPUTHEADER, *PRAWINPUTHEADER, *LPRAWINPUTHEADER;
#line 14026 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagRAWMOUSE {
USHORT usFlags;
union {
ULONG ulButtons;
struct  {
USHORT  usButtonFlags;
USHORT  usButtonData;
};
};
ULONG ulRawButtons;
LONG lLastX;
LONG lLastY;
ULONG ulExtraInformation;
} RAWMOUSE, *PRAWMOUSE, *LPRAWMOUSE;
#line 14082 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 14123 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
typedef struct tagRAWKEYBOARD {
USHORT MakeCode;
USHORT Flags;
USHORT Reserved;
USHORT VKey;
UINT   Message;
ULONG ExtraInformation;
} RAWKEYBOARD, *PRAWKEYBOARD, *LPRAWKEYBOARD;
#line 14159 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagRAWHID {
DWORD dwSizeHid;    
DWORD dwCount;      
BYTE bRawData[1];
} RAWHID, *PRAWHID, *LPRAWHID;
#line 14190 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagRAWINPUT {
RAWINPUTHEADER header;
union {
RAWMOUSE    mouse;
RAWKEYBOARD keyboard;
RAWHID      hid;
} data;
} RAWINPUT, *PRAWINPUT, *LPRAWINPUT;
#line 14209 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 14216 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
UINT
__stdcall
GetRawInputData(
HRAWINPUT hRawInput,
UINT uiCommand,
LPVOID pData,
PUINT pcbSize,
UINT cbSizeHeader);
#line 14240 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagRID_DEVICE_INFO_MOUSE {
DWORD dwId;
DWORD dwNumberOfButtons;
DWORD dwSampleRate;
BOOL  fHasHorizontalWheel;
} RID_DEVICE_INFO_MOUSE, *PRID_DEVICE_INFO_MOUSE;
typedef struct tagRID_DEVICE_INFO_KEYBOARD {
DWORD dwType;
DWORD dwSubType;
DWORD dwKeyboardMode;
DWORD dwNumberOfFunctionKeys;
DWORD dwNumberOfIndicators;
DWORD dwNumberOfKeysTotal;
} RID_DEVICE_INFO_KEYBOARD, *PRID_DEVICE_INFO_KEYBOARD;
typedef struct tagRID_DEVICE_INFO_HID {
DWORD dwVendorId;
DWORD dwProductId;
DWORD dwVersionNumber;
USHORT usUsagePage;
USHORT usUsage;
} RID_DEVICE_INFO_HID, *PRID_DEVICE_INFO_HID;
typedef struct tagRID_DEVICE_INFO {
DWORD cbSize;
DWORD dwType;
union {
RID_DEVICE_INFO_MOUSE mouse;
RID_DEVICE_INFO_KEYBOARD keyboard;
RID_DEVICE_INFO_HID hid;
};
} RID_DEVICE_INFO, *PRID_DEVICE_INFO, *LPRID_DEVICE_INFO;
__declspec(dllimport)
UINT
__stdcall
GetRawInputDeviceInfoA(
HANDLE hDevice,
UINT uiCommand,
LPVOID pData,
PUINT pcbSize);
__declspec(dllimport)
UINT
__stdcall
GetRawInputDeviceInfoW(
HANDLE hDevice,
UINT uiCommand,
LPVOID pData,
PUINT pcbSize);
#line 14311 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
__declspec(dllimport)
UINT
__stdcall
GetRawInputBuffer(
PRAWINPUT pData,
PUINT pcbSize,
UINT cbSizeHeader);
typedef struct tagRAWINPUTDEVICE {
USHORT usUsagePage; 
USHORT usUsage;     
DWORD dwFlags;
HWND hwndTarget;    
} RAWINPUTDEVICE, *PRAWINPUTDEVICE, *LPRAWINPUTDEVICE;
typedef const RAWINPUTDEVICE* PCRAWINPUTDEVICE;
#line 14337 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 14351 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14362 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14366 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14368 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
RegisterRawInputDevices(
PCRAWINPUTDEVICE pRawInputDevices,
UINT uiNumDevices,
UINT cbSize);
__declspec(dllimport)
UINT
__stdcall
GetRegisteredRawInputDevices(
PRAWINPUTDEVICE pRawInputDevices,
PUINT puiNumDevices,
UINT cbSize);
typedef struct tagRAWINPUTDEVICELIST {
HANDLE hDevice;
DWORD dwType;
} RAWINPUTDEVICELIST, *PRAWINPUTDEVICELIST;
__declspec(dllimport)
UINT
__stdcall
GetRawInputDeviceList(
PRAWINPUTDEVICELIST pRawInputDeviceList,
PUINT puiNumDevices,
UINT cbSize);
__declspec(dllimport)
LRESULT
__stdcall
DefRawInputProc(
PRAWINPUT* paRawInput,
INT nInput,
UINT cbSizeHeader);
#line 14411 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 14414 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14538 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14563 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14608 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14611 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14832 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 14847 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
ShutdownBlockReasonCreate(
HWND hWnd,
LPCWSTR pwszReason);
__declspec(dllimport)
BOOL
__stdcall
ShutdownBlockReasonQuery(
HWND hWnd,
LPWSTR pwszBuff,
DWORD *pcchBuff);
__declspec(dllimport)
BOOL
__stdcall
ShutdownBlockReasonDestroy(
HWND hWnd);
#line 14876 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#pragma endregion
#line 14930 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 15013 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 15036 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 15044 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 15045 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 15051 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winuser.h"
#line 168 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#line 35 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
GetDateFormatA(
LCID Locale,
DWORD dwFlags,
const SYSTEMTIME * lpDate,
LPCSTR lpFormat,
LPSTR lpDateStr,
int cchDate
);
__declspec(dllimport)
int
__stdcall
GetDateFormatW(
LCID Locale,
DWORD dwFlags,
const SYSTEMTIME * lpDate,
LPCWSTR lpFormat,
LPWSTR lpDateStr,
int cchDate
);
#line 80 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
__declspec(dllimport)
int
__stdcall
GetTimeFormatA(
LCID Locale,
DWORD dwFlags,
const SYSTEMTIME * lpTime,
LPCSTR lpFormat,
LPSTR lpTimeStr,
int cchTime
);
__declspec(dllimport)
int
__stdcall
GetTimeFormatW(
LCID Locale,
DWORD dwFlags,
const SYSTEMTIME * lpTime,
LPCWSTR lpFormat,
LPWSTR lpTimeStr,
int cchTime
);
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#line 115 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
int
__stdcall
GetTimeFormatEx(
LPCWSTR lpLocaleName,
DWORD dwFlags,
const SYSTEMTIME * lpTime,
LPCWSTR lpFormat,
LPWSTR lpTimeStr,
int cchTime
);
__declspec(dllimport)
int
__stdcall
GetDateFormatEx(
LPCWSTR lpLocaleName,
DWORD dwFlags,
const SYSTEMTIME * lpDate,
LPCWSTR lpFormat,
LPWSTR lpDateStr,
int cchDate,
LPCWSTR lpCalendar
);
#line 156 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#pragma endregion
#line 159 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#line 171 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\datetimeapi.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma region Application Family
#line 49 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 114 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 118 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 209 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 237 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 272 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 276 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 320 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 487 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 492 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 506 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 510 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 524 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 642 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 653 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 674 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 691 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 716 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 720 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 747 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 751 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 808 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 818 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 823 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 826 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 919 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
typedef DWORD LGRPID;
typedef DWORD LCTYPE;
typedef DWORD CALTYPE;
typedef DWORD CALID;
typedef struct _cpinfo {
UINT    MaxCharSize;                    
BYTE    DefaultChar[2];   
BYTE    LeadByte[12];        
} CPINFO, *LPCPINFO;
typedef struct _cpinfoexA {
UINT    MaxCharSize;                    
BYTE    DefaultChar[2];   
BYTE    LeadByte[12];        
WCHAR   UnicodeDefaultChar;             
UINT    CodePage;                       
CHAR    CodePageName[260];         
} CPINFOEXA, *LPCPINFOEXA;
typedef struct _cpinfoexW {
UINT    MaxCharSize;                    
BYTE    DefaultChar[2];   
BYTE    LeadByte[12];        
WCHAR   UnicodeDefaultChar;             
UINT    CodePage;                       
WCHAR   CodePageName[260];         
} CPINFOEXW, *LPCPINFOEXW;
typedef CPINFOEXW CPINFOEX;
typedef LPCPINFOEXW LPCPINFOEX;
#line 983 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
typedef struct _numberfmtA {
UINT    NumDigits;                 
UINT    LeadingZero;               
UINT    Grouping;                  
LPSTR   lpDecimalSep;              
LPSTR   lpThousandSep;             
UINT    NegativeOrder;             
} NUMBERFMTA, *LPNUMBERFMTA;
typedef struct _numberfmtW {
UINT    NumDigits;                 
UINT    LeadingZero;               
UINT    Grouping;                  
LPWSTR  lpDecimalSep;              
LPWSTR  lpThousandSep;             
UINT    NegativeOrder;             
} NUMBERFMTW, *LPNUMBERFMTW;
typedef NUMBERFMTW NUMBERFMT;
typedef LPNUMBERFMTW LPNUMBERFMT;
#line 1012 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
typedef struct _currencyfmtA {
UINT    NumDigits;                 
UINT    LeadingZero;               
UINT    Grouping;                  
LPSTR   lpDecimalSep;              
LPSTR   lpThousandSep;             
UINT    NegativeOrder;             
UINT    PositiveOrder;             
LPSTR   lpCurrencySymbol;          
} CURRENCYFMTA, *LPCURRENCYFMTA;
typedef struct _currencyfmtW {
UINT    NumDigits;                 
UINT    LeadingZero;               
UINT    Grouping;                  
LPWSTR  lpDecimalSep;              
LPWSTR  lpThousandSep;             
UINT    NegativeOrder;             
UINT    PositiveOrder;             
LPWSTR  lpCurrencySymbol;          
} CURRENCYFMTW, *LPCURRENCYFMTW;
typedef CURRENCYFMTW CURRENCYFMT;
typedef LPCURRENCYFMTW LPCURRENCYFMT;
#line 1045 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
enum SYSNLS_FUNCTION{
COMPARE_STRING    =  0x0001,
};
typedef DWORD NLS_FUNCTION;
#line 1076 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
typedef struct _nlsversioninfo{		
DWORD dwNLSVersionInfoSize;     
DWORD dwNLSVersion;
DWORD dwDefinedVersion;         
} NLSVERSIONINFO, *LPNLSVERSIONINFO;
#line 1089 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
typedef struct _nlsversioninfoex{
DWORD dwNLSVersionInfoSize;     
DWORD dwNLSVersion;
DWORD dwDefinedVersion;         
DWORD dwEffectiveId;            
GUID  guidCustomVersion;        
} NLSVERSIONINFOEX, *LPNLSVERSIONINFOEX;
typedef LONG    GEOID;
typedef DWORD   GEOTYPE;
typedef DWORD   GEOCLASS;
enum SYSGEOTYPE {
GEO_NATION      =       0x0001,
GEO_LATITUDE    =       0x0002,
GEO_LONGITUDE   =       0x0003,
GEO_ISO2        =       0x0004,
GEO_ISO3        =       0x0005,
GEO_RFC1766     =       0x0006,
GEO_LCID        =       0x0007,
GEO_FRIENDLYNAME=       0x0008,
GEO_OFFICIALNAME=       0x0009,
GEO_TIMEZONES   =       0x000A,
GEO_OFFICIALLANGUAGES = 0x000B,
GEO_ISO_UN_NUMBER =     0x000C,
GEO_PARENT      =       0x000D
};
enum SYSGEOCLASS {
GEOCLASS_NATION  = 16,
GEOCLASS_REGION  = 14,
GEOCLASS_ALL = 0
};
#line 1169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
typedef BOOL (__stdcall* LANGUAGEGROUP_ENUMPROCA)(LGRPID, LPSTR, LPSTR, DWORD, LONG_PTR);
typedef BOOL (__stdcall* LANGGROUPLOCALE_ENUMPROCA)(LGRPID, LCID, LPSTR, LONG_PTR);
typedef BOOL (__stdcall* UILANGUAGE_ENUMPROCA)(LPSTR, LONG_PTR);
typedef BOOL (__stdcall* CODEPAGE_ENUMPROCA)(LPSTR);
typedef BOOL (__stdcall* DATEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (__stdcall* DATEFMT_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (__stdcall* TIMEFMT_ENUMPROCA)(LPSTR);
typedef BOOL (__stdcall* CALINFO_ENUMPROCA)(LPSTR);
typedef BOOL (__stdcall* CALINFO_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL (__stdcall* LOCALE_ENUMPROCA)(LPSTR);
typedef BOOL (__stdcall* LOCALE_ENUMPROCW)(LPWSTR);
typedef BOOL (__stdcall* LANGUAGEGROUP_ENUMPROCW)(LGRPID, LPWSTR, LPWSTR, DWORD, LONG_PTR);
typedef BOOL (__stdcall* LANGGROUPLOCALE_ENUMPROCW)(LGRPID, LCID, LPWSTR, LONG_PTR);
typedef BOOL (__stdcall* UILANGUAGE_ENUMPROCW)(LPWSTR, LONG_PTR);
typedef BOOL (__stdcall* CODEPAGE_ENUMPROCW)(LPWSTR);
typedef BOOL (__stdcall* DATEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL (__stdcall* DATEFMT_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (__stdcall* TIMEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL (__stdcall* CALINFO_ENUMPROCW)(LPWSTR);
typedef BOOL (__stdcall* CALINFO_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL (__stdcall* GEO_ENUMPROC)(GEOID);
#line 1225 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1253 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
typedef struct _FILEMUIINFO {
DWORD       dwSize;                 
DWORD       dwVersion;              
DWORD       dwFileType;             
BYTE        pChecksum[16];          
BYTE        pServiceChecksum[16];   
DWORD       dwLanguageNameOffset;   
DWORD       dwTypeIDMainSize;       
DWORD       dwTypeIDMainOffset;     
DWORD       dwTypeNameMainOffset;   
DWORD       dwTypeIDMUISize;        
DWORD       dwTypeIDMUIOffset;      
DWORD       dwTypeNameMUIOffset;    
BYTE        abBuffer[8];             
} FILEMUIINFO, *PFILEMUIINFO;
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 21 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#line 31 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#line 75 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
CompareStringW(
LCID Locale,
DWORD dwCmpFlags,
PCNZWCH lpString1,
int cchCount1,
PCNZWCH lpString2,
int cchCount2
);
#line 95 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
__declspec(dllimport)
int
__stdcall
FoldStringW(
DWORD dwMapFlags,
LPCWCH lpSrcStr,
int cchSrc,
LPWSTR lpDestStr,
int cchDest
);
#line 110 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#line 112 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
GetStringTypeExW(
LCID Locale,
DWORD dwInfoType,
LPCWCH lpSrcStr,
int cchSrc,
LPWORD lpCharType
);
#line 132 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
__declspec(dllimport)
BOOL
__stdcall
GetStringTypeW(
DWORD dwInfoType,
LPCWCH lpSrcStr,
int cchSrc,
LPWORD lpCharType
);
__declspec(dllimport)
int
__stdcall
MultiByteToWideChar(
UINT CodePage,
DWORD dwFlags,
LPCCH lpMultiByteStr,
int cbMultiByte,
LPWSTR lpWideCharStr,
int cchWideChar
);
__declspec(dllimport)
int
__stdcall
WideCharToMultiByte(
UINT CodePage,
DWORD dwFlags,
LPCWCH lpWideCharStr,
int cchWideChar,
LPSTR lpMultiByteStr,
int cbMultiByte,
LPCCH lpDefaultChar,
LPBOOL lpUsedDefaultChar
);
#line 182 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#pragma endregion
#line 190 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\stringapiset.h"
#line 1277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1278 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
IsValidCodePage(
UINT  CodePage);
#line 1349 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
UINT
__stdcall
GetACP(void);
__declspec(dllimport)
UINT
__stdcall
GetOEMCP(void);
#line 1365 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
GetCPInfo(
UINT       CodePage,
LPCPINFO  lpCPInfo);
__declspec(dllimport)
BOOL
__stdcall
GetCPInfoExA(
UINT          CodePage,
DWORD         dwFlags,
LPCPINFOEXA  lpCPInfoEx);
__declspec(dllimport)
BOOL
__stdcall
GetCPInfoExW(
UINT          CodePage,
DWORD         dwFlags,
LPCPINFOEXW  lpCPInfoEx);
#line 1396 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1398 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
int
__stdcall
CompareStringA(
LCID     Locale,
DWORD    dwCmpFlags,
PCNZCH lpString1,
int      cchCount1,
PCNZCH  lpString2,
int      cchCount2);
#line 1450 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1467 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
int
__stdcall
LCMapStringW(
LCID     Locale,
DWORD    dwMapFlags,
LPCWSTR  lpSrcStr,
int      cchSrc,
LPWSTR  lpDestStr,
int      cchDest);
#line 1482 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
int
__stdcall
LCMapStringA(
LCID     Locale,
DWORD    dwMapFlags,
LPCSTR  lpSrcStr,
int      cchSrc,
LPSTR  lpDestStr,
int      cchDest);
__declspec(dllimport)
int
__stdcall
GetLocaleInfoW(
LCID     Locale,
LCTYPE   LCType,
LPWSTR lpLCData,
int      cchData);
#line 1511 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
int 
__stdcall 
GetLocaleInfoA(
LCID Locale,
LCTYPE LCType,
LPSTR lpLCData,
int cchData
);
__declspec(dllimport)
BOOL
__stdcall
SetLocaleInfoA(
LCID     Locale,
LCTYPE   LCType,
LPCSTR  lpLCData);
__declspec(dllimport)
BOOL
__stdcall
SetLocaleInfoW(
LCID     Locale,
LCTYPE   LCType,
LPCWSTR  lpLCData);
#line 1545 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
int
__stdcall
GetCalendarInfoA(
LCID     Locale,
CALID    Calendar,
CALTYPE  CalType,
LPSTR   lpCalData,
int      cchData,
LPDWORD  lpValue);
__declspec(dllimport)
int
__stdcall
GetCalendarInfoW(
LCID     Locale,
CALID    Calendar,
CALTYPE  CalType,
LPWSTR   lpCalData,
int      cchData,
LPDWORD  lpValue);
#line 1575 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
SetCalendarInfoA(
LCID     Locale,
CALID    Calendar,
CALTYPE  CalType,
LPCSTR  lpCalData);
__declspec(dllimport)
BOOL
__stdcall
SetCalendarInfoW(
LCID     Locale,
CALID    Calendar,
CALTYPE  CalType,
LPCWSTR  lpCalData);
#line 1597 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1598 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1622 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)         
BOOL               
__stdcall             
IsDBCSLeadByte(    
BYTE  TestChar 
);
__declspec(dllimport)
BOOL
__stdcall
IsDBCSLeadByteEx(
UINT  CodePage,
BYTE  TestChar
);
#line 1640 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Application Family
#line 1663 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1665 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Desktop Family
#line 1684 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
int
__stdcall
GetNumberFormatA(
LCID             Locale,
DWORD            dwFlags,
LPCSTR          lpValue,
const NUMBERFMTA *lpFormat,
LPSTR          lpNumberStr,
int              cchNumber);
__declspec(dllimport)
int
__stdcall
GetNumberFormatW(
LCID             Locale,
DWORD            dwFlags,
LPCWSTR          lpValue,
const NUMBERFMTW *lpFormat,
LPWSTR          lpNumberStr,
int              cchNumber);
#line 1712 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
int
__stdcall
GetCurrencyFormatA(
LCID               Locale,
DWORD              dwFlags,
LPCSTR            lpValue,
const CURRENCYFMTA *lpFormat,
LPSTR            lpCurrencyStr,
int                cchCurrency);
__declspec(dllimport)
int
__stdcall
GetCurrencyFormatW(
LCID               Locale,
DWORD              dwFlags,
LPCWSTR            lpValue,
const CURRENCYFMTW *lpFormat,
LPWSTR            lpCurrencyStr,
int                cchCurrency);
#line 1740 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumCalendarInfoA(
CALINFO_ENUMPROCA lpCalInfoEnumProc,
LCID              Locale,
CALID             Calendar,
CALTYPE           CalType);
__declspec(dllimport)
BOOL
__stdcall
EnumCalendarInfoW(
CALINFO_ENUMPROCW lpCalInfoEnumProc,
LCID              Locale,
CALID             Calendar,
CALTYPE           CalType);
#line 1764 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumCalendarInfoExA(
CALINFO_ENUMPROCEXA lpCalInfoEnumProcEx,
LCID                Locale,
CALID               Calendar,
CALTYPE             CalType);
__declspec(dllimport)
BOOL
__stdcall
EnumCalendarInfoExW(
CALINFO_ENUMPROCEXW lpCalInfoEnumProcEx,
LCID                Locale,
CALID               Calendar,
CALTYPE             CalType);
#line 1789 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1790 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumTimeFormatsA(
TIMEFMT_ENUMPROCA lpTimeFmtEnumProc,
LCID              Locale,
DWORD             dwFlags);
__declspec(dllimport)
BOOL
__stdcall
EnumTimeFormatsW(
TIMEFMT_ENUMPROCW lpTimeFmtEnumProc,
LCID              Locale,
DWORD             dwFlags);
#line 1812 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumDateFormatsA(
DATEFMT_ENUMPROCA lpDateFmtEnumProc,
LCID              Locale,
DWORD             dwFlags);
__declspec(dllimport)
BOOL
__stdcall
EnumDateFormatsW(
DATEFMT_ENUMPROCW lpDateFmtEnumProc,
LCID              Locale,
DWORD             dwFlags);
#line 1834 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumDateFormatsExA(
DATEFMT_ENUMPROCEXA lpDateFmtEnumProcEx,
LCID                Locale,
DWORD               dwFlags);
__declspec(dllimport)
BOOL
__stdcall
EnumDateFormatsExW(
DATEFMT_ENUMPROCEXW lpDateFmtEnumProcEx,
LCID                Locale,
DWORD               dwFlags);
#line 1857 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 1858 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
IsValidLanguageGroup(
LGRPID  LanguageGroup,
DWORD   dwFlags);
#line 1867 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
GetNLSVersion(
NLS_FUNCTION     Function,
LCID             Locale,
LPNLSVERSIONINFO lpVersionInformation);
__declspec(dllimport)
BOOL
__stdcall
IsNLSDefinedString(
NLS_FUNCTION     Function,
DWORD            dwFlags,
LPNLSVERSIONINFO lpVersionInformation,
LPCWSTR          lpString,
INT              cchStr);
__declspec(dllimport)
BOOL
__stdcall
IsValidLocale(
LCID   Locale,
DWORD  dwFlags);
#line 1896 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
int
__stdcall
GetGeoInfoA(
GEOID       Location,
GEOTYPE     GeoType,
LPSTR     lpGeoData,
int         cchData,
LANGID      LangId);
__declspec(dllimport)
int
__stdcall
GetGeoInfoW(
GEOID       Location,
GEOTYPE     GeoType,
LPWSTR     lpGeoData,
int         cchData,
LANGID      LangId);
#line 1924 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumSystemGeoID(
GEOCLASS        GeoClass,
GEOID           ParentGeoId,
GEO_ENUMPROC    lpGeoEnumProc);
__declspec(dllimport)
GEOID
__stdcall
GetUserGeoID(
GEOCLASS    GeoClass);
#line 1940 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
SetUserGeoID(
GEOID       GeoId);
__declspec(dllimport)
LCID
__stdcall
ConvertDefaultLocale(
LCID   Locale);
__declspec(dllimport)
LCID
__stdcall
GetThreadLocale(void);
__declspec(dllimport)
BOOL
__stdcall
SetThreadLocale(
LCID  Locale
);
__declspec(dllimport)
LANGID
__stdcall
GetSystemDefaultUILanguage(void);
__declspec(dllimport)
LANGID
__stdcall
GetUserDefaultUILanguage(void);
#line 1980 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
LANGID
__stdcall
GetSystemDefaultLangID(void);
__declspec(dllimport)
LANGID
__stdcall
GetUserDefaultLangID(void);
__declspec(dllimport)
LCID
__stdcall
GetSystemDefaultLCID(void);
__declspec(dllimport)
LCID
__stdcall
GetUserDefaultLCID(void);
__declspec(dllimport)
LANGID
__stdcall
SetThreadUILanguage(  LANGID LangId);
#line 2125 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
GetStringTypeExA(
LCID       Locale,
DWORD      dwInfoType,
LPCSTR   lpSrcStr,
int        cchSrc,
LPWORD     lpCharType);
__declspec(dllimport)
BOOL
__stdcall
GetStringTypeA(
LCID     Locale,
DWORD    dwInfoType,
LPCSTR   lpSrcStr,
int      cchSrc,
LPWORD  lpCharType);
__declspec(dllimport)
int
__stdcall
FoldStringA(
DWORD    dwMapFlags,
LPCSTR  lpSrcStr,
int      cchSrc,
LPSTR  lpDestStr,
int      cchDest);
__declspec(dllimport)
BOOL
__stdcall
EnumSystemLocalesA(
LOCALE_ENUMPROCA lpLocaleEnumProc,
DWORD            dwFlags);
__declspec(dllimport)
BOOL
__stdcall
EnumSystemLocalesW(
LOCALE_ENUMPROCW lpLocaleEnumProc,
DWORD            dwFlags);
#line 2196 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumSystemLanguageGroupsA(
LANGUAGEGROUP_ENUMPROCA lpLanguageGroupEnumProc,
DWORD                   dwFlags,
LONG_PTR                lParam);
__declspec(dllimport)
BOOL
__stdcall
EnumSystemLanguageGroupsW(
LANGUAGEGROUP_ENUMPROCW lpLanguageGroupEnumProc,
DWORD                   dwFlags,
LONG_PTR                lParam);
#line 2217 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumLanguageGroupLocalesA(
LANGGROUPLOCALE_ENUMPROCA lpLangGroupLocaleEnumProc,
LGRPID                    LanguageGroup,
DWORD                     dwFlags,
LONG_PTR                  lParam);
__declspec(dllimport)
BOOL
__stdcall
EnumLanguageGroupLocalesW(
LANGGROUPLOCALE_ENUMPROCW lpLangGroupLocaleEnumProc,
LGRPID                    LanguageGroup,
DWORD                     dwFlags,
LONG_PTR                  lParam);
#line 2239 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
__declspec(dllimport)
BOOL
__stdcall
EnumUILanguagesA(
UILANGUAGE_ENUMPROCA lpUILanguageEnumProc,
DWORD                dwFlags,
LONG_PTR             lParam);
__declspec(dllimport)
BOOL
__stdcall
EnumUILanguagesW(
UILANGUAGE_ENUMPROCW lpUILanguageEnumProc,
DWORD                dwFlags,
LONG_PTR             lParam);
#line 2259 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 2260 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 2262 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#pragma region Application Family
__declspec(dllimport)
BOOL
__stdcall
EnumSystemCodePagesA(
CODEPAGE_ENUMPROCA lpCodePageEnumProc,
DWORD              dwFlags);
__declspec(dllimport)
BOOL
__stdcall
EnumSystemCodePagesW(
CODEPAGE_ENUMPROCW lpCodePageEnumProc,
DWORD              dwFlags);
#line 2284 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 2350 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 2352 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#line 2562 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 2581 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma region Desktop Family
#line 2587 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#pragma endregion
#line 2590 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 2597 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnls.h"
#line 170 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 171 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma once
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma region Application Family
typedef struct _COORD {
SHORT X;
SHORT Y;
} COORD, *PCOORD;
#line 46 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _SMALL_RECT {
SHORT Left;
SHORT Top;
SHORT Right;
SHORT Bottom;
} SMALL_RECT, *PSMALL_RECT;
#line 59 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#pragma region Application Family
typedef struct _KEY_EVENT_RECORD {
BOOL bKeyDown;
WORD wRepeatCount;
WORD wVirtualKeyCode;
WORD wVirtualScanCode;
union {
WCHAR UnicodeChar;
CHAR   AsciiChar;
} uChar;
DWORD dwControlKeyState;
} KEY_EVENT_RECORD, *PKEY_EVENT_RECORD;
typedef struct _MOUSE_EVENT_RECORD {
COORD dwMousePosition;
DWORD dwButtonState;
DWORD dwControlKeyState;
DWORD dwEventFlags;
} MOUSE_EVENT_RECORD, *PMOUSE_EVENT_RECORD;
#line 124 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
typedef struct _WINDOW_BUFFER_SIZE_RECORD {
COORD dwSize;
} WINDOW_BUFFER_SIZE_RECORD, *PWINDOW_BUFFER_SIZE_RECORD;
typedef struct _MENU_EVENT_RECORD {
UINT dwCommandId;
} MENU_EVENT_RECORD, *PMENU_EVENT_RECORD;
typedef struct _FOCUS_EVENT_RECORD {
BOOL bSetFocus;
} FOCUS_EVENT_RECORD, *PFOCUS_EVENT_RECORD;
typedef struct _INPUT_RECORD {
WORD EventType;
union {
KEY_EVENT_RECORD KeyEvent;
MOUSE_EVENT_RECORD MouseEvent;
WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
MENU_EVENT_RECORD MenuEvent;
FOCUS_EVENT_RECORD FocusEvent;
} Event;
} INPUT_RECORD, *PINPUT_RECORD;
#line 149 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _CHAR_INFO {
union {
WCHAR UnicodeChar;
CHAR   AsciiChar;
} Char;
WORD Attributes;
} CHAR_INFO, *PCHAR_INFO;
#line 173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
COORD dwSize;
COORD dwCursorPosition;
WORD  wAttributes;
SMALL_RECT srWindow;
COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO, *PCONSOLE_SCREEN_BUFFER_INFO;
typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX {
ULONG cbSize;
COORD dwSize;
COORD dwCursorPosition;
WORD wAttributes;
SMALL_RECT srWindow;
COORD dwMaximumWindowSize;
WORD wPopupAttributes;
BOOL bFullscreenSupported;
COLORREF ColorTable[16];
} CONSOLE_SCREEN_BUFFER_INFOEX, *PCONSOLE_SCREEN_BUFFER_INFOEX;
typedef struct _CONSOLE_CURSOR_INFO {
DWORD  dwSize;
BOOL   bVisible;
} CONSOLE_CURSOR_INFO, *PCONSOLE_CURSOR_INFO;
typedef struct _CONSOLE_FONT_INFO {
DWORD  nFont;
COORD  dwFontSize;
} CONSOLE_FONT_INFO, *PCONSOLE_FONT_INFO;
typedef struct _CONSOLE_FONT_INFOEX {
ULONG cbSize;
DWORD nFont;
COORD dwFontSize;
UINT FontFamily;
UINT FontWeight;
WCHAR FaceName[32];
} CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX;
#line 240 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
typedef struct _CONSOLE_HISTORY_INFO {
UINT cbSize;
UINT HistoryBufferSize;
UINT NumberOfHistoryBuffers;
DWORD dwFlags;
} CONSOLE_HISTORY_INFO, *PCONSOLE_HISTORY_INFO;
#line 251 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#pragma region Desktop Family
typedef struct _CONSOLE_SELECTION_INFO {
DWORD dwFlags;
COORD dwSelectionAnchor;
SMALL_RECT srSelection;
} CONSOLE_SELECTION_INFO, *PCONSOLE_SELECTION_INFO;
#line 265 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#line 277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma region Application Family
typedef
BOOL
(__stdcall *PHANDLER_ROUTINE)(
DWORD CtrlType
);
#line 292 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
PeekConsoleInputW(
HANDLE hConsoleInput,
PINPUT_RECORD lpBuffer,
DWORD nLength,
LPDWORD lpNumberOfEventsRead
);
#line 342 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleInputA(
HANDLE hConsoleInput,
const INPUT_RECORD *lpBuffer,
DWORD nLength,
LPDWORD lpNumberOfEventsWritten
);
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleInputW(
HANDLE hConsoleInput,
const INPUT_RECORD *lpBuffer,
DWORD nLength,
LPDWORD lpNumberOfEventsWritten
);
#line 366 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleOutputA(
HANDLE hConsoleOutput,
PCHAR_INFO lpBuffer,
COORD dwBufferSize,
COORD dwBufferCoord,
PSMALL_RECT lpReadRegion
);
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleOutputW(
HANDLE hConsoleOutput,
PCHAR_INFO lpBuffer,
COORD dwBufferSize,
COORD dwBufferCoord,
PSMALL_RECT lpReadRegion
);
#line 392 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleOutputA(
HANDLE hConsoleOutput,
const CHAR_INFO *lpBuffer,
COORD dwBufferSize,
COORD dwBufferCoord,
PSMALL_RECT lpWriteRegion
);
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleOutputW(
HANDLE hConsoleOutput,
const CHAR_INFO *lpBuffer,
COORD dwBufferSize,
COORD dwBufferCoord,
PSMALL_RECT lpWriteRegion
);
#line 418 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleOutputCharacterA(
HANDLE hConsoleOutput,
LPSTR lpCharacter,
DWORD nLength,
COORD dwReadCoord,
LPDWORD lpNumberOfCharsRead
);
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleOutputCharacterW(
HANDLE hConsoleOutput,
LPWSTR lpCharacter,
DWORD nLength,
COORD dwReadCoord,
LPDWORD lpNumberOfCharsRead
);
#line 444 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleOutputAttribute(
HANDLE hConsoleOutput,
LPWORD lpAttribute,
DWORD nLength,
COORD dwReadCoord,
LPDWORD lpNumberOfAttrsRead
);
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleOutputCharacterA(
HANDLE hConsoleOutput,
LPCSTR lpCharacter,
DWORD nLength,
COORD dwWriteCoord,
LPDWORD lpNumberOfCharsWritten
);
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleOutputCharacterW(
HANDLE hConsoleOutput,
LPCWSTR lpCharacter,
DWORD nLength,
COORD dwWriteCoord,
LPDWORD lpNumberOfCharsWritten
);
#line 481 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleOutputAttribute(
HANDLE hConsoleOutput,
const WORD *lpAttribute,
DWORD nLength,
COORD dwWriteCoord,
LPDWORD lpNumberOfAttrsWritten
);
__declspec(dllimport)
BOOL
__stdcall
FillConsoleOutputCharacterA(
HANDLE hConsoleOutput,
CHAR  cCharacter,
DWORD  nLength,
COORD  dwWriteCoord,
LPDWORD lpNumberOfCharsWritten
);
__declspec(dllimport)
BOOL
__stdcall
FillConsoleOutputCharacterW(
HANDLE hConsoleOutput,
WCHAR  cCharacter,
DWORD  nLength,
COORD  dwWriteCoord,
LPDWORD lpNumberOfCharsWritten
);
#line 518 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
FillConsoleOutputAttribute(
HANDLE hConsoleOutput,
WORD   wAttribute,
DWORD  nLength,
COORD  dwWriteCoord,
LPDWORD lpNumberOfAttrsWritten
);
__declspec(dllimport)
BOOL
__stdcall
GetConsoleScreenBufferInfo(
HANDLE hConsoleOutput,
PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo
);
__declspec(dllimport)
BOOL
__stdcall
GetConsoleScreenBufferInfoEx(
HANDLE hConsoleOutput,
PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleScreenBufferInfoEx(
HANDLE hConsoleOutput,
PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx);
__declspec(dllimport)
COORD
__stdcall
GetLargestConsoleWindowSize(
HANDLE hConsoleOutput
);
__declspec(dllimport)
BOOL
__stdcall
GetConsoleCursorInfo(
HANDLE hConsoleOutput,
PCONSOLE_CURSOR_INFO lpConsoleCursorInfo
);
__declspec(dllimport)
BOOL
__stdcall
GetCurrentConsoleFont(
HANDLE hConsoleOutput,
BOOL bMaximumWindow,
PCONSOLE_FONT_INFO lpConsoleCurrentFont
);
__declspec(dllimport)
BOOL
__stdcall
GetCurrentConsoleFontEx(
HANDLE hConsoleOutput,
BOOL bMaximumWindow,
PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx);
__declspec(dllimport)
BOOL
__stdcall
SetCurrentConsoleFontEx(
HANDLE hConsoleOutput,
BOOL bMaximumWindow,
PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx);
#line 598 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
GetConsoleHistoryInfo(
PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleHistoryInfo(
PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo);
__declspec(dllimport)
COORD
__stdcall
GetConsoleFontSize(
HANDLE hConsoleOutput,
DWORD nFont
);
__declspec(dllimport)
BOOL
__stdcall
GetConsoleSelectionInfo(
PCONSOLE_SELECTION_INFO lpConsoleSelectionInfo
);
#line 627 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
GetNumberOfConsoleMouseButtons(
LPDWORD lpNumberOfMouseButtons
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleActiveScreenBuffer(
HANDLE hConsoleOutput
);
__declspec(dllimport)
BOOL
__stdcall
FlushConsoleInputBuffer(
HANDLE hConsoleInput
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleScreenBufferSize(
HANDLE hConsoleOutput,
COORD dwSize
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleCursorPosition(
HANDLE hConsoleOutput,
COORD dwCursorPosition
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleCursorInfo(
HANDLE hConsoleOutput,
const CONSOLE_CURSOR_INFO *lpConsoleCursorInfo
);
__declspec(dllimport)
BOOL
__stdcall
ScrollConsoleScreenBufferA(
HANDLE hConsoleOutput,
const SMALL_RECT *lpScrollRectangle,
const SMALL_RECT *lpClipRectangle,
COORD dwDestinationOrigin,
const CHAR_INFO *lpFill
);
__declspec(dllimport)
BOOL
__stdcall
ScrollConsoleScreenBufferW(
HANDLE hConsoleOutput,
const SMALL_RECT *lpScrollRectangle,
const SMALL_RECT *lpClipRectangle,
COORD dwDestinationOrigin,
const CHAR_INFO *lpFill
);
#line 698 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
SetConsoleWindowInfo(
HANDLE hConsoleOutput,
BOOL bAbsolute,
const SMALL_RECT *lpConsoleWindow
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleTextAttribute(
HANDLE hConsoleOutput,
WORD wAttributes
);
__declspec(dllimport)
BOOL
__stdcall
GenerateConsoleCtrlEvent(
DWORD dwCtrlEvent,
DWORD dwProcessGroupId);
__declspec(dllimport)
BOOL
__stdcall
FreeConsole(
void);
__declspec(dllimport)
BOOL
__stdcall
AttachConsole(
DWORD dwProcessId);
#line 739 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
DWORD
__stdcall
GetConsoleTitleA(
LPSTR lpConsoleTitle,
DWORD nSize
);
__declspec(dllimport)
DWORD
__stdcall
GetConsoleTitleW(
LPWSTR lpConsoleTitle,
DWORD nSize
);
#line 759 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#line 779 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
BOOL
__stdcall
SetConsoleTitleA(
LPCSTR lpConsoleTitle
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleTitleW(
LPCWSTR lpConsoleTitle
);
#line 797 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#line 799 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#pragma region Application Family
typedef struct _CONSOLE_READCONSOLE_CONTROL {
ULONG nLength;
ULONG nInitialChars;
ULONG dwCtrlWakeupMask;
ULONG dwControlKeyState;
} CONSOLE_READCONSOLE_CONTROL, *PCONSOLE_READCONSOLE_CONTROL;
#line 812 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#pragma once
#line 13 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 18 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 19 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#line 32 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#pragma region Desktop Family
__declspec(dllimport)
BOOL
__stdcall
AllocConsole(
void
);
__declspec(dllimport)
UINT
__stdcall
GetConsoleCP(
void
);
__declspec(dllimport)
BOOL
__stdcall
GetConsoleMode(
HANDLE hConsoleHandle,
LPDWORD lpMode
);
__declspec(dllimport)
UINT
__stdcall
GetConsoleOutputCP(
void
);
__declspec(dllimport)
BOOL
__stdcall
GetNumberOfConsoleInputEvents(
HANDLE hConsoleInput,
LPDWORD lpNumberOfEvents
);
__declspec(dllimport)
BOOL
__stdcall
PeekConsoleInputA(
HANDLE hConsoleInput,
PINPUT_RECORD lpBuffer,
DWORD nLength,
LPDWORD lpNumberOfEventsRead
);
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleA(
HANDLE hConsoleInput,
LPVOID lpBuffer,
DWORD nNumberOfCharsToRead,
LPDWORD lpNumberOfCharsRead,
PCONSOLE_READCONSOLE_CONTROL pInputControl
);
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleW(
HANDLE hConsoleInput,
LPVOID lpBuffer,
DWORD nNumberOfCharsToRead,
LPDWORD lpNumberOfCharsRead,
PCONSOLE_READCONSOLE_CONTROL pInputControl
);
#line 127 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleInputA(
HANDLE hConsoleInput,
PINPUT_RECORD lpBuffer,
DWORD nLength,
LPDWORD lpNumberOfEventsRead
);
__declspec(dllimport)
BOOL
__stdcall
ReadConsoleInputW(
HANDLE hConsoleInput,
PINPUT_RECORD lpBuffer,
DWORD nLength,
LPDWORD lpNumberOfEventsRead
);
#line 155 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
__declspec(dllimport)
BOOL
__stdcall
SetConsoleCtrlHandler(
PHANDLER_ROUTINE HandlerRoutine,
BOOL Add
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleMode(
HANDLE hConsoleHandle,
DWORD dwMode
);
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleA(
HANDLE hConsoleOutput,
const void * lpBuffer,
DWORD nNumberOfCharsToWrite,
LPDWORD lpNumberOfCharsWritten,
LPVOID lpReserved
);
__declspec(dllimport)
BOOL
__stdcall
WriteConsoleW(
HANDLE hConsoleOutput,
const void * lpBuffer,
DWORD nNumberOfCharsToWrite,
LPDWORD lpNumberOfCharsWritten,
LPVOID lpReserved
);
#line 201 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#line 203 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#pragma endregion
#line 210 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\consoleapi.h"
#line 818 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#line 819 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma region Desktop Family
__declspec(dllimport)
HANDLE
__stdcall
CreateConsoleScreenBuffer(
DWORD dwDesiredAccess,
DWORD dwShareMode,
const SECURITY_ATTRIBUTES *lpSecurityAttributes,
DWORD dwFlags,
LPVOID lpScreenBufferData
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleCP(
UINT wCodePageID
);
__declspec(dllimport)
BOOL
__stdcall
SetConsoleOutputCP(
UINT wCodePageID
);
__declspec(dllimport)
BOOL
__stdcall
GetConsoleDisplayMode(
LPDWORD lpModeFlags);
BOOL
__stdcall
SetConsoleDisplayMode(
HANDLE hConsoleOutput,
DWORD dwFlags,
PCOORD lpNewScreenBufferDimensions);
__declspec(dllimport)
HWND
__stdcall
GetConsoleWindow(
void
);
#line 877 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
DWORD
__stdcall
GetConsoleProcessList(
LPDWORD lpdwProcessList,
DWORD dwProcessCount);
__declspec(dllimport)
BOOL
__stdcall
AddConsoleAliasA(
LPSTR Source,
LPSTR Target,
LPSTR ExeName);
__declspec(dllimport)
BOOL
__stdcall
AddConsoleAliasW(
LPWSTR Source,
LPWSTR Target,
LPWSTR ExeName);
#line 910 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasA(
LPSTR Source,
LPSTR TargetBuffer,
DWORD TargetBufferLength,
LPSTR ExeName);
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasW(
LPWSTR Source,
LPWSTR TargetBuffer,
DWORD TargetBufferLength,
LPWSTR ExeName);
#line 932 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasesLengthA(
LPSTR ExeName);
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasesLengthW(
LPWSTR ExeName);
#line 948 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasExesLengthA(
void);
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasExesLengthW(
void);
#line 964 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasesA(
LPSTR AliasBuffer,
DWORD AliasBufferLength,
LPSTR ExeName);
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasesW(
LPWSTR AliasBuffer,
DWORD AliasBufferLength,
LPWSTR ExeName);
#line 984 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasExesA(
LPSTR ExeNameBuffer,
DWORD ExeNameBufferLength);
__declspec(dllimport)
DWORD
__stdcall
GetConsoleAliasExesW(
LPWSTR ExeNameBuffer,
DWORD ExeNameBufferLength);
#line 1002 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#line 1004 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#line 1006 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#pragma endregion
#line 1014 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\wincon.h"
#line 173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\verrsrc.h"
#pragma region Application Family
#line 27 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\verrsrc.h"
#line 88 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\verrsrc.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagVS_FIXEDFILEINFO
{
DWORD   dwSignature;            
DWORD   dwStrucVersion;         
DWORD   dwFileVersionMS;        
DWORD   dwFileVersionLS;        
DWORD   dwProductVersionMS;     
DWORD   dwProductVersionLS;     
DWORD   dwFileFlagsMask;        
DWORD   dwFileFlags;            
DWORD   dwFileOS;               
DWORD   dwFileType;             
DWORD   dwFileSubtype;          
DWORD   dwFileDateMS;           
DWORD   dwFileDateLS;           
} VS_FIXEDFILEINFO;
#line 169 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\verrsrc.h"
#line 171 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\verrsrc.h"
#pragma endregion
#line 20 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
#pragma region Desktop Family
DWORD
__stdcall
VerFindFileA(
DWORD uFlags,
LPCSTR szFileName,
LPCSTR szWinDir,
LPCSTR szAppDir,
LPSTR szCurDir,
PUINT puCurDirLen,
LPSTR szDestDir,
PUINT puDestDirLen
);
DWORD
__stdcall
VerFindFileW(
DWORD uFlags,
LPCWSTR szFileName,
LPCWSTR szWinDir,
LPCWSTR szAppDir,
LPWSTR szCurDir,
PUINT puCurDirLen,
LPWSTR szDestDir,
PUINT puDestDirLen
);
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
DWORD
__stdcall
VerInstallFileA(
DWORD uFlags,
LPCSTR szSrcFileName,
LPCSTR szDestFileName,
LPCSTR szSrcDir,
LPCSTR szDestDir,
LPCSTR szCurDir,
LPSTR szTmpFile,
PUINT puTmpFileLen
);
DWORD
__stdcall
VerInstallFileW(
DWORD uFlags,
LPCWSTR szSrcFileName,
LPCWSTR szDestFileName,
LPCWSTR szSrcDir,
LPCWSTR szDestDir,
LPCWSTR szCurDir,
LPWSTR szTmpFile,
PUINT puTmpFileLen
);
#line 93 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
DWORD
__stdcall
GetFileVersionInfoSizeA(
LPCSTR lptstrFilename, 
LPDWORD lpdwHandle       
);
DWORD
__stdcall
GetFileVersionInfoSizeW(
LPCWSTR lptstrFilename, 
LPDWORD lpdwHandle       
);
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
BOOL
__stdcall
GetFileVersionInfoA(
LPCSTR lptstrFilename, 
DWORD dwHandle,          
DWORD dwLen,             
LPVOID lpData            
);
BOOL
__stdcall
GetFileVersionInfoW(
LPCWSTR lptstrFilename, 
DWORD dwHandle,          
DWORD dwLen,             
LPVOID lpData            
);
#line 137 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
DWORD __stdcall GetFileVersionInfoSizeExA(  DWORD dwFlags,   LPCSTR lpwstrFilename,   LPDWORD lpdwHandle);
DWORD __stdcall GetFileVersionInfoSizeExW(  DWORD dwFlags,   LPCWSTR lpwstrFilename,   LPDWORD lpdwHandle);
#line 145 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
BOOL __stdcall GetFileVersionInfoExA(  DWORD dwFlags,
LPCSTR lpwstrFilename,
DWORD dwHandle,
DWORD dwLen,
LPVOID lpData);
BOOL __stdcall GetFileVersionInfoExW(  DWORD dwFlags,
LPCWSTR lpwstrFilename,
DWORD dwHandle,
DWORD dwLen,
LPVOID lpData);
#line 161 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
DWORD
__stdcall
VerLanguageNameA(
DWORD wLang,
LPSTR szLang,
DWORD cchLang
);
DWORD
__stdcall
VerLanguageNameW(
DWORD wLang,
LPWSTR szLang,
DWORD cchLang
);
#line 182 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
BOOL
__stdcall
VerQueryValueA(
LPCVOID pBlock,
LPCSTR lpSubBlock,
LPVOID * lplpBuffer,
PUINT puLen
);
BOOL
__stdcall
VerQueryValueW(
LPCVOID pBlock,
LPCWSTR lpSubBlock,
LPVOID * lplpBuffer,
PUINT puLen
);
#line 204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
#line 207 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
#line 209 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
#pragma endregion
#line 217 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winver.h"
#line 174 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 175 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apiset.h"
#line 23 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\apisetcconv.h"
#line 24 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 36 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#pragma region Desktop Family
typedef ACCESS_MASK REGSAM;
struct val_context {
int valuelen;       
LPVOID value_context;   
LPVOID val_buff_ptr;    
};
typedef struct val_context  *PVALCONTEXT;
typedef struct pvalueA {           
LPSTR   pv_valuename;          
int pv_valuelen;
LPVOID pv_value_context;
DWORD pv_type;
}PVALUEA,  *PPVALUEA;
typedef struct pvalueW {           
LPWSTR  pv_valuename;          
int pv_valuelen;
LPVOID pv_value_context;
DWORD pv_type;
}PVALUEW,  *PPVALUEW;
typedef PVALUEW PVALUE;
typedef PPVALUEW PPVALUE;
#line 146 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
typedef
DWORD __cdecl
QUERYHANDLER (LPVOID keycontext, PVALCONTEXT val_list, DWORD num_vals,
LPVOID outputbuffer, DWORD  *total_outlen, DWORD input_blen);
typedef QUERYHANDLER  *PQUERYHANDLER;
typedef struct provider_info {
PQUERYHANDLER pi_R0_1val;
PQUERYHANDLER pi_R0_allvals;
PQUERYHANDLER pi_R3_1val;
PQUERYHANDLER pi_R3_allvals;
DWORD pi_flags;    
LPVOID pi_key_context;
}REG_PROVIDER;
typedef struct provider_info  *PPROVIDER;
typedef struct value_entA {
LPSTR   ve_valuename;
DWORD ve_valuelen;
DWORD_PTR ve_valueptr;
DWORD ve_type;
}VALENTA,  *PVALENTA;
typedef struct value_entW {
LPWSTR  ve_valuename;
DWORD ve_valuelen;
DWORD_PTR ve_valueptr;
DWORD ve_type;
}VALENTW,  *PVALENTW;
typedef VALENTW VALENT;
typedef PVALENTW PVALENT;
#line 184 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 186 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 189 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
typedef   LONG LSTATUS;
__declspec(dllimport)
LSTATUS
__stdcall
RegCloseKey(
HKEY hKey
);
__declspec(dllimport)
LSTATUS
__stdcall
RegOverridePredefKey (
HKEY hKey,
HKEY hNewHKey
);
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenUserClassesRoot(
HANDLE hToken,
DWORD dwOptions,
REGSAM samDesired,
PHKEY phkResult
);
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenCurrentUser(
REGSAM samDesired,
PHKEY phkResult
);
__declspec(dllimport)
LSTATUS
__stdcall
RegDisablePredefinedCache(
void
);
__declspec(dllimport)
LSTATUS
__stdcall
RegDisablePredefinedCacheEx(
void
);
__declspec(dllimport)
LSTATUS
__stdcall
RegConnectRegistryA (
LPCSTR lpMachineName,
HKEY hKey,
PHKEY phkResult
);
__declspec(dllimport)
LSTATUS
__stdcall
RegConnectRegistryW (
LPCWSTR lpMachineName,
HKEY hKey,
PHKEY phkResult
);
#line 275 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegConnectRegistryExA (
LPCSTR lpMachineName,
HKEY hKey,
ULONG Flags,
PHKEY phkResult
);
__declspec(dllimport)
LSTATUS
__stdcall
RegConnectRegistryExW (
LPCWSTR lpMachineName,
HKEY hKey,
ULONG Flags,
PHKEY phkResult
);
#line 299 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegCreateKeyA (
HKEY hKey,
LPCSTR lpSubKey,
PHKEY phkResult
);
__declspec(dllimport)
LSTATUS
__stdcall
RegCreateKeyW (
HKEY hKey,
LPCWSTR lpSubKey,
PHKEY phkResult
);
#line 321 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegCreateKeyExA(
HKEY hKey,
LPCSTR lpSubKey,
DWORD Reserved,
LPSTR lpClass,
DWORD dwOptions,
REGSAM samDesired,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
PHKEY phkResult,
LPDWORD lpdwDisposition
);
__declspec(dllimport)
LSTATUS
__stdcall
RegCreateKeyExW(
HKEY hKey,
LPCWSTR lpSubKey,
DWORD Reserved,
LPWSTR lpClass,
DWORD dwOptions,
REGSAM samDesired,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
PHKEY phkResult,
LPDWORD lpdwDisposition
);
#line 357 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegCreateKeyTransactedA (
HKEY hKey,
LPCSTR lpSubKey,
DWORD Reserved,
LPSTR lpClass,
DWORD dwOptions,
REGSAM samDesired,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
PHKEY phkResult,
LPDWORD lpdwDisposition,
HANDLE hTransaction,
PVOID  pExtendedParemeter
);
__declspec(dllimport)
LSTATUS
__stdcall
RegCreateKeyTransactedW (
HKEY hKey,
LPCWSTR lpSubKey,
DWORD Reserved,
LPWSTR lpClass,
DWORD dwOptions,
REGSAM samDesired,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
PHKEY phkResult,
LPDWORD lpdwDisposition,
HANDLE hTransaction,
PVOID  pExtendedParemeter
);
#line 395 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteKeyA (
HKEY hKey,
LPCSTR lpSubKey
);
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteKeyW (
HKEY hKey,
LPCWSTR lpSubKey
);
#line 415 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteKeyExA(
HKEY hKey,
LPCSTR lpSubKey,
REGSAM samDesired,
DWORD Reserved
);
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteKeyExW(
HKEY hKey,
LPCWSTR lpSubKey,
REGSAM samDesired,
DWORD Reserved
);
#line 441 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteKeyTransactedA (
HKEY hKey,
LPCSTR lpSubKey,
REGSAM samDesired,
DWORD Reserved,
HANDLE hTransaction,
PVOID  pExtendedParameter
);
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteKeyTransactedW (
HKEY hKey,
LPCWSTR lpSubKey,
REGSAM samDesired,
DWORD Reserved,
HANDLE hTransaction,
PVOID  pExtendedParameter
);
#line 469 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LONG
__stdcall
RegDisableReflectionKey (
HKEY hBase
);
__declspec(dllimport)
LONG
__stdcall
RegEnableReflectionKey (
HKEY hBase
);
__declspec(dllimport)
LONG
__stdcall
RegQueryReflectionKey (
HKEY hBase,
BOOL *bIsReflectionDisabled
);
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteValueA(
HKEY hKey,
LPCSTR lpValueName
);
__declspec(dllimport)
LSTATUS
__stdcall
RegDeleteValueW(
HKEY hKey,
LPCWSTR lpValueName
);
#line 513 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegEnumKeyA (
HKEY hKey,
DWORD dwIndex,
LPSTR lpName,
DWORD cchName
);
__declspec(dllimport)
LSTATUS
__stdcall
RegEnumKeyW (
HKEY hKey,
DWORD dwIndex,
LPWSTR lpName,
DWORD cchName
);
#line 537 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegEnumKeyExA(
HKEY hKey,
DWORD dwIndex,
LPSTR lpName,
LPDWORD lpcchName,
LPDWORD lpReserved,
LPSTR lpClass,
LPDWORD lpcchClass,
PFILETIME lpftLastWriteTime
);
__declspec(dllimport)
LSTATUS
__stdcall
RegEnumKeyExW(
HKEY hKey,
DWORD dwIndex,
LPWSTR lpName,
LPDWORD lpcchName,
LPDWORD lpReserved,
LPWSTR lpClass,
LPDWORD lpcchClass,
PFILETIME lpftLastWriteTime
);
#line 571 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegEnumValueA(
HKEY hKey,
DWORD dwIndex,
LPSTR lpValueName,
LPDWORD lpcchValueName,
LPDWORD lpReserved,
LPDWORD lpType,
LPBYTE lpData,
LPDWORD lpcbData
);
__declspec(dllimport)
LSTATUS
__stdcall
RegEnumValueW(
HKEY hKey,
DWORD dwIndex,
LPWSTR lpValueName,
LPDWORD lpcchValueName,
LPDWORD lpReserved,
LPDWORD lpType,
LPBYTE lpData,
LPDWORD lpcbData
);
#line 605 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegFlushKey(
HKEY hKey
);
__declspec(dllimport)
LSTATUS
__stdcall
RegGetKeySecurity(
HKEY hKey,
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR pSecurityDescriptor,
LPDWORD lpcbSecurityDescriptor
);
__declspec(dllimport)
LSTATUS
__stdcall
RegLoadKeyA(
HKEY hKey,
LPCSTR lpSubKey,
LPCSTR lpFile
);
__declspec(dllimport)
LSTATUS
__stdcall
RegLoadKeyW(
HKEY hKey,
LPCWSTR lpSubKey,
LPCWSTR lpFile
);
#line 648 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegNotifyChangeKeyValue(
HKEY hKey,
BOOL bWatchSubtree,
DWORD dwNotifyFilter,
HANDLE hEvent,
BOOL fAsynchronous
);
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenKeyA (
HKEY hKey,
LPCSTR lpSubKey,
PHKEY phkResult
);
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenKeyW (
HKEY hKey,
LPCWSTR lpSubKey,
PHKEY phkResult
);
#line 682 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenKeyExA(
HKEY hKey,
LPCSTR lpSubKey,
DWORD ulOptions,
REGSAM samDesired,
PHKEY phkResult
);
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenKeyExW(
HKEY hKey,
LPCWSTR lpSubKey,
DWORD ulOptions,
REGSAM samDesired,
PHKEY phkResult
);
#line 710 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenKeyTransactedA (
HKEY hKey,
LPCSTR lpSubKey,
DWORD ulOptions,
REGSAM samDesired,
PHKEY phkResult,
HANDLE hTransaction,
PVOID  pExtendedParemeter
);
__declspec(dllimport)
LSTATUS
__stdcall
RegOpenKeyTransactedW (
HKEY hKey,
LPCWSTR lpSubKey,
DWORD ulOptions,
REGSAM samDesired,
PHKEY phkResult,
HANDLE hTransaction,
PVOID  pExtendedParemeter
);
#line 740 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryInfoKeyA(
HKEY hKey,
LPSTR lpClass,
LPDWORD lpcchClass,
LPDWORD lpReserved,
LPDWORD lpcSubKeys,
LPDWORD lpcbMaxSubKeyLen,
LPDWORD lpcbMaxClassLen,
LPDWORD lpcValues,
LPDWORD lpcbMaxValueNameLen,
LPDWORD lpcbMaxValueLen,
LPDWORD lpcbSecurityDescriptor,
PFILETIME lpftLastWriteTime
);
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryInfoKeyW(
HKEY hKey,
LPWSTR lpClass,
LPDWORD lpcchClass,
LPDWORD lpReserved,
LPDWORD lpcSubKeys,
LPDWORD lpcbMaxSubKeyLen,
LPDWORD lpcbMaxClassLen,
LPDWORD lpcValues,
LPDWORD lpcbMaxValueNameLen,
LPDWORD lpcbMaxValueLen,
LPDWORD lpcbSecurityDescriptor,
PFILETIME lpftLastWriteTime
);
#line 782 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryValueA (
HKEY hKey,
LPCSTR lpSubKey,
LPSTR lpData,
PLONG lpcbData
);
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryValueW (
HKEY hKey,
LPCWSTR lpSubKey,
LPWSTR lpData,
PLONG lpcbData
);
#line 806 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryMultipleValuesA (
HKEY hKey,
PVALENTA val_list,
DWORD num_vals,
LPSTR lpValueBuf,
LPDWORD ldwTotsize
);
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryMultipleValuesW (
HKEY hKey,
PVALENTW val_list,
DWORD num_vals,
LPWSTR lpValueBuf,
LPDWORD ldwTotsize
);
#line 835 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 836 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryValueExA(
HKEY hKey,
LPCSTR lpValueName,
LPDWORD lpReserved,
LPDWORD lpType,
LPBYTE lpData,
LPDWORD lpcbData
);
__declspec(dllimport)
LSTATUS
__stdcall
RegQueryValueExW(
HKEY hKey,
LPCWSTR lpValueName,
LPDWORD lpReserved,
LPDWORD lpType,
LPBYTE lpData,
LPDWORD lpcbData
);
#line 868 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegReplaceKeyA (
HKEY hKey,
LPCSTR lpSubKey,
LPCSTR lpNewFile,
LPCSTR lpOldFile
);
__declspec(dllimport)
LSTATUS
__stdcall
RegReplaceKeyW (
HKEY hKey,
LPCWSTR lpSubKey,
LPCWSTR lpNewFile,
LPCWSTR lpOldFile
);
#line 892 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegRestoreKeyA(
HKEY hKey,
LPCSTR lpFile,
DWORD dwFlags
);
__declspec(dllimport)
LSTATUS
__stdcall
RegRestoreKeyW(
HKEY hKey,
LPCWSTR lpFile,
DWORD dwFlags
);
#line 916 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 930 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegSaveKeyA (
HKEY hKey,
LPCSTR lpFile,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
__declspec(dllimport)
LSTATUS
__stdcall
RegSaveKeyW (
HKEY hKey,
LPCWSTR lpFile,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#line 952 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegSetKeySecurity(
HKEY hKey,
SECURITY_INFORMATION SecurityInformation,
PSECURITY_DESCRIPTOR pSecurityDescriptor
);
__declspec(dllimport)
LSTATUS
__stdcall
RegSetValueA (
HKEY hKey,
LPCSTR lpSubKey,
DWORD dwType,
LPCSTR lpData,
DWORD cbData
);
__declspec(dllimport)
LSTATUS
__stdcall
RegSetValueW (
HKEY hKey,
LPCWSTR lpSubKey,
DWORD dwType,
LPCWSTR lpData,
DWORD cbData
);
#line 988 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegSetValueExA(
HKEY hKey,
LPCSTR lpValueName,
DWORD Reserved,
DWORD dwType,
const BYTE * lpData,
DWORD cbData
);
__declspec(dllimport)
LSTATUS
__stdcall
RegSetValueExW(
HKEY hKey,
LPCWSTR lpValueName,
DWORD Reserved,
DWORD dwType,
const BYTE * lpData,
DWORD cbData
);
#line 1018 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
LSTATUS
__stdcall
RegUnLoadKeyA(
HKEY hKey,
LPCSTR lpSubKey
);
__declspec(dllimport)
LSTATUS
__stdcall
RegUnLoadKeyW(
HKEY hKey,
LPCWSTR lpSubKey
);
#line 1040 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 1260 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
BOOL
__stdcall
InitiateSystemShutdownA(
LPSTR lpMachineName,
LPSTR lpMessage,
DWORD dwTimeout,
BOOL bForceAppsClosed,
BOOL bRebootAfterShutdown
);
__declspec(dllimport)
BOOL
__stdcall
InitiateSystemShutdownW(
LPWSTR lpMachineName,
LPWSTR lpMessage,
DWORD dwTimeout,
BOOL bForceAppsClosed,
BOOL bRebootAfterShutdown
);
#line 1292 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
BOOL
__stdcall
AbortSystemShutdownA(
LPSTR lpMachineName
);
__declspec(dllimport)
BOOL
__stdcall
AbortSystemShutdownW(
LPWSTR lpMachineName
);
#line 1311 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\reason.h"
#pragma once
#pragma region Desktop Family
#line 123 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\reason.h"
#pragma endregion
#line 126 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\reason.h"
#line 1317 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 1338 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
BOOL
__stdcall
InitiateSystemShutdownExA(
LPSTR lpMachineName,
LPSTR lpMessage,
DWORD dwTimeout,
BOOL bForceAppsClosed,
BOOL bRebootAfterShutdown,
DWORD dwReason
);
#line 1352 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
BOOL
__stdcall
InitiateSystemShutdownExW(
LPWSTR lpMachineName,
LPWSTR lpMessage,
DWORD dwTimeout,
BOOL bForceAppsClosed,
BOOL bRebootAfterShutdown,
DWORD dwReason
);
#line 1368 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
DWORD
__stdcall
InitiateShutdownA(
LPSTR lpMachineName,
LPSTR lpMessage,
DWORD dwGracePeriod,
DWORD dwShutdownFlags,
DWORD dwReason
);
__declspec(dllimport)
DWORD
__stdcall
InitiateShutdownW(
LPWSTR lpMachineName,
LPWSTR lpMessage,
DWORD dwGracePeriod,
DWORD dwShutdownFlags,
DWORD dwReason
);
#line 1410 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
__declspec(dllimport)
DWORD
__stdcall
CheckForHiberboot(
PBOOLEAN pHiberboot,
BOOLEAN bClearFlag
);
__declspec(dllimport)
LSTATUS
__stdcall
RegSaveKeyExA(
HKEY hKey,
LPCSTR lpFile,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
DWORD Flags
);
__declspec(dllimport)
LSTATUS
__stdcall
RegSaveKeyExW(
HKEY hKey,
LPCWSTR lpFile,
const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
DWORD Flags
);
#line 1444 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 1447 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#pragma endregion
#line 1455 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winreg.h"
#line 177 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 178 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#pragma once
#pragma region Desktop Family
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\wnnc.h"
#pragma region Desktop Family
#line 113 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\wnnc.h"
#pragma endregion
#line 116 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\wnnc.h"
#line 44 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 56 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 73 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 87 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 91 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
typedef struct  _NETRESOURCEA {
DWORD    dwScope;
DWORD    dwType;
DWORD    dwDisplayType;
DWORD    dwUsage;
LPSTR    lpLocalName;
LPSTR    lpRemoteName;
LPSTR    lpComment ;
LPSTR    lpProvider;
}NETRESOURCEA, *LPNETRESOURCEA;
typedef struct  _NETRESOURCEW {
DWORD    dwScope;
DWORD    dwType;
DWORD    dwDisplayType;
DWORD    dwUsage;
LPWSTR   lpLocalName;
LPWSTR   lpRemoteName;
LPWSTR   lpComment ;
LPWSTR   lpProvider;
}NETRESOURCEW, *LPNETRESOURCEW;
typedef NETRESOURCEW NETRESOURCE;
typedef LPNETRESOURCEW LPNETRESOURCE;
#line 119 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 141 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 145 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 148 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetAddConnectionA(
LPCSTR   lpRemoteName,
LPCSTR   lpPassword,
LPCSTR   lpLocalName
);
DWORD __stdcall
WNetAddConnectionW(
LPCWSTR   lpRemoteName,
LPCWSTR   lpPassword,
LPCWSTR   lpLocalName
);
#line 168 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetAddConnection2A(
LPNETRESOURCEA lpNetResource,
LPCSTR       lpPassword,
LPCSTR       lpUserName,
DWORD          dwFlags
);
DWORD __stdcall
WNetAddConnection2W(
LPNETRESOURCEW lpNetResource,
LPCWSTR       lpPassword,
LPCWSTR       lpUserName,
DWORD          dwFlags
);
#line 190 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetAddConnection3A(
HWND           hwndOwner,
LPNETRESOURCEA lpNetResource,
LPCSTR       lpPassword,
LPCSTR       lpUserName,
DWORD          dwFlags
);
DWORD __stdcall
WNetAddConnection3W(
HWND           hwndOwner,
LPNETRESOURCEW lpNetResource,
LPCWSTR       lpPassword,
LPCWSTR       lpUserName,
DWORD          dwFlags
);
#line 214 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetCancelConnectionA(
LPCSTR lpName,
BOOL     fForce
);
DWORD __stdcall
WNetCancelConnectionW(
LPCWSTR lpName,
BOOL     fForce
);
#line 232 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetCancelConnection2A(
LPCSTR lpName,
DWORD    dwFlags,
BOOL     fForce
);
DWORD __stdcall
WNetCancelConnection2W(
LPCWSTR lpName,
DWORD    dwFlags,
BOOL     fForce
);
#line 252 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetGetConnectionA(
LPCSTR lpLocalName,
LPSTR  lpRemoteName,
LPDWORD lpnLength
);
DWORD __stdcall
WNetGetConnectionW(
LPCWSTR lpLocalName,
LPWSTR  lpRemoteName,
LPDWORD lpnLength
);
#line 272 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 284 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetRestoreConnectionW(
HWND    hWnd,
LPCWSTR lpDevice
);
#line 292 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetUseConnectionA(
HWND            hwndOwner,
LPNETRESOURCEA  lpNetResource,
LPCSTR        lpPassword,
LPCSTR        lpUserId,
DWORD           dwFlags,
LPSTR lpAccessName,
LPDWORD lpBufferSize,
LPDWORD   lpResult
);
DWORD __stdcall
WNetUseConnectionW(
HWND            hwndOwner,
LPNETRESOURCEW  lpNetResource,
LPCWSTR        lpPassword,
LPCWSTR        lpUserId,
DWORD           dwFlags,
LPWSTR lpAccessName,
LPDWORD lpBufferSize,
LPDWORD   lpResult
);
#line 324 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 325 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetConnectionDialog(
HWND  hwnd,
DWORD dwType
);
DWORD __stdcall
WNetDisconnectDialog(
HWND hwnd,
DWORD dwType
);
typedef struct _CONNECTDLGSTRUCTA{
DWORD cbStructure;       
HWND hwndOwner;          
LPNETRESOURCEA lpConnRes;
DWORD dwFlags;           
DWORD dwDevNum;          
} CONNECTDLGSTRUCTA,  *LPCONNECTDLGSTRUCTA;
typedef struct _CONNECTDLGSTRUCTW{
DWORD cbStructure;       
HWND hwndOwner;          
LPNETRESOURCEW lpConnRes;
DWORD dwFlags;           
DWORD dwDevNum;          
} CONNECTDLGSTRUCTW,  *LPCONNECTDLGSTRUCTW;
typedef CONNECTDLGSTRUCTW CONNECTDLGSTRUCT;
typedef LPCONNECTDLGSTRUCTW LPCONNECTDLGSTRUCT;
#line 366 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetConnectionDialog1A(
LPCONNECTDLGSTRUCTA lpConnDlgStruct
);
DWORD __stdcall
WNetConnectionDialog1W(
LPCONNECTDLGSTRUCTW lpConnDlgStruct
);
#line 395 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
typedef struct _DISCDLGSTRUCTA{
DWORD           cbStructure;      
HWND            hwndOwner;        
LPSTR           lpLocalName;      
LPSTR           lpRemoteName;     
DWORD           dwFlags;          
} DISCDLGSTRUCTA,  *LPDISCDLGSTRUCTA;
typedef struct _DISCDLGSTRUCTW{
DWORD           cbStructure;      
HWND            hwndOwner;        
LPWSTR          lpLocalName;      
LPWSTR          lpRemoteName;     
DWORD           dwFlags;          
} DISCDLGSTRUCTW,  *LPDISCDLGSTRUCTW;
typedef DISCDLGSTRUCTW DISCDLGSTRUCT;
typedef LPDISCDLGSTRUCTW LPDISCDLGSTRUCT;
#line 417 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetDisconnectDialog1A(
LPDISCDLGSTRUCTA lpConnDlgStruct
);
DWORD __stdcall
WNetDisconnectDialog1W(
LPDISCDLGSTRUCTW lpConnDlgStruct
);
#line 436 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 437 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetOpenEnumA(
DWORD          dwScope,
DWORD          dwType,
DWORD          dwUsage,
LPNETRESOURCEA lpNetResource,
LPHANDLE       lphEnum
);
DWORD __stdcall
WNetOpenEnumW(
DWORD          dwScope,
DWORD          dwType,
DWORD          dwUsage,
LPNETRESOURCEW lpNetResource,
LPHANDLE       lphEnum
);
#line 465 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetEnumResourceA(
HANDLE  hEnum,
LPDWORD lpcCount,
LPVOID  lpBuffer,
LPDWORD lpBufferSize
);
DWORD __stdcall
WNetEnumResourceW(
HANDLE  hEnum,
LPDWORD lpcCount,
LPVOID  lpBuffer,
LPDWORD lpBufferSize
);
#line 487 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetCloseEnum(
HANDLE   hEnum
);
DWORD __stdcall
WNetGetResourceParentA(
LPNETRESOURCEA lpNetResource,
LPVOID lpBuffer,
LPDWORD lpcbBuffer
);
DWORD __stdcall
WNetGetResourceParentW(
LPNETRESOURCEW lpNetResource,
LPVOID lpBuffer,
LPDWORD lpcbBuffer
);
#line 514 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetGetResourceInformationA(
LPNETRESOURCEA  lpNetResource,
LPVOID lpBuffer,
LPDWORD lpcbBuffer,
LPSTR *lplpSystem
);
DWORD __stdcall
WNetGetResourceInformationW(
LPNETRESOURCEW  lpNetResource,
LPVOID lpBuffer,
LPDWORD lpcbBuffer,
LPWSTR *lplpSystem
);
#line 536 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 537 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
typedef struct  _UNIVERSAL_NAME_INFOA {
LPSTR    lpUniversalName;
}UNIVERSAL_NAME_INFOA, *LPUNIVERSAL_NAME_INFOA;
typedef struct  _UNIVERSAL_NAME_INFOW {
LPWSTR   lpUniversalName;
}UNIVERSAL_NAME_INFOW, *LPUNIVERSAL_NAME_INFOW;
typedef UNIVERSAL_NAME_INFOW UNIVERSAL_NAME_INFO;
typedef LPUNIVERSAL_NAME_INFOW LPUNIVERSAL_NAME_INFO;
#line 558 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
typedef struct  _REMOTE_NAME_INFOA {
LPSTR    lpUniversalName;
LPSTR    lpConnectionName;
LPSTR    lpRemainingPath;
}REMOTE_NAME_INFOA, *LPREMOTE_NAME_INFOA;
typedef struct  _REMOTE_NAME_INFOW {
LPWSTR   lpUniversalName;
LPWSTR   lpConnectionName;
LPWSTR   lpRemainingPath;
}REMOTE_NAME_INFOW, *LPREMOTE_NAME_INFOW;
typedef REMOTE_NAME_INFOW REMOTE_NAME_INFO;
typedef LPREMOTE_NAME_INFOW LPREMOTE_NAME_INFO;
#line 576 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetGetUniversalNameA(
LPCSTR lpLocalPath,
DWORD    dwInfoLevel,
LPVOID lpBuffer,
LPDWORD lpBufferSize
);
DWORD __stdcall
WNetGetUniversalNameW(
LPCWSTR lpLocalPath,
DWORD    dwInfoLevel,
LPVOID lpBuffer,
LPDWORD lpBufferSize
);
#line 598 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetGetUserA(
LPCSTR  lpName,
LPSTR lpUserName,
LPDWORD lpnLength
);
DWORD __stdcall
WNetGetUserW(
LPCWSTR  lpName,
LPWSTR lpUserName,
LPDWORD lpnLength
);
#line 624 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 637 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetGetProviderNameA(
DWORD   dwNetType,
LPSTR lpProviderName,
LPDWORD lpBufferSize
);
DWORD __stdcall
WNetGetProviderNameW(
DWORD   dwNetType,
LPWSTR lpProviderName,
LPDWORD lpBufferSize
);
#line 659 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
typedef struct _NETINFOSTRUCT{
DWORD cbStructure;
DWORD dwProviderVersion;
DWORD dwStatus;
DWORD dwCharacteristics;
ULONG_PTR dwHandle;
WORD  wNetType;
DWORD dwPrinters;
DWORD dwDrives;
} NETINFOSTRUCT,  *LPNETINFOSTRUCT;
DWORD __stdcall
WNetGetNetworkInformationA(
LPCSTR        lpProvider,
LPNETINFOSTRUCT lpNetInfoStruct
);
DWORD __stdcall
WNetGetNetworkInformationW(
LPCWSTR        lpProvider,
LPNETINFOSTRUCT lpNetInfoStruct
);
#line 692 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
DWORD __stdcall
WNetGetLastErrorA(
LPDWORD    lpError,
LPSTR lpErrorBuf,
DWORD      nErrorBufSize,
LPSTR  lpNameBuf,
DWORD      nNameBufSize
);
DWORD __stdcall
WNetGetLastErrorW(
LPDWORD    lpError,
LPWSTR lpErrorBuf,
DWORD      nErrorBufSize,
LPWSTR  lpNameBuf,
DWORD      nNameBufSize
);
#line 722 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 752 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 773 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 786 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
typedef struct _NETCONNECTINFOSTRUCT{
DWORD cbStructure;
DWORD dwFlags;
DWORD dwSpeed;
DWORD dwDelay;
DWORD dwOptDataSize;
} NETCONNECTINFOSTRUCT,  *LPNETCONNECTINFOSTRUCT;
DWORD __stdcall
MultinetGetConnectionPerformanceA(
LPNETRESOURCEA lpNetResource,
LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct
);
DWORD __stdcall
MultinetGetConnectionPerformanceW(
LPNETRESOURCEW lpNetResource,
LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct
);
#line 822 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 823 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 826 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#pragma endregion
#line 833 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winnetwk.h"
#line 180 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 181 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 54 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 55 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 60 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 62 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#pragma region Desktop Family
#line 84 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 104 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
__inline
PUWSTR
static
__declspec(deprecated)
ua_wcscpy(
PUWSTR  Destination,
PCUWSTR Source
)
{
#pragma warning(push)
#pragma warning(disable:4995)
#pragma warning(disable:4996)
return wcscpy(Destination, Source);
#pragma warning(pop)
}
#line 488 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 559 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 596 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 640 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 644 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 657 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 672 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 676 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 678 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#pragma endregion
#line 685 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\stralign.h"
#line 218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#pragma region Desktop Family
#line 78 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  NETWORK_MANAGER_FIRST_IP_ADDRESS_ARRIVAL_GUID;
#line 343 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  NETWORK_MANAGER_LAST_IP_ADDRESS_REMOVAL_GUID;
#line 351 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  DOMAIN_JOIN_GUID;
#line 362 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  DOMAIN_LEAVE_GUID;
#line 370 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  FIREWALL_PORT_OPEN_GUID;
#line 382 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  FIREWALL_PORT_CLOSE_GUID;
#line 390 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  MACHINE_POLICY_PRESENT_GUID;
#line 402 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  USER_POLICY_PRESENT_GUID;
#line 410 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  RPC_INTERFACE_EVENT_GUID;
#line 422 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  NAMED_PIPE_EVENT_GUID;
#line 430 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
extern const GUID  CUSTOM_SYSTEM_STATE_CHANGE_EVENT_GUID;
#line 441 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct
{
DWORD Data[2];
} SERVICE_TRIGGER_CUSTOM_STATE_ID;
typedef struct _SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM {
union {
SERVICE_TRIGGER_CUSTOM_STATE_ID CustomStateId;
struct {
DWORD DataOffset;
BYTE Data[1];
} s;
} u;
} SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM, *LPSERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM;
typedef struct _SERVICE_DESCRIPTIONA {
LPSTR       lpDescription;
} SERVICE_DESCRIPTIONA, *LPSERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONW {
LPWSTR      lpDescription;
} SERVICE_DESCRIPTIONW, *LPSERVICE_DESCRIPTIONW;
typedef SERVICE_DESCRIPTIONW SERVICE_DESCRIPTION;
typedef LPSERVICE_DESCRIPTIONW LPSERVICE_DESCRIPTION;
#line 491 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef enum _SC_ACTION_TYPE {
SC_ACTION_NONE          = 0,
SC_ACTION_RESTART       = 1,
SC_ACTION_REBOOT        = 2,
SC_ACTION_RUN_COMMAND   = 3
} SC_ACTION_TYPE;
typedef struct _SC_ACTION {
SC_ACTION_TYPE  Type;
DWORD           Delay;
} SC_ACTION, *LPSC_ACTION;
typedef struct _SERVICE_FAILURE_ACTIONSA {
DWORD       dwResetPeriod;
LPSTR       lpRebootMsg;
LPSTR       lpCommand;
DWORD       cActions;
SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSA, *LPSERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSW {
DWORD       dwResetPeriod;
LPWSTR      lpRebootMsg;
LPWSTR      lpCommand;
DWORD       cActions;
SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSW, *LPSERVICE_FAILURE_ACTIONSW;
typedef SERVICE_FAILURE_ACTIONSW SERVICE_FAILURE_ACTIONS;
typedef LPSERVICE_FAILURE_ACTIONSW LPSERVICE_FAILURE_ACTIONS;
#line 540 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct _SERVICE_DELAYED_AUTO_START_INFO {
BOOL       fDelayedAutostart;      
} SERVICE_DELAYED_AUTO_START_INFO, *LPSERVICE_DELAYED_AUTO_START_INFO;
typedef struct _SERVICE_FAILURE_ACTIONS_FLAG {
BOOL       fFailureActionsOnNonCrashFailures;       
} SERVICE_FAILURE_ACTIONS_FLAG, *LPSERVICE_FAILURE_ACTIONS_FLAG;
typedef struct _SERVICE_SID_INFO {
DWORD       dwServiceSidType;     
} SERVICE_SID_INFO, *LPSERVICE_SID_INFO;
typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFOA {
LPSTR       pmszRequiredPrivileges;             
} SERVICE_REQUIRED_PRIVILEGES_INFOA, *LPSERVICE_REQUIRED_PRIVILEGES_INFOA;
typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFOW {
LPWSTR      pmszRequiredPrivileges;             
} SERVICE_REQUIRED_PRIVILEGES_INFOW, *LPSERVICE_REQUIRED_PRIVILEGES_INFOW;
typedef SERVICE_REQUIRED_PRIVILEGES_INFOW SERVICE_REQUIRED_PRIVILEGES_INFO;
typedef LPSERVICE_REQUIRED_PRIVILEGES_INFOW LPSERVICE_REQUIRED_PRIVILEGES_INFO;
#line 581 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct _SERVICE_PRESHUTDOWN_INFO {
DWORD       dwPreshutdownTimeout;   
} SERVICE_PRESHUTDOWN_INFO, *LPSERVICE_PRESHUTDOWN_INFO;
typedef struct _SERVICE_TRIGGER_SPECIFIC_DATA_ITEM
{
DWORD   dwDataType; 
DWORD   cbData;     
PBYTE   pData;      
} SERVICE_TRIGGER_SPECIFIC_DATA_ITEM, *PSERVICE_TRIGGER_SPECIFIC_DATA_ITEM;
typedef struct _SERVICE_TRIGGER
{
DWORD                       dwTriggerType;              
DWORD                       dwAction;                   
GUID    *                   pTriggerSubtype;            
DWORD                       cDataItems;                 
PSERVICE_TRIGGER_SPECIFIC_DATA_ITEM  pDataItems;       
} SERVICE_TRIGGER, *PSERVICE_TRIGGER;
typedef struct _SERVICE_TRIGGER_INFO {
DWORD                   cTriggers;  
PSERVICE_TRIGGER        pTriggers;  
PBYTE                   pReserved;  
} SERVICE_TRIGGER_INFO, *PSERVICE_TRIGGER_INFO;
typedef struct _SERVICE_PREFERRED_NODE_INFO {
USHORT                  usPreferredNode;    
BOOLEAN                 fDelete;            
} SERVICE_PREFERRED_NODE_INFO, *LPSERVICE_PREFERRED_NODE_INFO;
typedef struct _SERVICE_TIMECHANGE_INFO {
LARGE_INTEGER   liNewTime;      
LARGE_INTEGER   liOldTime;      
} SERVICE_TIMECHANGE_INFO, *PSERVICE_TIMECHANGE_INFO;
struct SC_HANDLE__{int unused;}; typedef struct SC_HANDLE__ *SC_HANDLE;
typedef SC_HANDLE   *LPSC_HANDLE;
struct SERVICE_STATUS_HANDLE__{int unused;}; typedef struct SERVICE_STATUS_HANDLE__ *SERVICE_STATUS_HANDLE;
typedef enum _SC_STATUS_TYPE {
SC_STATUS_PROCESS_INFO      = 0
} SC_STATUS_TYPE;
typedef enum _SC_ENUM_TYPE {
SC_ENUM_PROCESS_INFO        = 0
} SC_ENUM_TYPE;
typedef struct _SERVICE_STATUS {
DWORD   dwServiceType;
DWORD   dwCurrentState;
DWORD   dwControlsAccepted;
DWORD   dwWin32ExitCode;
DWORD   dwServiceSpecificExitCode;
DWORD   dwCheckPoint;
DWORD   dwWaitHint;
} SERVICE_STATUS, *LPSERVICE_STATUS;
typedef struct _SERVICE_STATUS_PROCESS {
DWORD   dwServiceType;
DWORD   dwCurrentState;
DWORD   dwControlsAccepted;
DWORD   dwWin32ExitCode;
DWORD   dwServiceSpecificExitCode;
DWORD   dwCheckPoint;
DWORD   dwWaitHint;
DWORD   dwProcessId;
DWORD   dwServiceFlags;
} SERVICE_STATUS_PROCESS, *LPSERVICE_STATUS_PROCESS;
typedef struct _ENUM_SERVICE_STATUSA {
LPSTR             lpServiceName;
LPSTR             lpDisplayName;
SERVICE_STATUS    ServiceStatus;
} ENUM_SERVICE_STATUSA, *LPENUM_SERVICE_STATUSA;
typedef struct _ENUM_SERVICE_STATUSW {
LPWSTR            lpServiceName;
LPWSTR            lpDisplayName;
SERVICE_STATUS    ServiceStatus;
} ENUM_SERVICE_STATUSW, *LPENUM_SERVICE_STATUSW;
typedef ENUM_SERVICE_STATUSW ENUM_SERVICE_STATUS;
typedef LPENUM_SERVICE_STATUSW LPENUM_SERVICE_STATUS;
#line 729 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct _ENUM_SERVICE_STATUS_PROCESSA {
LPSTR                     lpServiceName;
LPSTR                     lpDisplayName;
SERVICE_STATUS_PROCESS    ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSA, *LPENUM_SERVICE_STATUS_PROCESSA;
typedef struct _ENUM_SERVICE_STATUS_PROCESSW {
LPWSTR                    lpServiceName;
LPWSTR                    lpDisplayName;
SERVICE_STATUS_PROCESS    ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSW, *LPENUM_SERVICE_STATUS_PROCESSW;
typedef ENUM_SERVICE_STATUS_PROCESSW ENUM_SERVICE_STATUS_PROCESS;
typedef LPENUM_SERVICE_STATUS_PROCESSW LPENUM_SERVICE_STATUS_PROCESS;
#line 747 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef LPVOID  SC_LOCK;
typedef struct _QUERY_SERVICE_LOCK_STATUSA {
DWORD   fIsLocked;
LPSTR   lpLockOwner;
DWORD   dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA, *LPQUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSW {
DWORD   fIsLocked;
LPWSTR  lpLockOwner;
DWORD   dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW, *LPQUERY_SERVICE_LOCK_STATUSW;
typedef QUERY_SERVICE_LOCK_STATUSW QUERY_SERVICE_LOCK_STATUS;
typedef LPQUERY_SERVICE_LOCK_STATUSW LPQUERY_SERVICE_LOCK_STATUS;
#line 771 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct _QUERY_SERVICE_CONFIGA {
DWORD   dwServiceType;
DWORD   dwStartType;
DWORD   dwErrorControl;
LPSTR   lpBinaryPathName;
LPSTR   lpLoadOrderGroup;
DWORD   dwTagId;
LPSTR   lpDependencies;
LPSTR   lpServiceStartName;
LPSTR   lpDisplayName;
} QUERY_SERVICE_CONFIGA, *LPQUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGW {
DWORD   dwServiceType;
DWORD   dwStartType;
DWORD   dwErrorControl;
LPWSTR  lpBinaryPathName;
LPWSTR  lpLoadOrderGroup;
DWORD   dwTagId;
LPWSTR  lpDependencies;
LPWSTR  lpServiceStartName;
LPWSTR  lpDisplayName;
} QUERY_SERVICE_CONFIGW, *LPQUERY_SERVICE_CONFIGW;
typedef QUERY_SERVICE_CONFIGW QUERY_SERVICE_CONFIG;
typedef LPQUERY_SERVICE_CONFIGW LPQUERY_SERVICE_CONFIG;
#line 807 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef void __stdcall SERVICE_MAIN_FUNCTIONW (
DWORD dwNumServicesArgs,
LPWSTR *lpServiceArgVectors
);
typedef void __stdcall SERVICE_MAIN_FUNCTIONA (
DWORD dwNumServicesArgs,
LPTSTR *lpServiceArgVectors
);
#line 829 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef void (__stdcall *LPSERVICE_MAIN_FUNCTIONW)(
DWORD   dwNumServicesArgs,
LPWSTR  *lpServiceArgVectors
);
typedef void (__stdcall *LPSERVICE_MAIN_FUNCTIONA)(
DWORD   dwNumServicesArgs,
LPSTR   *lpServiceArgVectors
);
#line 845 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct _SERVICE_TABLE_ENTRYA {
LPSTR                       lpServiceName;
LPSERVICE_MAIN_FUNCTIONA    lpServiceProc;
}SERVICE_TABLE_ENTRYA, *LPSERVICE_TABLE_ENTRYA;
typedef struct _SERVICE_TABLE_ENTRYW {
LPWSTR                      lpServiceName;
LPSERVICE_MAIN_FUNCTIONW    lpServiceProc;
}SERVICE_TABLE_ENTRYW, *LPSERVICE_TABLE_ENTRYW;
typedef SERVICE_TABLE_ENTRYW SERVICE_TABLE_ENTRY;
typedef LPSERVICE_TABLE_ENTRYW LPSERVICE_TABLE_ENTRY;
#line 866 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef void __stdcall HANDLER_FUNCTION (
DWORD    dwControl
);
typedef DWORD __stdcall HANDLER_FUNCTION_EX (
DWORD    dwControl,
DWORD    dwEventType,
LPVOID   lpEventData,
LPVOID   lpContext
);
typedef void (__stdcall *LPHANDLER_FUNCTION)(
DWORD    dwControl
);
typedef DWORD (__stdcall *LPHANDLER_FUNCTION_EX)(
DWORD    dwControl,
DWORD    dwEventType,
LPVOID   lpEventData,
LPVOID   lpContext
);
typedef
void
( __stdcall * PFN_SC_NOTIFY_CALLBACK ) (
PVOID pParameter
);
typedef struct _SERVICE_NOTIFY_1 {
DWORD                   dwVersion;
PFN_SC_NOTIFY_CALLBACK  pfnNotifyCallback;
PVOID                   pContext;
DWORD                   dwNotificationStatus;
SERVICE_STATUS_PROCESS  ServiceStatus;
} SERVICE_NOTIFY_1, *PSERVICE_NOTIFY_1;
typedef struct _SERVICE_NOTIFY_2A {
DWORD                   dwVersion;
PFN_SC_NOTIFY_CALLBACK  pfnNotifyCallback;
PVOID                   pContext;
DWORD                   dwNotificationStatus;
SERVICE_STATUS_PROCESS  ServiceStatus;
DWORD                   dwNotificationTriggered;
LPSTR                   pszServiceNames;
} SERVICE_NOTIFY_2A, *PSERVICE_NOTIFY_2A;
typedef struct _SERVICE_NOTIFY_2W {
DWORD                   dwVersion;
PFN_SC_NOTIFY_CALLBACK  pfnNotifyCallback;
PVOID                   pContext;
DWORD                   dwNotificationStatus;
SERVICE_STATUS_PROCESS  ServiceStatus;
DWORD                   dwNotificationTriggered;
LPWSTR                  pszServiceNames;
} SERVICE_NOTIFY_2W, *PSERVICE_NOTIFY_2W;
typedef SERVICE_NOTIFY_2W SERVICE_NOTIFY_2;
typedef PSERVICE_NOTIFY_2W PSERVICE_NOTIFY_2;
#line 938 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef SERVICE_NOTIFY_2A SERVICE_NOTIFYA, *PSERVICE_NOTIFYA;
typedef SERVICE_NOTIFY_2W SERVICE_NOTIFYW, *PSERVICE_NOTIFYW;
typedef SERVICE_NOTIFYW SERVICE_NOTIFY;
typedef PSERVICE_NOTIFYW PSERVICE_NOTIFY;
#line 948 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct _SERVICE_CONTROL_STATUS_REASON_PARAMSA {
DWORD                   dwReason;
LPSTR                   pszComment;
SERVICE_STATUS_PROCESS  ServiceStatus;
} SERVICE_CONTROL_STATUS_REASON_PARAMSA, *PSERVICE_CONTROL_STATUS_REASON_PARAMSA;
typedef struct _SERVICE_CONTROL_STATUS_REASON_PARAMSW {
DWORD                   dwReason;
LPWSTR                  pszComment;
SERVICE_STATUS_PROCESS  ServiceStatus;
} SERVICE_CONTROL_STATUS_REASON_PARAMSW, *PSERVICE_CONTROL_STATUS_REASON_PARAMSW;
typedef SERVICE_CONTROL_STATUS_REASON_PARAMSW SERVICE_CONTROL_STATUS_REASON_PARAMS;
typedef PSERVICE_CONTROL_STATUS_REASON_PARAMSW PSERVICE_CONTROL_STATUS_REASON_PARAMS;
#line 972 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
typedef struct _SERVICE_START_REASON {
DWORD                   dwReason;
} SERVICE_START_REASON, *PSERVICE_START_REASON;
__declspec(dllimport)
BOOL
__stdcall
ChangeServiceConfigA(
SC_HANDLE    hService,
DWORD        dwServiceType,
DWORD        dwStartType,
DWORD        dwErrorControl,
LPCSTR     lpBinaryPathName,
LPCSTR     lpLoadOrderGroup,
LPDWORD      lpdwTagId,
LPCSTR     lpDependencies,
LPCSTR     lpServiceStartName,
LPCSTR     lpPassword,
LPCSTR     lpDisplayName
);
__declspec(dllimport)
BOOL
__stdcall
ChangeServiceConfigW(
SC_HANDLE    hService,
DWORD        dwServiceType,
DWORD        dwStartType,
DWORD        dwErrorControl,
LPCWSTR     lpBinaryPathName,
LPCWSTR     lpLoadOrderGroup,
LPDWORD      lpdwTagId,
LPCWSTR     lpDependencies,
LPCWSTR     lpServiceStartName,
LPCWSTR     lpPassword,
LPCWSTR     lpDisplayName
);
#line 1021 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
ChangeServiceConfig2A(
SC_HANDLE    hService,
DWORD        dwInfoLevel,
LPVOID       lpInfo
);
__declspec(dllimport)
BOOL
__stdcall
ChangeServiceConfig2W(
SC_HANDLE    hService,
DWORD        dwInfoLevel,
LPVOID       lpInfo
);
#line 1043 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
CloseServiceHandle(
SC_HANDLE   hSCObject
);
__declspec(dllimport)
BOOL
__stdcall
ControlService(
SC_HANDLE           hService,
DWORD               dwControl,
LPSERVICE_STATUS    lpServiceStatus
);
__declspec(dllimport)
SC_HANDLE
__stdcall
CreateServiceA(
SC_HANDLE    hSCManager,
LPCSTR     lpServiceName,
LPCSTR     lpDisplayName,
DWORD        dwDesiredAccess,
DWORD        dwServiceType,
DWORD        dwStartType,
DWORD        dwErrorControl,
LPCSTR     lpBinaryPathName,
LPCSTR     lpLoadOrderGroup,
LPDWORD      lpdwTagId,
LPCSTR     lpDependencies,
LPCSTR     lpServiceStartName,
LPCSTR     lpPassword
);
__declspec(dllimport)
SC_HANDLE
__stdcall
CreateServiceW(
SC_HANDLE    hSCManager,
LPCWSTR     lpServiceName,
LPCWSTR     lpDisplayName,
DWORD        dwDesiredAccess,
DWORD        dwServiceType,
DWORD        dwStartType,
DWORD        dwErrorControl,
LPCWSTR     lpBinaryPathName,
LPCWSTR     lpLoadOrderGroup,
LPDWORD      lpdwTagId,
LPCWSTR     lpDependencies,
LPCWSTR     lpServiceStartName,
LPCWSTR     lpPassword
);
#line 1103 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
DeleteService(
SC_HANDLE   hService
);
__declspec(dllimport)
BOOL
__stdcall
EnumDependentServicesA(
SC_HANDLE               hService,
DWORD                   dwServiceState,
LPENUM_SERVICE_STATUSA  lpServices,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded,
LPDWORD                 lpServicesReturned
);
__declspec(dllimport)
BOOL
__stdcall
EnumDependentServicesW(
SC_HANDLE               hService,
DWORD                   dwServiceState,
LPENUM_SERVICE_STATUSW  lpServices,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded,
LPDWORD                 lpServicesReturned
);
#line 1142 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
EnumServicesStatusA(
SC_HANDLE               hSCManager,
DWORD                   dwServiceType,
DWORD                   dwServiceState,
LPENUM_SERVICE_STATUSA  lpServices,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded,
LPDWORD                 lpServicesReturned,
LPDWORD                 lpResumeHandle
);
__declspec(dllimport)
BOOL
__stdcall
EnumServicesStatusW(
SC_HANDLE               hSCManager,
DWORD                   dwServiceType,
DWORD                   dwServiceState,
LPENUM_SERVICE_STATUSW  lpServices,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded,
LPDWORD                 lpServicesReturned,
LPDWORD                 lpResumeHandle
);
#line 1178 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
EnumServicesStatusExA(
SC_HANDLE               hSCManager,
SC_ENUM_TYPE            InfoLevel,
DWORD                   dwServiceType,
DWORD                   dwServiceState,
LPBYTE                  lpServices,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded,
LPDWORD                 lpServicesReturned,
LPDWORD                 lpResumeHandle,
LPCSTR                pszGroupName
);
__declspec(dllimport)
BOOL
__stdcall
EnumServicesStatusExW(
SC_HANDLE               hSCManager,
SC_ENUM_TYPE            InfoLevel,
DWORD                   dwServiceType,
DWORD                   dwServiceState,
LPBYTE                  lpServices,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded,
LPDWORD                 lpServicesReturned,
LPDWORD                 lpResumeHandle,
LPCWSTR                pszGroupName
);
#line 1218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
GetServiceKeyNameA(
SC_HANDLE               hSCManager,
LPCSTR                lpDisplayName,
LPSTR                 lpServiceName,
LPDWORD                 lpcchBuffer
);
__declspec(dllimport)
BOOL
__stdcall
GetServiceKeyNameW(
SC_HANDLE               hSCManager,
LPCWSTR                lpDisplayName,
LPWSTR                 lpServiceName,
LPDWORD                 lpcchBuffer
);
#line 1246 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
GetServiceDisplayNameA(
SC_HANDLE               hSCManager,
LPCSTR                lpServiceName,
LPSTR                 lpDisplayName,
LPDWORD                 lpcchBuffer
);
__declspec(dllimport)
BOOL
__stdcall
GetServiceDisplayNameW(
SC_HANDLE               hSCManager,
LPCWSTR                lpServiceName,
LPWSTR                 lpDisplayName,
LPDWORD                 lpcchBuffer
);
#line 1274 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
SC_LOCK
__stdcall
LockServiceDatabase(
SC_HANDLE               hSCManager
);
__declspec(dllimport)
BOOL
__stdcall
NotifyBootConfigStatus(
BOOL                    BootAcceptable
);
__declspec(dllimport)
SC_HANDLE
__stdcall
OpenSCManagerA(
LPCSTR                lpMachineName,
LPCSTR                lpDatabaseName,
DWORD                   dwDesiredAccess
);
__declspec(dllimport)
SC_HANDLE
__stdcall
OpenSCManagerW(
LPCWSTR                lpMachineName,
LPCWSTR                lpDatabaseName,
DWORD                   dwDesiredAccess
);
#line 1312 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
SC_HANDLE
__stdcall
OpenServiceA(
SC_HANDLE               hSCManager,
LPCSTR                lpServiceName,
DWORD                   dwDesiredAccess
);
__declspec(dllimport)
SC_HANDLE
__stdcall
OpenServiceW(
SC_HANDLE               hSCManager,
LPCWSTR                lpServiceName,
DWORD                   dwDesiredAccess
);
#line 1336 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
QueryServiceConfigA(
SC_HANDLE               hService,
LPQUERY_SERVICE_CONFIGA lpServiceConfig,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded
);
__declspec(dllimport)
BOOL
__stdcall
QueryServiceConfigW(
SC_HANDLE               hService,
LPQUERY_SERVICE_CONFIGW lpServiceConfig,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded
);
#line 1364 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 1367 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 1369 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 1372 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
QueryServiceConfig2A(
SC_HANDLE               hService,
DWORD                   dwInfoLevel,
LPBYTE                  lpBuffer,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded
);
#line 1386 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 1388 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 1391 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
QueryServiceConfig2W(
SC_HANDLE               hService,
DWORD                   dwInfoLevel,
LPBYTE                  lpBuffer,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded
);
#line 1408 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
QueryServiceLockStatusA(
SC_HANDLE                       hSCManager,
LPQUERY_SERVICE_LOCK_STATUSA    lpLockStatus,
DWORD                           cbBufSize,
LPDWORD                         pcbBytesNeeded
);
__declspec(dllimport)
BOOL
__stdcall
QueryServiceLockStatusW(
SC_HANDLE                       hSCManager,
LPQUERY_SERVICE_LOCK_STATUSW    lpLockStatus,
DWORD                           cbBufSize,
LPDWORD                         pcbBytesNeeded
);
#line 1436 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
QueryServiceObjectSecurity(
SC_HANDLE               hService,
SECURITY_INFORMATION    dwSecurityInformation,
PSECURITY_DESCRIPTOR    lpSecurityDescriptor,
DWORD                   cbBufSize,
LPDWORD                 pcbBytesNeeded
);
__declspec(dllimport)
BOOL
__stdcall
QueryServiceStatus(
SC_HANDLE           hService,
LPSERVICE_STATUS    lpServiceStatus
);
__declspec(dllimport)
BOOL
__stdcall
QueryServiceStatusEx(
SC_HANDLE           hService,
SC_STATUS_TYPE      InfoLevel,
LPBYTE              lpBuffer,
DWORD               cbBufSize,
LPDWORD             pcbBytesNeeded
);
__declspec(dllimport)
SERVICE_STATUS_HANDLE
__stdcall
RegisterServiceCtrlHandlerA(
LPCSTR                    lpServiceName,
LPHANDLER_FUNCTION          lpHandlerProc
);
__declspec(dllimport)
SERVICE_STATUS_HANDLE
__stdcall
RegisterServiceCtrlHandlerW(
LPCWSTR                    lpServiceName,
LPHANDLER_FUNCTION          lpHandlerProc
);
#line 1495 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
SERVICE_STATUS_HANDLE
__stdcall
RegisterServiceCtrlHandlerExA(
LPCSTR                    lpServiceName,
LPHANDLER_FUNCTION_EX       lpHandlerProc,
LPVOID                     lpContext
);
__declspec(dllimport)
SERVICE_STATUS_HANDLE
__stdcall
RegisterServiceCtrlHandlerExW(
LPCWSTR                    lpServiceName,
LPHANDLER_FUNCTION_EX       lpHandlerProc,
LPVOID                     lpContext
);
#line 1521 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
SetServiceObjectSecurity(
SC_HANDLE               hService,
SECURITY_INFORMATION    dwSecurityInformation,
PSECURITY_DESCRIPTOR    lpSecurityDescriptor
);
__declspec(dllimport)
BOOL
__stdcall
SetServiceStatus(
SERVICE_STATUS_HANDLE   hServiceStatus,
LPSERVICE_STATUS        lpServiceStatus
);
__declspec(dllimport)
BOOL
__stdcall
StartServiceCtrlDispatcherA(
const  SERVICE_TABLE_ENTRYA    *lpServiceStartTable
);
__declspec(dllimport)
BOOL
__stdcall
StartServiceCtrlDispatcherW(
const  SERVICE_TABLE_ENTRYW    *lpServiceStartTable
);
#line 1556 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
StartServiceA(
SC_HANDLE            hService,
DWORD                dwNumServiceArgs,
LPCSTR             *lpServiceArgVectors
);
__declspec(dllimport)
BOOL
__stdcall
StartServiceW(
SC_HANDLE            hService,
DWORD                dwNumServiceArgs,
LPCWSTR             *lpServiceArgVectors
);
#line 1581 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
__declspec(dllimport)
BOOL
__stdcall
UnlockServiceDatabase(
SC_LOCK             ScLock
);
#line 1647 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 1649 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#pragma endregion
#line 1656 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsvc.h"
#line 231 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 232 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\mcx.h"
#pragma once
#line 15 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\mcx.h"
typedef struct _MODEMDEVCAPS {
DWORD   dwActualSize;
DWORD   dwRequiredSize;
DWORD   dwDevSpecificOffset;
DWORD   dwDevSpecificSize;
DWORD   dwModemProviderVersion;
DWORD   dwModemManufacturerOffset;
DWORD   dwModemManufacturerSize;
DWORD   dwModemModelOffset;
DWORD   dwModemModelSize;
DWORD   dwModemVersionOffset;
DWORD   dwModemVersionSize;
DWORD   dwDialOptions;          
DWORD   dwCallSetupFailTimer;   
DWORD   dwInactivityTimeout;    
DWORD   dwSpeakerVolume;        
DWORD   dwSpeakerMode;          
DWORD   dwModemOptions;         
DWORD   dwMaxDTERate;           
DWORD   dwMaxDCERate;           
BYTE    abVariablePortion [1];
} MODEMDEVCAPS, *PMODEMDEVCAPS, *LPMODEMDEVCAPS;
typedef struct _MODEMSETTINGS {
DWORD   dwActualSize;
DWORD   dwRequiredSize;
DWORD   dwDevSpecificOffset;
DWORD   dwDevSpecificSize;
DWORD   dwCallSetupFailTimer;       
DWORD   dwInactivityTimeout;        
DWORD   dwSpeakerVolume;            
DWORD   dwSpeakerMode;              
DWORD   dwPreferredModemOptions;    
DWORD   dwNegotiatedModemOptions;   
DWORD   dwNegotiatedDCERate;        
BYTE    abVariablePortion [1];
} MODEMSETTINGS, *PMODEMSETTINGS, *LPMODEMSETTINGS;
#line 723 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\mcx.h"
#line 236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 237 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma region Application Family
struct HIMC__{int unused;}; typedef struct HIMC__ *HIMC;
struct HIMCC__{int unused;}; typedef struct HIMCC__ *HIMCC;
#line 32 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#pragma region Desktop Family
typedef HKL   *LPHKL;
typedef UINT  *LPUINT;
#line 43 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#pragma region Application Family
typedef struct tagCOMPOSITIONFORM {
DWORD dwStyle;
POINT ptCurrentPos;
RECT  rcArea;
} COMPOSITIONFORM, *PCOMPOSITIONFORM,  *NPCOMPOSITIONFORM,  *LPCOMPOSITIONFORM;
typedef struct tagCANDIDATEFORM {
DWORD dwIndex;
DWORD dwStyle;
POINT ptCurrentPos;
RECT  rcArea;
} CANDIDATEFORM, *PCANDIDATEFORM,  *NPCANDIDATEFORM,  *LPCANDIDATEFORM;
#line 63 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagCANDIDATELIST {
DWORD dwSize;
DWORD dwStyle;
DWORD dwCount;
DWORD dwSelection;
DWORD dwPageStart;
DWORD dwPageSize;
DWORD dwOffset[1];
} CANDIDATELIST, *PCANDIDATELIST,  *NPCANDIDATELIST,  *LPCANDIDATELIST;
#line 81 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#pragma region Application Family
typedef struct tagREGISTERWORDA {
LPSTR   lpReading;
LPSTR   lpWord;
} REGISTERWORDA, *PREGISTERWORDA,  *NPREGISTERWORDA,  *LPREGISTERWORDA;
typedef struct tagREGISTERWORDW {
LPWSTR  lpReading;
LPWSTR  lpWord;
} REGISTERWORDW, *PREGISTERWORDW,  *NPREGISTERWORDW,  *LPREGISTERWORDW;
typedef REGISTERWORDW REGISTERWORD;
typedef PREGISTERWORDW PREGISTERWORD;
typedef NPREGISTERWORDW NPREGISTERWORD;
typedef LPREGISTERWORDW LPREGISTERWORD;
#line 106 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 108 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagRECONVERTSTRING {
DWORD dwSize;
DWORD dwVersion;
DWORD dwStrLen;
DWORD dwStrOffset;
DWORD dwCompStrLen;
DWORD dwCompStrOffset;
DWORD dwTargetStrLen;
DWORD dwTargetStrOffset;
} RECONVERTSTRING, *PRECONVERTSTRING,  *NPRECONVERTSTRING,  *LPRECONVERTSTRING;
#line 127 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#line 130 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma region Application Family
typedef struct tagSTYLEBUFA {
DWORD       dwStyle;
CHAR        szDescription[32];
} STYLEBUFA, *PSTYLEBUFA,  *NPSTYLEBUFA,  *LPSTYLEBUFA;
typedef struct tagSTYLEBUFW {
DWORD       dwStyle;
WCHAR       szDescription[32];
} STYLEBUFW, *PSTYLEBUFW,  *NPSTYLEBUFW,  *LPSTYLEBUFW;
typedef STYLEBUFW STYLEBUF;
typedef PSTYLEBUFW PSTYLEBUF;
typedef NPSTYLEBUFW NPSTYLEBUF;
typedef LPSTYLEBUFW LPSTYLEBUF;
#line 155 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 157 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#pragma region Desktop Family
#line 164 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#pragma region Desktop Family
typedef struct tagIMEMENUITEMINFOA {
UINT        cbSize;
UINT        fType;
UINT        fState;
UINT        wID;
HBITMAP     hbmpChecked;
HBITMAP     hbmpUnchecked;
DWORD       dwItemData;
CHAR        szString[80];
HBITMAP     hbmpItem;
} IMEMENUITEMINFOA, *PIMEMENUITEMINFOA,  *NPIMEMENUITEMINFOA,  *LPIMEMENUITEMINFOA;
typedef struct tagIMEMENUITEMINFOW {
UINT        cbSize;
UINT        fType;
UINT        fState;
UINT        wID;
HBITMAP     hbmpChecked;
HBITMAP     hbmpUnchecked;
DWORD       dwItemData;
WCHAR       szString[80];
HBITMAP     hbmpItem;
} IMEMENUITEMINFOW, *PIMEMENUITEMINFOW,  *NPIMEMENUITEMINFOW,  *LPIMEMENUITEMINFOW;
typedef IMEMENUITEMINFOW IMEMENUITEMINFO;
typedef PIMEMENUITEMINFOW PIMEMENUITEMINFO;
typedef NPIMEMENUITEMINFOW NPIMEMENUITEMINFO;
typedef LPIMEMENUITEMINFOW LPIMEMENUITEMINFO;
#line 206 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
typedef struct tagIMECHARPOSITION {
DWORD       dwSize;
DWORD       dwCharPos;
POINT       pt;
UINT        cLineHeight;
RECT        rcDocument;
} IMECHARPOSITION, *PIMECHARPOSITION,  *NPIMECHARPOSITION,  *LPIMECHARPOSITION;
typedef BOOL    (__stdcall* IMCENUMPROC)(HIMC, LPARAM);
#line 218 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#line 221 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma region Desktop Family
HKL  __stdcall ImmInstallIMEA(  LPCSTR lpszIMEFileName,   LPCSTR lpszLayoutText);
HKL  __stdcall ImmInstallIMEW(  LPCWSTR lpszIMEFileName,   LPCWSTR lpszLayoutText);
#line 236 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
HWND __stdcall ImmGetDefaultIMEWnd( HWND);
UINT __stdcall ImmGetDescriptionA( HKL,   LPSTR lpszDescription,  UINT uBufLen);
UINT __stdcall ImmGetDescriptionW( HKL,   LPWSTR lpszDescription,  UINT uBufLen);
#line 246 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
UINT __stdcall ImmGetIMEFileNameA( HKL,   LPSTR lpszFileName,  UINT uBufLen);
UINT __stdcall ImmGetIMEFileNameW( HKL,   LPWSTR lpszFileName,  UINT uBufLen);
#line 254 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
DWORD __stdcall ImmGetProperty( HKL,  DWORD);
BOOL __stdcall ImmIsIME( HKL);
BOOL __stdcall ImmSimulateHotKey( HWND,  DWORD);
HIMC __stdcall ImmCreateContext(void);
BOOL __stdcall ImmDestroyContext( HIMC);
HIMC __stdcall ImmGetContext( HWND);
BOOL __stdcall ImmReleaseContext( HWND,  HIMC);
HIMC __stdcall ImmAssociateContext( HWND,  HIMC);
BOOL __stdcall ImmAssociateContextEx( HWND,  HIMC,  DWORD);
#line 269 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
LONG  __stdcall ImmGetCompositionStringA( HIMC,  DWORD,   LPVOID lpBuf,  DWORD dwBufLen);
LONG  __stdcall ImmGetCompositionStringW( HIMC,  DWORD,   LPVOID lpBuf,  DWORD dwBufLen);
#line 277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL  __stdcall ImmSetCompositionStringA( HIMC,  DWORD dwIndex,   LPVOID lpComp,  DWORD dwCompLen,   LPVOID lpRead,  DWORD dwReadLen);
BOOL  __stdcall ImmSetCompositionStringW( HIMC,  DWORD dwIndex,   LPVOID lpComp,  DWORD dwCompLen,   LPVOID lpRead,  DWORD dwReadLen);
#line 285 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
DWORD __stdcall ImmGetCandidateListCountA( HIMC,   LPDWORD lpdwListCount);
DWORD __stdcall ImmGetCandidateListCountW( HIMC,   LPDWORD lpdwListCount);
#line 293 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
DWORD __stdcall ImmGetCandidateListA( HIMC,  DWORD deIndex,   LPCANDIDATELIST lpCandList,  DWORD dwBufLen);
DWORD __stdcall ImmGetCandidateListW( HIMC,  DWORD deIndex,   LPCANDIDATELIST lpCandList,  DWORD dwBufLen);
#line 301 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
DWORD __stdcall ImmGetGuideLineA(  HIMC,   DWORD dwIndex,   LPSTR lpBuf,   DWORD dwBufLen);
DWORD __stdcall ImmGetGuideLineW(  HIMC,   DWORD dwIndex,   LPWSTR lpBuf,   DWORD dwBufLen);
#line 309 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL __stdcall ImmGetConversionStatus( HIMC,   LPDWORD lpfdwConversion,   LPDWORD lpfdwSentence);
BOOL __stdcall ImmSetConversionStatus( HIMC,  DWORD,  DWORD);
BOOL __stdcall ImmGetOpenStatus( HIMC);
BOOL __stdcall ImmSetOpenStatus( HIMC,  BOOL);
BOOL __stdcall ImmGetCompositionFontA( HIMC,   LPLOGFONTA lplf);
BOOL __stdcall ImmGetCompositionFontW( HIMC,   LPLOGFONTW lplf);
#line 323 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL __stdcall ImmSetCompositionFontA( HIMC,   LPLOGFONTA lplf);
BOOL __stdcall ImmSetCompositionFontW( HIMC,   LPLOGFONTW lplf);
#line 331 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 332 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL    __stdcall ImmConfigureIMEA( HKL,  HWND,  DWORD,  LPVOID);
BOOL    __stdcall ImmConfigureIMEW( HKL,  HWND,  DWORD,  LPVOID);
#line 340 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
LRESULT __stdcall ImmEscapeA( HKL,  HIMC,  UINT,  LPVOID);
LRESULT __stdcall ImmEscapeW( HKL,  HIMC,  UINT,  LPVOID);
#line 348 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
DWORD   __stdcall ImmGetConversionListA( HKL,  HIMC,   LPCSTR lpSrc,   LPCANDIDATELIST lpDst,  DWORD dwBufLen,  UINT uFlag);
DWORD   __stdcall ImmGetConversionListW( HKL,  HIMC,   LPCWSTR lpSrc,   LPCANDIDATELIST lpDst,  DWORD dwBufLen,  UINT uFlag);
#line 356 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL    __stdcall ImmNotifyIME( HIMC,  DWORD dwAction,  DWORD dwIndex,  DWORD dwValue);
BOOL __stdcall ImmGetStatusWindowPos( HIMC,   LPPOINT lpptPos);
BOOL __stdcall ImmSetStatusWindowPos( HIMC,   LPPOINT lpptPos);
BOOL __stdcall ImmGetCompositionWindow( HIMC,   LPCOMPOSITIONFORM lpCompForm);
BOOL __stdcall ImmSetCompositionWindow( HIMC,   LPCOMPOSITIONFORM lpCompForm);
BOOL __stdcall ImmGetCandidateWindow( HIMC,  DWORD,   LPCANDIDATEFORM lpCandidate);
BOOL __stdcall ImmSetCandidateWindow( HIMC,   LPCANDIDATEFORM lpCandidate);
BOOL __stdcall ImmIsUIMessageA( HWND,  UINT,  WPARAM,  LPARAM);
BOOL __stdcall ImmIsUIMessageW( HWND,  UINT,  WPARAM,  LPARAM);
#line 373 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
UINT __stdcall ImmGetVirtualKey( HWND);
typedef int (__stdcall *REGISTERWORDENUMPROCA)(  LPCSTR lpszReading, DWORD,   LPCSTR lpszString, LPVOID);
typedef int (__stdcall *REGISTERWORDENUMPROCW)(  LPCWSTR lpszReading, DWORD,   LPCWSTR lpszString, LPVOID);
#line 384 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL __stdcall ImmRegisterWordA( HKL,   LPCSTR lpszReading,  DWORD,   LPCSTR lpszRegister);
BOOL __stdcall ImmRegisterWordW( HKL,   LPCWSTR lpszReading,  DWORD,   LPCWSTR lpszRegister);
#line 392 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL __stdcall ImmUnregisterWordA( HKL,   LPCSTR lpszReading,  DWORD,   LPCSTR lpszUnregister);
BOOL __stdcall ImmUnregisterWordW( HKL,   LPCWSTR lpszReading,  DWORD,   LPCWSTR lpszUnregister);
#line 400 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
UINT __stdcall ImmGetRegisterWordStyleA( HKL,  UINT nItem,   LPSTYLEBUFA lpStyleBuf);
UINT __stdcall ImmGetRegisterWordStyleW( HKL,  UINT nItem,   LPSTYLEBUFW lpStyleBuf);
#line 408 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
UINT __stdcall ImmEnumRegisterWordA( HKL,  REGISTERWORDENUMPROCA,   LPCSTR lpszReading,  DWORD,   LPCSTR lpszRegister,  LPVOID);
UINT __stdcall ImmEnumRegisterWordW( HKL,  REGISTERWORDENUMPROCW,   LPCWSTR lpszReading,  DWORD,   LPCWSTR lpszRegister,  LPVOID);
#line 416 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL __stdcall ImmDisableIME( DWORD);
BOOL __stdcall ImmEnumInputContext(DWORD idThread, IMCENUMPROC lpfn, LPARAM lParam);
DWORD __stdcall ImmGetImeMenuItemsA( HIMC,  DWORD,  DWORD,   LPIMEMENUITEMINFOA lpImeParentMenu,   LPIMEMENUITEMINFOA lpImeMenu,  DWORD dwSize);
DWORD __stdcall ImmGetImeMenuItemsW( HIMC,  DWORD,  DWORD,   LPIMEMENUITEMINFOW lpImeParentMenu,   LPIMEMENUITEMINFOW lpImeMenu,  DWORD dwSize);
#line 427 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
BOOL __stdcall ImmDisableTextFrameService(DWORD idThread);
#line 430 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 434 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 436 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#pragma endregion
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ime_cmodes.h"
#pragma once
#line 23 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ime_cmodes.h"
#line 639 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 765 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 774 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 780 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\imm.h"
#line 240 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 241 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 242 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 243 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma warning(pop)
#line 254 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 255 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 256 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 258 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 260 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#pragma endregion
#line 263 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 265 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\windows.h"
#line 43 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 44 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 61 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 71 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 75 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 87 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 88 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef unsigned char   u_char;
typedef unsigned short  u_short;
typedef unsigned int    u_int;
typedef unsigned long   u_long;
typedef unsigned __int64 u_int64;
#line 104 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#pragma once
#line 32 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#pragma region Desktop Family
#line 45 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214) 
#line 57 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 67 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\inaddr.h"
#pragma once
typedef struct in_addr {
union {
struct { UCHAR s_b1,s_b2,s_b3,s_b4; } S_un_b;
struct { USHORT s_w1,s_w2; } S_un_w;
ULONG S_addr;
} S_un;
} IN_ADDR, *PIN_ADDR,  *LPIN_ADDR;
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\inaddr.h"
#line 69 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef USHORT ADDRESS_FAMILY;
#line 123 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 139 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 141 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 201 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef struct sockaddr {
u_short sa_family;
#line 224 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
CHAR sa_data[14];                   
} SOCKADDR, *PSOCKADDR,  *LPSOCKADDR;
typedef struct _SOCKET_ADDRESS {
LPSOCKADDR lpSockaddr;
INT iSockaddrLength;
} SOCKET_ADDRESS, *PSOCKET_ADDRESS, *LPSOCKET_ADDRESS;
typedef struct _SOCKET_ADDRESS_LIST {
INT             iAddressCount;
SOCKET_ADDRESS  Address[1];
} SOCKET_ADDRESS_LIST, *PSOCKET_ADDRESS_LIST,  *LPSOCKET_ADDRESS_LIST;
#line 263 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef struct _CSADDR_INFO {
SOCKET_ADDRESS LocalAddr ;
SOCKET_ADDRESS RemoteAddr ;
INT iSocketType ;
INT iProtocol ;
} CSADDR_INFO, *PCSADDR_INFO,  * LPCSADDR_INFO ;
#line 274 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 294 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef struct sockaddr_storage {
ADDRESS_FAMILY ss_family;      
CHAR __ss_pad1[((sizeof(__int64)) - sizeof (short))];  
__int64 __ss_align;            
CHAR __ss_pad2[(128 - (sizeof (short) + ((sizeof(__int64)) - sizeof (short)) + (sizeof(__int64))))];  
} SOCKADDR_STORAGE_LH, *PSOCKADDR_STORAGE_LH,  *LPSOCKADDR_STORAGE_LH;
typedef struct sockaddr_storage_xp {
short ss_family;               
CHAR __ss_pad1[((sizeof(__int64)) - sizeof (short))];  
__int64 __ss_align;            
CHAR __ss_pad2[(128 - (sizeof (short) + ((sizeof(__int64)) - sizeof (short)) + (sizeof(__int64))))];  
} SOCKADDR_STORAGE_XP, *PSOCKADDR_STORAGE_XP,  *LPSOCKADDR_STORAGE_XP;
#line 332 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef SOCKADDR_STORAGE_XP SOCKADDR_STORAGE;
typedef SOCKADDR_STORAGE *PSOCKADDR_STORAGE,  *LPSOCKADDR_STORAGE;
#line 335 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 343 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 360 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 389 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 394 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef enum {
IPPROTO_HOPOPTS       = 0,  
#line 414 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
IPPROTO_ICMP          = 1,
IPPROTO_IGMP          = 2,
IPPROTO_GGP           = 3,
IPPROTO_IPV4          = 4,
#line 420 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 423 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
IPPROTO_TCP           = 6,
#line 429 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
IPPROTO_PUP           = 12,
IPPROTO_UDP           = 17,
IPPROTO_IDP           = 22,
#line 435 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
IPPROTO_IPV6          = 41, 
IPPROTO_ROUTING       = 43, 
IPPROTO_FRAGMENT      = 44, 
IPPROTO_ESP           = 50, 
IPPROTO_AH            = 51, 
IPPROTO_ICMPV6        = 58, 
IPPROTO_NONE          = 59, 
IPPROTO_DSTOPTS       = 60, 
#line 446 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
IPPROTO_ND            = 77,
IPPROTO_ICLFXBM       = 78,
#line 451 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 457 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
IPPROTO_RAW           = 255,
IPPROTO_MAX           = 256,
IPPROTO_RESERVED_RAW  = 257,
IPPROTO_RESERVED_IPSEC  = 258,
IPPROTO_RESERVED_IPSECOFFLOAD  = 259,
IPPROTO_RESERVED_WNV = 260,
IPPROTO_RESERVED_MAX  = 261
} IPPROTO, *PIPROTO;
#line 540 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef enum {
ScopeLevelInterface    = 1,
ScopeLevelLink         = 2,
ScopeLevelSubnet       = 3,
ScopeLevelAdmin        = 4,
ScopeLevelSite         = 5,
ScopeLevelOrganization = 8,
ScopeLevelGlobal       = 14,
ScopeLevelCount        = 16
} SCOPE_LEVEL;
typedef struct {
union {
struct {
ULONG Zone : 28;
ULONG Level : 4;
};
ULONG Value;
};
} SCOPE_ID, *PSCOPE_ID;
typedef struct sockaddr_in {
short   sin_family;
#line 615 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
USHORT sin_port;
IN_ADDR sin_addr;
CHAR sin_zero[8];
} SOCKADDR_IN, *PSOCKADDR_IN;
#line 637 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef struct _WSABUF {
ULONG len;     
CHAR  *buf; 
} WSABUF,  * LPWSABUF;
typedef struct _WSAMSG {
LPSOCKADDR       name;              
INT              namelen;           
LPWSABUF         lpBuffers;         
#line 673 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
DWORD            dwBufferCount;     
#line 675 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
WSABUF           Control;           
#line 681 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
DWORD            dwFlags;           
#line 683 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
} WSAMSG, *PWSAMSG, *  LPWSAMSG;
#line 692 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef struct _WSACMSGHDR {
SIZE_T      cmsg_len;
INT         cmsg_level;
INT         cmsg_type;
} WSACMSGHDR, *PWSACMSGHDR,  *LPWSACMSGHDR;
#line 703 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 720 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 741 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 769 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 806 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 823 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
typedef struct addrinfo
{
int                 ai_flags;       
int                 ai_family;      
int                 ai_socktype;    
int                 ai_protocol;    
size_t              ai_addrlen;     
char *              ai_canonname;   
struct sockaddr *   ai_addr;        
struct addrinfo *   ai_next;        
}
ADDRINFOA, *PADDRINFOA;
typedef struct addrinfoW
{
int                 ai_flags;       
int                 ai_family;      
int                 ai_socktype;    
int                 ai_protocol;    
size_t              ai_addrlen;     
PWSTR               ai_canonname;   
struct sockaddr *   ai_addr;        
struct addrinfoW *  ai_next;        
}
ADDRINFOW, *PADDRINFOW;
#line 925 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 963 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 987 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 991 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 1003 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#pragma warning(pop)
#line 1033 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#pragma endregion
#line 1036 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2def.h"
#line 106 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef UINT_PTR        SOCKET;
#line 124 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct fd_set {
u_int fd_count;               
SOCKET  fd_array[64];   
} fd_set;
extern int __stdcall  __WSAFDIsSet(SOCKET fd, fd_set  *);
struct timeval {
long    tv_sec;         
long    tv_usec;        
};
struct  hostent {
char     * h_name;           
char     *  * h_aliases;  
short   h_addrtype;             
short   h_length;               
char     *  * h_addr_list; 
};
struct  netent {
char     * n_name;           
char     *  * n_aliases;  
short   n_addrtype;             
u_long  n_net;                  
};
struct  servent {
char     * s_name;           
char     *  * s_aliases;  
short   s_port;                 
char     * s_proto;          
#line 255 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
};
struct  protoent {
char     * p_name;           
char     *  * p_aliases;  
short   p_proto;                
};
typedef struct WSAData {
WORD                    wVersion;
WORD                    wHighVersion;
char                    szDescription[256+1];
char                    szSystemStatus[128+1];
unsigned short          iMaxSockets;
unsigned short          iMaxUdpDg;
char  *              lpVendorInfo;
#line 369 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
} WSADATA,  * LPWSADATA;
#line 441 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
struct sockproto {
u_short sp_family;              
u_short sp_protocol;            
};
#line 487 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
struct  linger {
u_short l_onoff;                
u_short l_linger;               
};
#line 516 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 801 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct _OVERLAPPED *    LPWSAOVERLAPPED;
#line 857 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\qos.h"
#pragma once
#pragma region Desktop Family
typedef ULONG   SERVICETYPE;
typedef struct _flowspec
{
ULONG       TokenRate;              
ULONG       TokenBucketSize;        
ULONG       PeakBandwidth;          
ULONG       Latency;                
ULONG       DelayVariation;         
SERVICETYPE ServiceType;
ULONG       MaxSduSize;             
ULONG       MinimumPolicedSize;     
} FLOWSPEC, *PFLOWSPEC, * LPFLOWSPEC;
typedef struct  {
ULONG   ObjectType;
ULONG   ObjectLength;  
} QOS_OBJECT_HDR, *LPQOS_OBJECT_HDR;
typedef struct _QOS_SD_MODE {
QOS_OBJECT_HDR   ObjectHdr;
ULONG            ShapeDiscardMode;
} QOS_SD_MODE, *LPQOS_SD_MODE;
typedef struct _QOS_SHAPING_RATE {
QOS_OBJECT_HDR   ObjectHdr;
ULONG            ShapingRate;
} QOS_SHAPING_RATE, *LPQOS_SHAPING_RATE;
#line 216 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\qos.h"
#pragma endregion
#line 219 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\qos.h"
#line 862 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct _QualityOfService
{
FLOWSPEC      SendingFlowspec;       
FLOWSPEC      ReceivingFlowspec;     
WSABUF        ProviderSpecific;      
} QOS,  * LPQOS;
typedef unsigned int             GROUP;
typedef struct _WSANETWORKEVENTS {
long lNetworkEvents;
int iErrorCode[10];
} WSANETWORKEVENTS,  * LPWSANETWORKEVENTS;
typedef struct _WSAPROTOCOLCHAIN {
int ChainLen;                                 
DWORD ChainEntries[7];       
} WSAPROTOCOLCHAIN,  * LPWSAPROTOCOLCHAIN;
typedef struct _WSAPROTOCOL_INFOA {
DWORD dwServiceFlags1;
DWORD dwServiceFlags2;
DWORD dwServiceFlags3;
DWORD dwServiceFlags4;
DWORD dwProviderFlags;
GUID ProviderId;
DWORD dwCatalogEntryId;
WSAPROTOCOLCHAIN ProtocolChain;
int iVersion;
int iAddressFamily;
int iMaxSockAddr;
int iMinSockAddr;
int iSocketType;
int iProtocol;
int iProtocolMaxOffset;
int iNetworkByteOrder;
int iSecurityScheme;
DWORD dwMessageSize;
DWORD dwProviderReserved;
CHAR   szProtocol[255+1];
} WSAPROTOCOL_INFOA,  * LPWSAPROTOCOL_INFOA;
typedef struct _WSAPROTOCOL_INFOW {
DWORD dwServiceFlags1;
DWORD dwServiceFlags2;
DWORD dwServiceFlags3;
DWORD dwServiceFlags4;
DWORD dwProviderFlags;
GUID ProviderId;
DWORD dwCatalogEntryId;
WSAPROTOCOLCHAIN ProtocolChain;
int iVersion;
int iAddressFamily;
int iMaxSockAddr;
int iMinSockAddr;
int iSocketType;
int iProtocol;
int iProtocolMaxOffset;
int iNetworkByteOrder;
int iSecurityScheme;
DWORD dwMessageSize;
DWORD dwProviderReserved;
WCHAR  szProtocol[255+1];
} WSAPROTOCOL_INFOW,  * LPWSAPROTOCOL_INFOW;
typedef WSAPROTOCOL_INFOW WSAPROTOCOL_INFO;
typedef LPWSAPROTOCOL_INFOW LPWSAPROTOCOL_INFO;
#line 975 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef
int
(__stdcall * LPCONDITIONPROC)(
LPWSABUF lpCallerId,
LPWSABUF lpCallerData,
LPQOS lpSQOS,
LPQOS lpGQOS,
LPWSABUF lpCalleeId,
LPWSABUF lpCalleeData,
GROUP  * g,
DWORD_PTR dwCallbackData
);
typedef
void
(__stdcall * LPWSAOVERLAPPED_COMPLETION_ROUTINE)(
DWORD dwError,
DWORD cbTransferred,
LPWSAOVERLAPPED lpOverlapped,
DWORD dwFlags
);
typedef enum _WSACOMPLETIONTYPE {
NSP_NOTIFY_IMMEDIATELY = 0,
NSP_NOTIFY_HWND,
NSP_NOTIFY_EVENT,
NSP_NOTIFY_PORT,
NSP_NOTIFY_APC,
} WSACOMPLETIONTYPE, *PWSACOMPLETIONTYPE,  * LPWSACOMPLETIONTYPE;
typedef struct _WSACOMPLETION {
WSACOMPLETIONTYPE Type;
union {
struct {
HWND hWnd;
UINT uMsg;
WPARAM context;
} WindowMessage;
struct {
LPWSAOVERLAPPED lpOverlapped;
} Event;
struct {
LPWSAOVERLAPPED lpOverlapped;
LPWSAOVERLAPPED_COMPLETION_ROUTINE lpfnCompletionProc;
} Apc;
struct {
LPWSAOVERLAPPED lpOverlapped;
HANDLE hPort;
ULONG_PTR Key;
} Port;
} Parameters;
} WSACOMPLETION, *PWSACOMPLETION,  *LPWSACOMPLETION;
#line 1095 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct _BLOB {
ULONG cbSize ;
BYTE *pBlobData ;
#line 1118 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
} BLOB, *LPBLOB ;
#line 1120 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1148 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1152 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1164 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1194 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1198 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1212 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1231 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1265 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct _AFPROTOCOLS {
INT iAddressFamily;
INT iProtocol;
} AFPROTOCOLS, *PAFPROTOCOLS, *LPAFPROTOCOLS;
typedef enum _WSAEcomparator
{
COMP_EQUAL = 0,
COMP_NOTLESS
} WSAECOMPARATOR, *PWSAECOMPARATOR, *LPWSAECOMPARATOR;
typedef struct _WSAVersion
{
DWORD           dwVersion;
WSAECOMPARATOR  ecHow;
}WSAVERSION, *PWSAVERSION, *LPWSAVERSION;
typedef struct _WSAQuerySetA
{
DWORD           dwSize;
LPSTR           lpszServiceInstanceName;
LPGUID          lpServiceClassId;
LPWSAVERSION    lpVersion;
LPSTR           lpszComment;
DWORD           dwNameSpace;
LPGUID          lpNSProviderId;
LPSTR           lpszContext;
DWORD           dwNumberOfProtocols;
LPAFPROTOCOLS   lpafpProtocols;
LPSTR           lpszQueryString;
DWORD           dwNumberOfCsAddrs;
LPCSADDR_INFO   lpcsaBuffer;
DWORD           dwOutputFlags;
LPBLOB          lpBlob;
} WSAQUERYSETA, *PWSAQUERYSETA, *LPWSAQUERYSETA;
typedef   struct _WSAQuerySetW
{
DWORD           dwSize;
LPWSTR          lpszServiceInstanceName;
LPGUID          lpServiceClassId;
LPWSAVERSION    lpVersion;
LPWSTR          lpszComment;
DWORD           dwNameSpace;
LPGUID          lpNSProviderId;
LPWSTR          lpszContext;
DWORD           dwNumberOfProtocols;
LPAFPROTOCOLS   lpafpProtocols;
LPWSTR          lpszQueryString;
DWORD           dwNumberOfCsAddrs;
LPCSADDR_INFO   lpcsaBuffer;
DWORD           dwOutputFlags;
LPBLOB          lpBlob;
} WSAQUERYSETW, *PWSAQUERYSETW, *LPWSAQUERYSETW;
typedef struct _WSAQuerySet2A
{
DWORD           dwSize;
LPSTR           lpszServiceInstanceName;
LPWSAVERSION    lpVersion;
LPSTR           lpszComment;
DWORD           dwNameSpace;
LPGUID          lpNSProviderId;
LPSTR           lpszContext;
DWORD           dwNumberOfProtocols;
LPAFPROTOCOLS   lpafpProtocols;
LPSTR           lpszQueryString;
DWORD           dwNumberOfCsAddrs;
LPCSADDR_INFO   lpcsaBuffer;
DWORD           dwOutputFlags;
LPBLOB          lpBlob;   
} WSAQUERYSET2A, *PWSAQUERYSET2A, *LPWSAQUERYSET2A;
typedef struct _WSAQuerySet2W
{
DWORD           dwSize;
LPWSTR          lpszServiceInstanceName;
LPWSAVERSION    lpVersion;
LPWSTR          lpszComment;
DWORD           dwNameSpace;
LPGUID          lpNSProviderId;
LPWSTR          lpszContext;
DWORD           dwNumberOfProtocols;
LPAFPROTOCOLS   lpafpProtocols;
LPWSTR          lpszQueryString;
DWORD           dwNumberOfCsAddrs;
LPCSADDR_INFO   lpcsaBuffer;
DWORD           dwOutputFlags;
LPBLOB          lpBlob;   
} WSAQUERYSET2W, *PWSAQUERYSET2W, *LPWSAQUERYSET2W;
typedef WSAQUERYSETW WSAQUERYSET;
typedef PWSAQUERYSETW PWSAQUERYSET;
typedef LPWSAQUERYSETW LPWSAQUERYSET;
typedef WSAQUERYSET2W WSAQUERYSET2;
typedef PWSAQUERYSET2W PWSAQUERYSET2;
typedef LPWSAQUERYSET2W LPWSAQUERYSET2;
#line 1381 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1421 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef enum _WSAESETSERVICEOP
{
RNRSERVICE_REGISTER=0,
RNRSERVICE_DEREGISTER,
RNRSERVICE_DELETE
} WSAESETSERVICEOP, *PWSAESETSERVICEOP, *LPWSAESETSERVICEOP;
typedef struct _WSANSClassInfoA
{
LPSTR   lpszName;
DWORD   dwNameSpace;
DWORD   dwValueType;
DWORD   dwValueSize;
LPVOID  lpValue;
}WSANSCLASSINFOA, *PWSANSCLASSINFOA, *LPWSANSCLASSINFOA;
typedef struct _WSANSClassInfoW
{
LPWSTR  lpszName;
DWORD   dwNameSpace;
DWORD   dwValueType;
DWORD   dwValueSize;
LPVOID  lpValue;
}WSANSCLASSINFOW, *PWSANSCLASSINFOW, *LPWSANSCLASSINFOW;
typedef WSANSCLASSINFOW WSANSCLASSINFO;
typedef PWSANSCLASSINFOW PWSANSCLASSINFO;
typedef LPWSANSCLASSINFOW LPWSANSCLASSINFO;
#line 1462 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct _WSAServiceClassInfoA
{
LPGUID              lpServiceClassId;
LPSTR               lpszServiceClassName;
DWORD               dwCount;
LPWSANSCLASSINFOA   lpClassInfos;
}WSASERVICECLASSINFOA, *PWSASERVICECLASSINFOA, *LPWSASERVICECLASSINFOA;
typedef struct _WSAServiceClassInfoW
{
LPGUID              lpServiceClassId;
LPWSTR              lpszServiceClassName;
DWORD               dwCount;
LPWSANSCLASSINFOW   lpClassInfos;
}WSASERVICECLASSINFOW, *PWSASERVICECLASSINFOW, *LPWSASERVICECLASSINFOW;
typedef WSASERVICECLASSINFOW WSASERVICECLASSINFO;
typedef PWSASERVICECLASSINFOW PWSASERVICECLASSINFO;
typedef LPWSASERVICECLASSINFOW LPWSASERVICECLASSINFO;
#line 1486 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct _WSANAMESPACE_INFOA {
GUID                NSProviderId;
DWORD               dwNameSpace;
BOOL                fActive;
DWORD               dwVersion;
LPSTR               lpszIdentifier;
} WSANAMESPACE_INFOA, *PWSANAMESPACE_INFOA, *LPWSANAMESPACE_INFOA;
typedef struct _WSANAMESPACE_INFOW {
GUID                NSProviderId;
DWORD               dwNameSpace;
BOOL                fActive;
DWORD               dwVersion;
LPWSTR              lpszIdentifier;
} WSANAMESPACE_INFOW, *PWSANAMESPACE_INFOW, *LPWSANAMESPACE_INFOW;
typedef struct _WSANAMESPACE_INFOEXA {
GUID                NSProviderId;
DWORD               dwNameSpace;
BOOL                fActive;
DWORD               dwVersion;
LPSTR               lpszIdentifier;
BLOB                ProviderSpecific;
} WSANAMESPACE_INFOEXA, *PWSANAMESPACE_INFOEXA, *LPWSANAMESPACE_INFOEXA;
typedef struct _WSANAMESPACE_INFOEXW {
GUID                NSProviderId;
DWORD               dwNameSpace;
BOOL                fActive;
DWORD               dwVersion;
LPWSTR              lpszIdentifier;
BLOB                ProviderSpecific;
} WSANAMESPACE_INFOEXW, *PWSANAMESPACE_INFOEXW, *LPWSANAMESPACE_INFOEXW;
typedef WSANAMESPACE_INFOW WSANAMESPACE_INFO;
typedef PWSANAMESPACE_INFOW PWSANAMESPACE_INFO;
typedef LPWSANAMESPACE_INFOW LPWSANAMESPACE_INFO;
typedef WSANAMESPACE_INFOEXW WSANAMESPACE_INFOEX;
typedef PWSANAMESPACE_INFOEXW PWSANAMESPACE_INFOEX;
typedef LPWSANAMESPACE_INFOEXW LPWSANAMESPACE_INFOEX;
#line 1536 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1564 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
SOCKET
__stdcall
accept(
SOCKET s,
struct sockaddr  * addr,
int  * addrlen
);
#line 1579 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1590 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
bind(
SOCKET s,
const struct sockaddr  * name,
int namelen
);
#line 1601 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1611 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
closesocket(
SOCKET s
);
#line 1620 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1628 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
connect(
SOCKET s,
const struct sockaddr  * name,
int namelen
);
#line 1639 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1649 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
ioctlsocket(
SOCKET s,
long cmd,
u_long  * argp
);
#line 1660 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1670 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
getpeername(
SOCKET s,
struct sockaddr  * name,
int  * namelen
);
#line 1681 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1691 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
getsockname(
SOCKET s,
struct sockaddr  * name,
int  * namelen
);
#line 1702 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1712 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
getsockopt(
SOCKET s,
int level,
int optname,
char  * optval,
int  * optlen
);
#line 1725 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1737 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
u_long
__stdcall
htonl(
u_long hostlong
);
#line 1746 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1754 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
u_short
__stdcall
htons(
u_short hostshort
);
#line 1763 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1771 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
unsigned long
__stdcall
inet_addr(
const char  * cp
);
#line 1780 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1788 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
char  *
__stdcall
inet_ntoa(
struct in_addr in
);
#line 1797 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1805 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1888 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
listen(
SOCKET s,
int backlog
);
#line 1898 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1907 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
u_long
__stdcall
ntohl(
u_long netlong
);
#line 1916 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1924 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
u_short
__stdcall
ntohs(
u_short netshort
);
#line 1933 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1941 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
recv(
SOCKET s,
char  * buf,
int len,
int flags
);
#line 1953 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1964 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
recvfrom(
SOCKET s,
char  * buf,
int len,
int flags,
struct sockaddr  * from,
int  * fromlen
);
#line 1978 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 1991 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
select(
int nfds,
fd_set  * readfds,
fd_set  * writefds,
fd_set  * exceptfds,
const struct timeval  * timeout
);
#line 2004 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2016 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
send(
SOCKET s,
const char  * buf,
int len,
int flags
);
#line 2028 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2039 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
sendto(
SOCKET s,
const char  * buf,
int len,
int flags,
const struct sockaddr  * to,
int tolen
);
#line 2053 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2066 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
setsockopt(
SOCKET s,
int level,
int optname,
const char  * optval,
int optlen
);
#line 2079 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2091 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
shutdown(
SOCKET s,
int how
);
#line 2101 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2110 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
SOCKET
__stdcall
socket(
int af,
int type,
int protocol
);
#line 2122 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2133 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
struct hostent  *
__stdcall
gethostbyaddr(
const char  * addr,
int len,
int type
);
#line 2146 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2156 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
struct hostent  *
__stdcall
gethostbyname(
const char  * name
);
#line 2165 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
gethostname(
char  * name,
int namelen
);
#line 2184 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2193 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
GetHostNameW(
PWSTR name,
int namelen
);
#line 2204 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2213 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
struct servent  *
__stdcall
getservbyport(
int port,
const char  * proto
);
#line 2223 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2232 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
struct servent  *
__stdcall
getservbyname(
const char  * name,
const char  * proto
);
#line 2242 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2251 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
struct protoent  *
__stdcall
getprotobynumber(
int number
);
#line 2260 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2268 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
struct protoent  *
__stdcall
getprotobyname(
const char  * name
);
#line 2277 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2285 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAStartup(
WORD wVersionRequested,
LPWSADATA lpWSAData
);
#line 2298 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2308 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSACleanup(
void
);
#line 2317 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2325 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
void
__stdcall
WSASetLastError(
int iError
);
#line 2334 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2342 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAGetLastError(
void
);
#line 2351 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2359 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
BOOL
__stdcall
WSAIsBlocking(
void
);
#line 2368 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2376 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAUnhookBlockingHook(
void
);
#line 2385 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2393 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
FARPROC
__stdcall
WSASetBlockingHook(
FARPROC lpBlockFunc
);
#line 2402 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2410 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSACancelBlockingCall(
void
);
#line 2419 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2427 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
HANDLE
__stdcall
WSAAsyncGetServByName(
HWND hWnd,
u_int wMsg,
const char  * name,
const char  * proto,
char  * buf,
int buflen
);
#line 2441 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2454 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
HANDLE
__stdcall
WSAAsyncGetServByPort(
HWND hWnd,
u_int wMsg,
int port,
const char  * proto,
char  * buf,
int buflen
);
#line 2468 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2481 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
HANDLE
__stdcall
WSAAsyncGetProtoByName(
HWND hWnd,
u_int wMsg,
const char  * name,
char  * buf,
int buflen
);
#line 2494 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2506 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
HANDLE
__stdcall
WSAAsyncGetProtoByNumber(
HWND hWnd,
u_int wMsg,
int number,
char  * buf,
int buflen
);
#line 2519 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2531 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
HANDLE
__stdcall
WSAAsyncGetHostByName(
HWND hWnd,
u_int wMsg,
const char  * name,
char  * buf,
int buflen
);
#line 2544 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2556 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
HANDLE
__stdcall
WSAAsyncGetHostByAddr(
HWND hWnd,
u_int wMsg,
const char  * addr,
int len,
int type,
char  * buf,
int buflen
);
#line 2571 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2585 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSACancelAsyncRequest(
HANDLE hAsyncTaskHandle
);
#line 2594 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2602 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAAsyncSelect(
SOCKET s,
HWND hWnd,
u_int wMsg,
long lEvent
);
#line 2614 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2625 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
SOCKET
__stdcall
WSAAccept(
SOCKET s,
struct sockaddr  * addr,
LPINT addrlen,
LPCONDITIONPROC lpfnCondition,
DWORD_PTR dwCallbackData
);
#line 2641 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2654 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
BOOL
__stdcall
WSACloseEvent(
HANDLE hEvent
);
#line 2663 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2671 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAConnect(
SOCKET s,
const struct sockaddr  * name,
int namelen,
LPWSABUF lpCallerData,
LPWSABUF lpCalleeData,
LPQOS lpSQOS,
LPQOS lpGQOS
);
#line 2686 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2694 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
BOOL
__stdcall
WSAConnectByNameW(
SOCKET s,
LPWSTR nodename,
LPWSTR servicename,
LPDWORD LocalAddressLength,
LPSOCKADDR LocalAddress,
LPDWORD RemoteAddressLength,
LPSOCKADDR RemoteAddress,
const struct timeval * timeout,
LPWSAOVERLAPPED Reserved);
BOOL
__stdcall
WSAConnectByNameA(
SOCKET s,
LPCSTR nodename,
LPCSTR servicename,
LPDWORD LocalAddressLength,
LPSOCKADDR LocalAddress,
LPDWORD RemoteAddressLength,
LPSOCKADDR RemoteAddress,
const struct timeval * timeout,
LPWSAOVERLAPPED Reserved);
BOOL
__stdcall
WSAConnectByList(
SOCKET s,
PSOCKET_ADDRESS_LIST SocketAddress,
LPDWORD LocalAddressLength,
LPSOCKADDR LocalAddress,
LPDWORD RemoteAddressLength,
LPSOCKADDR RemoteAddress,
const struct timeval * timeout,
LPWSAOVERLAPPED Reserved);
#line 2733 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2747 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
HANDLE
__stdcall
WSACreateEvent(
void
);
#line 2756 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2764 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSADuplicateSocketA(
SOCKET s,
DWORD dwProcessId,
LPWSAPROTOCOL_INFOA lpProtocolInfo
);
__declspec(dllimport)
int
__stdcall
WSADuplicateSocketW(
SOCKET s,
DWORD dwProcessId,
LPWSAPROTOCOL_INFOW lpProtocolInfo
);
#line 2787 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2788 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2810 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAEnumNetworkEvents(
SOCKET s,
HANDLE hEventObject,
LPWSANETWORKEVENTS lpNetworkEvents
);
#line 2821 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2831 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAEnumProtocolsA(
LPINT lpiProtocols,
LPWSAPROTOCOL_INFOA lpProtocolBuffer,
LPDWORD lpdwBufferLength
);
__declspec(dllimport)
int
__stdcall
WSAEnumProtocolsW(
LPINT lpiProtocols,
LPWSAPROTOCOL_INFOW lpProtocolBuffer,
LPDWORD lpdwBufferLength
);
#line 2854 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2855 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2877 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAEventSelect(
SOCKET s,
HANDLE hEventObject,
long lNetworkEvents
);
#line 2888 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2898 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
BOOL
__stdcall
WSAGetOverlappedResult(
SOCKET s,
LPWSAOVERLAPPED lpOverlapped,
LPDWORD lpcbTransfer,
BOOL fWait,
LPDWORD lpdwFlags
);
#line 2911 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2923 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
BOOL
__stdcall
WSAGetQOSByName(
SOCKET s,
LPWSABUF lpQOSName,
LPQOS lpQOS
);
#line 2934 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2944 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAHtonl(
SOCKET s,
u_long hostlong,
u_long  * lpnetlong
);
#line 2955 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2965 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAHtons(
SOCKET s,
u_short hostshort,
u_short  * lpnetshort
);
#line 2976 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 2986 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSAIoctl(
SOCKET s,
DWORD dwIoControlCode,
LPVOID lpvInBuffer,
DWORD cbInBuffer,
LPVOID lpvOutBuffer,
DWORD cbOutBuffer,
LPDWORD lpcbBytesReturned,
LPWSAOVERLAPPED lpOverlapped,
LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#line 3003 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3019 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
SOCKET
__stdcall
WSAJoinLeaf(
SOCKET s,
const struct sockaddr  * name,
int namelen,
LPWSABUF lpCallerData,
LPWSABUF lpCalleeData,
LPQOS lpSQOS,
LPQOS lpGQOS,
DWORD dwFlags
);
#line 3035 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3050 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSANtohl(
SOCKET s,
u_long netlong,
u_long  * lphostlong
);
#line 3061 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3071 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSANtohs(
SOCKET s,
u_short netshort,
u_short  * lphostshort
);
#line 3082 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3092 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSARecv(
SOCKET s,
LPWSABUF lpBuffers,
DWORD dwBufferCount,
LPDWORD lpNumberOfBytesRecvd,
LPDWORD lpFlags,
LPWSAOVERLAPPED lpOverlapped,
LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#line 3107 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3121 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSARecvDisconnect(
SOCKET s,
LPWSABUF lpInboundDisconnectData
);
#line 3131 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3140 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSARecvFrom(
SOCKET s,
LPWSABUF lpBuffers,
DWORD dwBufferCount,
LPDWORD lpNumberOfBytesRecvd,
LPDWORD lpFlags,
struct sockaddr  * lpFrom,
LPINT lpFromlen,
LPWSAOVERLAPPED lpOverlapped,
LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#line 3157 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3173 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
BOOL
__stdcall
WSAResetEvent(
HANDLE hEvent
);
#line 3182 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3190 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSASend(
SOCKET s,
LPWSABUF lpBuffers,
DWORD dwBufferCount,
LPDWORD lpNumberOfBytesSent,
DWORD dwFlags,
LPWSAOVERLAPPED lpOverlapped,
LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#line 3205 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3219 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3235 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSASendDisconnect(
SOCKET s,
LPWSABUF lpOutboundDisconnectData
);
#line 3245 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3254 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
int
__stdcall
WSASendTo(
SOCKET s,
LPWSABUF lpBuffers,
DWORD dwBufferCount,
LPDWORD lpNumberOfBytesSent,
DWORD dwFlags,
const struct sockaddr  * lpTo,
int iTolen,
LPWSAOVERLAPPED lpOverlapped,
LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#line 3271 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3287 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
BOOL
__stdcall
WSASetEvent(
HANDLE hEvent
);
#line 3296 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3304 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
SOCKET
__stdcall
WSASocketA(
int af,
int type,
int protocol,
LPWSAPROTOCOL_INFOA lpProtocolInfo,
GROUP g,
DWORD dwFlags
);
__declspec(dllimport)
SOCKET
__stdcall
WSASocketW(
int af,
int type,
int protocol,
LPWSAPROTOCOL_INFOW lpProtocolInfo,
GROUP g,
DWORD dwFlags
);
#line 3336 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3337 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3368 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
DWORD
__stdcall
WSAWaitForMultipleEvents(
DWORD cEvents,
const HANDLE  * lphEvents,
BOOL fWaitAll,
DWORD dwTimeout,
BOOL fAlertable
);
#line 3381 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3393 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSAAddressToStringA(
LPSOCKADDR lpsaAddress,
DWORD               dwAddressLength,
LPWSAPROTOCOL_INFOA lpProtocolInfo,
LPSTR lpszAddressString,
LPDWORD             lpdwAddressStringLength
);
__declspec(dllimport)
INT
__stdcall
WSAAddressToStringW(
LPSOCKADDR lpsaAddress,
DWORD               dwAddressLength,
LPWSAPROTOCOL_INFOW lpProtocolInfo,
LPWSTR lpszAddressString,
LPDWORD             lpdwAddressStringLength
);
#line 3420 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3421 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3447 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSAStringToAddressA(
LPSTR               AddressString,
INT                 AddressFamily,
LPWSAPROTOCOL_INFOA lpProtocolInfo,
LPSOCKADDR lpAddress,
LPINT               lpAddressLength
);
__declspec(dllimport)
INT
__stdcall
WSAStringToAddressW(
LPWSTR             AddressString,
INT                AddressFamily,
LPWSAPROTOCOL_INFOW lpProtocolInfo,
LPSOCKADDR lpAddress,
LPINT              lpAddressLength
);
#line 3474 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3475 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3501 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSALookupServiceBeginA(
LPWSAQUERYSETA lpqsRestrictions,
DWORD          dwControlFlags,
LPHANDLE       lphLookup
);
__declspec(dllimport)
INT
__stdcall
WSALookupServiceBeginW(
LPWSAQUERYSETW lpqsRestrictions,
DWORD          dwControlFlags,
LPHANDLE       lphLookup
);
#line 3527 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3528 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3550 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSALookupServiceNextA(
HANDLE           hLookup,
DWORD            dwControlFlags,
LPDWORD       lpdwBufferLength,
LPWSAQUERYSETA lpqsResults
);
__declspec(dllimport)
INT
__stdcall
WSALookupServiceNextW(
HANDLE           hLookup,
DWORD            dwControlFlags,
LPDWORD       lpdwBufferLength,
LPWSAQUERYSETW lpqsResults
);
#line 3575 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3576 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3600 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSANSPIoctl(
HANDLE           hLookup,
DWORD            dwControlCode,
LPVOID lpvInBuffer,
DWORD            cbInBuffer,
LPVOID lpvOutBuffer,
DWORD            cbOutBuffer,
LPDWORD        lpcbBytesReturned,
LPWSACOMPLETION lpCompletion
);
#line 3617 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3632 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3633 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSALookupServiceEnd(
HANDLE  hLookup
);
#line 3642 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3650 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSAInstallServiceClassA(
LPWSASERVICECLASSINFOA   lpServiceClassInfo
);
__declspec(dllimport)
INT
__stdcall
WSAInstallServiceClassW(
LPWSASERVICECLASSINFOW   lpServiceClassInfo
);
#line 3669 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3670 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3688 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSARemoveServiceClass(
LPGUID  lpServiceClassId
);
#line 3697 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3705 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSAGetServiceClassInfoA(
LPGUID  lpProviderId,
LPGUID  lpServiceClassId,
LPDWORD  lpdwBufSize,
LPWSASERVICECLASSINFOA lpServiceClassInfo
);
__declspec(dllimport)
INT
__stdcall
WSAGetServiceClassInfoW(
LPGUID  lpProviderId,
LPGUID  lpServiceClassId,
LPDWORD  lpdwBufSize,
LPWSASERVICECLASSINFOW lpServiceClassInfo
);
#line 3730 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3731 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3755 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSAEnumNameSpaceProvidersA(
LPDWORD             lpdwBufferLength,
LPWSANAMESPACE_INFOA lpnspBuffer
);
__declspec(dllimport)
INT
__stdcall
WSAEnumNameSpaceProvidersW(
LPDWORD             lpdwBufferLength,
LPWSANAMESPACE_INFOW lpnspBuffer
);
#line 3777 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3801 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3804 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3846 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSAGetServiceClassNameByClassIdA(
LPGUID  lpServiceClassId,
LPSTR lpszServiceClassName,
LPDWORD lpdwBufferLength
);
__declspec(dllimport)
INT
__stdcall
WSAGetServiceClassNameByClassIdW(
LPGUID  lpServiceClassId,
LPWSTR lpszServiceClassName,
LPDWORD lpdwBufferLength
);
#line 3869 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3870 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3892 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSASetServiceA(
LPWSAQUERYSETA lpqsRegInfo,
WSAESETSERVICEOP essoperation,
DWORD dwControlFlags
);
__declspec(dllimport)
INT
__stdcall
WSASetServiceW(
LPWSAQUERYSETW lpqsRegInfo,
WSAESETSERVICEOP essoperation,
DWORD dwControlFlags
);
#line 3915 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3916 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3938 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
__declspec(dllimport)
INT
__stdcall
WSAProviderConfigChange(
LPHANDLE lpNotificationHandle,
LPWSAOVERLAPPED lpOverlapped,
LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#line 3949 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3959 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 3972 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
typedef struct sockaddr_in  *LPSOCKADDR_IN;
typedef struct linger LINGER;
typedef struct linger *PLINGER;
typedef struct linger  *LPLINGER;
typedef struct fd_set FD_SET;
typedef struct fd_set *PFD_SET;
typedef struct fd_set  *LPFD_SET;
typedef struct hostent HOSTENT;
typedef struct hostent *PHOSTENT;
typedef struct hostent  *LPHOSTENT;
typedef struct servent SERVENT;
typedef struct servent *PSERVENT;
typedef struct servent  *LPSERVENT;
typedef struct protoent PROTOENT;
typedef struct protoent *PPROTOENT;
typedef struct protoent  *LPPROTOENT;
typedef struct timeval TIMEVAL;
typedef struct timeval *PTIMEVAL;
typedef struct timeval  *LPTIMEVAL;
#line 4053 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 4056 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#pragma endregion
#line 4059 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\winsock2.h"
#line 191 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#pragma once
#line 25 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#pragma region Desktop Family
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#pragma once
#line 37 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#pragma region Desktop Family
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4127) 
#line 59 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#line 65 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\in6addr.h"
#pragma once
#pragma region Desktop Family
typedef struct in6_addr {
union {
UCHAR       Byte[16];
USHORT      Word[8];
} u;
} IN6_ADDR, *PIN6_ADDR,  *LPIN6_ADDR;
#line 51 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\in6addr.h"
#pragma endregion
#line 54 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\in6addr.h"
#line 67 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
struct sockaddr_in6_old {
SHORT sin6_family;          
USHORT sin6_port;           
ULONG sin6_flowinfo;        
IN6_ADDR sin6_addr;         
};
typedef union sockaddr_gen {
struct sockaddr Address;
struct sockaddr_in AddressIn;
struct sockaddr_in6_old AddressIn6;
} sockaddr_gen;
typedef struct _INTERFACE_INFO {
ULONG iiFlags;              
sockaddr_gen iiAddress;     
sockaddr_gen iiBroadcastAddress; 
sockaddr_gen iiNetmask;     
} INTERFACE_INFO,  *LPINTERFACE_INFO;
typedef struct _INTERFACE_INFO_EX {
ULONG iiFlags;              
SOCKET_ADDRESS iiAddress;   
SOCKET_ADDRESS iiBroadcastAddress; 
SOCKET_ADDRESS iiNetmask;   
} INTERFACE_INFO_EX,  *LPINTERFACE_INFO_EX;
typedef struct sockaddr_in6 {
ADDRESS_FAMILY sin6_family; 
USHORT sin6_port;           
ULONG  sin6_flowinfo;       
IN6_ADDR sin6_addr;         
union {
ULONG sin6_scope_id;     
SCOPE_ID sin6_scope_struct; 
};
} SOCKADDR_IN6_LH, *PSOCKADDR_IN6_LH,  *LPSOCKADDR_IN6_LH;
typedef struct sockaddr_in6_w2ksp1 {
short   sin6_family;        
USHORT sin6_port;          
ULONG  sin6_flowinfo;      
struct in6_addr sin6_addr;  
ULONG sin6_scope_id;       
} SOCKADDR_IN6_W2KSP1, *PSOCKADDR_IN6_W2KSP1,  *LPSOCKADDR_IN6_W2KSP1;
#line 192 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
typedef SOCKADDR_IN6_W2KSP1 SOCKADDR_IN6;
typedef SOCKADDR_IN6_W2KSP1 *PSOCKADDR_IN6;
typedef SOCKADDR_IN6_W2KSP1  *LPSOCKADDR_IN6;
#line 200 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
typedef union _SOCKADDR_INET {
SOCKADDR_IN Ipv4;
SOCKADDR_IN6 Ipv6;
ADDRESS_FAMILY si_family;    
} SOCKADDR_INET, *PSOCKADDR_INET;
typedef struct _sockaddr_in6_pair
{
PSOCKADDR_IN6 SourceAddress;
PSOCKADDR_IN6 DestinationAddress;
} SOCKADDR_IN6_PAIR, *PSOCKADDR_IN6_PAIR;
extern const SCOPE_ID scopeid_unspecified;
extern const IN_ADDR in4addr_any;
extern const IN_ADDR in4addr_loopback;
extern const IN_ADDR in4addr_broadcast;
extern const IN_ADDR in4addr_allnodesonlink;
extern const IN_ADDR in4addr_allroutersonlink;
extern const IN_ADDR in4addr_alligmpv3routersonlink;
extern const IN_ADDR in4addr_allteredohostsonlink;
extern const IN_ADDR in4addr_linklocalprefix;
extern const IN_ADDR in4addr_multicastprefix;
extern const IN6_ADDR in6addr_any;
extern const IN6_ADDR in6addr_loopback;
extern const IN6_ADDR in6addr_allnodesonnode;
extern const IN6_ADDR in6addr_allnodesonlink;
extern const IN6_ADDR in6addr_allroutersonlink;
extern const IN6_ADDR in6addr_allmldv2routersonlink;
extern const IN6_ADDR in6addr_teredoinitiallinklocaladdress;
extern const IN6_ADDR in6addr_linklocalprefix;
extern const IN6_ADDR in6addr_multicastprefix;
extern const IN6_ADDR in6addr_solicitednodemulticastprefix;
extern const IN6_ADDR in6addr_v4mappedprefix;
extern const IN6_ADDR in6addr_6to4prefix;
extern const IN6_ADDR in6addr_teredoprefix;
extern const IN6_ADDR in6addr_teredoprefix_old;
__inline
BOOLEAN
IN6_ADDR_EQUAL(const IN6_ADDR *x, const IN6_ADDR *y)
{
__int64  *a;
__int64  *b;
a = (__int64  *)x;
b = (__int64  *)y;
return (BOOLEAN)((a[1] == b[1]) && (a[0] == b[0]));
}
__inline
BOOLEAN
IN6_IS_ADDR_UNSPECIFIED(const IN6_ADDR *a)
{
return (BOOLEAN)((a->u.Word[0] == 0) &&
(a->u.Word[1] == 0) &&
(a->u.Word[2] == 0) &&
(a->u.Word[3] == 0) &&
(a->u.Word[4] == 0) &&
(a->u.Word[5] == 0) &&
(a->u.Word[6] == 0) &&
(a->u.Word[7] == 0));
}
__inline
BOOLEAN
IN6_IS_ADDR_LOOPBACK(const IN6_ADDR *a)
{
return (BOOLEAN)((a->u.Word[0] == 0) &&
(a->u.Word[1] == 0) &&
(a->u.Word[2] == 0) &&
(a->u.Word[3] == 0) &&
(a->u.Word[4] == 0) &&
(a->u.Word[5] == 0) &&
(a->u.Word[6] == 0) &&
(a->u.Word[7] == 0x0100));
}
__inline
BOOLEAN
IN6_IS_ADDR_MULTICAST(const IN6_ADDR *a)
{
return (BOOLEAN)(a->u.Byte[0] == 0xff);
}
__inline
BOOLEAN
IN6_IS_ADDR_EUI64(const IN6_ADDR *a)
{
return (BOOLEAN)(((a->u.Byte[0] & 0xe0) != 0) &&
!IN6_IS_ADDR_MULTICAST(a));
}
__inline
BOOLEAN
IN6_IS_ADDR_SUBNET_ROUTER_ANYCAST(const IN6_ADDR *a)
{
return (BOOLEAN)(IN6_IS_ADDR_EUI64(a) &&
(a->u.Word[4] == 0) &&
(a->u.Word[5] == 0) &&
(a->u.Word[6] == 0) &&
(a->u.Word[7] == 0));
}
__inline
BOOLEAN
IN6_IS_ADDR_SUBNET_RESERVED_ANYCAST(const IN6_ADDR *a)
{
return (BOOLEAN)(IN6_IS_ADDR_EUI64(a) &&
(a->u.Word[4] == 0xfffd) &&
(a->u.Word[5] == 0xffff) &&
(a->u.Word[6] == 0xffff) &&
((a->u.Word[7] & 0x80ff) == 0x80ff));
}
__inline
BOOLEAN
IN6_IS_ADDR_ANYCAST(const IN6_ADDR *a)
{
return (IN6_IS_ADDR_SUBNET_RESERVED_ANYCAST(a) || 
IN6_IS_ADDR_SUBNET_ROUTER_ANYCAST(a));
}
__inline
BOOLEAN
IN6_IS_ADDR_LINKLOCAL(const IN6_ADDR *a)
{
return (BOOLEAN)((a->u.Byte[0] == 0xfe) && 
((a->u.Byte[1] & 0xc0) == 0x80));
}
__inline
BOOLEAN
IN6_IS_ADDR_SITELOCAL(const IN6_ADDR *a)
{
return (BOOLEAN)((a->u.Byte[0] == 0xfe) && 
((a->u.Byte[1] & 0xc0) == 0xc0));
}
__inline
BOOLEAN
IN6_IS_ADDR_GLOBAL(const IN6_ADDR *a)
{
ULONG High = (a->u.Byte[0] & 0xf0);
return (BOOLEAN)((High != 0) && (High != 0xf0));
}
__inline
BOOLEAN
IN6_IS_ADDR_V4MAPPED(const IN6_ADDR *a)
{
return (BOOLEAN)((a->u.Word[0] == 0) &&
(a->u.Word[1] == 0) &&
(a->u.Word[2] == 0) &&
(a->u.Word[3] == 0) &&
(a->u.Word[4] == 0) &&
(a->u.Word[5] == 0xffff));
}
__inline
BOOLEAN
IN6_IS_ADDR_V4COMPAT(const IN6_ADDR *a)
{
return (BOOLEAN)((a->u.Word[0] == 0) &&
(a->u.Word[1] == 0) &&
(a->u.Word[2] == 0) &&
(a->u.Word[3] == 0) &&
(a->u.Word[4] == 0) &&
(a->u.Word[5] == 0) &&
!((a->u.Word[6] == 0) &&
(a->u.Byte[14] == 0) &&
((a->u.Byte[15] == 0) || (a->u.Byte[15] == 1))));
}
__inline
BOOLEAN
IN6_IS_ADDR_V4TRANSLATED(const IN6_ADDR *a)
{
return (BOOLEAN)((a->u.Word[0] == 0) &&
(a->u.Word[1] == 0) &&
(a->u.Word[2] == 0) &&
(a->u.Word[3] == 0) &&
(a->u.Word[4] == 0xffff) &&
(a->u.Word[5] == 0));
}
__inline
BOOLEAN
IN6_IS_ADDR_MC_NODELOCAL(const IN6_ADDR *a)
{
return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
((a->u.Byte[1] & 0xf) == 1));
}
__inline
BOOLEAN
IN6_IS_ADDR_MC_LINKLOCAL(const IN6_ADDR *a)
{
return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
((a->u.Byte[1] & 0xf) == 2));
}
__inline
BOOLEAN
IN6_IS_ADDR_MC_SITELOCAL(const IN6_ADDR *a)
{
return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
((a->u.Byte[1] & 0xf) == 5));
}
__inline
BOOLEAN
IN6_IS_ADDR_MC_ORGLOCAL(const IN6_ADDR *a)
{
return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
((a->u.Byte[1] & 0xf) == 8));
}
__inline
BOOLEAN
IN6_IS_ADDR_MC_GLOBAL(const IN6_ADDR *a)
{
return (BOOLEAN)(IN6_IS_ADDR_MULTICAST(a) &&
((a->u.Byte[1] & 0xf) == 0xe));
}
__inline 
void
IN6_SET_ADDR_UNSPECIFIED(PIN6_ADDR a)
{
memset(a->u.Byte, 0, sizeof(IN6_ADDR));
}
__inline 
void
IN6_SET_ADDR_LOOPBACK(PIN6_ADDR a)
{
memset(a->u.Byte, 0, sizeof(IN6_ADDR));
a->u.Byte[15] = 1;
}
__inline
void
IN6ADDR_SETANY(PSOCKADDR_IN6 a)
{
a->sin6_family = 23;
a->sin6_port = 0;
a->sin6_flowinfo = 0;
IN6_SET_ADDR_UNSPECIFIED(&a->sin6_addr);
a->sin6_scope_id = 0;
}
__inline
void
IN6ADDR_SETLOOPBACK(PSOCKADDR_IN6 a)
{
a->sin6_family = 23;
a->sin6_port = 0;
a->sin6_flowinfo = 0;
IN6_SET_ADDR_LOOPBACK(&a->sin6_addr);
a->sin6_scope_id = 0;
}
__inline
BOOLEAN
IN6ADDR_ISANY(const SOCKADDR_IN6 *a)
{
((void) 0);
return IN6_IS_ADDR_UNSPECIFIED(&a->sin6_addr);
}
__inline
BOOLEAN
IN6ADDR_ISLOOPBACK(const SOCKADDR_IN6 *a)
{
((void) 0);
return IN6_IS_ADDR_LOOPBACK(&a->sin6_addr);
}
__inline
BOOLEAN
IN6ADDR_ISEQUAL(const SOCKADDR_IN6 *a, const SOCKADDR_IN6 *b)
{
((void) 0);
return (BOOLEAN)(a->sin6_scope_id == b->sin6_scope_id &&
IN6_ADDR_EQUAL(&a->sin6_addr, &b->sin6_addr));
}
__inline
BOOLEAN
IN6ADDR_ISUNSPECIFIED(const SOCKADDR_IN6 *a)
{
((void) 0);
return (BOOLEAN)(a->sin6_scope_id == 0 &&
IN6_IS_ADDR_UNSPECIFIED(&a->sin6_addr));
}
#line 660 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#line 662 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#line 693 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
typedef enum {
MCAST_INCLUDE = 0,
MCAST_EXCLUDE 
} MULTICAST_MODE_TYPE;
typedef struct ip_mreq {
IN_ADDR imr_multiaddr;  
IN_ADDR imr_interface;  
} IP_MREQ, *PIP_MREQ;
typedef struct ip_mreq_source {
IN_ADDR imr_multiaddr;  
IN_ADDR imr_sourceaddr; 
IN_ADDR imr_interface;  
} IP_MREQ_SOURCE, *PIP_MREQ_SOURCE;
typedef struct ip_msfilter {
IN_ADDR imsf_multiaddr;  
IN_ADDR imsf_interface;  
MULTICAST_MODE_TYPE imsf_fmode;        
ULONG imsf_numsrc;       
IN_ADDR imsf_slist[1];   
} IP_MSFILTER, *PIP_MSFILTER;
#line 796 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
typedef struct ipv6_mreq {
IN6_ADDR ipv6mr_multiaddr;  
ULONG ipv6mr_interface;     
} IPV6_MREQ, *PIPV6_MREQ;
typedef struct group_req {
ULONG gr_interface;         
SOCKADDR_STORAGE gr_group;  
} GROUP_REQ, *PGROUP_REQ;
typedef struct group_source_req {
ULONG gsr_interface;        
SOCKADDR_STORAGE gsr_group; 
SOCKADDR_STORAGE gsr_source; 
} GROUP_SOURCE_REQ, *PGROUP_SOURCE_REQ;
typedef struct group_filter {
ULONG gf_interface;         
SOCKADDR_STORAGE gf_group;  
MULTICAST_MODE_TYPE gf_fmode; 
ULONG gf_numsrc;            
SOCKADDR_STORAGE gf_slist[1]; 
} GROUP_FILTER, *PGROUP_FILTER;
#line 841 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
typedef struct in_pktinfo {
IN_ADDR ipi_addr;     
ULONG ipi_ifindex;    
} IN_PKTINFO, *PIN_PKTINFO;
typedef char __C_ASSERT__[(sizeof(IN_PKTINFO) == 8)?1:-1];
typedef struct in6_pktinfo {
IN6_ADDR ipi6_addr;    
ULONG ipi6_ifindex;    
} IN6_PKTINFO, *PIN6_PKTINFO;
typedef char __C_ASSERT__[(sizeof(IN6_PKTINFO) == 20)?1:-1];
typedef struct in_pktinfo_ex {
IN_PKTINFO pkt_info;
SCOPE_ID scope_id;
} IN_PKTINFO_EX, *PIN_PKTINFO_EX;
typedef char __C_ASSERT__[(sizeof(IN_PKTINFO_EX) == 12)?1:-1];
typedef struct in6_pktinfo_ex {
IN6_PKTINFO pkt_info;
SCOPE_ID scope_id;
} IN6_PKTINFO_EX, *PIN6_PKTINFO_EX;
typedef char __C_ASSERT__[(sizeof(IN6_PKTINFO_EX) == 24)?1:-1];
#pragma warning(pop)
#line 940 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#pragma endregion
#line 943 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\shared\\ws2ipdef.h"
#line 33 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 18 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 35 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 77 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 91 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\limits.h"
#line 34 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 45 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
typedef ADDRINFOW       ADDRINFOT, *PADDRINFOT;
#line 78 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
typedef ADDRINFOA       ADDRINFO,  * LPADDRINFO;
#line 92 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
__declspec(dllimport)
INT
__stdcall
getaddrinfo(
PCSTR               pNodeName,
PCSTR               pServiceName,
const ADDRINFOA *   pHints,
PADDRINFOA *        ppResult
);
#line 126 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 154 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 270 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 358 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
__declspec(dllimport)
void
__stdcall
freeaddrinfo(
PADDRINFOA      pAddrInfo
);
#line 382 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 404 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 449 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
typedef int socklen_t;
__declspec(dllimport)
INT
__stdcall
getnameinfo(
const SOCKADDR *    pSockaddr,
socklen_t           SockaddrLength,
PCHAR               pNodeBuffer,
DWORD               NodeBufferSize,
PCHAR               pServiceBuffer,
DWORD               ServiceBufferSize,
INT                 Flags
);
#line 487 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 521 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 615 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 624 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
__inline
char *
gai_strerrorA(
int ecode)
{
DWORD dwMsgLen;
static char buff[1024 + 1];
dwMsgLen = FormatMessageA(0x00001000
|0x00000200
|0x000000FF,
((void *)0),
ecode,
((((WORD )(0x01)) << 10) | (WORD )(0x00)),
(LPSTR)buff,
1024,
((void *)0));
return buff;
}
__inline
WCHAR *
gai_strerrorW(
int ecode
)
{
DWORD dwMsgLen;
static WCHAR buff[1024 + 1];
dwMsgLen = FormatMessageW(0x00001000
|0x00000200
|0x000000FF,
((void *)0),
ecode,
((((WORD )(0x01)) << 10) | (WORD )(0x00)),
(LPWSTR)buff,
1024,
((void *)0));
return buff;
}
#line 675 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
__inline
int
setipv4sourcefilter(
SOCKET Socket,
IN_ADDR Interface,
IN_ADDR Group,
MULTICAST_MODE_TYPE FilterMode,
ULONG SourceCount,
const IN_ADDR *SourceList
)
{
int Error;
DWORD Size, Returned;
PIP_MSFILTER Filter;
if (SourceCount >
(((ULONG) (0xffffffffUL - sizeof(*Filter))) / sizeof(*SourceList))) {
WSASetLastError(10055L);
return (-1);
}
Size = (sizeof(IP_MSFILTER) - sizeof(IN_ADDR) + (SourceCount) * sizeof(IN_ADDR));
Filter = (PIP_MSFILTER) HeapAlloc(GetProcessHeap(), 0, Size);
if (Filter == ((void *)0)) {
WSASetLastError(10055L);
return (-1);
}
Filter->imsf_multiaddr = Group;
Filter->imsf_interface = Interface;
Filter->imsf_fmode = FilterMode;
Filter->imsf_numsrc = SourceCount;
if (SourceCount > 0) {
memcpy((Filter->imsf_slist),(SourceList),(SourceCount * sizeof(*SourceList)));
#line 714 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
}
Error = WSAIoctl(Socket, (0x80000000|(((long)sizeof(ULONG)&0x7f)<<16)|(('t')<<8)|(125)), Filter, Size, ((void *)0), 0,
&Returned, ((void *)0), ((void *)0));
HeapFree(GetProcessHeap(), 0, Filter);
return Error;
}
__inline
int
getipv4sourcefilter(
SOCKET Socket,
IN_ADDR Interface,
IN_ADDR Group,
MULTICAST_MODE_TYPE *FilterMode,
ULONG *SourceCount,
IN_ADDR *SourceList
)
{
int Error;
DWORD Size, Returned;
PIP_MSFILTER Filter;
if (*SourceCount >
(((ULONG) (0xffffffffUL - sizeof(*Filter))) / sizeof(*SourceList))) {
WSASetLastError(10055L);
return (-1);
}
Size = (sizeof(IP_MSFILTER) - sizeof(IN_ADDR) + (*SourceCount) * sizeof(IN_ADDR));
Filter = (PIP_MSFILTER) HeapAlloc(GetProcessHeap(), 0, Size);
if (Filter == ((void *)0)) {
WSASetLastError(10055L);
return (-1);
}
Filter->imsf_multiaddr = Group;
Filter->imsf_interface = Interface;
Filter->imsf_numsrc = *SourceCount;
Error = WSAIoctl(Socket, (0x80000000|(((long)sizeof(ULONG)&0x7f)<<16)|(('t')<<8)|(124 | 0x80000000)), Filter, Size, Filter, Size,
&Returned, ((void *)0), ((void *)0));
if (Error == 0) {
if (*SourceCount > 0) {
memcpy((SourceList),(Filter->imsf_slist),(*SourceCount * sizeof(*SourceList)));
#line 764 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
*SourceCount = Filter->imsf_numsrc;
}
*FilterMode = Filter->imsf_fmode;
}
HeapFree(GetProcessHeap(), 0, Filter);
return Error;
}
__inline
int
setsourcefilter(
SOCKET Socket,
ULONG Interface,
const SOCKADDR *Group,
int GroupLength,
MULTICAST_MODE_TYPE FilterMode,
ULONG SourceCount,
const SOCKADDR_STORAGE *SourceList
)
{
int Error;
DWORD Size, Returned;
PGROUP_FILTER Filter;
if (SourceCount >=
(((ULONG) (0xffffffffUL - sizeof(*Filter))) / sizeof(*SourceList))) {
WSASetLastError(10055L);
return (-1);
}
Size = (sizeof(GROUP_FILTER) - sizeof(SOCKADDR_STORAGE) + (SourceCount) * sizeof(SOCKADDR_STORAGE));
Filter = (PGROUP_FILTER) HeapAlloc(GetProcessHeap(), 0, Size);
if (Filter == ((void *)0)) {
WSASetLastError(10055L);
return (-1);
}
Filter->gf_interface = Interface;
memset((&Filter->gf_group),0,(sizeof(Filter->gf_group)));
memcpy((&Filter->gf_group),(Group),(GroupLength));
Filter->gf_fmode = FilterMode;
Filter->gf_numsrc = SourceCount;
if (SourceCount > 0) {
memcpy((Filter->gf_slist),(SourceList),(SourceCount * sizeof(*SourceList)));
#line 812 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
}
Error = WSAIoctl(Socket, (0x80000000|(((long)sizeof(ULONG)&0x7f)<<16)|(('t')<<8)|(126)), Filter, Size, ((void *)0), 0,
&Returned, ((void *)0), ((void *)0));
HeapFree(GetProcessHeap(), 0, Filter);
return Error;
}
__inline
int
getsourcefilter(
SOCKET Socket,
ULONG Interface,
const SOCKADDR *Group,
int GroupLength,
MULTICAST_MODE_TYPE *FilterMode,
ULONG *SourceCount,
SOCKADDR_STORAGE *SourceList
)
{
int Error;
DWORD Size, Returned;
PGROUP_FILTER Filter;
if (*SourceCount >
(((ULONG) (0xffffffffUL - sizeof(*Filter))) / sizeof(*SourceList))) {
WSASetLastError(10055L);
return (-1);
}
Size = (sizeof(GROUP_FILTER) - sizeof(SOCKADDR_STORAGE) + (*SourceCount) * sizeof(SOCKADDR_STORAGE));
Filter = (PGROUP_FILTER) HeapAlloc(GetProcessHeap(), 0, Size);
if (Filter == ((void *)0)) {
WSASetLastError(10055L);
return (-1);
}
Filter->gf_interface = Interface;
memset((&Filter->gf_group),0,(sizeof(Filter->gf_group)));
memcpy((&Filter->gf_group),(Group),(GroupLength));
Filter->gf_numsrc = *SourceCount;
Error = WSAIoctl(Socket, (0x80000000|(((long)sizeof(ULONG)&0x7f)<<16)|(('t')<<8)|(127 | 0x80000000)), Filter, Size, Filter, Size,
&Returned, ((void *)0), ((void *)0));
if (Error == 0) {
if (*SourceCount > 0) {
memcpy((SourceList),(Filter->gf_slist),(*SourceCount * sizeof(*SourceList)));
#line 864 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
*SourceCount = Filter->gf_numsrc;
}
*FilterMode = Filter->gf_fmode;
}
HeapFree(GetProcessHeap(), 0, Filter);
return Error;
}
#line 874 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 982 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 995 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 998 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#pragma endregion
#line 1001 "C:\\Program Files (x86)\\Windows Kits\\8.0\\include\\um\\ws2tcpip.h"
#line 192 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 194 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma pack(push,8)
struct _iobuf {
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
int __cdecl fgetpos(  FILE * _File ,   fpos_t * _Pos);
char * __cdecl fgets(  char * _Buf,   int _MaxCount,   FILE * _File);
int __cdecl _fileno(  FILE * _File);
#line 205 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#line 210 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
char * __cdecl _tempnam(  const char * _DirName,   const char * _FilePrefix);
#line 216 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
int __cdecl _flushall(void);
FILE * __cdecl fopen(  const char * _Filename,   const char * _Mode);
errno_t __cdecl fopen_s( FILE ** _File,   const char * _Filename,   const char * _Mode);
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
errno_t __cdecl freopen_s( FILE ** _File,   const char * _Filename,   const char * _Mode,   FILE * _OldFile);
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
int __cdecl _snprintf(    char *_Dest,   size_t _Count,     const char * _Format, ...);   int __cdecl _vsnprintf(    char *_Dest,   size_t _Count,     const char * _Format, va_list _Args);
#pragma warning(pop)
int __cdecl vsprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, va_list _ArgList);
#line 355 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdio.h"
#pragma warning(push)
#pragma warning(disable:4793)
int __cdecl sprintf(  char *_Dest,  const char * _Format, ...);   int __cdecl vsprintf(  char *_Dest,  const char * _Format, va_list _Args);
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
int __cdecl _snwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, ...);   int __cdecl _vsnwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, va_list _Args);
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
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _swprintf(    wchar_t *_Dest,     const wchar_t * _Format, ...);  __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _vswprintf(    wchar_t *_Dest,     const wchar_t * _Format, va_list _Args);
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __swprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, ...);  __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __vswprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Args);
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
FILE * __cdecl _wfdopen(  int _FileHandle ,   const wchar_t * _Mode);
FILE * __cdecl _wfopen(  const wchar_t * _Filename,   const wchar_t * _Mode);
errno_t __cdecl _wfopen_s( FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode);
FILE * __cdecl _wfreopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
errno_t __cdecl _wfreopen_s( FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
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
#line 196 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
extern int * __cdecl _errno(void);
errno_t __cdecl _set_errno(  int _Value);
errno_t __cdecl _get_errno(  int * _Value);
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 66 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
extern unsigned long  __cdecl __threadid(void);
extern uintptr_t __cdecl __threadhandle(void);
#line 78 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stddef.h"
#line 197 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\errno.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\errno.h"
#line 86 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\errno.h"
#line 87 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\errno.h"
#line 139 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\errno.h"
#line 198 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 201 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#pragma pack(push,8)
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 45 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
typedef struct _heapinfo {
int * _pentry;
size_t _size;
int _useflag;
} _HEAPINFO;
#line 65 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 101 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
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
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 141 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
int     __cdecl _resetstkoflw (void);
#line 145 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
unsigned long __cdecl _set_malloc_crt_max_wait(  unsigned long _NewValue);
#line 158 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
void *  __cdecl _expand(  void * _Memory,   size_t _NewSize);
size_t  __cdecl _msize(  void * _Memory);
#line 166 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
void *          __cdecl _alloca(  size_t _Size);
int     __cdecl _heapwalk(  _HEAPINFO * _EntryInfo);
intptr_t __cdecl _get_heap_handle(void);
#line 173 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
int     __cdecl _heapadd(  void * _Memory,   size_t _Size);
int     __cdecl _heapchk(void);
int     __cdecl _heapmin(void);
int     __cdecl _heapset(  unsigned int _Fill);
size_t  __cdecl _heapused(size_t * _Used, size_t * _Commit);
#line 181 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 195 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
typedef char __static_assert_t[ (sizeof(unsigned int) <= 8) ];
#pragma warning(push)
#pragma warning(disable:6540)
__inline void *_MarkAllocaS(   void *_Ptr, unsigned int _Marker)
{
if (_Ptr)
{
*((unsigned int*)_Ptr) = _Marker;
_Ptr = (char*)_Ptr + 8;
}
return _Ptr;
}
#pragma warning(pop)
#line 212 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 221 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 228 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
__pragma(warning(push))
__pragma(warning(disable: 6014))
__declspec(noalias) __inline void __cdecl _freea(    void * _Memory)
{
unsigned int _Marker;
if (_Memory)
{
_Memory = (char*)_Memory - 8;
_Marker = *(unsigned int *)_Memory;
if (_Marker == 0xDDDD)
{
free(_Memory);
}
#line 256 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
}
}
__pragma(warning(pop))
#line 260 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 261 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 262 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 267 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 269 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#pragma pack(pop)
#line 297 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\malloc.h"
#line 214 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 222 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 232 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 247 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 248 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 249 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 20 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#pragma pack(push,8)
typedef unsigned long _fsize_t; 
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
struct _finddata32_t {
unsigned    attrib;
__time32_t  time_create;    
__time32_t  time_access;    
__time32_t  time_write;
_fsize_t    size;
char        name[260];
};
struct _finddata32i64_t {
unsigned    attrib;
__time32_t  time_create;    
__time32_t  time_access;    
__time32_t  time_write;
__int64     size;
char        name[260];
};
struct _finddata64i32_t {
unsigned    attrib;
__time64_t  time_create;    
__time64_t  time_access;    
__time64_t  time_write;
_fsize_t    size;
char        name[260];
};
struct __finddata64_t {
unsigned    attrib;
__time64_t  time_create;    
__time64_t  time_access;    
__time64_t  time_write;
__int64     size;
char        name[260];
};
#line 95 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#line 99 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
struct _wfinddata32_t {
unsigned    attrib;
__time32_t  time_create;    
__time32_t  time_access;    
__time32_t  time_write;
_fsize_t    size;
wchar_t     name[260];
};
struct _wfinddata32i64_t {
unsigned    attrib;
__time32_t  time_create;    
__time32_t  time_access;    
__time32_t  time_write;
__int64     size;
wchar_t     name[260];
};
struct _wfinddata64i32_t {
unsigned    attrib;
__time64_t  time_create;    
__time64_t  time_access;    
__time64_t  time_write;
_fsize_t    size;
wchar_t     name[260];
};
struct _wfinddata64_t {
unsigned    attrib;
__time64_t  time_create;    
__time64_t  time_access;    
__time64_t  time_write;
__int64     size;
wchar_t     name[260];
};
#line 157 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#line 160 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
int __cdecl _access(  const char * _Filename,   int _AccessMode);
errno_t __cdecl _access_s(  const char * _Filename,   int _AccessMode);
int __cdecl _chmod(  const char * _Filename,   int _Mode);
int __cdecl _chsize(  int _FileHandle,   long _Size);
errno_t __cdecl _chsize_s(  int _FileHandle,  __int64 _Size);
int __cdecl _close(  int _FileHandle);
int __cdecl _commit(  int _FileHandle);
int __cdecl _creat(  const char * _Filename,   int _PermissionMode);
int __cdecl _dup(  int _FileHandle);
int __cdecl _dup2(  int _FileHandleSrc,   int _FileHandleDst);
int __cdecl _eof(  int _FileHandle);
long __cdecl _filelength(  int _FileHandle);
intptr_t __cdecl _findfirst32(  const char * _Filename,   struct _finddata32_t * _FindData);
int __cdecl _findnext32(  intptr_t _FindHandle,   struct _finddata32_t * _FindData);
int __cdecl _findclose(  intptr_t _FindHandle);
int __cdecl _isatty(  int _FileHandle);
int __cdecl _locking(  int _FileHandle,   int _LockMode,   long _NumOfBytes);
long __cdecl _lseek(  int _FileHandle,   long _Offset,   int _Origin);
errno_t __cdecl _mktemp_s(  char * _TemplateName,   size_t _Size);
char * __cdecl _mktemp( char *_TemplateName);
int __cdecl _pipe(  int * _PtHandles,   unsigned int _PipeSize,   int _TextMode);
#line 206 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
int __cdecl _read(  int _FileHandle,   void * _DstBuf,   unsigned int _MaxCharCount);
int __cdecl _setmode(  int _FileHandle,   int _Mode);
long __cdecl _tell(  int _FileHandle);
int __cdecl _umask(  int _Mode);
errno_t __cdecl _umask_s(  int _NewMode,   int * _OldMode);
int __cdecl _write(  int _FileHandle,   const void * _Buf,   unsigned int _MaxCharCount);
__int64 __cdecl _filelengthi64(  int _FileHandle);
intptr_t __cdecl _findfirst32i64(  const char * _Filename,   struct _finddata32i64_t * _FindData);
intptr_t __cdecl _findfirst64i32(  const char * _Filename,   struct _finddata64i32_t * _FindData);
intptr_t __cdecl _findfirst64(  const char * _Filename,   struct __finddata64_t * _FindData);
int __cdecl _findnext32i64(  intptr_t _FindHandle,   struct _finddata32i64_t * _FindData);
int __cdecl _findnext64i32(  intptr_t _FindHandle,   struct _finddata64i32_t * _FindData);
int __cdecl _findnext64(  intptr_t _FindHandle,   struct __finddata64_t * _FindData);
__int64 __cdecl _lseeki64(  int _FileHandle,   __int64 _Offset,   int _Origin);
__int64 __cdecl _telli64(  int _FileHandle);
errno_t __cdecl _sopen_s(  int * _FileHandle,   const char * _Filename,  int _OpenFlag,   int _ShareFlag,   int _PermissionMode);
errno_t __cdecl _sopen_s_nolock(  int * _FileHandle,   const char * _Filename,  int _OpenFlag,   int _ShareFlag,   int _PermissionMode);
int __cdecl _open(  const char * _Filename,   int _OpenFlag, ...);
int __cdecl _sopen(  const char * _Filename,   int _OpenFlag, int _ShareFlag, ...);
#line 247 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
int __cdecl _waccess(  const wchar_t * _Filename,   int _AccessMode);
errno_t __cdecl _waccess_s(  const wchar_t * _Filename,   int _AccessMode);
int __cdecl _wchmod(  const wchar_t * _Filename,   int _Mode);
int __cdecl _wcreat(  const wchar_t * _Filename,   int _PermissionMode);
intptr_t __cdecl _wfindfirst32(  const wchar_t * _Filename,   struct _wfinddata32_t * _FindData);
int __cdecl _wfindnext32(  intptr_t _FindHandle,   struct _wfinddata32_t * _FindData);
int __cdecl _wunlink(  const wchar_t * _Filename);
int __cdecl _wrename(  const wchar_t * _OldFilename,   const wchar_t * _NewFilename);
errno_t __cdecl _wmktemp_s(  wchar_t * _TemplateName,   size_t _SizeInWords);
wchar_t * __cdecl _wmktemp( wchar_t *_TemplateName);
intptr_t __cdecl _wfindfirst32i64(  const wchar_t * _Filename,   struct _wfinddata32i64_t * _FindData);
intptr_t __cdecl _wfindfirst64i32(  const wchar_t * _Filename,   struct _wfinddata64i32_t * _FindData);
intptr_t __cdecl _wfindfirst64(  const wchar_t * _Filename,   struct _wfinddata64_t * _FindData);
int __cdecl _wfindnext32i64(  intptr_t _FindHandle,   struct _wfinddata32i64_t * _FindData);
int __cdecl _wfindnext64i32(  intptr_t _FindHandle,   struct _wfinddata64i32_t * _FindData);
int __cdecl _wfindnext64(  intptr_t _FindHandle,   struct _wfinddata64_t * _FindData);
errno_t __cdecl _wsopen_s(  int * _FileHandle,   const wchar_t * _Filename,   int _OpenFlag,   int _ShareFlag,   int _PermissionFlag);
int __cdecl _wopen(  const wchar_t * _Filename,   int _OpenFlag, ...);
int __cdecl _wsopen(  const wchar_t * _Filename,   int _OpenFlag, int _ShareFlag, ...);
#line 285 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#line 288 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
int  __cdecl __lock_fhandle(  int _Filehandle);
void __cdecl _unlock_fhandle(  int _Filehandle);
intptr_t __cdecl _get_osfhandle(  int _FileHandle);
int __cdecl _open_osfhandle(  intptr_t _OSFileHandle,   int _Flags);
#pragma warning(push)
#pragma warning(disable: 4141)  
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_access" ". See online help for details."))  int __cdecl access(  const char * _Filename,   int _AccessMode);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_chmod" ". See online help for details."))  int __cdecl chmod(  const char * _Filename, int _AccessMode);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_chsize" ". See online help for details."))  int __cdecl chsize(  int _FileHandle,   long _Size);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_close" ". See online help for details."))  int __cdecl close(  int _FileHandle);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_creat" ". See online help for details."))   int __cdecl creat(  const char * _Filename,   int _PermissionMode);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_dup" ". See online help for details."))  int __cdecl dup(  int _FileHandle);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_dup2" ". See online help for details."))  int __cdecl dup2(  int _FileHandleSrc,   int _FileHandleDst);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_eof" ". See online help for details."))  int __cdecl eof(  int _FileHandle);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_filelength" ". See online help for details."))  long __cdecl filelength(  int _FileHandle);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_isatty" ". See online help for details."))  int __cdecl isatty(  int _FileHandle);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_locking" ". See online help for details."))  int __cdecl locking(  int _FileHandle,   int _LockMode,   long _NumOfBytes);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_lseek" ". See online help for details."))  long __cdecl lseek(  int _FileHandle,   long _Offset,   int _Origin);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_mktemp" ". See online help for details."))   char * __cdecl mktemp(  char * _TemplateName);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_open" ". See online help for details."))   int __cdecl open(  const char * _Filename,   int _OpenFlag, ...);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_read" ". See online help for details."))  int __cdecl read(int _FileHandle,   void * _DstBuf,   unsigned int _MaxCharCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_setmode" ". See online help for details."))  int __cdecl setmode(  int _FileHandle,   int _Mode);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_sopen" ". See online help for details."))   int __cdecl sopen(const char * _Filename,   int _OpenFlag,   int _ShareFlag, ...);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_tell" ". See online help for details."))  long __cdecl tell(  int _FileHandle);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_umask" ". See online help for details."))   int __cdecl umask(  int _Mode);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_write" ". See online help for details."))  int __cdecl write(  int _Filehandle,   const void * _Buf,   unsigned int _MaxCharCount);
#pragma warning(pop)
#line 325 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#line 331 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#pragma pack(pop)
#line 335 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\io.h"
#line 250 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\fcntl.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 18 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\fcntl.h"
#line 84 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\fcntl.h"
#line 86 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\fcntl.h"
#line 251 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 261 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 264 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 267 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 272 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 278 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 281 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 350 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 465 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 467 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 468 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 481 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 483 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 486 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 512 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 521 "D:\\07.OpenSrc\\GmSSL\\e_os.h"
#line 11 "crypto\\des\\cfb_enc.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/e_os2.h"
#line 14 "d:\\07.opensrc\\gmssl\\crypto\\des\\des_locl.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma once
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma pack(push,8)
typedef int (__cdecl * _onexit_t)(void);
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 66 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 69 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef struct _div_t {
int quot;
int rem;
} div_t;
typedef struct _ldiv_t {
long quot;
long rem;
} ldiv_t;
typedef struct _lldiv_t {
long long quot;
long long rem;
} lldiv_t;
#line 92 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#pragma pack(4)
typedef struct {
unsigned char ld[10];
} _LDOUBLE;
#pragma pack()
#line 121 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef struct {
double x;
} _CRT_DOUBLE;
typedef struct {
float f;
} _CRT_FLOAT;
typedef struct {
long double x;
} _LONGDOUBLE;
#pragma pack(4)
typedef struct {
unsigned char ld12[12];
} _LDBL12;
#pragma pack()
#line 151 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef void (__cdecl *_purecall_handler)(void); 
_purecall_handler __cdecl _set_purecall_handler(  _purecall_handler _Handler);
_purecall_handler __cdecl _get_purecall_handler(void);
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
#line 225 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t); 
_invalid_parameter_handler __cdecl _set_invalid_parameter_handler(  _invalid_parameter_handler _Handler);
_invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);
#line 234 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\stdlib.h"
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
errno_t __cdecl _get_pgmptr( char ** _Value);
errno_t __cdecl _get_wpgmptr( wchar_t ** _Value);
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
errno_t __cdecl _dupenv_s(  char **_PBuffer,   size_t * _PBufferSizeInBytes,   const char * _VarName);
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
errno_t __cdecl _wdupenv_s(  wchar_t **_Buffer,   size_t *_BufferSizeInWords,   const wchar_t *_VarName);
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
unsigned __int64  __cdecl _wcstoui64_l(  const wchar_t *_Str ,     wchar_t ** _EndPtr,   int _Radix,   _locale_t _Locale);
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
typedef struct DES_ks {
union {
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
#line 12 "crypto\\des\\cfb_enc.c"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\assert.h"
#line 1 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\crtdefs.h"
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\assert.h"
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio 11.0\\VC\\INCLUDE\\assert.h"
#line 13 "crypto\\des\\cfb_enc.c"
void DES_cfb_encrypt(const unsigned char *in, unsigned char *out, int numbits,
long length, DES_key_schedule *schedule,
DES_cblock *ivec, int enc)
{
register DES_LONG d0, d1, v0, v1;
register unsigned long l = length;
register int num = numbits / 8, n = (numbits + 7) / 8, i, rem =
numbits % 8;
DES_LONG ti[2];
unsigned char *iv;
unsigned int sh[4];
unsigned char *ovec = (unsigned char *)sh;
((void)0); 
#line 45 "crypto\\des\\cfb_enc.c"
if (numbits <= 0 || numbits > 64)
return;
iv = &(*ivec)[0];
(v0 =((DES_LONG)(*((iv)++))) , v0|=((DES_LONG)(*((iv)++)))<< 8L, v0|=((DES_LONG)(*((iv)++)))<<16L, v0|=((DES_LONG)(*((iv)++)))<<24L);
(v1 =((DES_LONG)(*((iv)++))) , v1|=((DES_LONG)(*((iv)++)))<< 8L, v1|=((DES_LONG)(*((iv)++)))<<16L, v1|=((DES_LONG)(*((iv)++)))<<24L);
if (enc) {
while (l >= (unsigned long)n) {
l -= n;
ti[0] = v0;
ti[1] = v1;
DES_encrypt1((DES_LONG *)ti, schedule, 1);
{ in+=n; d0=d1=0; switch (n) { case 8: d1 =((DES_LONG)(*(--(in))))<<24L; case 7: d1|=((DES_LONG)(*(--(in))))<<16L; case 6: d1|=((DES_LONG)(*(--(in))))<< 8L; case 5: d1|=((DES_LONG)(*(--(in)))); case 4: d0 =((DES_LONG)(*(--(in))))<<24L; case 3: d0|=((DES_LONG)(*(--(in))))<<16L; case 2: d0|=((DES_LONG)(*(--(in))))<< 8L; case 1: d0|=((DES_LONG)(*(--(in)))); } };
in += n;
d0 ^= ti[0];
d1 ^= ti[1];
{ out+=n; switch (n) { case 8: *(--(out))=(unsigned char)(((d1)>>24L)&0xff); case 7: *(--(out))=(unsigned char)(((d1)>>16L)&0xff); case 6: *(--(out))=(unsigned char)(((d1)>> 8L)&0xff); case 5: *(--(out))=(unsigned char)(((d1) )&0xff); case 4: *(--(out))=(unsigned char)(((d0)>>24L)&0xff); case 3: *(--(out))=(unsigned char)(((d0)>>16L)&0xff); case 2: *(--(out))=(unsigned char)(((d0)>> 8L)&0xff); case 1: *(--(out))=(unsigned char)(((d0) )&0xff); } };
out += n;
if (numbits == 32) {
v0 = v1;
v1 = d0;
} else if (numbits == 64) {
v0 = d0;
v1 = d1;
} else {
sh[0] = v0, sh[1] = v1, sh[2] = d0, sh[3] = d1;
#line 83 "crypto\\des\\cfb_enc.c"
if (rem == 0)
memmove(ovec, ovec + num, 8);
else
for (i = 0; i < 8; ++i)
ovec[i] = ovec[i + num] << rem |
ovec[i + num + 1] >> (8 - rem);
v0 = sh[0], v1 = sh[1];
#line 96 "crypto\\des\\cfb_enc.c"
}
}
} else {
while (l >= (unsigned long)n) {
l -= n;
ti[0] = v0;
ti[1] = v1;
DES_encrypt1((DES_LONG *)ti, schedule, 1);
{ in+=n; d0=d1=0; switch (n) { case 8: d1 =((DES_LONG)(*(--(in))))<<24L; case 7: d1|=((DES_LONG)(*(--(in))))<<16L; case 6: d1|=((DES_LONG)(*(--(in))))<< 8L; case 5: d1|=((DES_LONG)(*(--(in)))); case 4: d0 =((DES_LONG)(*(--(in))))<<24L; case 3: d0|=((DES_LONG)(*(--(in))))<<16L; case 2: d0|=((DES_LONG)(*(--(in))))<< 8L; case 1: d0|=((DES_LONG)(*(--(in)))); } };
in += n;
if (numbits == 32) {
v0 = v1;
v1 = d0;
} else if (numbits == 64) {
v0 = d0;
v1 = d1;
} else {
sh[0] = v0, sh[1] = v1, sh[2] = d0, sh[3] = d1;
#line 126 "crypto\\des\\cfb_enc.c"
if (rem == 0)
memmove(ovec, ovec + num, 8);
else
for (i = 0; i < 8; ++i)
ovec[i] = ovec[i + num] << rem |
ovec[i + num + 1] >> (8 - rem);
v0 = sh[0], v1 = sh[1];
#line 139 "crypto\\des\\cfb_enc.c"
}
d0 ^= ti[0];
d1 ^= ti[1];
{ out+=n; switch (n) { case 8: *(--(out))=(unsigned char)(((d1)>>24L)&0xff); case 7: *(--(out))=(unsigned char)(((d1)>>16L)&0xff); case 6: *(--(out))=(unsigned char)(((d1)>> 8L)&0xff); case 5: *(--(out))=(unsigned char)(((d1) )&0xff); case 4: *(--(out))=(unsigned char)(((d0)>>24L)&0xff); case 3: *(--(out))=(unsigned char)(((d0)>>16L)&0xff); case 2: *(--(out))=(unsigned char)(((d0)>> 8L)&0xff); case 1: *(--(out))=(unsigned char)(((d0) )&0xff); } };
out += n;
}
}
iv = &(*ivec)[0];
(*((iv)++)=(unsigned char)(((v0) )&0xff), *((iv)++)=(unsigned char)(((v0)>> 8L)&0xff), *((iv)++)=(unsigned char)(((v0)>>16L)&0xff), *((iv)++)=(unsigned char)(((v0)>>24L)&0xff));
(*((iv)++)=(unsigned char)(((v1) )&0xff), *((iv)++)=(unsigned char)(((v1)>> 8L)&0xff), *((iv)++)=(unsigned char)(((v1)>>16L)&0xff), *((iv)++)=(unsigned char)(((v1)>>24L)&0xff));
v0 = v1 = d0 = d1 = ti[0] = ti[1] = 0;
}
