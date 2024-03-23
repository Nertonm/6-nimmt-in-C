#include "fila_dinamica.h"
#include "lista_dinamica.h"
#include "pilha_dinamica.h"


int msgIni();
void iniGame(Lista** , Pilha*, int);
void iniMesa(Fila**, Pilha*, int);
void printMesa(Fila**, int);
void insertMesa(Fila**, Carta*, int);
void loopGame(Lista**, Pilha*, Fila**, int);
void printMao(struct lista**);
