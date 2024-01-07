// src/SHA384.c

#include "HashFunctions.h"
#include <openssl/sha.h>
#include <string.h>

void sha384_hash(const char *input, char *output) 
{
  SHA512_CTX context;
  SHA384_Init(&context);
  SHA384_Update(&context, input, strlen(input));
  SHA384_Final((unsigned char *)output, &context);
  output[SHA384_DIGEST_LENGTH] = '\0';
}
