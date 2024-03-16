#include "lista_dinamica.h"

Lista listaCriar(){
    Lista hand = (Lista)malloc(sizeof(Lista));
    if (hand)
        return hand;
    return 0;
}

int inserirOrdenado(Lista hand,Carta nova){
    Elemento inserir = (Elemento)malloc(sizeof(Elemento));
    inserir->data = nova;
    // To do
    return 1;
}

int acessarIndice(Lista hand, int indice){
    if (hand && indice > 0){
        int cont = 0;
        Elemento aux= hand->ini;
        for (int i = 0; i < indice && aux->prx ; i++)
            aux = aux->prx;
        return 1;
    }
    //To do
    return 0;
}

int removerIndince(Lista hand, int indice){
    //To do
}
