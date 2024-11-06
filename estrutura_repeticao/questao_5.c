/******************************************************************************

5. Faça um programa que leia a idade de várias pessoas até ser informada a
idade igual a -99. Após ler as idades, o programa deve exibir:
• Total de pessoas com menos de 21 anos;
• Total de pessoas com mais de 50 anos.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int idade, cont21=0, cont50=0;
    
    while(idade != -99){
        printf("INFORME A IDADE: ");
        scanf(" %d", &idade);
        
        if(idade<21){
            cont21++;
        }
        else if(idade>50){
            cont50++;
        }
        else{
            printf("ERRO!");
        }
        
    }
    
    printf("-------------------------------------------");
    printf("QUANTIDADE DE PESSOAS:\nCOM MENOS DE 21 ANOS: %d\nCOM MAIS DE 50 ANOS: %d", cont21, cont50);

    return 0;
}