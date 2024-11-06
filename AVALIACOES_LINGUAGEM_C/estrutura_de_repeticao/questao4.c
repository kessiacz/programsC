/******************************************************************************

4. (25 pontos) Escreva um programa que pergunte ao usuário uma quantidade inteira e escreva na tela
esta quantidade com o caractere ‘*’ . Por exemplo, se o número inserido for 5, a saída do programa
deve ser ***** , da mesma forma, se for 10, **********, e assim por diante.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Informe uma quantidade: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        printf("*");
        
    }
    
    return 0;
}