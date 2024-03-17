#include "main.h"
/*
Estruturas necessárias no main:
- Mão (Lista *), sempre com cinco cartas: joga uma e compra uma
- Mesa (Fila **), é um vetor de Filas, use alocação dinâmica
- Baralho (Pilha *), inicia com 104 cartas embaralhadas, depois distribui 4 para mesa e 10 para cada jogador
- Coleção dos Jogadores (Lista **), vetor de Listas contendo as cartas adquiridas por cada jogador, use alocação dinâmica
*/
// To Do
struct hand{
};
// To Do
struct mesa{
};
// To Do
struct baralho{
};
// To Do
struct players{
};

int main()
{
    // Declaração de Variaveis
    int numBots = 2; /* Iniciado com Dois para situar o caso base do Select Players */
/*
    Fila* aaa = filaCriar();
    Carta bbb; bbb.num = 1;
    Carta ccc; ccc.num = 2;
    filaInserir(aaa,ccc);
    filaInserir(aaa,bbb);
    filaExibir(aaa);
*/
    printf(" #####                                 \n");
    printf("#     #    #    # # #    # #    # #####\n");
    printf("#          ##   # # ##  ## ##  ##   #  \n");
    printf("######     # #  # # # ## # # ## #   #  \n");
    printf("#     #    #  # # # #    # #    #   #  \n");
    printf("#     #    #   ## # #    # #    #   #  \n");
    printf(" #####     #    # # #    # #    #   #  \n");
    // Select how many Players
    do {
        printf("====================================\n");
        if (numBots < 2 || numBots > 9)
            printf("|         Selecione Novamente      |\n");
        printf("|         Quantos Jogadores?       |\n");
        printf("====================================\n");
        scanf("%i",&numBots);
    }
    while (numBots < 2 || numBots > 9);
    // Começando o Jogo
        // Iniciado o Baralho dos Jogadores |TO DO|
        for (int i = 0; i < numBots; i++){

        }
    // Loop do Jogo c          |TO DO|
        // Round Logic        |TO DO|

        // Contagem de Pontos |TO DO|

        // Checagem de Vitoria|TO DO|

    return 0;
}
