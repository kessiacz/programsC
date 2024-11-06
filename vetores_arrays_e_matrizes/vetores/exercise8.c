/******************************************************************************

8. Escreva um programa que leia do usuário valores para preencher dois vetores A e
B com 10 elementos cada, intercale os elementos desses dois vetores formando assim
um novo vetor C com 20 elementos, em que nas posições ímpares de C serão
armazenados os elementos de A e nas posições pares, os elementos de B. Por fim, o
programa deverá mostrar o vetor C.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, vetorA[10]={}, vetorB[10]={}, vetorC[20]={};
    
    printf("Informe os valores de A: ");
    printf("\n----------------------------\n");
    for(i = 0; i < 10 ; i++){
        printf("Numero %d: ", i + 1);
        scanf(" %d", &vetorA[i]);
    }
    
    printf("\nInforme os valores de B:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }
        
    for (i = 0; i < 20; i++){
        vetorC[2 * i] = vetorA[i];
        vetorC[2 * i + 1] = vetorB[i];
    }
    
    for (i = 0; i < 20; i++) {
        printf("%d\n", vetorC[i]);
        
    }

    return 0;
    
}