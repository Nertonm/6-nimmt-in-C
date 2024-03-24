#include "fila_dinamica.h"
#include <stdio.h>
#include <stdlib.h>

struct fila{
    Elemento ini;
    Elemento fim;
    int qtd;
};

Fila* filaCriar(void){
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    if (fila){
        fila->ini = NULL;
        fila->fim = NULL;
        fila->qtd = 0;
        return fila;
    }
    return NULL;
};

int filaInserir(Fila* fila, Carta data){
    if (fila){
        Elemento novo = (Elemento) malloc(sizeof(struct elemento));
        if (novo){
            novo->data = data;
            novo->prx = NULL;
            if (!fila->ini){
                fila->ini = novo;
                fila->fim = novo;
            } else {
                fila->fim->prx = novo;
                fila->fim = novo;
            }
            fila->qtd++;
            return 1;
        }
    }
    return 0;
};

int filaRemover(Fila* fila, Carta* carta){
    if (carta && fila && fila->qtd){
        Elemento aux = fila->ini;
        fila->ini = fila->ini->prx;
        fila->qtd--;
        *carta = aux->data;
        free(aux);
        return 1;
    }
    return 0;
};

int filaAcessar(Fila *fila, Carta *cartaPtr){
    if (cartaPtr && fila){
        if(fila->qtd > 0){
            *cartaPtr = fila->fim->data;
            return 1;
        }
        return 0;
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
