#include "pilha_dinamica.h"
#include <stdio.h>
#include <stdlib.h>

struct pilha{
    struct elemento *top;
    int qtd;
};

Pilha* pilhaCriar(){
    Pilha* baralho = (Pilha*)malloc(sizeof(Pilha));
    baralho->qtd = 0;
    if (baralho)
        return baralho;
    return NULL;
};

int pilhaInserir(Pilha* baralho, Carta insert){
    if (baralho && insert.num+1){
            Elemento novo = (Elemento)malloc(sizeof(struct elemento));
            if (novo){
                novo->data = insert;
                novo->prx = baralho->top;
                baralho->top = novo;
                baralho->qtd++;
                return 1;
            }
    }
    return 0;
};

int pilhaRemover (Pilha* baralho, Carta *puxada){
    if (baralho->top){
        Elemento aux = baralho->top;
        *puxada = aux->data;
        baralho->qtd;
        baralho->top = aux->prx;
        free(aux);
        return 1;
    }
    return 0;
};

int pilhaTamamho(Pilha* baralho){
    if(baralho)
        return baralho->qtd;
    return 0;
};

void pilhaEmbaralhar(Pilha* baralho){
    int cartas = 104;
    // Iniciando o Baralho
        for (int i = 0; i < cartas; i++){
            Carta aux;
            aux.num = i + 1;
            aux.boi = 1;
            aux.boi = (aux.num % 10) ? (aux.boi + 2) : aux.boi;
            aux.boi = (aux.num % 5) ? (aux.boi + 1) : aux.boi;
            aux.boi = (aux.num % 11) ? (aux.boi + 4) : aux.boi;
            aux.boi = (aux.num % 55) ? (aux.boi + 1) : aux.boi;
            pilhaInserir(baralho,aux);
        }
    // Embaralhando
        Elemento aux = baralho->top; //aux recebe o topo
        for (int i = 0; i < cartas; i++){
            Elemento aux2 = baralho->top;
            int random = rand()%(103);
            for (int j = 0; j < random; j++)
                aux2 = aux2->prx;
            Carta swp = aux->data;
            aux->data = aux2->data;
            aux2->data = swp;
        }

};
