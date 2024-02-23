#include "main.h"

typedef struct descritor * fila;

fila * criar();
int inserir(fila *, struct carta);
int remover(fila *, struct carta *);
int acessar(fila *, struct carta *);
int exibir(fila *);
int tamanho(fila *);
