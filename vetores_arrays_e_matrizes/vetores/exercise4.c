/******************************************************************************

4. Escreva um programa que preencha um vetor V1 com 50 elementos reais,
fornecidos pelo usuário. Em seguida, o programa deverá preencher automaticamente
um vetor V2 com os elementos de V1 na ordem inversa das posições, ou seja, o
último elemento de V1 será o primeiro de V2 e assim por diante.
Por fim, o programa deverá exibir o vetor V2.

*******************************************************************************/

#include <stdio.h>

int main() {
    int i, vetor1[2], vetor2[2];

    printf("--------------\n");
    printf("VETOR 1\n");
    printf("--------------\n");
    for (i = 0; i < 2; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 2; i++) {
        vetor2[i] = vetor1[1 - i];
    }

    // Exibe o vetor2
    printf("--------------\n");
    printf("VETOR 2\n");
    printf("--------------\n");
    for (i = 0; i < 2; i++) {
        printf("%d\n", vetor2[i]);
    }

    printf("--------------\n");

    return 0;
}
