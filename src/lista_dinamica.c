#include "lista_dinamica.h"

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
    if(hand && nova.num+1){
        Elemento inserir = (Elemento)malloc(sizeof(Elemento));
        if(nova.num +1 > 0 && nova.num < 104)
            inserir->data = nova;
        //To Do;
        hand->fim->prx = inserir;
        hand->fim = inserir;
        return 1;
    }
    return 0;
};

int acessarIndice(Lista* hand, int indice, Carta* carta){
    if (hand && indice > 0){
        Elemento aux= hand->ini;
        for (int i = 0; i < indice && aux ; i++)
            aux = aux->prx;
        *carta = aux->data;
        return 1;
    }
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
