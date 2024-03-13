#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct elementop* Pilha;

Pilha pilhaCriar();

int pilhaInserir(Pilha *, struct carta);

int pilhaRemover(Pilha *, struct carta*);

void pilhaEmbaralhar(Pilha *);

int pilhaTamamho(Pilha *);


