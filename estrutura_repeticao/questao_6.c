/******************************************************************************

5. Faça um programa que leia a idade de várias pessoas até ser informada a
idade igual a -99. Após ler as idades, o programa deve exibir:
• Total de pessoas com menos de 21 anos;
• Total de pessoas com mais de 50 anos.

*******************************************************************************/

#include <stdio.h>

int main() {
    int numero, i, ehPrimo = 1;
    
    printf("INFORME UM NUMERO: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        ehPrimo = 0;
        
    } else {
        
        for (i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }
    
    if (ehPrimo) {
        printf("%d EH UM NUMERO PRIMO!\n", numero);
    } else {
        printf("%d NAO EH UM NUMERO PRIMO!\n", numero);
    }

    return 0;
}
