#include "lista_dinamica.h"
#include <stdio.h>
#include <stdlib.h>

struct lista{
  Elemento ini;
  Elemento fim;
  int qtd;
};

Lista* listaCriar(){
    Lista* hand = (Lista*)malloc(sizeof(Lista));
    hand->fim = NULL;
    hand->ini = NULL;
    hand->qtd = 0;
    if (hand)
        return hand;
    return NULL;
};

int inserirOrdenado(Lista* hand, Carta nova){
    Elemento novo = (Elemento) malloc(sizeof(struct elemento));
    novo->data = nova;
    novo->prx = NULL;
    if (hand->ini == NULL){
        hand->ini = novo;
        hand->fim = novo;
        hand->ini->prx = hand->fim;
        hand->qtd++;
        return 1;
    }
    hand->fim->prx = novo;
    hand->fim = novo;
    hand->fim->prx = NULL;
    hand->qtd++;
    return 1;
    //TO DO
};

int acessarIndice(Lista* hand, int indice, Carta* carta){
    if (hand && indice > 0){
        Elemento aux= hand->ini;
        for (int i = 0; i < indice && aux ; i++)
            aux = aux->prx;
        *carta = aux->data;
        return 1;
    }
    printf("Invalid Number");
    return 0;
}

int removerIndince(Lista* hand, int indice){
    Elemento aux = hand->ini;
    int i = 0;
    while (i < indice && aux->prx){
        aux = aux->prx; i++;
        if (i + 1 == indice){
            if(hand->ini =  hand->fim)
                free(aux->prx);
            Elemento aux2 = aux->prx;
            aux2 = aux2->prx;
            free(aux->prx);
            return 1;
        }
    }
    return 0;
}

int exibir(Lista* mao){
        int count = 0;
        Elemento aux = mao->ini;
        printf("Your Colection:\nHand:");
        while(aux){
            count++;
            printf("[%i]->",aux->data.num);
            aux = aux->prx;
        }
        printf("\n      ");
        for(int i = 0; i < count; i++){
            printf("(%d)   ",i+1);
        }
};
