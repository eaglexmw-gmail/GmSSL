#line 1 "crypto\\idea\\i_cbc.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/idea.h"
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
#line 14 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/idea.h"
typedef unsigned int IDEA_INT;
typedef struct idea_key_st {
IDEA_INT data[9][6];
} IDEA_KEY_SCHEDULE;
const char *IDEA_options(void);
void IDEA_ecb_encrypt(const unsigned char *in, unsigned char *out,
IDEA_KEY_SCHEDULE *ks);
void IDEA_set_encrypt_key(const unsigned char *key, IDEA_KEY_SCHEDULE *ks);
void IDEA_set_decrypt_key(IDEA_KEY_SCHEDULE *ek, IDEA_KEY_SCHEDULE *dk);
void IDEA_cbc_encrypt(const unsigned char *in, unsigned char *out,
long length, IDEA_KEY_SCHEDULE *ks, unsigned char *iv,
int enc);
void IDEA_cfb64_encrypt(const unsigned char *in, unsigned char *out,
long length, IDEA_KEY_SCHEDULE *ks, unsigned char *iv,
int *num, int enc);
void IDEA_ofb64_encrypt(const unsigned char *in, unsigned char *out,
long length, IDEA_KEY_SCHEDULE *ks, unsigned char *iv,
int *num);
void IDEA_encrypt(unsigned long *in, IDEA_KEY_SCHEDULE *ks);
#line 58 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/idea.h"
#line 63 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/idea.h"
#line 65 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/idea.h"
#line 11 "crypto\\idea\\i_cbc.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\idea\\idea_lcl.h"
#line 12 "crypto\\idea\\i_cbc.c"
void IDEA_cbc_encrypt(const unsigned char *in, unsigned char *out,
long length, IDEA_KEY_SCHEDULE *ks, unsigned char *iv,
int encrypt)
{
register unsigned long tin0, tin1;
register unsigned long tout0, tout1, xor0, xor1;
register long l = length;
unsigned long tin[2];
if (encrypt) {
(tout0 =((unsigned long)(*((iv)++)))<<24L, tout0|=((unsigned long)(*((iv)++)))<<16L, tout0|=((unsigned long)(*((iv)++)))<< 8L, tout0|=((unsigned long)(*((iv)++))));
(tout1 =((unsigned long)(*((iv)++)))<<24L, tout1|=((unsigned long)(*((iv)++)))<<16L, tout1|=((unsigned long)(*((iv)++)))<< 8L, tout1|=((unsigned long)(*((iv)++))));
iv -= 8;
for (l -= 8; l >= 0; l -= 8) {
(tin0 =((unsigned long)(*((in)++)))<<24L, tin0|=((unsigned long)(*((in)++)))<<16L, tin0|=((unsigned long)(*((in)++)))<< 8L, tin0|=((unsigned long)(*((in)++))));
(tin1 =((unsigned long)(*((in)++)))<<24L, tin1|=((unsigned long)(*((in)++)))<<16L, tin1|=((unsigned long)(*((in)++)))<< 8L, tin1|=((unsigned long)(*((in)++))));
tin0 ^= tout0;
tin1 ^= tout1;
tin[0] = tin0;
tin[1] = tin1;
IDEA_encrypt(tin, ks);
tout0 = tin[0];
(*((out)++)=(unsigned char)(((tout0)>>24L)&0xff), *((out)++)=(unsigned char)(((tout0)>>16L)&0xff), *((out)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout0) )&0xff));
tout1 = tin[1];
(*((out)++)=(unsigned char)(((tout1)>>24L)&0xff), *((out)++)=(unsigned char)(((tout1)>>16L)&0xff), *((out)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout1) )&0xff));
}
if (l != -8) {
{ in+=l + 8; tin0=tin1=0; switch (l + 8) { case 8: tin1 =((unsigned long)(*(--(in)))) ; case 7: tin1|=((unsigned long)(*(--(in))))<< 8; case 6: tin1|=((unsigned long)(*(--(in))))<<16; case 5: tin1|=((unsigned long)(*(--(in))))<<24; case 4: tin0 =((unsigned long)(*(--(in)))) ; case 3: tin0|=((unsigned long)(*(--(in))))<< 8; case 2: tin0|=((unsigned long)(*(--(in))))<<16; case 1: tin0|=((unsigned long)(*(--(in))))<<24; } };
tin0 ^= tout0;
tin1 ^= tout1;
tin[0] = tin0;
tin[1] = tin1;
IDEA_encrypt(tin, ks);
tout0 = tin[0];
(*((out)++)=(unsigned char)(((tout0)>>24L)&0xff), *((out)++)=(unsigned char)(((tout0)>>16L)&0xff), *((out)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout0) )&0xff));
tout1 = tin[1];
(*((out)++)=(unsigned char)(((tout1)>>24L)&0xff), *((out)++)=(unsigned char)(((tout1)>>16L)&0xff), *((out)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout1) )&0xff));
}
(*((iv)++)=(unsigned char)(((tout0)>>24L)&0xff), *((iv)++)=(unsigned char)(((tout0)>>16L)&0xff), *((iv)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((iv)++)=(unsigned char)(((tout0) )&0xff));
(*((iv)++)=(unsigned char)(((tout1)>>24L)&0xff), *((iv)++)=(unsigned char)(((tout1)>>16L)&0xff), *((iv)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((iv)++)=(unsigned char)(((tout1) )&0xff));
} else {
(xor0 =((unsigned long)(*((iv)++)))<<24L, xor0|=((unsigned long)(*((iv)++)))<<16L, xor0|=((unsigned long)(*((iv)++)))<< 8L, xor0|=((unsigned long)(*((iv)++))));
(xor1 =((unsigned long)(*((iv)++)))<<24L, xor1|=((unsigned long)(*((iv)++)))<<16L, xor1|=((unsigned long)(*((iv)++)))<< 8L, xor1|=((unsigned long)(*((iv)++))));
iv -= 8;
for (l -= 8; l >= 0; l -= 8) {
(tin0 =((unsigned long)(*((in)++)))<<24L, tin0|=((unsigned long)(*((in)++)))<<16L, tin0|=((unsigned long)(*((in)++)))<< 8L, tin0|=((unsigned long)(*((in)++))));
tin[0] = tin0;
(tin1 =((unsigned long)(*((in)++)))<<24L, tin1|=((unsigned long)(*((in)++)))<<16L, tin1|=((unsigned long)(*((in)++)))<< 8L, tin1|=((unsigned long)(*((in)++))));
tin[1] = tin1;
IDEA_encrypt(tin, ks);
tout0 = tin[0] ^ xor0;
tout1 = tin[1] ^ xor1;
(*((out)++)=(unsigned char)(((tout0)>>24L)&0xff), *((out)++)=(unsigned char)(((tout0)>>16L)&0xff), *((out)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout0) )&0xff));
(*((out)++)=(unsigned char)(((tout1)>>24L)&0xff), *((out)++)=(unsigned char)(((tout1)>>16L)&0xff), *((out)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout1) )&0xff));
xor0 = tin0;
xor1 = tin1;
}
if (l != -8) {
(tin0 =((unsigned long)(*((in)++)))<<24L, tin0|=((unsigned long)(*((in)++)))<<16L, tin0|=((unsigned long)(*((in)++)))<< 8L, tin0|=((unsigned long)(*((in)++))));
tin[0] = tin0;
(tin1 =((unsigned long)(*((in)++)))<<24L, tin1|=((unsigned long)(*((in)++)))<<16L, tin1|=((unsigned long)(*((in)++)))<< 8L, tin1|=((unsigned long)(*((in)++))));
tin[1] = tin1;
IDEA_encrypt(tin, ks);
tout0 = tin[0] ^ xor0;
tout1 = tin[1] ^ xor1;
{ out+=l + 8; switch (l + 8) { case 8: *(--(out))=(unsigned char)(((tout1) )&0xff); case 7: *(--(out))=(unsigned char)(((tout1)>> 8)&0xff); case 6: *(--(out))=(unsigned char)(((tout1)>>16)&0xff); case 5: *(--(out))=(unsigned char)(((tout1)>>24)&0xff); case 4: *(--(out))=(unsigned char)(((tout0) )&0xff); case 3: *(--(out))=(unsigned char)(((tout0)>> 8)&0xff); case 2: *(--(out))=(unsigned char)(((tout0)>>16)&0xff); case 1: *(--(out))=(unsigned char)(((tout0)>>24)&0xff); } };
xor0 = tin0;
xor1 = tin1;
}
(*((iv)++)=(unsigned char)(((xor0)>>24L)&0xff), *((iv)++)=(unsigned char)(((xor0)>>16L)&0xff), *((iv)++)=(unsigned char)(((xor0)>> 8L)&0xff), *((iv)++)=(unsigned char)(((xor0) )&0xff));
(*((iv)++)=(unsigned char)(((xor1)>>24L)&0xff), *((iv)++)=(unsigned char)(((xor1)>>16L)&0xff), *((iv)++)=(unsigned char)(((xor1)>> 8L)&0xff), *((iv)++)=(unsigned char)(((xor1) )&0xff));
}
tin0 = tin1 = tout0 = tout1 = xor0 = xor1 = 0;
tin[0] = tin[1] = 0;
}
void IDEA_encrypt(unsigned long *d, IDEA_KEY_SCHEDULE *key)
{
register IDEA_INT *p;
register unsigned long x1, x2, x3, x4, t0, t1, ul;
x2 = d[0];
x1 = (x2 >> 16);
x4 = d[1];
x3 = (x4 >> 16);
p = &(key->data[0][0]);
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1&=0xffff; ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);; p++; x2+= *(p++); x3+= *(p++); x4&=0xffff; ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);; p++; t0=(x1^x3)&0xffff; ul=(unsigned long)t0**p; if (ul != 0) { t0=(ul&0xffff)-(ul>>16); t0-=((t0)>>16); } else t0=(-(int)t0-*p+1);; p++; t1=(t0+(x2^x4))&0xffff; ul=(unsigned long)t1**p; if (ul != 0) { t1=(ul&0xffff)-(ul>>16); t1-=((t1)>>16); } else t1=(-(int)t1-*p+1);; p++; t0+=t1; x1^=t1; x4^=t0; ul=x2^t0; x2=x3^t1; x3=ul;;
x1 &= 0xffff;
ul=(unsigned long)x1**p; if (ul != 0) { x1=(ul&0xffff)-(ul>>16); x1-=((x1)>>16); } else x1=(-(int)x1-*p+1);;
p++;
t0 = x3 + *(p++);
t1 = x2 + *(p++);
x4 &= 0xffff;
ul=(unsigned long)x4**p; if (ul != 0) { x4=(ul&0xffff)-(ul>>16); x4-=((x4)>>16); } else x4=(-(int)x4-*p+1);;
d[0] = (t0 & 0xffff) | ((x1 & 0xffff) << 16);
d[1] = (x4 & 0xffff) | ((t1 & 0xffff) << 16);
}
