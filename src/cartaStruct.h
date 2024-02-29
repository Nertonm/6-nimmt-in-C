#ifndef CARTA_H
#define CARTA_H

struct card {
    int numero;
    int bois;
    int jogador;
};

typedef struct card carta;
#endif

/*
 E strutura da carta:                                                                                            
 - int numero, número que varia de 1 a 104
 - int bois, número que varia de 1 à 7 (regras de definição no manual)
 - int jogador, número indicando o jogador dono da carta (útil quando for jogar as cartas e colocar nas coleções)
*/
