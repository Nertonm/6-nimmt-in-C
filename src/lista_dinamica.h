#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct elementos *Lista;

Lista* criar();

int inserirOrdenado(Lista*, struct carta);

int acessarIndice(Lista*, int,struct carta*);

int removerIndince(Lista*,int);

int exibir(Lista*);

int quantidade(Lista*);
