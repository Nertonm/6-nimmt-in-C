#include "fila_dinamica.h"

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
int inserir();
int remover();
int acessar();
int exibir();
int tamanho();
