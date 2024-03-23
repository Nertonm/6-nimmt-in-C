#include "gameLogic.h"
#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"

int msgIni(){

    // Selecionando o Numero de Jogadores
        int numPlayers = 2;
        do {
            printf("                                    .@                                                                  \n");
            printf("                                     #@#          .::@@@@-           *+                                 \n");
            printf("                                      *@@@#-  -=-:    -+# +@+          #@.                              \n");
            printf("                                        .@@@@@@@@@           :@*         @@-                            \n");
            printf("                                           *@@@@@@-             #@#+.  :@@@@                            \n");
            printf("                                          =@  .-##   :*           . @@@@@@@*                            \n");
            printf("                                       .@-       -#@-             :@@@@@@                               \n");
            printf("                                      +@      *#       @@@.        @@                                   \n");
            printf("                                     @@       #         @ +@       @=                                   \n");
            printf("                                      =@@    ::     :    @@@@     .@#                                   \n");
            printf("                                        #@.   =     #        .      =@                                  \n");
            printf("                                         :@.  =     @        =       :@-                                \n");
            printf("                                           @# :=   =@              +*.:@@#                              \n");
            printf("                                             -@#=   :#.          *-       @=                            \n");
            printf("                                               +@@+       :   +:  -@  *@.-@.                            \n");
            printf("                                                 : -*@@@#=:  ##  =  @:  .-@                             \n");
            printf("                                                           -#@@   :     -@                              \n");
            printf("                                                              @@@@@@@@@@#                               \n");
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
                    //Inicializar em sequencia
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
void insertMesa(Fila** mesa, Carta* cartaPtr, int numMesa, int isPlayer){
    int insert = -1, selec = 104, tam;
    Carta cartaAux = *cartaPtr;
    for (int i = 0; i < numMesa; i++){
        filaAcessar(mesa[i],cartaPtr);
        int dif = abs(cartaAux.num - cartaPtr->num);
        if(dif < selec && cartaAux.num > cartaPtr->num){
            selec = dif;
            insert = i;
            tam = filaTamanho(mesa[insert]);
        }
    }
    if(insert != -1){
        if (tam == 5){
            for(int i = 0; i < tam; i++){
                filaRemover(mesa[insert],cartaPtr);
                //points += cartaPtr->boi;
            }
        }
        if (mesa)
            filaInserir(mesa[insert], cartaAux);
        return;
    }
    if (isPlayer){
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
    // FALTA AS VERIFICAções
    tam = filaTamanho(mesa[insert]);
    for(int i = 0; i < tam; i++){
        filaRemover(mesa[insert],cartaPtr);
        //points += cartaPtr->boi;
    }
    filaInserir(mesa[insert], cartaAux);
};
void loopGame(Lista** baralhoJogadores, Pilha* monteCartas, Fila** mesa, int numMesa, int numPlayers){
     // Round Logic
     for (int i = 0; i < 10; i++){
        int isPlayer = 1;
                // Verificação  |TO DO|
        // Printing
        printMesa(mesa, numMesa);
        printMao(baralhoJogadores);
        // Jogar
            int selec;
            do{
                printf("\n");
                printf("========================================\n");
                printf("|           Qual carta jogar ?         |\n");
                printf("========================================\n");
                scanf("%i",&selec);
            }while (selec < 1 || selec > 10);
            selec = selec - 1;
    Carta *cartaPtr = (Carta*)malloc(sizeof(Carta));
            // Player
                acessarIndice(baralhoJogadores[0],selec,cartaPtr);
                removerIndince(baralhoJogadores[0],selec);
                insertMesa(mesa,cartaPtr,numMesa,isPlayer);
                printf("========================================\n");
                printf("|           Mesa apos jogadas          |\n");
                printf("========================================\n");
            // Bots
                isPlayer = 0;
                for (int i = 1; i < numPlayers; i++){
                        selec = (rand() % 10) + 1;
                        acessarIndice(baralhoJogadores[i],selec,cartaPtr);
                        removerIndince(baralhoJogadores[i],selec);
                        // Fazer um vetor com as cartas mais baixas para jogar em sequencia
                        insertMesa(mesa,cartaPtr,numMesa,isPlayer);
                }
    }
};
