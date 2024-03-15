#include "fila_dinamica.h"
#include "cartaStruct.h"
#include "stdlib.h"

struct elemento{
    carta data;
    struct elemento *prx;
};
typedef struct elemento* Elemento;


Fila filaCriar(void){
    Fila nova = (Fila)malloc(sizeof(struct descritor));
    if (nova){
        nova->fim = NULL;
        nova->ini = NULL;
        nova->qnt = 0;
        return nova;
    }
    printf("Erro ao Criar Fila");
    return NULL;
};

int filaInserir(Fila link,carta info){
    Elemento novo = (Elemento) malloc(sizeof(struct elemento));
    novo->data = info;
    if (link->ini){
        link->fim->prx = novo;
        link->fim = novo;
        link->qnt++;
        return 0;
    }
    link->ini = novo;
    link->fim = novo;
    link->qnt++;
    return 0;
};
int filaRemover(Fila link){
    Elemento aux = link->ini;
    link->ini = link->ini->prx;
    link->qnt--;
    free(aux);
    return 0;
};
int filaAcessar();

int filaExibir(Fila link){
    struct elemento* aux = link->ini;
    while(aux != link->fim){
        printf("%i",aux->data.numero);
        aux = aux->prx;
    }
    return 0;
};

int filaTamanho(Fila link){
    return link->qnt;
}
