#include "cartaStruct.h"

struct pilha{
    struct elemento *top;
    int qtd;
};
typedef struct pilha* Pilha;
Pilha pilhaCriar();
int pilhaInserir(Pilha, Carta);
int pilhaRemover(Pilha, Carta);
void pilhaEmbaralhar(Pilha);
int pilhaTamamho(Pilha);


