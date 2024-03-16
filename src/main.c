#include "main.h"

/*
Estruturas necessárias no main:
- Mão (Lista *), sempre com cinco cartas: joga uma e compra uma
- Mesa (Fila **), é um vetor de Filas, use alocação dinâmica
- Baralho (Pilha *), inicia com 104 cartas embaralhadas, depois distribui 4 para mesa e 10 para cada jogador
- Coleção dos Jogadores (Lista **), vetor de Listas contendo as cartas adquiridas por cada jogador, use alocação dinâmica
*/

// To Do
struct hand{

};
// To Do
struct mesa{

};
// To Do
struct baralho{

};
// To Do
struct players{
};

int main()
{
    Fila* aaa = filaCriar();
    Carta bbb; bbb.num = 1;
    Carta ccc; ccc.num = 2;
    filaInserir(aaa,ccc);
    filaInserir(aaa,bbb);
    filaExibir(aaa);
    //Pilha ttt = pilhaCriar();
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
    // To Do
//    printf("Aa");
    return 0;
}
