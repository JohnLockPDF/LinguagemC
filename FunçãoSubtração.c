#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Universidade Federal Rural Do Semi-Árido
    Disciplina: Algoritmo e programação*/
       
	    /*Este programa calcula a soma entre dois números*/

 int Subtracao(int x, int y)
{
	return x - y;
}

 int main(int arg, char *argv[])
{
 setlocale(LC_ALL, "Portuguese");

 int NumberOne;
 int NumberTwo;
 int Reasultado;

		 printf("Digite os valores para a subtração:\n");
		 
	scanf("%d%d", &NumberOne, &NumberTwo);
		 
	Reasultado = Subtracao(NumberOne, NumberTwo);
		 
		 printf("Como resultado da subtração entre %d - %d temos : %d\n", NumberOne, NumberTwo, Reasultado);
		 
 system("pause");
 return 0;
}