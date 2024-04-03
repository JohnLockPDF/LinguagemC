#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Numbers[10];
    int i;
    
printf("enter the Numbers\n");
    for ( i = 0; i < 10; i++)
    {
       scanf("%d", &Numbers[i]);
    }
    system("cls");

    printf("These are the values in reverse order;\n");

    for ( i = 9; i >= 0 ; i--)
    {
        printf("%d\n", Numbers[i]);
        
    }
  
    return 0;
}
