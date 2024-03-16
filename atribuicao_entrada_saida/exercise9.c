/*Faça um programa que deve ler uma duração em segundos (número inteiro), e informe essa duração no 
formato horas: minutos:segundos. Exemplo: 556s = 0:9:16*/

#include <stdio.h>
int main(void){
  int total, h, m, s;
  printf("Digite a duração em segundos (numero inteiro): ");
  scanf("%d", &total);

  h = total / 3600; //resultado da hora
  m = (total % 3600) / 60; //resultado do minuto
  s = (total % 3600) - (m*60); //resultado do segundo

  printf("\n---------\nCONVERSÃO\n---------\n%dh : %dm :%ds \n", h, m, s);

  return 0;
}