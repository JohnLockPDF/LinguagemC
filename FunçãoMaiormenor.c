#include <stdio.h>

// Protótipo da função para encontrar o maior e o menor valor
void encontrarMaiorEMenor(int valores[], int tamanho);

int main() {
    int valores[5];
    
    printf("Digite cinco valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }
    
    encontrarMaiorEMenor(valores, 5);
    
    return 0;
}

// Definição da função para encontrar o maior e o menor valor
void encontrarMaiorEMenor(int valores[], int tamanho) {
    int maior = valores[0];
    int menor = valores[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
}