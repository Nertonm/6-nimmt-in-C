#include "cartaStruct.h"

struct fila{
    Elemento ini;
    Elemento fim;
    int qnt;
};

typedef struct fila* Fila;
Fila filaCriar(void);
int filaInserir();
int filaRemover();
int filaAcessar();
int filaExibir();
int filaTamanho();
