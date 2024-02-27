#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct elemento* Pilha;

Pilha pilhaCriar();

int pilhaInserir(Pilha link, carta nova);

int pilhaRemover(Pilha link);

void pilhaEmbaralhar(Pilha link);

int pilhaTamamho(Pilha link);


