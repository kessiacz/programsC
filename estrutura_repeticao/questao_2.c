/******************************************************************************

2. Faça um programa que leia diversos números inteiros até ser informado o
número 0 (zero). Ao final, o programa deve mostrar a média aritmética de todos
os números lidos (excluindo o zero).

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero, soma, cont, um = 1;
    float media;
    
    do{
        
        printf("INFORME UM NUMERO: ");
        scanf(" %d", &numero);
        
        cont++;
        soma+=numero;
        
    }while(numero!=0);
    
    media = soma/(cont - um);
    
    if(numero==0){
        printf("MEDIA: %.2f", media);
    }else{
        printf("ERRO!");
    }

    return 0;
}