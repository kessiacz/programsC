/******************************************************************************

5. Um viajante possui uma verba de R$ 8.000,00 para gastar durante as festas de final de ano.
Escreva um programa, em C, para ler os gastos com: passagem, hospedagem e alimentação.
Calcule e exiba se é possível realizar essa viagem. Só é possível realizar a viagem se os gastos
forem compatíveis com o orçamento.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float verba=8000.00, passagem, hospedagem, alimentação, soma, sub;
    
    printf("Informe os gastos com:\n------------\nPASSAGEM: R$ ");
    scanf("%f", &passagem);
    
    printf("HOSPEDAGEM: R$ ");
    scanf("%f", &hospedagem);
    
    printf("ALIMENTAÇÃO: R$ ");
    scanf("%f", &alimentação);
    
    soma = hospedagem + passagem + alimentação;
    sub = verba - soma;
    printf("\nPASSAGEM: %.2f\nHOSPEDAGEM: %.2f\n ALIMENTAÇÃO: %.2f\nVERBA: %.2f\n----------\nGASTO TOTAL: R$ %.2f\n----------\n", passagem, hospedagem, alimentação, verba, sub);
    
    if(soma<verba){
        printf("É POSSIVEL REALIZAR A VIAGEM.");
    }
    else{
        printf("NÃO É POSSIVEL REALIZAR A VIAGEM.");
    }
    
    return 0;
    
}
