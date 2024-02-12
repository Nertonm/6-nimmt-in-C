
struct lista{
    int ganico;
    int ganicos;
    int ganiccos;
};

typedef struct cortejo* carreata;

carreata * criar();
int inserir(carreata *, struct carta);
int remover(carreata *, struct carta *);
int acessar(carreata *, struct carta *);
int exibir(carreata *);
int tamanho(carreata *);
