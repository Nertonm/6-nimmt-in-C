#include <stdio.h>
#include <stdlib.h>
#include "cartaStruct.h"


struct elemento{
    carta data;
    struct elemento *prx;
};
struct descritor{
    struct elemento *ini;
    struct elemento *fim;
    int qnt;
};
typedef struct descritor * fila;

fila *criar(void);
int inserir();
int remover();
int acessar();
int exibir();
int tamanho();
