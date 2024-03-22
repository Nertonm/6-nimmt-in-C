#include "main.h"
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
    // Inicialização do Jogo
    // Declaração de Variaveis
            int numPlayers = 2;     /* Iniciado em Dois para situar o caso base do Select Players */
        // Selecionando o Numero de Jogadores
        // Iniciado o Baralho dos Jogadores
            // Criando o Monte Cartas na memoria e Embaralhando
                Fila* baralhoJogadores[numPlayers];
                Pilha* monteCartas = pilhaCriar();
                iniGame(Fila* baralhoJogadores[numPlayers],Pilha* monteCartas, numPlayers){
            // Mesa do Jogo
                Fila **mesa = (Fila**)malloc(FILAS* sizeof(Fila*));
                // TO DO
                /*for(int i=0;i<FILAS;i++){
                    mesa[i]=
                }*./
    // Loop do Jogo             |TO DO|
            for(int i=0;i<ROUNDS;i++);{
                for(int i = 0; i<14; i++)
                    printf("\n");
                printf("ROUND %d \n",i+1);
                system("cls"); /*limpa a tela*/
                // printa a mesa e a mao do jogador, pede pra ele escolher uma carta e qual

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
