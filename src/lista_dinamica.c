#include <stdlib.h>
#include "lista_dinamica.h"
#include "cartaStruct.h"
#include <stdio.h>

struct elemento {
    struct card data;
    struct elemento *prx;
};
typedef struct elemento Elemento;

Lista criar(){
    Lista mao; //baralho das cartas//
    mao = (Elemento*)malloc(sizeof(Lista));
    if (mao != NULL){
        mao=NULL;
    }
    return mao;
}

/* inserirOrdenado(Lista mao, carta nova){
    if (mao==NULL) return 0;
    Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
    if (novo==NULL) return 0;
    novo->data = nova;
    //if (*mao==NULL || (*mao)->data.
    // Terminar
    }
*/
