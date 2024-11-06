/******************************************************************************

6. Escreva um programa em C que inicialmente pergunte ao usuário quantos números
inteiros ele deseja digitar. Em seguida, o programa deve solicitar que o usuário 
digite cada um dos números. Após ler todos os números, informe quantos números
são positivos, quantos são negativos, quantos são pares e quanto são ímpares.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n, positivos=0, negativos=0, pares=0, impares=0;
    
    printf("--------------\n");
    printf("INFORME A QUANTIDADE DE NUMEROS: ");
    scanf(" %d", &n);
    
    printf("--------------\n");
    
    int vetor[n];
    for (i=0; i < n; i++){
        printf("DIGITE O NUMERO %d: ", i + 1);
        scanf(" %d", &vetor[i]);
    }
    
    for (i=0; i < n; i++){
        if (vetor[i]>0){
            positivos++;
            if(vetor[i]%2==0){
                pares++;
            }else{
                impares++;
            }
        }
        else if(vetor[i]<0){
            negativos++;
            if(vetor[i]%2==0){
                pares++;
            }else{
                impares++;
            }
        }
        
    }
    printf("--------------\n");
    printf("POSITIVOS:%d\nNEGATIVOS:%d\nPARES:%d\nIMPARES:%d\n", positivos, negativos, pares, impares);
    printf("--------------\n");
    
    return 0;
}