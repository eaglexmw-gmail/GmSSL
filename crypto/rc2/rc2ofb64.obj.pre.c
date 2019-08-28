#line 1 "crypto\\rc2\\rc2ofb64.c"
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
typedef struct rc2_key_st
{
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
#line 11 "crypto\\rc2\\rc2ofb64.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\rc2\\rc2_locl.h"
#line 12 "crypto\\rc2\\rc2ofb64.c"
void RC2_ofb64_encrypt(const unsigned char *in, unsigned char *out,
                       long length, RC2_KEY *schedule, unsigned char *ivec,
                       int *num)
{
    register unsigned long v0, v1, t;
    register int n = *num;
    register long l = length;
    unsigned char d[8];
    register char *dp;
    unsigned long ti[2];
    unsigned char *iv;
    int save = 0;
    iv = (unsigned char *)ivec;
    (v0 =((unsigned long)(*((iv)++))), v0|=((unsigned long)(*((iv)++)))<< 8L, v0|=((unsigned long)(*((iv)++)))<<16L, v0|=((unsigned long)(*((iv)++)))<<24L);
    (v1 =((unsigned long)(*((iv)++))), v1|=((unsigned long)(*((iv)++)))<< 8L, v1|=((unsigned long)(*((iv)++)))<<16L, v1|=((unsigned long)(*((iv)++)))<<24L);
    ti[0] = v0;
    ti[1] = v1;
    dp = (char *)d;
    (*((dp)++)=(unsigned char)(((v0) )&0xff), *((dp)++)=(unsigned char)(((v0)>> 8L)&0xff), *((dp)++)=(unsigned char)(((v0)>>16L)&0xff), *((dp)++)=(unsigned char)(((v0)>>24L)&0xff));
    (*((dp)++)=(unsigned char)(((v1) )&0xff), *((dp)++)=(unsigned char)(((v1)>> 8L)&0xff), *((dp)++)=(unsigned char)(((v1)>>16L)&0xff), *((dp)++)=(unsigned char)(((v1)>>24L)&0xff));
    while (l--)
    {
        if (n == 0)
        {
            RC2_encrypt((unsigned long *)ti, schedule);
            dp = (char *)d;
            t = ti[0];
            (*((dp)++)=(unsigned char)(((t) )&0xff), *((dp)++)=(unsigned char)(((t)>> 8L)&0xff), *((dp)++)=(unsigned char)(((t)>>16L)&0xff), *((dp)++)=(unsigned char)(((t)>>24L)&0xff));
            t = ti[1];
            (*((dp)++)=(unsigned char)(((t) )&0xff), *((dp)++)=(unsigned char)(((t)>> 8L)&0xff), *((dp)++)=(unsigned char)(((t)>>16L)&0xff), *((dp)++)=(unsigned char)(((t)>>24L)&0xff));
            save++;
        }
        *(out++) = *(in++) ^ d[n];
        n = (n + 1) & 0x07;
    }
    if (save)
    {
        v0 = ti[0];
        v1 = ti[1];
        iv = (unsigned char *)ivec;
        (*((iv)++)=(unsigned char)(((v0) )&0xff), *((iv)++)=(unsigned char)(((v0)>> 8L)&0xff), *((iv)++)=(unsigned char)(((v0)>>16L)&0xff), *((iv)++)=(unsigned char)(((v0)>>24L)&0xff));
        (*((iv)++)=(unsigned char)(((v1) )&0xff), *((iv)++)=(unsigned char)(((v1)>> 8L)&0xff), *((iv)++)=(unsigned char)(((v1)>>16L)&0xff), *((iv)++)=(unsigned char)(((v1)>>24L)&0xff));
    }
    t = v0 = v1 = ti[0] = ti[1] = 0;
    *num = n;
}
