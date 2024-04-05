#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Universidade Federal Rural Do Semi-Árido
    Disciplina: Algoritmo e programação*/
       
	    /*Este programa calcula a soma entre dois números*/

 int soma(int x, int y)
{
	return x + y;
}

 int main(int arg, char *argv[])
{
 setlocale(LC_ALL, "Portuguese");

 int NumberOne;
 int NumberTwo;
 int Sum;

		 printf("Digite os valores para a soma:\n");
		 
	scanf("%d%d", &NumberOne, &NumberTwo);
		 
	Sum = soma(NumberOne, NumberTwo);
		 
		 printf("Como resultado da soma entre %d + %d temos : %d\n", NumberOne, NumberTwo, Sum);
		 
 system("pause");
 return 0;
}