#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct elemento* Pilha;

Pilha* criarp();

int inserirp(Pilha*, struct card);

int removerp(Pilha*, struct card);

void embaralharp(Pilha*);

int tamamhop (Pilha*);


