#include "cartaStruct.h"

struct fila{
    Elemento ini;
    Elemento fim;
    int qtd;
};

typedef struct fila Fila;
Fila* filaCriar();
int filaInserir(Fila *, struct carta);
int filaRemover(Fila *, Carta *);
int filaAcessar(Fila *, Carta *);
int filaExibir(Fila *);
int filaTamanho(Fila *);
