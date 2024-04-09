#include <stdio.h>

/*Crie  um  programa  onde  o  usuário  digita  três  valores  e  imprima  na  tela  o maior 
valor, devendo para isso, criar uma função Maior do tipo int que retorna o maior 
dos três valores.*/

int Maior(int x, int y, int z)
{ int res = 0;
    if (x > y && x > z)
    {
        res = x;
    }
    if (y > x && y > z)
    {
        res = y;
    }
    else 
    {
        res = z;
    }
     return res;
}

int main()
{
    int n1, n2 , n3, maior;

    printf("Informe os valores:\n");

    scanf("%d%d%d",&n1,&n2,&n3);

    maior = Maior(n1,n2,n3);

    printf("o valor maior foi: %d \n",maior);
}