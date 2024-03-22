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
            int numPlayers = 2;     /* Iniciado em Dois para situar o caso base do Select Players */
            int numMesa = 4;        /* Iniciando o valor da mesa para o padrão do jogo */
        // Iniciando a mão dos Jogadores
            Lista* baralhoJogadores[numPlayers];
            Pilha* monteCartas = pilhaCriar();
            iniGame(baralhoJogadores, monteCartas, numPlayers);
        // Iniciando a mesa e imprimindo
            Fila *mesa[numMesa];
            iniMesa(mesa, monteCartas, numMesa);

    // Loop do Jogo             |TO DO|
                // printa a mesa e a mao do jogador, pede pra ele escolher uma carta e qual*/
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
