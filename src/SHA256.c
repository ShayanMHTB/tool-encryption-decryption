// src/SHA256.c

#include "HashFunctions.h"
#include <openssl/sha.h>
#include <string.h>

void sha256_hash(const char *input, char *output) 
{
    SHA256_CTX context;
    SHA256_Init(&context);
    SHA256_Update(&context, input, strlen(input));
    SHA256_Final((unsigned char *)output, &context);
    output[SHA256_DIGEST_LENGTH] = '\0';
}
