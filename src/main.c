// src/main.c

#include "HashFunctions.h"
#include <stdio.h>

int main() 
{
  const char *input = "Hello, World!";
  char md5_output[MD5_DIGEST_LENGTH + 1];
  char sha256_output[SHA256_DIGEST_LENGTH + 1];
  char sha384_output[SHA384_DIGEST_LENGTH + 1];
  char sha512_output[SHA512_DIGEST_LENGTH + 1];

  md5_hash(input, md5_output);
  sha256_hash(input, sha256_output);
  sha384_hash(input, sha384_output);
  sha512_hash(input, sha512_output);

  printf("Input: %s\n", input);
  printf("MD5 Hash: %s\n", md5_output);
  printf("SHA-256 Hash: %s\n", sha256_output);
  printf("SHA-384 Hash: %s\n", sha384_output);
  printf("SHA-512 Hash: %s\n", sha512_output);

  return 0;
}
