/******************************************************************************

2. (25 pontos) Escreva um programa em C que inicialmente pergunte ao usuário quantos números
inteiros ele deseja digitar. Em seguida, o programa deve solicitar que o usuário digite cada um dos
números. Após ler todos os números, informe quantos números são positivos, quantos são
negativos, quantos são pares e quanto são ímpares.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, valor, positivos = 0, negativos = 0, pares = 0, impares = 0;
    
    printf("Informe quantos numeros deseja digitar: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        printf("Informe o valor: ");
        scanf("%d", &valor);
        
        if(valor > 0){
            positivos++;

            if(valor%2==0){
                pares++;

            }else{
                impares++;
            }
        }
        else if(valor < 0){
            negativos++;

            if(valor%2==0){
                pares++;

            }else{
                impares++;
            }
        }
        else{
            pares++;
        }
    }

    printf("-------------\n");
    printf("POSITIVOS: %d\nNEGATIVOS: %d\nPARES: %d\nIMPARES: %d\n", positivos, negativos, pares, impares);
    printf("-------------");

    return 0;
}