#include "gameLogic.h"
#include <stdio.h>
#include <stdlib.h>

void msgIni(){
    // Estilo da Arte ASCII e de 40 carcters//
    printf(" #####                                  \n");
    printf("#     #    #    # # #    # #    # ##### \n");
    printf("#          ##   # # ##  ## ##  ##   #   \n");
    printf("######     # #  # # # ## # # ## #   #   \n");
    printf("#     #    #  # # # #    # #    #   #   \n");
    printf("#     #    #   ## # #    # #    #   #   \n");
    printf(" #####     #    # # #    # #    #   #   \n");
};

void iniGame(Lista* baralhoJogadores[],Pilha* monteCartas, int numPlayers){
    // Declaração de Variaveis
            int cartasInicias = 10; /* Numero de Cartas a serem puxadas no Inicio */
            int ROUNDS=10;          /* Numero max de partidas */
            int FILAS= 4;           /* estabelece o nummero de filas da mesa*/
    // Mensagem Inicial
    msgIni();
    // Inicialização do Jogo
        // Selecionando o Numero de Jogadores
        do {
            printf("========================================\n");
            if (numPlayers < 2 || numPlayers > 10)
                printf("|           Selecione Novamente        |\n");
            printf("|           Quantos Jogadores?         |\n");
            printf("========================================\n");
            scanf("%i",&numPlayers);
        } while (numPlayers < 2 || numPlayers > 10);
            pilhaEmbaralhar(monteCartas);
            for (int i = 0; i < numPlayers; i++)
                baralhoJogadores[i] = listaCriar();
            Carta *cartaPtr = (Carta*)malloc(sizeof(Carta));
            for (int i = 0; i < numPlayers ; i++){
                for (int j = 0; j < cartasInicias; j++){
                    pilhaRemover(monteCartas, cartaPtr);
                    Carta puxada = *cartaPtr;
                    inserirOrdenado(baralhoJogadores[i], puxada);
                }
            }
        free(cartaPtr);
};
void iniMesa(Fila** mesa, Pilha* monteCartas, int numMesa){
        for (int i = 0; i < numMesa; i++)
            mesa[i] = filaCriar();
        Carta *cartaPtr = (Carta*)malloc(sizeof(Carta));
        for (int i = 0; i < numMesa ; i++){
                pilhaRemover(monteCartas, cartaPtr);
                Carta puxada = *cartaPtr;
                filaInserir(mesa[i], puxada);
        }
        free(cartaPtr);
};
void printMesa(struct fila **mesa, int numMesa){
    for (int i = 0; i < numMesa; i++)
         filaExibir(mesa[i]);
    return;
};
void loopGame(Lista* baralhoJogadores[], Pilha* monteCartas, Fila** mesa){
    return;
};
