#include "lista_dinamica.h"

Lista* listaCriar(){
    Lista* hand = (Lista*)malloc(sizeof(Lista));
    hand->fim = NULL;
    hand->ini = NULL;
    hand->qtd = 0;
    if (hand)
        return hand;

    return 0;
}

int inserirOrdenado(Lista* hand,Carta nova){
    Elemento inserir = (Elemento)malloc(sizeof(Elemento));
    if(nova.num +1 > 0 && nova.num < 104)
        inserir->data = nova;
    //To Do;
    hand->fim->prx = inserir;
    hand->fim = inserir;
    return 1;
}

int acessarIndice(Lista* hand, int indice, Carta* cartaa){
    if (hand && indice > 0){

        Elemento aux= hand->ini;
        for (int i = 0; i < indice && aux ; i++)
            aux = aux->prx;
        return 1;
    }
    //To do
    return 0;
}

int removerIndince(Lista* hand, int indice){
    Elemento aux = hand->ini;
    for(int i = 1; i < indice && aux->prx; i++)
            aux = aux->prx;
    // To Do
    free(aux->prx);
}

}
