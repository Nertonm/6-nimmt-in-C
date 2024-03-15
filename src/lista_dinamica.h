#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>

struct lista{
  Elemento ini;
  Elemento fim;
};
typedef struct lista* Lista;
Lista listaCriar();
int inserirOrdenado(Lista, Carta);
int acessarIndice(Lista, int);
int removerIndince(Lista, int);
int exibir(Lista);
int quantidade(Lista);
int vazia();
