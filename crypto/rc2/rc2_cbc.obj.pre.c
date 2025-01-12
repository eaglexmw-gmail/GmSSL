#line 1 "crypto\\rc2\\rc2_cbc.c"
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
#line 11 "crypto\\rc2\\rc2_cbc.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\rc2\\rc2_locl.h"
#line 12 "crypto\\rc2\\rc2_cbc.c"
void RC2_cbc_encrypt(const unsigned char *in, unsigned char *out, long length,
                     RC2_KEY *ks, unsigned char *iv, int encrypt)
{
    register unsigned long tin0, tin1;
    register unsigned long tout0, tout1, xor0, xor1;
    register long l = length;
    unsigned long tin[2];
    if (encrypt)
    {
        (tout0 =((unsigned long)(*((iv)++))), tout0|=((unsigned long)(*((iv)++)))<< 8L, tout0|=((unsigned long)(*((iv)++)))<<16L, tout0|=((unsigned long)(*((iv)++)))<<24L);
        (tout1 =((unsigned long)(*((iv)++))), tout1|=((unsigned long)(*((iv)++)))<< 8L, tout1|=((unsigned long)(*((iv)++)))<<16L, tout1|=((unsigned long)(*((iv)++)))<<24L);
        iv -= 8;
        for (l -= 8; l >= 0; l -= 8)
        {
            (tin0 =((unsigned long)(*((in)++))), tin0|=((unsigned long)(*((in)++)))<< 8L, tin0|=((unsigned long)(*((in)++)))<<16L, tin0|=((unsigned long)(*((in)++)))<<24L);
            (tin1 =((unsigned long)(*((in)++))), tin1|=((unsigned long)(*((in)++)))<< 8L, tin1|=((unsigned long)(*((in)++)))<<16L, tin1|=((unsigned long)(*((in)++)))<<24L);
            tin0 ^= tout0;
            tin1 ^= tout1;
            tin[0] = tin0;
            tin[1] = tin1;
            RC2_encrypt(tin, ks);
            tout0 = tin[0];
            (*((out)++)=(unsigned char)(((tout0) )&0xff), *((out)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout0)>>16L)&0xff), *((out)++)=(unsigned char)(((tout0)>>24L)&0xff));
            tout1 = tin[1];
            (*((out)++)=(unsigned char)(((tout1) )&0xff), *((out)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout1)>>16L)&0xff), *((out)++)=(unsigned char)(((tout1)>>24L)&0xff));
        }
        if (l != -8)
        {
            {
                in+=l + 8;
                tin0=tin1=0;
                switch (l + 8)
                {
                case 8:
                    tin1 =((unsigned long)(*(--(in))))<<24L;
                case 7:
                    tin1|=((unsigned long)(*(--(in))))<<16L;
                case 6:
                    tin1|=((unsigned long)(*(--(in))))<< 8L;
                case 5:
                    tin1|=((unsigned long)(*(--(in))));
                case 4:
                    tin0 =((unsigned long)(*(--(in))))<<24L;
                case 3:
                    tin0|=((unsigned long)(*(--(in))))<<16L;
                case 2:
                    tin0|=((unsigned long)(*(--(in))))<< 8L;
                case 1:
                    tin0|=((unsigned long)(*(--(in))));
                }
            };
            tin0 ^= tout0;
            tin1 ^= tout1;
            tin[0] = tin0;
            tin[1] = tin1;
            RC2_encrypt(tin, ks);
            tout0 = tin[0];
            (*((out)++)=(unsigned char)(((tout0) )&0xff), *((out)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout0)>>16L)&0xff), *((out)++)=(unsigned char)(((tout0)>>24L)&0xff));
            tout1 = tin[1];
            (*((out)++)=(unsigned char)(((tout1) )&0xff), *((out)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout1)>>16L)&0xff), *((out)++)=(unsigned char)(((tout1)>>24L)&0xff));
        }
        (*((iv)++)=(unsigned char)(((tout0) )&0xff), *((iv)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((iv)++)=(unsigned char)(((tout0)>>16L)&0xff), *((iv)++)=(unsigned char)(((tout0)>>24L)&0xff));
        (*((iv)++)=(unsigned char)(((tout1) )&0xff), *((iv)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((iv)++)=(unsigned char)(((tout1)>>16L)&0xff), *((iv)++)=(unsigned char)(((tout1)>>24L)&0xff));
    }
    else
    {
        (xor0 =((unsigned long)(*((iv)++))), xor0|=((unsigned long)(*((iv)++)))<< 8L, xor0|=((unsigned long)(*((iv)++)))<<16L, xor0|=((unsigned long)(*((iv)++)))<<24L);
        (xor1 =((unsigned long)(*((iv)++))), xor1|=((unsigned long)(*((iv)++)))<< 8L, xor1|=((unsigned long)(*((iv)++)))<<16L, xor1|=((unsigned long)(*((iv)++)))<<24L);
        iv -= 8;
        for (l -= 8; l >= 0; l -= 8)
        {
            (tin0 =((unsigned long)(*((in)++))), tin0|=((unsigned long)(*((in)++)))<< 8L, tin0|=((unsigned long)(*((in)++)))<<16L, tin0|=((unsigned long)(*((in)++)))<<24L);
            tin[0] = tin0;
            (tin1 =((unsigned long)(*((in)++))), tin1|=((unsigned long)(*((in)++)))<< 8L, tin1|=((unsigned long)(*((in)++)))<<16L, tin1|=((unsigned long)(*((in)++)))<<24L);
            tin[1] = tin1;
            RC2_decrypt(tin, ks);
            tout0 = tin[0] ^ xor0;
            tout1 = tin[1] ^ xor1;
            (*((out)++)=(unsigned char)(((tout0) )&0xff), *((out)++)=(unsigned char)(((tout0)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout0)>>16L)&0xff), *((out)++)=(unsigned char)(((tout0)>>24L)&0xff));
            (*((out)++)=(unsigned char)(((tout1) )&0xff), *((out)++)=(unsigned char)(((tout1)>> 8L)&0xff), *((out)++)=(unsigned char)(((tout1)>>16L)&0xff), *((out)++)=(unsigned char)(((tout1)>>24L)&0xff));
            xor0 = tin0;
            xor1 = tin1;
        }
        if (l != -8)
        {
            (tin0 =((unsigned long)(*((in)++))), tin0|=((unsigned long)(*((in)++)))<< 8L, tin0|=((unsigned long)(*((in)++)))<<16L, tin0|=((unsigned long)(*((in)++)))<<24L);
            tin[0] = tin0;
            (tin1 =((unsigned long)(*((in)++))), tin1|=((unsigned long)(*((in)++)))<< 8L, tin1|=((unsigned long)(*((in)++)))<<16L, tin1|=((unsigned long)(*((in)++)))<<24L);
            tin[1] = tin1;
            RC2_decrypt(tin, ks);
            tout0 = tin[0] ^ xor0;
            tout1 = tin[1] ^ xor1;
            {
                out+=l + 8;
                switch (l + 8)
                {
                case 8:
                    *(--(out))=(unsigned char)(((tout1)>>24L)&0xff);
                case 7:
                    *(--(out))=(unsigned char)(((tout1)>>16L)&0xff);
                case 6:
                    *(--(out))=(unsigned char)(((tout1)>> 8L)&0xff);
                case 5:
                    *(--(out))=(unsigned char)(((tout1) )&0xff);
                case 4:
                    *(--(out))=(unsigned char)(((tout0)>>24L)&0xff);
                case 3:
                    *(--(out))=(unsigned char)(((tout0)>>16L)&0xff);
                case 2:
                    *(--(out))=(unsigned char)(((tout0)>> 8L)&0xff);
                case 1:
                    *(--(out))=(unsigned char)(((tout0) )&0xff);
                }
            };
            xor0 = tin0;
            xor1 = tin1;
        }
        (*((iv)++)=(unsigned char)(((xor0) )&0xff), *((iv)++)=(unsigned char)(((xor0)>> 8L)&0xff), *((iv)++)=(unsigned char)(((xor0)>>16L)&0xff), *((iv)++)=(unsigned char)(((xor0)>>24L)&0xff));
        (*((iv)++)=(unsigned char)(((xor1) )&0xff), *((iv)++)=(unsigned char)(((xor1)>> 8L)&0xff), *((iv)++)=(unsigned char)(((xor1)>>16L)&0xff), *((iv)++)=(unsigned char)(((xor1)>>24L)&0xff));
    }
    tin0 = tin1 = tout0 = tout1 = xor0 = xor1 = 0;
    tin[0] = tin[1] = 0;
}
void RC2_encrypt(unsigned long *d, RC2_KEY *key)
{
    int i, n;
    register RC2_INT *p0, *p1;
    register RC2_INT x0, x1, x2, x3, t;
    unsigned long l;
    l = d[0];
    x0 = (RC2_INT) l & 0xffff;
    x1 = (RC2_INT) (l >> 16L);
    l = d[1];
    x2 = (RC2_INT) l & 0xffff;
    x3 = (RC2_INT) (l >> 16L);
    n = 3;
    i = 5;
    p0 = p1 = &(key->data[0]);
    for (;;)
    {
        t = (x0 + (x1 & ~x3) + (x2 & x3) + *(p0++)) & 0xffff;
        x0 = (t << 1) | (t >> 15);
        t = (x1 + (x2 & ~x0) + (x3 & x0) + *(p0++)) & 0xffff;
        x1 = (t << 2) | (t >> 14);
        t = (x2 + (x3 & ~x1) + (x0 & x1) + *(p0++)) & 0xffff;
        x2 = (t << 3) | (t >> 13);
        t = (x3 + (x0 & ~x2) + (x1 & x2) + *(p0++)) & 0xffff;
        x3 = (t << 5) | (t >> 11);
        if (--i == 0)
        {
            if (--n == 0)
                break;
            i = (n == 2) ? 6 : 5;
            x0 += p1[x3 & 0x3f];
            x1 += p1[x0 & 0x3f];
            x2 += p1[x1 & 0x3f];
            x3 += p1[x2 & 0x3f];
        }
    }
    d[0] =
        (unsigned long)(x0 & 0xffff) | ((unsigned long)(x1 & 0xffff) << 16L);
    d[1] =
        (unsigned long)(x2 & 0xffff) | ((unsigned long)(x3 & 0xffff) << 16L);
}
void RC2_decrypt(unsigned long *d, RC2_KEY *key)
{
    int i, n;
    register RC2_INT *p0, *p1;
    register RC2_INT x0, x1, x2, x3, t;
    unsigned long l;
    l = d[0];
    x0 = (RC2_INT) l & 0xffff;
    x1 = (RC2_INT) (l >> 16L);
    l = d[1];
    x2 = (RC2_INT) l & 0xffff;
    x3 = (RC2_INT) (l >> 16L);
    n = 3;
    i = 5;
    p0 = &(key->data[63]);
    p1 = &(key->data[0]);
    for (;;)
    {
        t = ((x3 << 11) | (x3 >> 5)) & 0xffff;
        x3 = (t - (x0 & ~x2) - (x1 & x2) - *(p0--)) & 0xffff;
        t = ((x2 << 13) | (x2 >> 3)) & 0xffff;
        x2 = (t - (x3 & ~x1) - (x0 & x1) - *(p0--)) & 0xffff;
        t = ((x1 << 14) | (x1 >> 2)) & 0xffff;
        x1 = (t - (x2 & ~x0) - (x3 & x0) - *(p0--)) & 0xffff;
        t = ((x0 << 15) | (x0 >> 1)) & 0xffff;
        x0 = (t - (x1 & ~x3) - (x2 & x3) - *(p0--)) & 0xffff;
        if (--i == 0)
        {
            if (--n == 0)
                break;
            i = (n == 2) ? 6 : 5;
            x3 = (x3 - p1[x2 & 0x3f]) & 0xffff;
            x2 = (x2 - p1[x1 & 0x3f]) & 0xffff;
            x1 = (x1 - p1[x0 & 0x3f]) & 0xffff;
            x0 = (x0 - p1[x3 & 0x3f]) & 0xffff;
        }
    }
    d[0] =
        (unsigned long)(x0 & 0xffff) | ((unsigned long)(x1 & 0xffff) << 16L);
    d[1] =
        (unsigned long)(x2 & 0xffff) | ((unsigned long)(x3 & 0xffff) << 16L);
}
