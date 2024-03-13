#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct elemento *Lista;

Lista listaCriar();

int inserirOrdenado(Lista *, struct card);

int acessarIndice(Lista *, int x , struct card);

int removerIndince(Lista *, int n);

int exibir(Lista*);

int quantidade(Lista*);

int vazia()
