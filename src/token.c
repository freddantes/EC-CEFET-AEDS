#include "token.h"

int GetSizeOf(char *lin, const char sep[], int tam){
    char *pt;
    int index = 0;
    char tmp[tam];
    
    strcpy(tmp, lin);
    
    pt = strtok(tmp, sep);
    
    while(pt){
        index++;
        pt = strtok(NULL, sep);
    }
    
    return index;
}

void GetTokens(char lin[], const char sep[], int *toks){
    char *pt;
    int index = 0;
    
    pt = strtok(lin, sep);
    
    while(pt){
        *(toks+index) = atoi(pt);
        pt = strtok(NULL, sep);
        index++;
    }
    
}