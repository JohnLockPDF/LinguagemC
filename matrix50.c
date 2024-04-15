#include  <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Universidade Federal Rural Do Semi-Árido
    Disciplina: Algoritmo e programação*/
        /*inicializar matriz com 50 posições e exibe conteúdo ao usuario*/

//Váriaveis Globais e Funções.

 int main()
{
 setlocale(LC_ALL, "Portuguese");
int matrix[50][50];
int linha, coluna, i;


    for ( linha = 0; linha < 50 ; linha++)
{
        for ( coluna = 0; coluna < 50; coluna++)
       {
        matrix[linha][coluna] = i+1;
        i++;
       }
}
printf("As 2500 posicoes foram registradas com sucesso.\n\n");
system("pause");
    for ( linha = 0; linha < 50 ; linha++)
{
        for ( coluna = 0; coluna < 50; coluna++)
       {
         printf("%d\n",matrix[linha][coluna]);
         
       }
}
       printf("Processo concluido com exito.\n");

  system("pause");

 return 0;
}