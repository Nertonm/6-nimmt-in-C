#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"

/* Movido para header */

struct elemento {
    carta data;
    struct elemento *proximo;
};

struct descritor {
    struct elemento *ini;
    struct elemento *fim;
    int quantidade;
};

fila* criar();
int inserir(fila *, struct carta);
int remover(fila *, struct carta *);
int acessar(fila *, struct carta *);
int exibir(fila *);
int tamanho(fila *);

