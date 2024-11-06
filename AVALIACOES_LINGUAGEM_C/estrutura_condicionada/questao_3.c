/******************************************************************************

3. (25 pontos) Desenvolva um programa que leia uma letra do usuário e indique se é uma vogal ou não. Para
simplificar, considere que o caractere inserido será sempre minúsculo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra;
    
    printf("Informe uma letra: ");
    scanf(" %c", &letra);
    
    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("-------------------------\n");
            printf("É uma vogal!");
            break;
            
        default:
            printf("-------------------------\n");
            printf("Não é uma vogal!");
    };
    
    return 0;
}