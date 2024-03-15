#ifndef CARTA_H
#define CARTA_H
#include <stdio.h>
#include <stdlib.h>
/*
 E strutura da carta:
 - int numero, número que varia de 1 a 104
 - int bois, número que varia de 1 à 7 (regras de definição no manual)
 - int jogador, número indicando o jogador dono da carta (útil quando for jogar as cartas e colocar nas coleções)
*/
struct carta{
    int num;
    int boi;
    int player;
};
typedef struct carta Carta;

struct elemento{
    Carta data;
    struct elemento *prx;
};
typedef struct elemento* Elemento;

#endif
