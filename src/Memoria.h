#ifndef MEMORIA_H
#define MEMORIA_H

#include <stdio.h>
#include <stdlib.h>

#include "token.h"

#define MAXCOLS 5


typedef struct Bloco{
    int arq;
    int seg;
}Bloco;

typedef struct Pointers{
    int inicio;
    int fim;
}Pointers;

typedef struct Swap{
    Bloco *swap;
    Pointers *indexes;
}Swap;

typedef struct Memoria{
    Bloco *mem;
    Pointers *indexes;
    Swap *swap;
}Memoria;

void IniciaMemoria(Memoria *m, int lins);
void Enfileira(Memoria *m, Bloco b, int pid);
void Desinfileira(Memoria *m, Bloco *b, int pid);


void IniciaSwap(Swap *s, int lins);
void SolicitaSwap(Swap *s, Bloco b, int pid);
void SwapMemoria(Swap *s, Bloco *b, int pid);

#endif