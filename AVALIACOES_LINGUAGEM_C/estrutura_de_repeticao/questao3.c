/******************************************************************************

3. (25 pontos) De acordo com um estudo, o nível aproximado de inteligência de uma pessoa pode ser
calculado usando a seguinte fórmula:

i = 2 + ( y + 0.5 x )

Escreva um programa que apresente na saída uma tabela com valores de i, y e x, em que y varia de
1 a 6 em intervalos de 1, e para cada valor de y, x varia de 5.5 a 12.5 em intervalos de 0.5. Por
exemplo, estes devem ser os 3 primeiros valores desta tabela:

i     y   x
5.75  1   5.5
6     1   6.0
6.25  1   6.5

E assim por diante, para todos os valores de y e x nos intervalos indicados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float i, y, x;
    printf("i     y   x\n");
    
    for(y = 1; y <= 6; y++){
        for(x = 5.5; x <= 12.5; x += 0.5 ){
            i = 2 + (y + 0.5 * x);
            printf("%.2f  %.0f  %.1f\n", i, y, x);
        }
    }
    printf("\n");
}