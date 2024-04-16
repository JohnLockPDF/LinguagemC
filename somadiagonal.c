#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    int i, j;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma dos elementos da diagonal principal
    for ( i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    // Exibição da matriz
    printf("Matriz inserida:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibição da soma da diagonal principal
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}