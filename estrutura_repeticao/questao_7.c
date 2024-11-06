/******************************************************************************

7. Escreva um programa que calcule o fatorial de um número inteiro lido,
sabendo-se que:
N ! = 1 x 2 x 3 x ... x N-1 x N
0 ! = 1

*******************************************************************************/

#include <stdio.h>

int main() {
    int numero, resultado = 1;
    
    printf("INFORME UM NUMERO: ");
    scanf("%d", &numero);
    
    if (numero == 0) {
        resultado = 1;
    } else {
        
        for (int i = 1; i <= numero; i++) {
            resultado *= i;
            printf("%d * ", i);
        }
        printf("= ");
    }

    printf("FATORIAL DE %d!: %d\n", numero, resultado);

    return 0;
}
