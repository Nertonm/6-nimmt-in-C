#include <stdlib.h>
#include "cartaStruct.h"
#include "pilha_dinamica.h"
#include <stdio.h>
#include <time.h>

truct elementop{
    struct carta data;
    int qtd;
    struct elemento *prx;
};

typedef struct elementop Elementop;

Pilha pilhaCriar(){
    Pilha *baralho;
    baralho = (Pilha*)malloc(sizeof(Pilha));
    //Fail Check
    if (baralho != NULL){
        baralho = NULL;
    }
    return baralho;
}

int pilhaInserir(Pilha *baralho, struct carta newcard){
    if(baralho == NULL){
        return 0;
    }
    else {
        Elementop *novo= (Elementop*)malloc (sizeof(Elementop));

        if (novo==NULL)return 0;

        novo->data = newcard;
        novo->prx = *baralho;
        *baralho=novo;
        return 1;
    }
}

int pilhaRemover(Pilha *baralho,struct carta *remov){
    if (baralho == NULL || *baralho==NULL) return 0;

    else {
        Elementop *aux= *baralho;
        *remov = aux->dados;
        *baralho = aux->prx;
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
    for(int i=0;i<104;i++)
    {
        int rand = rand()%104+1;
        if(baralho==NULL)
            return 0;
        else{
             Elementop *aux=baralho+i;
             Elementop *aux2=rand;
             aux2=baralho+i;
             aux=rand;
        }
    }
}
