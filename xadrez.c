#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int opcao;1
    
    char variavel_1;
    char variavel_2;
    char variavel_3;

    printf("\n\n============JOGO DE XADREZ=================\n\n");
    printf("Selecione a peça que você quer mover:\n");
    printf("1)Bispo\n");
    printf("2)Torre\n");
    printf("3)Rainha\n");
    scanf("%d", &opcao);

 switch (opcao)
{

    // Implementação de Movimentação do Bispo
    case 1:

    printf("Você selecionou BISPO\n\n");
    printf("Selecione a movimentação da sua peça: \n\n");
    printf("a)Diagona para direita cima\n");
    printf("b)Diagonal para Esquerda cima\n");
    printf("c)Diagonal para direita baixo\n");
    printf("d)Diagonal para esquerda baixo\n");
    scanf("%c, &variavel_1");

    for (int bispo = 0;bispo < 5; bispo++){
    switch (variavel_1)
    {
       case 'a':
       case 'A':
        printf("Diagonal para direita cima\n", bispo);

        break;

       case 'b':
       case 'B':
        printf("Diagonal para esquerda cima\n");
        break;

       case 'c':
       case 'C':
        printf("Diagonal para direita baixo\n");
        break;

       case 'd':
       case 'D':
        printf("Diagonal para esquerda baixo\n");
        break;
    }
  }
}


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //for (int torre = 0; torre < 5; torre++)
     // {
     //   printf("direita para cima");
     // }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     //  for (int rainha = 0; rainha < 5; rainha++);
     //  {
     //   printf("Direita para cima");
     //  }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
