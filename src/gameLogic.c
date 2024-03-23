#include "gameLogic.h"
#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"

int msgIni(){

    // Selecionando o Numero de Jogadores
        int numPlayers = 2;
        do {
            printf("========================================\n");
            if (numPlayers < 2 || numPlayers > 10)
                printf("|           Selecione Novamente        |\n");
            printf("|           Quantos Jogadores?         |\n");
            printf("========================================\n");
            scanf("%i",&numPlayers);
        } while (numPlayers < 2 || numPlayers > 10);
        return numPlayers;
};

void iniGame(Lista* baralhoJogadores[],Pilha* monteCartas, int numPlayers){
    // Declaração de Variaveis
            int cartasInicias = 10; /* Numero de Cartas a serem puxadas no Inicio */
            int ROUNDS=10;          /* Numero max de partidas */
    // Inicialização do Jogo
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
    numMesa = 4;
    for (int i = 0; i < numMesa; i++){
         filaExibir(mesa[i]);
         printf("\n");
    }
    return;
};
void printMao(struct lista** baralhoJogadores){
    exibir(baralhoJogadores[0]);
};
void insertMesa(Fila** mesa, Carta* cartaPtr, int numMesa){
    int insert = 0;
    int selec = 104;
    Carta cartaAux = *cartaPtr;
    for (int i = 0; i < numMesa; i++){
        struct fila* tmp = mesa[i];
        filaAcessar(tmp,cartaPtr);
        int dif = abs(cartaAux.num - (*cartaPtr).num);
        if(dif < selec){
            selec = dif;
            insert = i;
        }
    }
    filaInserir(mesa[insert],cartaAux);
};
void loopGame(Lista** baralhoJogadores, Pilha* monteCartas, Fila** mesa, int numMesa){
    printMesa(mesa, numMesa);
    printMao(baralhoJogadores);
    int selec;
    printf("\n");
    do scanf("%i",&selec);
    while (selec < 1 || selec > 10);
    Carta *cartaPtr = (Carta*)malloc(sizeof(Carta));
    acessarIndice(baralhoJogadores[0],selec,cartaPtr);
    removerIndince(baralhoJogadores[0],selec);
    insertMesa(mesa,cartaPtr,numMesa);
    printMesa(mesa, numMesa);
};
