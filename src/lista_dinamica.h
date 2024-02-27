#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct elemento *Lista;

Lista listaCriar();

int inserirOrdenado(Lista link,carta);

int acessarIndice(Lista link, int n ,carta);

int removerIndince(Lista link, int n);

int exibir(Lista*);

int quantidade(Lista*);
