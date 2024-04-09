#include <stdio.h>

/*1. Implementar  a  função  maior  que  devolve  o  maior  de  dois  números  inteiros 
passados como parâmetro.*/

void MN(int x, int y)
{
    if (x > y)
    {
        printf("O numero %d EH o maior\n", x);
    }
    else
    {
        printf("O numero %d EH o maior\n", y);
    }
    
}

int main()
{
int Numero1, Numero2;

printf("Informe os dois numeros:\n");

scanf("%d%d", &Numero1, &Numero2);

 MN(Numero1, Numero2);

 return 0;
}