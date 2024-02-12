#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"

/* Movido para header */

struct elemento {
    yugioh inculca;
    struct elemento *proximo;
};

struct descritor {
    struct elemento *inicio;
    struct elemento *final;
    int quantidade;
};

carreata * criar(){
    carreata compor = (carreata*)malloc(sizeof(struct descritor));
    // Fail Check
    if (compor){
        compor->inicio = NULL;
        compor->final = NULL;
        compor->quantidade = 0;
        return compor;
    }
    return NULL;
}

int inserir(carreata chata, yugioh ){
    if (!chata) return 0;
    struct elemento *brugelo = (struct elemento *)malloc(sizeof(struct elemento));
    if (chata->inicio == NULL) chata->inicio = brugelo;
    else{
        chata->final->proximo = brugelo;
    }
    brugelo->inculca = inculcaBrugela;
    brugelo->proximo = NULL;
    chata->final = brugelo;
    chata->quantidade++;
    return 1;
}

int remover(carreata chata, struct carta *){
    if (!chata) return 0;
    if (chata->quantidade == 0) return 0;
    struct elemento * auxiliar = chata->inicio;
    chata->inicio = chata->inicio->proximo;
    if (chata->quantidade == 1) chata->final = NULL;
    chata->quantidade--;
    free(auxiliar);
    return 1;
}
int acessar(carreata *, struct carta *);
int exibir(carreata *);
int tamanho(carreata *);
