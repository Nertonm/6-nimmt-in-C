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
        // Iniciando as Estrutura precisas;
            Pilha* monteCartas = pilhaCriar();
            pilhaEmbaralhar(monteCartas);
            Lista* baralhoJogadores[numPlayers];
            Lista* pontosJogadores[numPlayers];
            Fila *mesa[numMesa];

            /* TESTE LISTA
            // Criando uma lista
            Lista* lista = listaCriar();

            // Inserindo alguns elementos ordenados
            Carta carta1 = {10, 'A'};
            inserirOrdenado(lista, carta1);
            Carta carta2 = {5, 'B'};
            inserirOrdenado(lista, carta2);
            Carta carta3 = {15, 'C'};
            inserirOrdenado(lista, carta3);
            Carta carta4 = {7, 'D'};
            inserirOrdenado(lista, carta4);

            // Exibindo a lista
            printf("Lista após inserir elementos ordenados:\n");
            exibir(lista);

            // Acessando um elemento por índice
            Carta cartaAcessada;
            int indice = 2;
            if (acessarIndice(lista, indice, &cartaAcessada)) {
                printf("\nElemento acessado no índice %d: %d-%c\n", indice, cartaAcessada.num);
            } else {
                printf("\nErro ao acessar o índice %d da lista.\n", indice);
            }

            // Removendo um elemento por índice
            indice = 0;
            if (removerIndince(lista, indice)) {
                printf("\nElemento removido no índice %d.\n", indice);
                exibir(lista);
            } else {
                printf("\nErro ao remover o índice %d da lista.\n", indice);
            }

            // Liberando a memória da lista
            return 0;
            */
            // TESTE FILA
            /*
            Fila* fila = filaCriar();

            // Inserir elementos na fila
              Carta carta1 = {10};
              filaInserir(fila, carta1);
              Carta carta2 = {20};
              filaInserir(fila, carta2);
              Carta carta3 = {30};
              filaInserir(fila, carta3);

          // Exibir a fila
            filaExibir(fila);
            Carta* carta;
            filaRemover(fila,&carta);
          // Remover um elemento da fila
            printf("\n");
            filaExibir(fila);

          // Exibir o tamanho da fila
            int tamanho = filaTamanho(fila);
            printf("%i",tamanho);
            return 0;
            */
            for(int r=0; r<10; r++){
        printf("========================================\n");
        printf("|               ROUND %d               |\n",r+1);
        printf("========================================\n");
            iniGame(baralhoJogadores, monteCartas, numPlayers, pontosJogadores);
        // Iniciando a mesa
            iniMesa(mesa,monteCartas,numMesa);
        // Loop do Jogo
            loopGame(baralhoJogadores,monteCartas,mesa,numMesa, numPlayers,pontosJogadores);
            }
        // Contagem de Pontos   |TO DO|
            endGame(pontosJogadores, numPlayers);
        // Checagem de Vitoria  |TO DO|
    // Fim de Jogo              |TO DO|
        // Dizer Pontuação      |TO DO|
    return 0;
}
