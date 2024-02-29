#include <stdlib.h>
#include "cartaStruct.h"
#include "pilha_dinamica.h"
#include <stdio.h>
#include <time.h>

struct elemento{
    carta data;
    int qtd;
    struct elemento *prx;
};

typedef struct elemento Elemento;

Pilha pilhaCriar(void){
    Pilha baralho;
    baralho = (Pilha)malloc(sizeof(Pilha));
    //Fail Check
    if (baralho != NULL){
        baralho = NULL;
    }
    return baralho;
}

int pilhaInserir(Pilha baralho, carta nova){
    if(baralho == NULL){
        return 0;
    }
    else {
        Elemento *novo= (Elemento*)malloc (sizeof(Elemento));
        if (novo==NULL) return 0;
        novo->data = nova;
        novo->prx = baralho;
        return 1;
    }
}

int pilhaRemover(Pilha baralho){
    if (baralho == NULL) return 0;

    else {
        Elemento *aux= baralho;
        baralho = aux->prx;
        free(aux);
        return 1;
    }
}

int pilhaTamamho(Pilha baralho){
    if (baralho == NULL){
        return 1;
    }
    return baralho->qtd;
}


void pilhaEmbaralhar(Pilha baralho){

    srand(time(NULL));

    for(int i=0;i<104;i++){
        rand()%104+1;
        if(baralho==NULL)return 0;
        else{
             Elemento *aux=baralho+i;
             Elemento *aux2=rand;
             aux2=baralho+i;
             aux=rand;

        }

    }

    }


