#include <stdio.h>

int soma(int x, int y)
{
    int s;
    s = x + y;
    return s;
}

int subtracao(int x, int y)
{
    int sub;
    sub = x - y;
    return sub;
}

int multiplicacao(int x, int y)
{
    int mult;
    mult = x * y;
    return mult;
}

float divisao(int x, int y)
{
    float div;
    if (y != 0)
    {
        div = (float)x / y;
        return div;
    }
    else
    {
        printf("Divisão por zero não é permitida.\n");
        return 0;
    }
}

int main()
{
    int num1, num2;

    printf("Informe os números:\n");
    scanf("%d%d", &num1, &num2);

    printf("Soma: %d\n", soma(num1, num2));
    printf("Subtração: %d\n", subtracao(num1, num2));
    printf("Multiplicação: %d\n", multiplicacao(num1, num2));
    printf("Divisão: %.2f\n", divisao(num1, num2));

    return 0;
}