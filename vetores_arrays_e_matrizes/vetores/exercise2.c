/******************************************************************************

2. Escreva um programa que crie um vetor com 10 posições, leia um número inteiro
fornecido pelo usuário e preencha o vetor com esse número e seus múltiplos.
Por exemplo, caso o usuário digite o número 5, o vetor deverá ser preenchido com
5, 10, 15, 20...

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n, vetor[10];
    
    printf("INFORME UM VALOR: ");
    scanf(" %d", &n);
    
    for (i=1; i < 11; i++){
        vetor[i] = n * i;
    }
    
    printf("--------------------\n");
    printf("OS MULTIPLOS DE %d SAO:\n--------------------\n", n);
    
    for (i=1; i < 11; i++){
        printf("VETOR %d: %d\n", i, vetor[i]);
    }
    
    return 0;
}