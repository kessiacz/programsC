/******************************************************************************

1. (25 pontos) Em um passa-tempo, escolhe-se um número e conta-se os números um-a-um. A cada
vez que encontra-se um múltiplo do número escolhido ou o número termina no número escolhido
(unidade igual ao número escolhido), deve-se dizer a palavra “piu”. Desenvolva um programa que
receba o número escolhido e mostre a contagem correta do jogo de 1 a 100. Por exemplo, caso o
usuário escolha o número 4, as primeiras 20 saídas do programa serão:
1 2 3 piu 5 6 7 piu 9 10 11 piu 13 piu 15 piu 17 18 19 piu

Ou seja, os número 4, 8, 12, 16, 20 foram substituídos pela palavra “piu”, bem como o número 14
visto que termina com o algarismo 4, que foi o número escolhido.

Dica: para verificar se um número é múltiplo do número escolhido, use o operador de resto da divisão
(%). Para verificar se um número termina com um dado algarismo, utilize o mesmo operador com
relação ao valor 10 (14%10 = 4).

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Informe um numero: ");
    scanf(" %d", &n);
    
    for(i=1; i<=100; i++){
        if(i % n == 0 || i % 10 == n){
            printf("PIU ");
        }
        
        else{
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}