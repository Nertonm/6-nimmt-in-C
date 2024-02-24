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

fila *criar(void){
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
        return 0;
    }
    link->ini = novo;
    link->fim = novo;
};
int remover(fila link){
    fila aaa = link->ini;
    link->ini = link->ini->prx;
    free(aaa);
};
int acessar();
int exibir();
int tamanho();
