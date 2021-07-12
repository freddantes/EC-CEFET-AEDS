#ifndef TOKEN_H
#define TOKEN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetSizeOf(char *lin, const char sep[], int tam);
void GetTokens(char lin[], const char sep[], int *toks);

#endif