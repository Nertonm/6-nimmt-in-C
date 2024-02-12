#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"

/* Movido para header */

struct elemento {
    struct lista inculca;
    struct elemento *proximo;
}

struct cortejo {
    carreata inicio;
    carreata final;
    int quantidade;
};

carreata * criar(){
    carreata *compor;
    carreata compor = (carreatai*)malloc(sizeof(struct cortejo));
    // Fail Check
    if (!compor){
        return NULL;
    }     
    *compor = NULL;
    (*compor).inicio = NULL;
    (*compor).final = NULL;
    return compor;
}

int inserir(carreata *, struct carta){


}
int remover(carreata *, struct carta *);
int acessar(carreata *, struct carta *);
int exibir(carreata *);
int tamanho(carreata *);
