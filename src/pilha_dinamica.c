#include <stdlib.h>
#include "cartaStruct.h"
#include "pilha_dinamica.h"
#include <stdio.h>

struct elemento {
    struct cartas dados
    struct elemento *prox};
    
typedef struct elemento Elemento;

Pilha* pilhaCriar(void){
    Pilha *baralho;
    baralho = (Pilha*}malloc(sizeof(Pilha));
    if (baralho != NULL){
        *baralho = NULL;
    }
    return baralho;
}

int pilhaInserir(Pilha *baralho, struct carta novosdad){
    if(baralho==NULL){
        return 0;
    }
    else {
        Elemento *novo= (Elemento*)malloc (sizeof(Elemento));
        if (novo==NULL) return 0;
        novo->dados=novodad;
        novo->prox=*baralho;
        return 1;
    }
}

int pilhaRemover(Pilha *baralho){
    if (baralho == NULL) return 0;
    //if (*baralho == NULL) return 0; Mexi aqui 
    else {
        Elemento *aux *baralho;
        *baralho = aux->prox;
        free(aux);
        return 1;
    }
}

int pilhaTamamho(Pilha *baralho){
    if (baralho == NULL){
        return -1;
    }
    return baralho->qtd;
}


    
