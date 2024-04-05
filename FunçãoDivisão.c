#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Universidade Federal Rural Do Semi-Árido
    Disciplina: Algoritmo e programação*/
       
	    /*Este programa calcula o resultado da divisão entre dois números*/

 float Dividir(int x, int y)
{
	
	if(x == 0 || y ==0)
	{
		printf("Não é possivél dividir zero ou por zero, Digite um número válido.\n");
		return 0.0;
	}
    return (float)x / y;
	
}

 int main(int arg, char *argv[])
{
 setlocale(LC_ALL, "Portuguese");

 int NumberOne;
 int NumberTwo;
 float Resultado;

		 printf("Digite os números para a divisão:\n");
		 
	scanf("%d%d", &NumberOne, &NumberTwo);
		 
	Resultado = Dividir(NumberOne, NumberTwo);
		 
		 printf("Como resultado da Divisão  entre %d / %d temos : %.2f\n", NumberOne, NumberTwo, Resultado);
		 
 system("pause");
 return 0;
}