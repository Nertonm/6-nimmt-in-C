#include "cartaStruct.h"

struct fila{
    Elemento ini;
    Elemento fim;
    int qtd;
};

typedef struct fila Fila;
Fila* filaCriar(void);
int filaInserir(Fila *, struct carta);
int filaRemover(Fila *, struct carta);
int filaAcessar(Fila *);
int filaExibir(Fila *);
int filaTamanho(Fila *);
