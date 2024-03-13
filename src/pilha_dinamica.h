#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct elemento* Pilha;

Pilha pilhaCriar();

int pilhaInserir(Pilha *, struct card);

int pilhaRemover(Pilha *, struct card);

void pilhaEmbaralhar(Pilha *);

int pilhaTamamho(Pilha *);


