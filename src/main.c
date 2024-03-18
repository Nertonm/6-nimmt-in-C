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
            int numPlayers = 2; /* Iniciado em Dois para situar o caso base do Select Players */
            int cartasInicias = 10; /* Numero de Cartas a serem puxadas no Inicio */
        // Selecionando o Numero de Jogadores
            do {
                printf("========================================\n");
                if (numPlayers < 2 || numPlayers > 10)
                    printf("|           Selecione Novamente        |\n");
                printf("|           Quantos Jogadores?         |\n");
                printf("========================================\n");
                scanf("%i",&numPlayers);
            } while (numPlayers < 2 || numPlayers > 10);
        // Iniciado o Baralho dos Jogadores |TO DO|
            // Criando o Monte Cartas na memoria e Embaralhando
                Fila* baralhoJogadores[numPlayers];
                for (int i = 0; i < numPlayers; i++)
                    baralhoJogadores[i] = filaCriar();
                Pilha* monteCartas = pilhaCriar();
                pilhaEmbaralhar(monteCartas);
                for (int i = 0; i < numPlayers ; i++){
                    for (int j = 0; j < cartasInicias; j++){
                        filaInserir(baralhoJogadores[i],monteCartas->top->data);
                        pilhaRemover(monteCartas,monteCartas->top);
                    }
                }
                filaExibir(baralhoJogadores[1]);
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
