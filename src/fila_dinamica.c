#include "fila_dinamica.h"
#include <stdio.h>
#include <stdlib.h>

struct fila{
    Elemento ini;
    Elemento fim;
    int qtd;
};

Fila* filaCriar(void){
    Fila* nova = (Fila*)malloc(sizeof(Fila));
    if (nova){
        nova->ini = NULL;
        nova->fim = NULL;
        nova->qtd = 0;
        return nova;
    }
    return NULL;
};

int filaInserir(Fila* fila, Carta data){
    Elemento novo = (Elemento) malloc(sizeof(struct elemento));
    novo->data = data;
    novo->prx = NULL;
    if (!fila->ini){
        fila->ini = novo;
        fila->fim = NULL;
        fila->ini->prx = fila->fim;
        fila->qtd++;
        return 1;
    }
    fila->fim->prx = novo;
    fila->fim = novo;
    fila->fim->prx = NULL;
    fila->qtd++;
    return 1;
};

int filaRemover(Fila* fila, Carta* carta){
    if (carta && fila){
        Elemento aux = fila->ini;
        fila->ini = fila->ini->prx;
        fila->qtd--;
        *carta = aux->data;
        free(aux);
        return 1;
    }
    return 0;
};

int filaAcessar(Fila *fila, Carta *carta){
    if (carta && fila){
        //SAPECAGENS
        Elemento aux = fila->fim;
        *carta = aux->data;
        return 1;
    }
    return 0;
};

int filaExibir(Fila* fila){
    Elemento aux = fila->ini;

    if(aux){
            while(aux){
            printf("[%i]->",aux->data.num);
            aux = aux->prx;
            }
            return 1;
    }
    return 0;
};

int filaTamanho(Fila *fila){
    if (fila)
        return fila->qtd;
    return 0;
};
