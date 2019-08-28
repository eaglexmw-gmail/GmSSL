#line 1 "crypto\\rc2\\rc2_ecb.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/rc2.h"
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
#line 14 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/rc2.h"
typedef unsigned int RC2_INT;
typedef struct rc2_key_st {
RC2_INT data[64];
} RC2_KEY;
void RC2_set_key(RC2_KEY *key, int len, const unsigned char *data, int bits);
void RC2_ecb_encrypt(const unsigned char *in, unsigned char *out,
RC2_KEY *key, int enc);
void RC2_encrypt(unsigned long *data, RC2_KEY *key);
void RC2_decrypt(unsigned long *data, RC2_KEY *key);
void RC2_cbc_encrypt(const unsigned char *in, unsigned char *out, long length,
RC2_KEY *ks, unsigned char *iv, int enc);
void RC2_cfb64_encrypt(const unsigned char *in, unsigned char *out,
long length, RC2_KEY *schedule, unsigned char *ivec,
int *num, int enc);
void RC2_ofb64_encrypt(const unsigned char *in, unsigned char *out,
long length, RC2_KEY *schedule, unsigned char *ivec,
int *num);
#line 50 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/rc2.h"
#line 52 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/rc2.h"
#line 11 "crypto\\rc2\\rc2_ecb.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\rc2\\rc2_locl.h"
#line 12 "crypto\\rc2\\rc2_ecb.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 48 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 106 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 13 "crypto\\rc2\\rc2_ecb.c"
void RC2_ecb_encrypt(const unsigned char *in, unsigned char *out, RC2_KEY *ks,
int encrypt)
{
unsigned long l, d[2];
(l =((unsigned long)(*((in)++))) , l|=((unsigned long)(*((in)++)))<< 8L, l|=((unsigned long)(*((in)++)))<<16L, l|=((unsigned long)(*((in)++)))<<24L);
d[0] = l;
(l =((unsigned long)(*((in)++))) , l|=((unsigned long)(*((in)++)))<< 8L, l|=((unsigned long)(*((in)++)))<<16L, l|=((unsigned long)(*((in)++)))<<24L);
d[1] = l;
if (encrypt)
RC2_encrypt(d, ks);
else
RC2_decrypt(d, ks);
l = d[0];
(*((out)++)=(unsigned char)(((l) )&0xff), *((out)++)=(unsigned char)(((l)>> 8L)&0xff), *((out)++)=(unsigned char)(((l)>>16L)&0xff), *((out)++)=(unsigned char)(((l)>>24L)&0xff));
l = d[1];
(*((out)++)=(unsigned char)(((l) )&0xff), *((out)++)=(unsigned char)(((l)>> 8L)&0xff), *((out)++)=(unsigned char)(((l)>>16L)&0xff), *((out)++)=(unsigned char)(((l)>>24L)&0xff));
l = d[0] = d[1] = 0;
}
