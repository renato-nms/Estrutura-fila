#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

No* enfileirar(No** fila, int valor){
    No* aux, *novo = (No*)malloc(sizeof(No));
if(novo != NULL){
    novo->dado = valor;
    novo->proximo = NULL;
} else{
    printf("|Erro ao alocar");
}
if(*fila == NULL){
    *fila = novo;
} else{
    aux = *fila;
    while(aux->proximo != NULL)
    aux = aux->proximo; 
    aux->proximo = novo;
}
    return novo;
}

void desinfileirar(No** fila){
    No* remover = NULL;
    if(*fila){
        remover = *fila;
        *fila = remover->proximo;
        return remover;
    } else{
        printf("erro ao alocar memoria");
    }
}

void imprimir(No* fila){
    printf("\t-------INICIO------\t\n");
    while(fila != NULL){
    printf("%d ",fila->dado);
    fila = fila->proximo;
    }
    printf("\t-------FIM---------\t\n");
}

int main(void){
int valor; 
No*fila = NULL;
int opcao;

do{
    
printf("0- sair\n1- enfileira\n2- desinfileira\n 3- imprimir ");
scanf("%d",&opcao);
switch(opcao){
    case 1:
    printf("Digite um valor ");
    scanf("%d",&valor);
  enfileirar(&fila,valor);
    break;

    case 2:
    desinfileirar(&fila);
    break;

    case 3:
    imprimir(fila);

    break;

    if(opcao != 0 || opcao != 1 || opcao != 2 || opcao != 3 ){
        printf("opcao invalida, tente novamente");
    }
    default:
    printf("opcao invalida");
}
} while( opcao != 0);

    return 0;
}