#include "cartaStruct.h"
#include "elemento.h"

typedef struct lista Lista;
Lista* listaCriar();
int inserirOrdenado(Lista*, struct carta);
int acessarIndice(Lista*, int, struct carta *);
int removerIndince(Lista*, int);
int exibir(Lista*);
int quantidade(Lista*);
