#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c) {
    float delta = b*b - 4*a*c;
    float x1, x2;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raízes da equação são: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("A equação possui uma raiz dupla: %.2f\n", x1);
    } else {
        printf("A equação não possui raízes reais.\n");
    }
}

int main() {
    float a, b, c;

    printf("Entre com os coeficientes da equação (ax^2 + bx + c):\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Coeficiente 'a' não pode ser zero. Esta não é uma equação do segundo grau.\n");
    } else {
        calcularRaizes(a, b, c);
    }

    return 0;
}
