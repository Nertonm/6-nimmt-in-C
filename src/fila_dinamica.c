#include "fila_dinamica.h"
#include "stdlib.h"

Fila* filaCriar(void){
    Fila* nova = (Fila*)malloc(sizeof(Fila));
    if (nova){
        nova->fim = NULL;
        nova->ini = NULL;
        nova->qtd = 0;
        return nova;
    }
    return 0;
};

int filaInserir(Fila* fila, Carta data){
    Elemento novo = (Elemento) malloc(sizeof(struct elemento));
    novo->data = data;
    if (fila->ini){
        fila->fim->prx = novo;
        fila->fim = novo;
        fila->qtd++;
        return 1;
    }
    fila->ini = novo;
    fila->fim = novo;
    fila->qtd++;
    return 1;
};

int filaRemover(Fila* fila, Carta){
    Elemento aux = fila->ini;
    fila->ini = fila->ini->prx;
    fila->qtd--;
    free(aux);
    return 1;
};
int filaAcessar();

int filaExibir(Fila* fila){
    Elemento aux = fila->ini;
    if (aux){
        while(aux){
            printf("%i\n",aux->data.num);
            aux = aux->prx;
        }
        return 1;
    }
    return 0;
};

int filaTamanho(Fila *fila){
    return fila->qtd;
}
