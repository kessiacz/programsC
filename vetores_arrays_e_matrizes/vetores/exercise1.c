/******************************************************************************

1. Escreva um programa que leia um número fornecido pelo usuário e preencha um
vetor de 10 posições com esse número;

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n, vetor[10];
    
    printf("INFORME UM VALOR: ");
    scanf(" %d", &n);
    
    for (i=0; i < 10; i++){
        vetor[i] = n;
    }
    
    for (i=0; i < 10; i++){
        printf("VETOR %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
}