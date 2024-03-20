/******************************************************************************

1. Escreva um programa que leia dois números e exiba o maior deles.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Informe um numero: ");
    scanf("%d", &num1);
    
    printf("Informe outro numero: ");
    scanf("%d", &num2);
    
    if(num1>num2){
        printf("O numero %d é maior que %d", num1, num2);
    }
    if(num2>num1){
        printf("O numero %d é maior que %d", num2, num1);
    }
    else{
        printf("Os numeros são iguais.");
    }
    
    
    return 0;
    
}
