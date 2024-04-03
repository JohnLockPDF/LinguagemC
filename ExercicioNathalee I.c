#include <stdio.h>

/*Faça um programa que lê cinco valores inteiros, armazene em um vetor, calcule e apresente o resultado da soma dessses valores*/

int main()
{
int Granary[5];
int Sum = 0;
int i = 0;

    printf("Enter the five values:\n");

for ( i = 0; i < 5; i++)
{

    scanf("%d", &Granary[i]);

    Sum += Granary[i];

}
    printf("The sum of the values is %d:\n", Sum);


}