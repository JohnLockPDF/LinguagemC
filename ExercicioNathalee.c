#include <stdio.h>

/*Faça um programa que leia 60 numeros inteiros armazene-os em um vetor, solicite um valor de referencia inteiro e:
A = informe quais valores do vetor são maiores que a referencia dada.
B = retorne quantos numeros do vetor são menores que a referencia dada.
C = retorne quantas vezes o valor da referencia dada aparece no vetor*/

int main(int argc, char const *argv[])
{
    int myNumbers[6];
    int i = 0;
    int Rnumber;
    int Lower = 0;
    int Equal = 0;
    
    for ( i = 0; i < 6; i++)//neste laço é realizada a coleta dos numeros e o armazenamento no vetor myNumbers.
   {
       printf("informe os numeros\n");

       scanf("%d", &myNumbers[i]);// Cada valor de i respresenta o (indice) de armazenamento neste vetor.
   }

    printf("informe o numero de referencia\n");

    scanf("%d", &Rnumber);

     system("cls");

     for ( i = 0; i < 6; i++)// Este laço realiza a comparação dos inteiros e exibe os maiores que Rnumbers.
    {
      
    if ( myNumbers[i]> Rnumber) 
        {
           printf("O umero %d EH maior que a referencia dada.\n", myNumbers[i]);
        }
    if (myNumbers[i]< Rnumber) //Este compara os numeros e armazena os menores na variavel lower.
        {
           Lower += 1;
        }
    if (myNumbers[i]== Rnumber) //este loop compara igualdade e armazena na variavel Equal
    {
        Equal += 1;
    }
        
    }
         printf("\n");
         printf("os numeros menores  que a referencia dada foram %d numero/s\n", Lower);
         printf("\n");
         printf("Os numeros que foram iguais ao da referencia foram: %d numero/s\n", Equal);

    return 0;

}