#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Universidade Federal Rural Do Semi-Árido
    Disciplina: Algoritmo e programação*/
        /*inicializar vetor com 50 posições*/

//Váriaveis Globais e Funções.

 int main()
{
 setlocale(LC_ALL, "Portuguese");
	int vetor[10];
	int i = 0;
	
	for(i = 0; i < 10;i++)
	{
		vetor[i] = i+1;
	}
	for(i = 0; i < 10; i++)
{
	printf("%d\n", vetor[i]);
}
	
 system("pause");
 return 0;
}