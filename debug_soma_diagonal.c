#include <stdio.h>

int main() {
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int soma = 0;
    int i;



    // Soma dos elementos da diagonal principal
    for ( i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }


    // Exibição da soma da diagonal principal
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}