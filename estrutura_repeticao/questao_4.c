/******************************************************************************

4. Faça um programa que leia uma lista de letras até ser informada a letra Z.
Ao final, o programa deve mostrar a quantidade lida de cada vogal.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra;
    int contA=0, contE=0, contI=0, contO=0, contU=0;
    
    while(letra!='Z' && letra!='z'){
        printf("INFORME UMA LETRA: ");
        scanf(" %c", &letra);
        
        switch(letra){
            case 'a': 
            case 'A': contA++; break;
            case 'e':
            case 'E': contE++; break;
            case 'i':
            case 'I': contI++; break;
            case 'o':
            case 'O': contO++; break;
            case 'u':
            case 'U': contU++; break;
            default: break;
        }
        
    }
    
    printf("QUANTIDADE DE VOGAIS:\nA: %d\nE: %d\nI: %d\nO: %d\nU: %d", contA, contE, contI, contO, contU);

    return 0;
}