#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"

Fila * criar();
int inserir(Fila *, struct carta);
int remover(Fila *, struct carta *); // Já remove e acessa
int acessar(Fila *, struct carta *);
int exibir(Fila *);
int tamanho(Fila *)i;
