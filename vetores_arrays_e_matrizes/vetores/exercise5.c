/******************************************************************************

5. Escreva um programa que armazene as notas de 40 alunos de uma turma.
Calcule a média da turma e mostre a quantidade de alunos com notas acima da média,
igual a média e abaixo da média.

*******************************************************************************/

#include <stdio.h>

int main() {
    int i, notas[5], soma=0, cont=0, acima_media=0, igual_media=0, abaixo_media=0;
    float media;

    printf("---------------------------\n");
    printf("INFORME AS NOTAS:\n");
    printf("---------------------------\n");
    for (i = 0; i < 5; i++) {
      printf("Informe a nota %d: ", i + 1);
      scanf(" %d", &notas[i]);
      soma += notas[i];
      cont++;

    }

    media = soma/cont;
    printf("\n---------------------------\n");
    printf("MEDIA: %.2f\n", media);
    printf("---------------------------\n");
    
    for (i = 0; i < 5; i++) {
      if(notas[i]>media){
        acima_media++;
      } else if(notas[i]<media){
        abaixo_media++;
      } else{
        igual_media++;
      }
    }

    printf("ALUNOS ACIMA DA MÉDIA: %d\nALUNOS IGUAL A MÉDIA: %d\nALUNOS ABAIXO DA MÉDIA: %d\n", acima_media, igual_media, abaixo_media);
    
    printf("---------------------------");

    return 0;
}
