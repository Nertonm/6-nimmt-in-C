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
        if (hand){
        // Alocando o Novo Elemento
            Elemento novo = (Elemento) malloc(sizeof(struct elemento));
            if (!novo)
                return 0;
            novo->data = nova;
            novo->prx = NULL;
        //Caso de Primeiro Elemento
            if (!hand->ini || hand->ini->data.num > nova.num){
                novo->prx = hand->ini;
                hand->ini = novo;
                if (!hand->fim)
                    hand->fim = novo;
                hand->qtd++;
                return 1;
            }
            // Procurando a Posição correta de inserção
            Elemento tmp = hand->ini;
            Elemento ant = NULL;
            while (tmp && tmp->data.num < novo->data.num && tmp->data.num != novo->data.num){
                ant = tmp;
                tmp = tmp->prx;
            }
            if (tmp && tmp->data.num == novo->data.num) {
                free(novo);
                return 0; // Erro ou não inserir
            }
            hand->qtd++;
            ant->prx = novo;
            novo->prx = tmp;
            //Caso ultimo elemento
            if (!tmp)
                hand->fim = novo;
            return 1;
        }
        return 0;
};

int acessarIndice(Lista* hand, int indice, Carta* carta){
    if (!hand || indice < 0){
        return 0;
    }
    int i = 0;
    Elemento aux = hand->ini;
    while (aux && i < indice){
        aux = aux->prx;
        i++;
    }
    if (aux){
        *carta = aux->data;
        return 1;
    }
    return 0;
}

int removerIndince(Lista* hand, int indice){
    if(hand->ini && hand){
        Elemento aux = hand->ini;
        if (!indice){
            hand->ini = aux->prx;
            free(aux);
            return 1;
        }
        int i = 0;
        while (i < indice -1 && aux->prx){
            aux = aux->prx;
            i++;
        }
        if(aux->prx){
            Elemento aux2 = aux->prx;
            aux->prx = aux2->prx;
            free(aux2);
            return 1;
        }
    }
    return 0;
};

int exibir(Lista* hand){
    if (!hand || !hand->ini)
        return 0;
    int count = 0;
    Elemento aux = hand->ini;
    while(aux){
        count++;
        printf("[%i]->",aux->data.num);
        aux = aux->prx;
    }
    printf("\n    ");
    for(int i = 0; i < count; i++){
        printf(" (%d)  ",i+1);
    }
};

int quantidade(Lista* hand){
    if(hand){
        return hand->qtd;
    }
    return 0;
}
