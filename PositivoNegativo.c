#include <stdio.h>

/*  Escreva um programa que solicita e lê um valor inteiro e informa se ele é positivo, 
negativo ou neutro. */

int main()
{
    int numero;

    printf("Informe o numero a ser avaliado:\n");
    scanf("%d", &numero);

    if (numero == 0)
    {
        printf("Este numero EH neutro.\n");
    }
    else if (numero > 0)
    {
        printf("Este numero EH positivo.\n");
    }
    else 
    {
        printf("Este numero EH negativo.\n");
    }

    return 0;
    
    
}