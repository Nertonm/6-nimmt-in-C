#include "gameLogic.h"
#include <stdio.h>
#include <stdlib.h>

/*
Estruturas necessárias no main:
- Mão (Lista *), começa com 10 cartas diminui a cada rodada
- Mesa (Fila **), é um vetor de Filas, use alocação dinâmica
- Baralho (Pilha *), inicia com 104 cartas embaralhadas, depois distribui 4 para mesa e 10 para cada jogador
- Coleção dos Jogadores (Lista **), vetor de Listas contendo as cartas adquiridas por cada jogador, use alocação dinâmica
*/
// Estilo da Arte ASCII e de 40 carcters//
int main()
{
    // Inicio do Jogo
        // Declaração de Variaveis
            int numPlayers = msgIni();    /* Iniciado em Dois para situar o caso base do Select Players */
            int numMesa = 4;              /* Iniciando o valor da mesa para o padrão do jogo */
        // Iniciando a mão dos Jogadores
            Pilha* monteCartas = pilhaCriar();
            Lista* baralhoJogadores[numPlayers];
            int points[numPlayers];
            Fila *mesa[numMesa];
            iniGame(baralhoJogadores, monteCartas, numPlayers);
            iniMesa(mesa,monteCartas,numMesa);
        // Iniciando a mesa
            loopGame(baralhoJogadores,monteCartas,mesa,numMesa, points, numPlayers);
    // Loop do Jogo             |TO DO|
            //loopGame()
        // Round Logic          |TO DO|
            // Jogar            |TO DO|
                // Players      |TO DO|
                // Bots         |TO DO|
                // Verificação  |TO DO|
        // Contagem de Pontos   |TO DO|
        // Checagem de Vitoria  |TO DO|
    // Fim de Jogo              |TO DO|
        // Dizer Pontuação      |TO DO|
    return 0;
}
