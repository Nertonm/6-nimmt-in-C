#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"
#include "lista_dinamica.h"
#include "pilha_dinamica.h"


void msgIni();
void iniGame(Lista** , Pilha*, int);
void iniMesa(Fila** mesa, int numMesa);
void printMesa(Lista**, Fila**);
void loopGame(Lista**, Pilha*, Fila**);
