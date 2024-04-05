#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Universidade Federal Rural Do Semi-Árido
    Disciplina: Algoritmo e programação*/
       
	    /*Este programa calcula o produto da multiplicação entre dois números*/

 int Multiplica(int x, int y)
{
	return x * y;
}

 int main(int arg, char *argv[])
{
 setlocale(LC_ALL, "Portuguese");

 int NumberOne;
 int NumberTwo;
 int Resultado;

		 printf("Digite os números a ser multiplicados\n");
		 
	scanf("%d%d", &NumberOne, &NumberTwo);
		 
	Resultado = Multiplica(NumberOne, NumberTwo);
		 
		 printf("Como produto da multiplicação  entre %d * %d temos : %d\n", NumberOne, NumberTwo, Resultado);
		 
 system("pause");
 return 0;
}

