/******************************************************************************

10. Escreva um programa que receba inicialmente 10 valores do usuário.
Após armazenar estes 10 valores, o programa deverá requisitar um novo número ao
usuário e retornar quantas vezes este novo número foi encontrado no conjunto dos
10 valores inseridos inicialmente.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n, cont=0, vetor[10]={};
    
    printf("\n----------------------------\n");
    printf("Informe os 10 elementos do vetor: ");
    printf("\n----------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("----------------------------\n");
    printf("INFORME UM VALOR: ");
    scanf(" %d", &n);
    
    for (i = 0; i < 10; i++) {
        if (vetor[i] == n) {
            cont++;
        }
    }
    
    printf("\n----------------------------\n");
    printf("O VALOR %d APARECE %d VEZES", n, cont);
    printf("\n----------------------------\n");
    
    return 0;
    
}