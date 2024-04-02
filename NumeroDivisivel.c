#include <stdio.h>
/* A determinação da divisibilidade de um número por outro é importante na 
programação. Sabendo disso, crie um programa que solicita e lê dois números 
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a 
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”. */

int main()
{
    int numero1, numero2;
    printf("Informe os dois numeros para serem avaliados.\n");

    scanf("%d%d", &numero1, &numero2);
// Na linha abaixo os operadores logicos  garantem que o zero em qualquer uma das variaveis anule a operacao.
    if (numero1 % 2 == 0 && numero2 != 0 && numero1 != 0)
    
        printf("Sim, este numero EH divisivel.\n");
    
     else if (numero1 == 0 || numero2 == 0)
    
        printf("Operacao invalida, nao EH possivel dividir por zero.\n");
    
    
    else
    
        printf("Nao, este numero nao EH divisivel.\n");
    
    
}