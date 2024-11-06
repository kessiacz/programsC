/******************************************************************************

7. Escreva um programa que deverá ler e armazenar em um vetor A os seis números
do último sorteio da Mega-Sena. Em seguida, o programa deverá ler e armazenar em
um vetor B os 10 números correspondente a uma aposta. Por fim, o programa deverá
exibir quantos números o apostador acertou.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, vetorA[6]={}, vetorB[10]={}, acertos;
    
    printf("Informe os seis números do ultimo sorteio: ");
    printf("\n----------------------------\n");
    for(i = 0; i < 6 ; i++){
        printf("Numero %d: ", i + 1);
        scanf(" %d", &vetorA[i]);
    }
    
    printf("\nInforme os dez números da aposta:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }
        
    for (i = 0; i < 10; i++){
        for (j = 0; j < 6; j++){
            if(vetorB[i] == vetorA[j]){
                acertos++;
            }
        }
    }
    
    printf("\nVocê acertou %d numeros", acertos);

    return 0;
    
}