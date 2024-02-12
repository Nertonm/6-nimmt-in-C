#include "main.h"

typedef struct descritor * carreata;

carreata * criar();
int inserir(carreata *, struct carta);
int remover(carreata *, struct carta *);
int acessar(carreata *, struct carta *);
int exibir(carreata *);
int tamanho(carreata *);
