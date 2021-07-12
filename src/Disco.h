#ifndef DISCO_H
#define DISCO_H

#include <stdio.h>
#include <stdlib.h>

#include "token.h"

typedef struct Bloco{
    int arq;
    int seg;
}Bloco;

typedef struct Pointers{
    int topo;
    int base;
    Bloco vet[10000];
}Pointers;

typedef struct Params{
    int maxlins;
    int maxcols;
}Params;

void Parametro(Params *p);
void IniciaDisco(int lins, int cols, Bloco blocos[lins][cols], Pointers pilha[lins]);
void Push(Bloco *arq, Pointers *p, int cols, Bloco dado);
void Pop(Bloco *arq, Pointers *p, int cols, Bloco *dado);
void CarregaDisco(int lins, int cols, Bloco blocos[lins][cols], Pointers pilha[lins]);

#endif