#include <stdio.h>

/*Crie um programa onde o usuário digita três valores e imprima na tela o menor 
valor, devendo para isso, criar uma  função Menor do tipo void que imprime na 
tela o menor valor. */


void Menor( int x, int y, int z)
{
     if (x < y && x < z)
{
    printf("O numero %d foi o menor\n", x);
}
 else if (y < x && y < z)
{
    printf("O numero %d foi o menor\n", y);
}
 else
{
    printf("O numero %d foi o menor\n", z);
}
}

int main()
{
    int num1, num2, num3;

    printf("informe os valores:\n");

    scanf("%d%d%d", &num1, &num2, &num3);

    Menor(num1,num2,num3);

    return 0;
}
