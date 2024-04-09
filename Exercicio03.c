#include <stdio.h>

/*Crie  um  programa  onde  o  usuário  digita  dois  valores  e  imprima  na  tela  a  soma 
destes valores na tela, utilizando uma função do tipo void*/

void Soma(int x, int y)
{
printf("A soma de %d + %d EH = %d", x, y, x+y);
}
    


int main()
{
    int numero1, numero2;

    printf("Informe os dois numeros\n");

    scanf("%d%d", &numero1, &numero2);

    Soma(numero1, numero2);
}