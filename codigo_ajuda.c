#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Inicializa tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona barco horizontal em A6-A7-A8 (linha 0, colunas 5-6-7)
    tabuleiro[0][5] = 3;
    tabuleiro[0][6] = 3;
    tabuleiro[0][7] = 3;

    // Posiciona barco vertical em E6-F6-G6 (coluna 5, linhas 4-5-6)
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;

    // Imprime cabeçalho (letras)
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("  %c  ", letras[i]);
    }
    printf("\n");

    // Imprime tabuleiro com números laterais
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("  %d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}