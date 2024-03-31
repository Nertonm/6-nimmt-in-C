#include "gameLogic.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Inicio do Jogo
            //Selecionando o numero de Jogadores
            int numPlayers = msgIni();               
            int numMesa = 4;              /* Iniciando o valor da mesa para o padrão do jogo */
        // Iniciando as Estruturas
            Pilha* monteCartas = pilhaCriar();
            pilhaEmbaralhar(monteCartas);
            Lista* baralhoJogadores[numPlayers];
            Lista* pontosJogadores[numPlayers];
            Fila *mesa[numMesa];
            iniGame(baralhoJogadores, monteCartas, numPlayers, pontosJogadores);
        // Iniciando a mesa
            iniMesa(mesa,monteCartas,numMesa);
        // Loop do Jogo
            loopGame(baralhoJogadores,monteCartas,mesa,numMesa, numPlayers,pontosJogadores);
        // Fim do Jogo    
            endGame(pontosJogadores, numPlayers);
    return 0;
}
