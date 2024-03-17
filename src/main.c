#include "main.h"
/*
Estruturas necessárias no main:
- Mão (Lista *), sempre com cinco cartas: joga uma e compra uma
- Mesa (Fila **), é um vetor de Filas, use alocação dinâmica
- Baralho (Pilha *), inicia com 104 cartas embaralhadas, depois distribui 4 para mesa e 10 para cada jogador
- Coleção dos Jogadores (Lista **), vetor de Listas contendo as cartas adquiridas por cada jogador, use alocação dinâmica
*/
// Estilo da Arte ASCII e de 40 carcters//
int main()
{
    // Estilo da Arte ASCII e de 40 carcters//
    printf(" #####                                  \n");
    printf("#     #    #    # # #    # #    # ##### \n");
    printf("#          ##   # # ##  ## ##  ##   #   \n");
    printf("######     # #  # # # ## # # ## #   #   \n");
    printf("#     #    #  # # # #    # #    #   #   \n");
    printf("#     #    #   ## # #    # #    #   #   \n");
    printf(" #####     #    # # #    # #    #   #   \n");
    // Inicialização do Jogo
        // Declaração de Variaveis
            int numBots = 2; /* Iniciado em Dois para situar o caso base do Select Players */
        // Selecionando o Numero de Jogadores
            do {
                printf("========================================\n");
                if (numBots < 2 || numBots > 9)
                    printf("|           Selecione Novamente        |\n");
                printf("|           Quantos Jogadores?         |\n");
                printf("========================================\n");
                scanf("%i",&numBots);
            } while (numBots < 2 || numBots > 9);
        // Iniciado o Baralho dos Jogadores |TO DO|
            // Criando o Monte Cartas na memoria e Embaralhando
                Fila baralhoJogadores[numBots];
                Pilha* monteCartas = pilhaCriar();
                pilhaEmbaralhar(monteCartas);
                for (int i = 0; i < numBots; i++){

                }
    // Loop do Jogo             |TO DO|
        // Round Logic          |TO DO|
            // Printar Mesa     |TO DO|
            // Jogadas          |TO DO|
                // Players      |TO DO|
                // Bots         |TO DO|
                // Verificação  |TO DO|
        // Contagem de Pontos   |TO DO|
        // Checagem de Vitoria  |TO DO|
    // Fim de Jogo              |TO DO|
        // Dizer Pontuação      |TO DO|
    return 0;
}
