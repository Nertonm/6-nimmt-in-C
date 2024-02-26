#include <stdlib.h>
#include "lista_dinamica.h"
#include "cartaStruct.h"
#include <stdio.h>

struct elemento {
    struct carta dados;
    struct elemento *proximo;
};
typedef struct elemento Elemento;

Lista* criar(){
    Lista *mao; //baralho das cartas//
    mao = (Lista*)malloc(sizeof(Lista));
    if (mao!=NULL){
        *mao=NULL;
    }
    return mao;
}
int inserirOrdenado(Lista mao*, struct carta novosdados){
    if (mao==NULL) return 0;
    Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
    if (novo==NULL) return 0;
    novo->dados = novosdados;
    #if (*mao==NULL || (*mao)->dados.
    }

