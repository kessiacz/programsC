/******************************************************************************

2. (25 pontos) Escreva um programa que receba uma quantidade de dias inteiros do usuário e calcule quantas
décadas, anos, meses e dias inteiros correspondem à quantidade inserida. Por exemplo, se a quantidade
inserida for de 5540, a resposta seria:
1 década (cada década corresponde a 3650 dias)
5 anos (cada ano corresponde a 365 dias)
2 meses (cada mês corresponde a 30 dias)
5 dias
Pois, 1*3650+5*365+2*30+5=5540 dias.

*******************************************************************************/

#include <stdio.h>

int main() {
    int qt_dias, decada, anos, meses, dias, r_decada, r_ano;

    printf("Informe a quantidade de dias: ");
    scanf("%d", &qt_dias);

    if (qt_dias >= 0) {
        // CALCULA AS DECADAS
        decada = qt_dias / 3650;
        r_decada = qt_dias % 3650;

        // CALCULA ANOS RESTANTES
        anos = r_decada / 365;
        r_ano = r_decada % 365;

        // CALCULA MESES RESTANTES
        meses = r_ano / 30;

        // O RESTANTE SÃO DIAS
        dias = r_ano % 30;

        printf("-------------------------\n");
        printf("%d DECADA(S)\n", decada);
        printf("%d ANO(S)\n", anos);
        printf("%d MES(ES)\n", meses);
        printf("%d DIA(S)\n", dias);

    } else {
        printf("ERROR! A quantidade de dias deve ser positiva.\n");
    }

    return 0;
}
