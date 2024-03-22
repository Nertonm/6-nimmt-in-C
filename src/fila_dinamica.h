#include "cartaStruct.h"
#include "elemento.h"

typedef struct fila Fila;
Fila* filaCriar();
int filaInserir(Fila *, struct carta);
int filaRemover(Fila *, struct carta *);
int filaAcessar(Fila *, struct carta *);
int filaExibir(Fila *);
int filaTamanho(Fila *);
