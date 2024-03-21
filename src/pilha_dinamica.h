#include "cartaStruct.h"
#include "elemento.h"

struct pilha{
    struct elemento *top;
    int qtd;
};
typedef struct pilha Pilha;
Pilha* pilhaCriar();
int pilhaInserir(Pilha *, struct carta);
int pilhaRemover(Pilha *, struct carta*);
void pilhaEmbaralhar(Pilha *);
int pilhaTamamho(Pilha *);


