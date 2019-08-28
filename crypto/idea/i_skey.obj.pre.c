#line 1 "crypto\\idea\\i_skey.c"
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
#line 11 "crypto\\idea\\i_skey.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\idea\\idea_lcl.h"
#line 12 "crypto\\idea\\i_skey.c"
static IDEA_INT inverse(unsigned int xin);
void IDEA_set_encrypt_key(const unsigned char *key, IDEA_KEY_SCHEDULE *ks)
{
int i;
register IDEA_INT *kt, *kf, r0, r1, r2;
kt = &(ks->data[0][0]);
(kt[0] =((IDEA_INT)(*((key)++)))<< 8L, kt[0]|=((IDEA_INT)(*((key)++))) );
(kt[1] =((IDEA_INT)(*((key)++)))<< 8L, kt[1]|=((IDEA_INT)(*((key)++))) );
(kt[2] =((IDEA_INT)(*((key)++)))<< 8L, kt[2]|=((IDEA_INT)(*((key)++))) );
(kt[3] =((IDEA_INT)(*((key)++)))<< 8L, kt[3]|=((IDEA_INT)(*((key)++))) );
(kt[4] =((IDEA_INT)(*((key)++)))<< 8L, kt[4]|=((IDEA_INT)(*((key)++))) );
(kt[5] =((IDEA_INT)(*((key)++)))<< 8L, kt[5]|=((IDEA_INT)(*((key)++))) );
(kt[6] =((IDEA_INT)(*((key)++)))<< 8L, kt[6]|=((IDEA_INT)(*((key)++))) );
(kt[7] =((IDEA_INT)(*((key)++)))<< 8L, kt[7]|=((IDEA_INT)(*((key)++))) );
kf = kt;
kt += 8;
for (i = 0; i < 6; i++) {
r2 = kf[1];
r1 = kf[2];
*(kt++) = ((r2 << 9) | (r1 >> 7)) & 0xffff;
r0 = kf[3];
*(kt++) = ((r1 << 9) | (r0 >> 7)) & 0xffff;
r1 = kf[4];
*(kt++) = ((r0 << 9) | (r1 >> 7)) & 0xffff;
r0 = kf[5];
*(kt++) = ((r1 << 9) | (r0 >> 7)) & 0xffff;
r1 = kf[6];
*(kt++) = ((r0 << 9) | (r1 >> 7)) & 0xffff;
r0 = kf[7];
*(kt++) = ((r1 << 9) | (r0 >> 7)) & 0xffff;
r1 = kf[0];
if (i >= 5)
break;
*(kt++) = ((r0 << 9) | (r1 >> 7)) & 0xffff;
*(kt++) = ((r1 << 9) | (r2 >> 7)) & 0xffff;
kf += 8;
}
}
void IDEA_set_decrypt_key(IDEA_KEY_SCHEDULE *ek, IDEA_KEY_SCHEDULE *dk)
{
int r;
register IDEA_INT *fp, *tp, t;
tp = &(dk->data[0][0]);
fp = &(ek->data[8][0]);
for (r = 0; r < 9; r++) {
*(tp++) = inverse(fp[0]);
*(tp++) = ((int)(0x10000L - fp[2]) & 0xffff);
*(tp++) = ((int)(0x10000L - fp[1]) & 0xffff);
*(tp++) = inverse(fp[3]);
if (r == 8)
break;
fp -= 6;
*(tp++) = fp[4];
*(tp++) = fp[5];
}
tp = &(dk->data[0][0]);
t = tp[1];
tp[1] = tp[2];
tp[2] = t;
t = tp[49];
tp[49] = tp[50];
tp[50] = t;
}
static IDEA_INT inverse(unsigned int xin)
{
long n1, n2, q, r, b1, b2, t;
if (xin == 0)
b2 = 0;
else {
n1 = 0x10001;
n2 = xin;
b2 = 1;
b1 = 0;
do {
r = (n1 % n2);
q = (n1 - r) / n2;
if (r == 0) {
if (b2 < 0)
b2 = 0x10001 + b2;
} else {
n1 = n2;
n2 = r;
t = b2;
b2 = b1 - q * b2;
b1 = t;
}
} while (r != 0);
}
return ((IDEA_INT) b2);
}
