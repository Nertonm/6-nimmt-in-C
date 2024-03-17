#include "pilha_dinamica.h"

Pilha* pilhaCriar(){
    Pilha* baralho = (Pilha*)malloc(sizeof(Pilha));
    baralho->qtd = 0;
    if (baralho)
        return baralho;
    return NULL;
}

int pilhaInserir(Pilha* baralho, Carta insert){
    if (baralho){
            Elemento novo = (Elemento)malloc(sizeof(Elemento));
            if (novo){
                novo->data = insert;
                novo->prx = baralho->top;
                baralho->top = novo;
                baralho->qtd++;
                return 1;
            }
    }
    return 0;
}

int pilhaRemover (Pilha* baralho, Carta* puxada){
    if (baralho){
        Pilha* aux; aux->top = baralho->top;
        baralho->top = baralho->top->prx;
        free(aux);
        return 1;
    }
    return 0;
}

int pilhaTamamho(Pilha* baralho){
    return baralho->qtd;
}

void pilhaEmbaralhar(Pilha* baralho){
    int cartas = 104;
    // Iniciando o Baralho
        for (int i = 0; i < cartas; i++){
            Carta aux; aux.num = i + 1;
            pilhaInserir(baralho,aux);
        }
    // Embaralhando
        Elemento aux = baralho->top;
        for (int i = 0; i < cartas; i++){
            Elemento aux2 = baralho->top;
            int random = rand()%(103);
            for (int j = 0; j < random; j++)
                aux2 = aux2->prx;
            Carta swp = aux->data;
            aux->data = aux2->data;
            aux2->data = swp;
        }
        return;
}
