#include <stdio.h>


int main()
{
    int x, y;
    float resultado;
    int opcao;

    printf("CALCULADORA:\n");
    printf("Escolha a opcao desejada\n");
    printf("1. - Adicao:\n");
    printf("2. - Subtracao:\n");
    printf("3. - Multiplicacao:\n");
    printf("4. - Divisao:\n");
     
    printf("Digite o numero correspondente a operacao desejada:\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
           printf("Informe os dois numeros a serem somados:\n");
           scanf("%d%d", &x, &y );

       resultado = x + y;
       break;

    case 2:
           printf("Informe os dois numeros para a subtracao :\n");
           scanf("%d%d", &x, &y );

       resultado = x - y;
        break;
    case 3:
           printf("Informe os dois numeros a serem multiplicados:\n");
           scanf("%d%d", &x, &y );

       resultado = x * y;
       break;

    case 4:
           printf("Informe os dois numeros a serem divididos:\n");
           scanf("%d%d", &x, &y );

    if (x % 2 == 0 && y != 0 && x != 0)
    {
          resultado = x / y;
    }
    else if (x == 0 || y == 0)
    {
            printf("Opcao invalida Digite numeros diferente de zero;\n");
    }   
    else
    {
            printf("Nao, este numero nao EH divisivel.\n");
                    break;
    }  
    

      
    }

    if (resultado > 0)
    {
     printf("O resultado da sua operacao foi: %.2f\n", resultado);
    }
    
   

   return 0;

}
