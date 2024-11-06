/******************************************************************************

9. Faça um programa que, para um número indeterminado de pessoas:
• leia a idade de cada pessoa, sendo que a leitura da idade 0 (zero)
indica o fim da leitura e não deve ser considerada;
• calcule e escreva o número de pessoas lidas;
• calcule e escreva a idade média do grupo;
• calcule e escreva a menor idade e a maior idade.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, cont = 0, soma = 0, maior, menor;
    float media;
    
    while(1){
        printf("INFORME A IDADE: ");
        scanf("%d", &idade);
        
        if(idade == 0){
            break;
        }
        
        cont++;
        soma += idade;
        
        if (cont == 1) {
            maior = menor = idade;
        } else {
            if (idade > maior) {
                maior = idade;
            }
            if (idade < menor) {
                menor = idade;
            }
        }
    }
    
    media = soma / cont;
    
    printf("QUANTIDADE DE PESSOAS LIDAS: %d\nIDADE MÉDIA DAS PESSOAS: %.2f\nMAIOR IDADE: %d\nMENOR IDADE: %d", cont, media, maior, menor);
    
    return 0;
}