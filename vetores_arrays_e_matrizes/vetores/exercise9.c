/******************************************************************************

9. Escreva um programa que preencha um vetor com 10 elementos inteiros, fornecidos pelo usuário. 
Em seguida, o programa deverá exibir os elementos armazenados no vetor e permitir que o usuário 
selecione um desses elementos para ser removido. Quando isso ocorrer, o programa deverá 
remover o valor e, no momento da remoção, todos os elementos posteriores ao valor removido 
deverão ser reorganizados (movidos uma posição para esquerda) a fim de que o vetor resultante não 
fique com um espaço em branco entre elementos válidos. Por fim, o programa deverá mostrar o 
novo vetor, agora com 9 elementos, apenas.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, posicao_remover, elemento_remover, vetor[10]={};
    
    printf("\n----------------------------\n");
    printf("Informe os 10 elementos do vetor: ");
    printf("\n----------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n----------------------------\n");
    printf("OS ELEMENTOS DO VETOR SÃO: ");
    printf("\n----------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("POSICAO %d: %d\n", i + 1, vetor[i]);
    }
    
    printf("----------------------------\n");
    printf("INFORME O ELEMTENTO A SER REMOVIDO: ");
    scanf(" %d", &elemento_remover);
    printf("\n----------------------------\n");
    
    for (i = 0; i < 10; i++) {
        if (vetor[i] == elemento_remover) {
            posicao_remover = i;
        }
    }
    
    for (i = posicao_remover; i < 9; i++) {
        vetor[i] = vetor[i + 1];
    }
    
    printf("\nO vetor após a remoção do elemento %d é:\n", elemento_remover);
    
    for (i = 0; i < 9; i++) {
        printf("ELEMTENTO %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
    
}