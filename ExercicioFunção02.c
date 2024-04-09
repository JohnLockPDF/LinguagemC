#include <stdio.h>

/*Crie  um  programa  onde  o  usuário  digita  dois  valores  e  imprima  na  tela  a  soma 
destes valores na tela, utilizando uma função do tipo int. */

int Soma(int x, int y)
{int s;
    s = x + y;
    return s;
}

int main()
{
    int NumeroA, NumeroB, Resultado;

    printf("informe os dois numeros:\n");

    scanf("%d%d", &NumeroA, &NumeroB);

Resultado = Soma(NumeroA, NumeroB);

printf("A soma dos numeros;  %d + %d = %d", NumeroA, NumeroB, Resultado);

return 0;
}

