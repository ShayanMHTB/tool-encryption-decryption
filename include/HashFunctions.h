// include/HashFunctions.h

#ifndef HASH_FUNCTIONS_H
#define HASH_FUNCTIONS_H

#include <stddef.h>

void md5_hash(const char *input, char *output);
void sha256_hash(const char *input, char *output);
void sha384_hash(const char *input, char *output);
void sha512_hash(const char *input, char *output);

#endif // HASH_FUNCTIONS_H
