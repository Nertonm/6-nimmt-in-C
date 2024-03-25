#include "fila_dinamica.h"
#include "lista_dinamica.h"
#include "pilha_dinamica.h"

int msgIni();
void iniGame(Lista** , Pilha*, int, Lista**);
void iniMesa(Fila**, Pilha*, int);
void printMesa(Fila**, int);
void insertMesa(Fila**, Carta, int, int, Lista**);
void loopGame(Lista**, Pilha*, Fila**, int, int, Lista**);
void printMao(struct lista**);
void endGame(Lista** , int );
