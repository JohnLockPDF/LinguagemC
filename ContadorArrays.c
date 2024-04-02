#include <stdio.h>

/*O programa Lê, armazena  e exibe  50 numeros informados pêlo Usuário */

int main() {
    int i;
    int numeros[50];

    // Lendo os números
    printf("Digite 50 números:\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &numeros[i]);
    }

    // Exibindo os números lidos
    printf("Os números digitados foram:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}