#include <stdio.h>

/*Alteração do programa VetorSoma*/

int main()
{
int Granary[5];
int Sum = 0;
int i = 0;
float Avarage;

    printf("Enter the five values:\n");

for ( i = 0; i < 5; i++)
{
    scanf("%d", &Granary[i]);
    Sum += Granary[i];
}
    printf("The sum of the values is %d:\n", Sum);

    Avarage = Sum/5;

    printf("The sum of the avarage was %.2f:\n", Avarage);

    for ( i = 0; i < 5; i++)
    {
        if (Granary[i] < Avarage)
        {
            printf("The number %d is slow than Avarage\n", Granary[i]);
        }
        else
        {
            printf("\n\nThe number %d is higher than Avarage", Granary[i]);
        }
    }
    
}