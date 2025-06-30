#include <stdio.h>


// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    
    int tabuleiro[10][10];
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Iniciar cabeçalho de letras
    int k = 0;
    printf("   ");

    while (k < 10)
    {
        printf(" %c ", letras[k]);
        k++;
    }
    
    printf("\n");

    //Inicializar tabuleiros com os Navios.

    for(int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1); // Imprime cabeçalho de numeros laterais. i + 1 para ir de 1 até 10 pois 'i' inicializa com 0.

        for(int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;

            // imprime barco horizontal F1-G1-H1
            if((i == 0 && j == 5) ||
                    (i == 0 && j == 6) ||
                        (i == 0 && j == 7))
            {
                tabuleiro[i][j] = 3;
                // imprime barco vertical F5-F6-F7
            }else  if((i == 4 && j == 5) ||  
                         (i == 5 && j == 5) ||
                            (i == 6 && j == 5))
            {
                    tabuleiro[i][j] = 3;
            }
            
            if (i + j == 9 && i < 3 && j > 6)
            {
                
               tabuleiro[i][j] = 3;
            }
            
            
            
            printf(" %d ", tabuleiro[i][j]);

        }
        printf("\n");
    }



    













    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
