#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"
#include "carta.h"


struct elemento {
    carta data;
    struct elemento *prox;
};

struct fila{// Descritor
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

