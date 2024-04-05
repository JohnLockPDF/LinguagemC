#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Universidade Federal Rural Do Semi-Árido
    Disciplina: Algoritmo e programação*/
       
	    /*Este programa calcula a soma entre dois números*/

 float Percentagem(int x, int y)
{
	return (float) (x * y)/ 100;
}

 int main(int arg, char *argv[])
{
 setlocale(LC_ALL, "Portuguese");

 int NumberOne;
 int NumberTwo;
 float Resultado;

		 printf("Digite os valores\n");
		 
	scanf("%d%d", &NumberOne, &NumberTwo);
		 
	Resultado = Percentagem(NumberOne, NumberTwo);
		 
		 printf("Como Percentagem de %d sobre %d temos : %.2f\n", NumberOne, NumberTwo, Resultado);
		 
 system("pause");
 return 0;
}
