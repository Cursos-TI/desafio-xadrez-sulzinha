#include <stdio.h>
void movimentoRainha_2( char movimentoR_2[],int casas){
    if (casas > 0){
        movimentoRainha_2(movimentoR_2, casas - 1);
        printf("%s\n", movimentoR_2);

    }
}
int main() {

    int opcao;
    char movimentoB_1, movimentoT_1, movimentoC_1, movimentoR_1;
    int movimentoB_2, movimentoT_2, movimentoC_2 = 2, movimentoR_2;
    //inferior => para baixo e superior => para cima

    printf("Selecione a peça que você quer mover:\n");
    printf("1) Bispo\n");
    printf("2) Torre\n");
    printf("3) Cavalo\n");
    printf("4) Rainha\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:

            printf("Você escolheu BISPO\n");
            printf("Escolha o movimento:\n");
            printf("a)Diagonal Inferior Direita\n");
            printf("b) Diagonal Inferior Esquerdo  \n");
            printf("c)Diagonal Superior direito\n");
            printf("d)Diagonal Superior esquerdo\n");

            scanf(" %c", &movimentoB_1);

            printf("Digite quantos mvimentos quer fazer:\n");
             scanf(" %d", &movimentoB_2);

            switch(movimentoB_1)
            {
                case 'a':

                    for(int i = 1; i <= movimentoB_2; i++)
                    {
                        printf("Movimento %d: Diagonal Inferior Direita\n", i);
                    }

                    break;

                case 'b':
            
                    for(int i = 1; i <= movimentoB_2; i++)
                    {
                        printf("Movimento %d: Diagonal Inferior Esquerdo\n", i);
                    }

                    break;

                case 'c':
                    printf("Digite quantos mvimentos quer fazer:\n");
                    scanf(" %d", &movimentoB_2);
                    for(int i = 1; i <= movimentoB_2; i++)
                    {
                        printf("Movimento %d: Diagonal Superior Direito\n", i);
                    }

                    break;

                case 'd':
                    printf("Digite quantos mvimentos quer fazer:\n");
                    scanf(" %d", &movimentoB_2);
                    for(int i = 1; i <= movimentoB_2; i++)  
                    {
                        printf("Movimento %d: Diagonal Superior Esquerdo\n", i);  
                    }

                    break;

                default:
                    printf("Movimento inválido!\n");
            }

            break;

        case 2:
            printf("Você escolheu TORRE\n");
            printf("Escolha o movimento:\n");
            printf("a) Inferior Direita\n");
            printf("b) Inferior Esquerdo  \n");
            printf("c)Superior direito\n");
            printf("d)Superior esquerdo\n");

            scanf(" %c", &movimentoT_1);

            printf("Digite quantos mvimentos quer fazer:\n");
             scanf(" %d", &movimentoT_2);

            switch(movimentoT_1)
            {
                case 'a':

                    for(int i = 1; i <= movimentoT_2; i++)
                    {
                        printf("Movimento %d: Inferior Direita\n", i);
                    }

                    break;

                case 'b':
            
                    for(int i = 1; i <= movimentoT_2; i++)
                    {
                        printf("Movimento %d: Inferior Esquerdo\n", i);
                    }

                    break;

                case 'c':
                    printf("Digite quantos mvimentos quer fazer:\n");
                    scanf(" %d", &movimentoT_2);
                    for(int i = 1; i <= movimentoT_2; i++)
                    {
                        printf("Movimento %d: Superior Direito\n", i);
                    }

                    break;

                case 'd':
                    printf("Digite quantos mvimentos quer fazer:\n");
                    scanf(" %d", &movimentoT_2);
                    for(int i = 1; i <= movimentoT_2; i++)  
                    {
                        printf("Movimento %d: Superior Esquerdo\n", i);  
                    }

                    break;

                default:
                    printf("Movimento inválido!\n");
            }

            break;

        case 3:
            printf("Você escolheu CAVALO\n");
            printf("Escolha o movimento:\n");
            printf("a) L para inferior direita\n");
            printf("b) L para inferior esquerda  \n");
            printf("c) L para superior direita\n");
            printf("d) L para superior esquerda\n");

            scanf(" %c", &movimentoC_1);


            switch(movimentoC_1)
            {
                case 'a':

                    for(int i = 1; i < movimentoC_2; i++)
                    {
                        printf("Movimento %d: L para inferior direita\n", i);

                      for(int i = 0; i < 2; i++)
                      {
                        printf("baixo\n", i);
                      }
                      printf("Direita\n");
                    }

                    break;

                case 'b':
            
                    for(int i = 1; i < movimentoC_2; i++)
                    {
                        printf("Movimento %d: L para inferior esquerda\n", i);
                        for(int i = 0; i < 2; i++)
                      {
                        printf("baixo\n", i);
                      }
                      printf("esquerda\n");
                    }

                    break;

                case 'c':
                    for(int i = 1; i < movimentoC_2; i++)
                    {
                        printf("Movimento %d: L para superior direita\n", i);
                        for(int i = 0; i < 2; i++)
                      {
                        printf("cima\n", i);
                      }
                      printf("Direita\n");
                    }

                    break;

                case 'd':
                    
                    for(int i = 1; i < movimentoC_2; i++)  
                    {
                        printf("Movimento %d: L para superior esquerda\n", i); 
                        for(int i = 0; i < 2; i++)
                      {
                        printf("Cima\n", i);
                      }
                      printf("Esquerda\n"); 
                    }

                    break;

                default:
                    printf("Movimento inválido!\n");
            }

            break;

        case 4:
            printf("Você escolheu RAINHA\n");
            printf("Escolha o movimento:\n");
            printf("a) Diagonal Inferior Direita\n");
            printf("b) Diagonal Inferior Esquerdo  \n");
            printf("c) Diagonal Superior direito\n");
            printf("d) Diagonal Superior esquerdo\n");
            printf("e) Inferior ou para trás \n");
            printf("f) Superior ou para cima  \n");
            printf("g) Direita\n");
            printf("h) Esquerda\n");
            scanf(" %c", &movimentoR_1);

    printf("Digite quantas casas deseja mover:\n");
    scanf("%d", &movimentoR_2);

    switch(movimentoR_1)
    {
        case 'a':
            printf("Diagonal Inferior Direita\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        case 'b':
            printf("Diagonal Inferior Esquerda\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        case 'c':
            printf("Diagonal Superior Direita\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        case 'd':
            printf("Diagonal Superior Esquerda\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        case 'e':
            printf("Baixo\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        case 'f':
            printf("Cima\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        case 'g':
            printf("Direita\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        case 'h':
            printf("Esquerda\n");
            movimentoRainha_2(movimentoR_2, casas);
            break;

        default:
            printf("Movimento inválido!\n");
    }

    break;

        default:
            printf("Peça inválida!\n");
    }

    return 0;
}
