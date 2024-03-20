/******************************************************************************

10. Na primeira etapa de um concurso, o candidato tem que fazer duas provas. Dessas duas notas é
tirada a média do candidato. Caso essa média seja maior ou igual a 7.0, ele estará apto a fazer a
segunda etapa do concurso. Na segunda etapa, ele fará mais uma prova, onde deverá obter uma
nota maior ou igual a 8.0 para ser aprovado no concurso. Faça um programa que leia as notas da
primeira etapa, calcule a média da primeira etapa, e se o candidato for aprovado na primeira
etapa, leia a nota dele na segunda etapa e diga se ele foi aprovado ou não no concurso.

*******************************************************************************/

#include <stdio.h>

int main(){

  float nota1, nota2, media, nota3;
  printf("Informe a primeira nota: ");
  scanf("%f", &nota1);
  
  printf("Informe a segunda nota: ");
  scanf("%f", &nota2);
  
  media = (nota1+nota2)/2;
  
  if(media>=7.0){
      printf("\n-------------------\nAPROVADO na primeira etapa!\n-------------------\n");
      printf("Informe a nota da segunda etapa: ");
      scanf("%f", &nota3);
      
      if(nota3>=8.0){
          printf("\n-------------------\nAPROVADO NO CONCURSO!\n-------------------\n");
      }
      else if(nota3<8.0){
          printf("\n-------------------\nREPROVADO NO CONCURSO!\n-------------------\n");
      }
  }
  else if(media<7.0){
      printf("\n-------------------\nREPROVADO na primeira etapa!\n-------------------\n");
  }

  return 0;
}