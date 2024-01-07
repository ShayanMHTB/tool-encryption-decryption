// src/SHA512.c

#include "HashFunctions.h"
#include <openssl/sha.h>
#include <string.h>

void sha512_hash(const char *input, char *output) 
{
  SHA512_CTX context;
  SHA512_Init(&context);
  SHA512_Update(&context, input, strlen(input));
  SHA512_Final((unsigned char *)output, &context);
  output[SHA512_DIGEST_LENGTH] = '\0';
}
