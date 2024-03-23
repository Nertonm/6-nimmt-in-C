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
int main()
{
    // Inicio do Jogo
        // Declaração de Variaveis
            int numPlayers = msgIni();    /* Iniciado em Dois para situar o caso base do Select Players */
            int numMesa = 4;              /* Iniciando o valor da mesa para o padrão do jogo */
        // Iniciando as Estrutura precisas
            Pilha* monteCartas = pilhaCriar();
            Lista* baralhoJogadores[numPlayers];
            Lista* pontosJogadores[numPlayers];
            Fila *mesa[numMesa];
            iniGame(baralhoJogadores, monteCartas, numPlayers);
        // Iniciando a mesa
            iniMesa(mesa,monteCartas,numMesa);
    // Loop do Jogo
            loopGame(baralhoJogadores,monteCartas,mesa,numMesa, numPlayers);
        // Contagem de Pontos   |TO DO|
        // Checagem de Vitoria  |TO DO|
    // Fim de Jogo              |TO DO|
        // Dizer Pontuação      |TO DO|
    return 0;
}
