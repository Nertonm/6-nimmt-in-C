#include "fila_dinamica.h"
/*
struct elemento{
    carta data;
    struct elemento *prx;
};
struct descritor{
    struct elemento *ini;
    struct elemento *fim;
    int qnt;
};*/

fila* criar(void){
    fila nova = (fila)malloc(sizeof(struct descritor));
    if (nova){
        nova->fim = NULL;
        nova->ini = NULL;
        nova->qnt = 0;
        return nova;
    }
    printf("Erro ao Criar Fila");
    return NULL;
};
int inserir(fila link, carta info){
    struct elemento* novo = (struct elemento *)malloc(sizeof(struct elemento));
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
int remover(fila link){
    fila aux = link->ini;
    link->ini = link->ini->prx;
    link->qnt--;
    free(aux);
    return 0;
};
int acessar();

int exibir(fila link){
    struct elemento* aux = link->ini;
    while(aux != link->fim){
        printf("%i",aux->data);
        aux = aux->prx;
    }
    return 0;
};
int tamanho();
