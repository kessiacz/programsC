/*Escreva um programa que leia um valor em polegadas e converta-o para centímetros. Sabe-se que
1 pol = 2.54 cm*/

#include <stdio.h>
int main(void){
  const float pol = 2.54;
  float valorpol, cm;
  printf("Digite o valor em polegadas: ");
  scanf("%f", &valorpol);

  cm = valorpol * pol;

  printf("\n------------\nPOLEGADAS: %.2f\nCENTIMETROS: %.2f", valorpol, cm);

  return 0;
}