#include "pilha_dinamica.h"

Pilha pilhaCriar(){
    Pilha baralho = (Pilha)malloc(sizeof(Pilha));
    if (baralho)
        return baralho;
    return NULL;
}

int pilhaInserir(Pilha baralho, Carta insert){
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

int pilhaRemover (Pilha baralho, Carta puxada){
    if (baralho){
        Pilha aux = baralho->top;
        baralho->top = baralho->top->prx;
        free(aux);
        return 1;
    }
    return 0;
}

int pilhaTamamho(Pilha baralho){
    return baralho->qtd;
}

void pilhaEmbaralhar(Pilha baralho){
        int cartas = 104;
        for (int i = 0; i < cartas - 1; i++){
            nova = i + rand() / (104) /((cartas - i) + 1);
            pilhaInserir();
        }
}
