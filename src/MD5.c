// src/MD5.c

#include "HashFunctions.h"
#include <openssl/md5.h>
#include <string.h>

void md5_hash(const char *input, char *output) 
{
  MD5_CTX context;
  MD5_Init(&context);
  MD5_Update(&context, input, strlen(input));
  MD5_Final((unsigned char *)output, &context);
  output[MD5_DIGEST_LENGTH] = '\0';
}
