#line 1 "crypto\\idea\\i_ecb.c"
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
typedef struct idea_key_st
{
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
#line 11 "crypto\\idea\\i_ecb.c"
#line 1 "d:\\07.opensrc\\gmssl\\crypto\\idea\\idea_lcl.h"
#line 12 "crypto\\idea\\i_ecb.c"
#line 1 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 48 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 106 "D:\\07.OpenSrc\\GmSSL\\include\\openssl/opensslv.h"
#line 13 "crypto\\idea\\i_ecb.c"
const char *IDEA_options(void)
{
    return ("idea(int)");
}
void IDEA_ecb_encrypt(const unsigned char *in, unsigned char *out,
                      IDEA_KEY_SCHEDULE *ks)
{
    unsigned long l0, l1, d[2];
    (l0 =((unsigned long)(*((in)++)))<<24L, l0|=((unsigned long)(*((in)++)))<<16L, l0|=((unsigned long)(*((in)++)))<< 8L, l0|=((unsigned long)(*((in)++))));
    d[0] = l0;
    (l1 =((unsigned long)(*((in)++)))<<24L, l1|=((unsigned long)(*((in)++)))<<16L, l1|=((unsigned long)(*((in)++)))<< 8L, l1|=((unsigned long)(*((in)++))));
    d[1] = l1;
    IDEA_encrypt(d, ks);
    l0 = d[0];
    (*((out)++)=(unsigned char)(((l0)>>24L)&0xff), *((out)++)=(unsigned char)(((l0)>>16L)&0xff), *((out)++)=(unsigned char)(((l0)>> 8L)&0xff), *((out)++)=(unsigned char)(((l0) )&0xff));
    l1 = d[1];
    (*((out)++)=(unsigned char)(((l1)>>24L)&0xff), *((out)++)=(unsigned char)(((l1)>>16L)&0xff), *((out)++)=(unsigned char)(((l1)>> 8L)&0xff), *((out)++)=(unsigned char)(((l1) )&0xff));
    l0 = l1 = d[0] = d[1] = 0;
}