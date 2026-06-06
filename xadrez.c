#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int opcao;

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
    for (int bispo = 0; bispo < 5; bispo++){
        printf("Diagonal superior Direito \n");
    }
    break;
    

    // implementação de movimentação da torre
    case 2:
    printf("Você selecionou TORRE\n\n");
    for (int torre = 0; torre < 5; torre++){
        printf("Superior Direito\n");
    }
    break;

    //implementação de movimentação da rainha
    case 3:
    printf("Você selecionou RAINHA\n\n");
    for (int rainha = 0; rainha < 5; rainha++){
        printf("superior Direito \n");
    }
    break;
}
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
