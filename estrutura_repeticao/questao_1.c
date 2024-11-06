/******************************************************************************

1. Faça um programa que leia um número N, some todos os números inteiros de
1 a N, e mostre o resultado obtido.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, soma=0;
    
    printf("INFORME UM NUMERO: ");
    scanf(" %d", &n);
    
    for (i = 1; i <= n; i++){
        soma+=i;
    }
    
    printf("A SOMA EQUIVALE A: %d", soma);

    return 0;
}