#include "Memoria.h"

//MEMORIA

void IniciaMemoria(Memoria *m, int lins){
    for(int i=0; i<lins; i++){
        m->indexes->inicio = 1;
        m->indexes->fim = 1;
    }
}
void Enfileira(Memoria *m, Bloco b, int pid){
    int cont = pid - MAXCOLS;
    if(m->indexes->fim % MAXCOLS + 1 == m->indexes->inicio){
        Swap *swap;
        m->swap;
        for(int i=0; i<cont;i++)
        SolicitaSwap(swap,b,i);
    }else{
        m->mem[m->indexes->fim - 1] = b;
        m->indexes->fim = m->indexes->fim % MAXCOLS + 1;
    }
}
void Desinfileira(Memoria *m, Bloco *b, int pid){
    if(m->indexes->fim == m->indexes->inicio){
        printf("Memória Vazia!\n");
    }else{
        *b = m->mem[m->indexes->inicio - 1];
        m->indexes->inicio = m->indexes->inicio % MAXCOLS +1;
    }
}

//SWAP


void IniciaSwap(Swap *s, int lins){
    for(int i=0; i<lins; i++){
        s->indexes->inicio = 1;
        s->indexes->fim = 1;
    }
}
void SolicitaSwap(Swap *s, Bloco b, int pid){
    s->swap[s->indexes->fim - 1] = b;
    s->indexes->fim = s->indexes->fim % pid + 1;
}
void SwapMemoria(Swap *s, Bloco *b, int pid){
    *b = s->swap[s->indexes->inicio - 1];
    s->indexes->inicio = s->indexes->inicio % pid +1;
}