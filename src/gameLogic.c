#include "gameLogic.h"
#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"
#include <time.h>

int msgIni(){

    // Selecionando o Numero de Jogadores
        int numPlayers = 2;
        do {
            printf(".@                                      \n");
            printf(" #@#          .::@@@@-           *+     \n");
            printf("  *@@@#-  -=-:    -+# +@+          #@.  \n");
            printf("    .@@@@@@@@@           :@*         @@-\n");
            printf("       *@@@@@@-             #@#+.  :@@@@\n");
            printf("      =@  .-##   :*           . @@@@@@@*\n");
            printf("   .@-       -#@-             :@@@@@@   \n");
            printf("  +@      *#       @@@.        @@       \n");
            printf(" @@       #         @ +@       @=       \n");
            printf("  =@@    ::     :    @@@@     .@#       \n");
            printf("    #@.   =     #        .      =@      \n");
            printf("     :@.  =     @        =       :@-    \n");
            printf("       @# :=   =@              +*.:@@#  \n");
            printf("         -@#=   :#.          *-       @=\n");
            printf("           +@@+       :   +:  -@  *@.-@.\n");
            printf("             : -*@@@#=:  ##  =  @:  .-@ \n");
            printf("                       -#@@   :     -@  \n");
            printf("                          @@@@@@@@@@#   \n");
            printf("========================================\n");
            if (numPlayers < 2 || numPlayers > 10)
                printf("|           Selecione Novamente        |\n");
            printf("|           Quantos Jogadores?         |\n");
            printf("========================================\n");
            scanf("%i",&numPlayers);
        } while (numPlayers < 2 || numPlayers > 10);
        return numPlayers;
};

void iniGame(Lista* baralhoJogadores[],Pilha* monteCartas, int numPlayers, Lista* pontosJogadores[]){
    // Declaração de Variaveis
            int cartasInicias = 10; /* Numero de Cartas a serem puxadas no Inicio */
            Carta carta;
    // Inicialização do Jogo
            for (int i = 0; i < numPlayers; i++){
                baralhoJogadores[i] = listaCriar();
                pontosJogadores[i] = listaCriar();
            }
            for (int i = 0; i < numPlayers ; i++){
                for (int j = 0; j < cartasInicias; j++){
                    pilhaRemover(monteCartas, &carta);
                    inserirOrdenado(baralhoJogadores[i], carta);
                }
            }
};
void iniMesa(Fila** mesa, Pilha* monteCartas, int numMesa){
        for (int i = 0; i < numMesa; i++)
            mesa[i] = filaCriar();
        Carta cartaPtr;
        for (int i = 0; i < numMesa ; i++){
                pilhaRemover(monteCartas, &cartaPtr);
                filaInserir(mesa[i], cartaPtr);
        }
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
    printf("Your Colection:\nHand:");
    exibir(baralhoJogadores[0]);
};
void insertMesa(Fila** mesa, Carta cartaPtr, int numMesa, int isPlayer, Lista** pontosJogadores){
    int insert = -1, selec = 104, tam;
    Carta cartaPtr2;
    for (int i = 0; i < numMesa; i++){
        tam = filaTamanho(mesa[i]);
        filaAcessar(mesa[i],&cartaPtr2);
        int dif = abs(cartaPtr.num - cartaPtr2.num);
        if(dif < selec && cartaPtr.num > cartaPtr2.num){
            selec = dif;
            insert = i;
        }
    }
    if(insert != -1){
        tam = filaTamanho(mesa[insert]);
        if (mesa[insert])
            filaInserir(mesa[insert], cartaPtr);
        if (tam == 5){
            for(int i = 0; i < tam; i++){
                filaRemover(mesa[insert], &cartaPtr2);
                inserirOrdenado(pontosJogadores[cartaPtr.player], cartaPtr2);
            }
        }
        return;
    }
    if (!cartaPtr.player){
        do{
            printf("========================================\n");
            printf("|           Qual Fila puxar  ?         |\n");
            printf("========================================\n");
            scanf("%i",&insert);
        } while (insert < 1|| insert > 4);
        insert--;
    }else{
        insert = (rand() % 4);
    }
    tam = filaTamanho(mesa[insert]);
    for(int bbb = 0; bbb < tam; bbb++){
        filaRemover(mesa[insert], &cartaPtr2);
        inserirOrdenado(pontosJogadores[cartaPtr.player], cartaPtr2);
    }
    filaInserir(mesa[insert], cartaPtr);
};
void loopGame(Lista** baralhoJogadores, Pilha* monteCartas, Fila** mesa, int numMesa, int numPlayers, Lista** pontosJogadores){
     // Round Logic
    srand(time(0));
    int selec, isPlayer,aaa;
    Carta cartaPtr;
    Lista *ordemCartas = listaCriar();
    for ( aaa = 0; aaa < 10; aaa++){
        isPlayer = 1;
        // Printing
        printMesa(mesa, numMesa);
        printMao(baralhoJogadores);
        // Rounds
            // Player Choice
            selec = 0;
            do{
                printf("\n");
                printf("========================================\n");
                printf("|           Qual carta jogar ?         |\n");
                printf("========================================\n");
                scanf("%i",&selec);
            }while (selec < 1 || selec > 10 - aaa);
            selec--;
            // Player
                acessarIndice(baralhoJogadores[0],selec,&cartaPtr);
                cartaPtr.player = 0;
                inserirOrdenado(ordemCartas,cartaPtr);
                removerIndince(baralhoJogadores[0],selec);

            // Bots
                isPlayer = 0;
                for (int j = 1; j < numPlayers; j++){
                        do selec = ((rand() % 10) - aaa);
                        while (selec < 0);
                        acessarIndice(baralhoJogadores[j],selec,&cartaPtr);
                        cartaPtr.player = j;
                        inserirOrdenado(ordemCartas,cartaPtr);
                        removerIndince(baralhoJogadores[j],selec);
                }
                Carta cartaPtr2;
                printf("========================================\n");
                printf("|           CARTAS JOGADAS:            |\n");
                printf("========================================\n");
                exibir(ordemCartas);
                printf("\n");
                printf("========================================\n");
                printf("|           Mesa apos jogadas          |\n");
                printf("========================================\n");
                for (int v = 0; v < numPlayers; v++){
                    acessarIndice(ordemCartas, 0, &cartaPtr2);
                    removerIndince(ordemCartas, 0);
                    insertMesa(mesa, cartaPtr2, numMesa, isPlayer, pontosJogadores);
                }

    }
};

void endGame(Lista** pontosJogadores, int numPlayers){
    for (int i = 0; i < numPlayers; i++){
        printf("JOGADOR %d:\n",i+1);
        exibir(pontosJogadores[i]);
        printf("\n");
    }
}
