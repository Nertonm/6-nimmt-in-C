#include <stdio.h>
#include <stdlib.h>
#include "cartaStruct.h"

struct descritor{
    struct elemento *ini;
    struct elemento *fim;
    int qnt;
};
typedef struct descritor *Fila;

Fila filaCriar(void);
int filaInserir();
int filaRemover();
int filaAcessar();
int filaExibir();
int filaTamanho();
