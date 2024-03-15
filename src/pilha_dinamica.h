#include "cartaStruct.h"
#include <stdio.h>
#include <stdlib.h>

struct elemento{
    carta data;
    struct elemento *ant;
};
struct pilha{
    struct elemento *top;
    int qtd;
};

typedef struct pilha* Pilha;
Pilha pilhaCriar();
int pilhaInserir(Pilha,  carta);
int pilhaRemover(Pilha,  carta*);
void pilhaEmbaralhar(Pilha);
int pilhaTamamho(Pilha);


