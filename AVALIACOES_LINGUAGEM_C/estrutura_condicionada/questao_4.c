/******************************************************************************

4. (25 pontos) Faça um programa que receba do usuário o limite de velocidade de uma via e a velocidade na qual
o usuário trafegou. A partir destes dados, indique se ele recebeu uma multa e de que valor. Existem diferenças
de valor da multa por excesso de velocidade, sendo R$130 para quem chegar até 20% acima do limite, R$ 195
de 20% a 49% e R$ 880 para motoristas que ultrapassarem 50% do limite estipulado na via.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int limite, v_usuario;
    
    printf("INFORME O LIMITE DE VELOCIDADE DA VIA: ");
    scanf("%d", &limite);
    
    printf("INFORME A SUA VELOCIDADE: ");
    scanf("%d", &v_usuario);
    
    if (v_usuario <= limite) {
        printf("-------------------------\n");
        printf("O USUÁRIO NÃO TEM MULTA\n");

    }else if (v_usuario <= limite * 1.2) {
        printf("-------------------------\n");
        printf("O USUÁRIO PAGARÁ R$130,00 DE MULTA\n");

    }else if (v_usuario <= limite * 1.5) {
        printf("-------------------------\n");
        printf("O USUÁRIO PAGARÁ R$195,00 DE MULTA\n");

    }else {
        printf("-------------------------\n");
        printf("O USUÁRIO PAGARÁ R$880,00 DE MULTA\n");
    }
    
    return 0;
}