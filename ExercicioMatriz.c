#include <stdio.h>

int matriz[3][5];
int linha, coluna, i = 1;

int main()
{
for ( linha = 0; linha < 3; linha++)/*neste loop, o for preenche a matrix com os valores de i*/
{
    for (coluna = 0; coluna < 5; coluna++)
    {
       matriz[linha][coluna] = i;
       i++;
    }
    
}
for (linha = 0; linha < 3; linha++) /*neste loop o for exibe os números da matrix */
{
    for (coluna = 0; coluna < 5; coluna++)
    {
        printf("%d\n", matriz[linha][coluna]);
        printf("\n");
    }
    
}
 return 0;
}