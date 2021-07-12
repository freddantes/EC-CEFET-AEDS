#include "Disco.h"

void Parametro(Params *p){
    p->maxlins = 0;
    p->maxcols = 0;
    const char sep[3] = "A, ";
    char *lin = NULL;
    FILE *fp;
    size_t tam = 0;
    ssize_t read;
    int tmp;
    
    fp = fopen("arquivos_exemplo.txt", "r");
    if(fp == NULL){
        printf("*ERRO* Falha ao abrir arquivo!\n");
        return;
    }
    
    while((read = getline(&lin, &tam, fp)) != -1){
        p->maxlins++;
        tmp = GetSizeOf(lin, sep, tam);
        p->maxcols=(tmp > p->maxcols)?tmp:p->maxcols;
    }
    
    p->maxcols = p->maxcols - 1;
    fclose(fp);
}

void IniciaDisco(int lins, int cols, Bloco blocos[lins][cols], Pointers pilha[lins]){
    for(int i=0; i<lins; i++){
        pilha[i].topo = 0;
        pilha[i].base = 0;
    }
    
    for(int i=0; i<lins; i++){
        for(int j=0; j<cols; j++){
            blocos[i][j].arq = -1;
            blocos[i][j].seg = -1;
        }
    }
}

void Push(Bloco *arq, Pointers *p, int cols, Bloco data){
    for(int i=0; i<cols;i++){
        p->vet[p->topo] = data;
        p->topo++;
    }
}
void Pop(Bloco *arq, Pointers *p, int cols, Bloco *data){
    for(int i=0; i<cols; i++){
        p->topo--;
        *data = p->vet[p->topo];
    }
}
void CarregaDisco(int lins, int cols, Bloco blocos[lins][cols], Pointers pilha[lins]){
    
}