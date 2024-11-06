/******************************************************************************

3. Escreva um programa que preencha dois vetores A e B (cada um com tamanho 50) com
valores reais fornecidos pelo usuário. Em seguida o programa deverá preencher
automaticamente um vetor denominado C com a soma dos elementos, em cada posição,
de A com B.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n, vetorA[50], vetorB[50], vetorC[50];
    
    printf("--------------\n");
    printf("VETOR A\n");
    printf("--------------\n");
    for (i=1; i < 51; i++){
        printf("INFORME OS VALORES: ");
        scanf(" %d", &n);
        vetorA[i] = n;
    }
    
    printf("--------------\n");
    printf("VETOR B\n");
    printf("--------------\n");
    
    for (i=1; i < 51; i++){
        printf("INFORME OS VALORES: ");
        scanf(" %d", &n);
        vetorB[i] = n;
    }
    
    printf("--------------\n");
    printf("VETOR C\n");
    printf("--------------\n");
    
    for (i=1; i < 51; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("VETOR %d\n%d + %d = %d\n", i, vetorA[i], vetorB[i], vetorC[i]);
    }
    
    printf("--------------\n");
    
    return 0;
}