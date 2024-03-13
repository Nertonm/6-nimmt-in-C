#include <stdlib.h>
#include "lista_dinamica.h"
#include "cartaStruct.h"
#include <stdio.h>

struct elementoL {
    carta Carta;
    struct elementoL *prx;
};
typedef struct elementoL ElementoL;

Lista criar(){
    Lista mao; //baralho das cartas//
    mao = (ElementoL*)malloc(sizeof(Lista));
    if (mao != NULL){
        mao = NULL;
    }
    return mao;
}

inserirOrdenado(Lista mao, struct carta Cartanova){

    if (mao == NULL) return 0;

    ElementoL *novo = (ElementoL*)malloc(sizeof(ElementoL));
    if (novo == NULL) return 0;

    novo->Carta = Cartanova;

    if (*mao == NULL || (*mao) -> Carta.numero > novo -> Carta.numero){
        novo -> prox = *mao;
        *mao = novo;
    }

    else {
        ElementoL *ant = *mao;
        ElementoL *aux = ant->prox;
        while(aux != NULL && aux -> Carta.numero < novo -> Carta.numero){
            ant=aux;
            aux=aux->prox;
        }
        ant->prox=novo;
        novo->prox=aux;
    }
    return 1;
    }

int acessarIndice(Lista *mao, int x, struct Carta *cart){

    }
