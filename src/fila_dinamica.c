#include "fila_dinamica.h"
#include "stdlib.h"


Fila filaCriar(void){
    Fila nova = (Fila)malloc(sizeof(Fila));
    if (nova){
        nova->fim = NULL;
        nova->ini = NULL;
        nova->qnt = 0;
        return nova;
    }
    printf("Erro ao Criar Fila");
    return NULL;
};

int filaInserir(Fila fila, Carta data){
    Elemento novo = (Elemento) malloc(sizeof(struct elemento));
    novo->data = data;
    if (fila->ini){
        fila->fim->prx = novo;
        fila->fim = novo;
        fila->qnt++;
        return 0;
    }
    fila->ini = novo;
    fila->fim = novo;
    fila->qnt++;
    return 0;
};
int filaRemover(Fila fila){
    Elemento aux = fila->ini;
    fila->ini = fila->ini->prx;
    fila->qnt--;
    free(aux);
    return 0;
};
int filaAcessar();

int filaExibir(Fila fila){
    Elemento aux = fila->ini;
    while(aux != fila->fim){
        printf("%i",aux->data.numero);
        aux = aux->prx;
    }
    return 0;
};

int filaTamanho(Fila fila){
    return fila->qnt;
}
