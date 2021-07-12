#include <stdio.h>
#include <stdlib.h>

#include "Disco.h"

int main(int argc, char *argv[])
{
    Bloco b;
    int op;
    printf("SIMULADOR DE SISTEMA OPERACIONAL\n\n\n");
    
    do{
    printf("Selecione a opção desejada:\n\n");
    printf("1 - Carregar Disco\n");
    printf("2 - Ler Processos\n");
    printf("0 - Sair\n\n");
    scanf("%i", &op);
    
    switch(op){
        
        case 1: 
        break;
        
    }
    
    }while(op != 0);
    
    printf("\n!!! PROGRAMA ENCERRADO !!!");
    
}
