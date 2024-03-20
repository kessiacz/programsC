/******************************************************************************

1. Escreva um programa para ler um número e determinar se ele é maior, igual ou menor que zero.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1;
    printf("Informe um numero: ");
    scanf("%d", &num1);
    
    if(num1>0){
        printf("O numero %d é maior que 0.", num1);
    }
    else if(num1<0){
        printf("O numero %d é menor que 0.", num1);
        }
        else{
            printf("Os numeros são iguais.");
        }
    
    return 0;
    
}
