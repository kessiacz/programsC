/******************************************************************************

3. Escreva um programa que inicialmente pergunte ao usuário quantos números
inteiros ele deseja digitar. Em seguida, o programa deve solicitar que o usuário
digite cada um dos números. Após ler todos os números, informe o maior número lido. Por exemplo, se o usuário informou que deseja ler 6 números, e
digitou 55, 3, 1, 78, 5, 38. O programa deve informar que o maior número digitado
foi 78.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int qt_n, numero, maior = 0;
    
    printf("INFORME A QUANTIDADE DE NUMEROS: ");
    scanf(" %d", &qt_n);
    
    for (int i = 0; i < qt_n; i++){
        printf("INFORME O NUMERO: ");
        scanf(" %d", &numero);
        
        if(numero > maior){
            maior = numero;
        }
    }
    
    printf("MAIOR NUMERO: %d", maior);

    return 0;
}