/*Escreva um programa ler a base e altura de um triângulo, depois calcular e exibir sua área. Fórmula: AREA = (BASE*ALTURA)/2
*/

#include <stdio.h>
int main(void){
  float base, altura, area;
  printf("Digite o valor da base do triangulo: ");
  scanf("%f", &base);

  printf("Digite o valor da altura do triangulo: ");
  scanf("%f", &altura);

  area = (base*altura) / 2;
  printf("\n------------------\nDADOS DO TRIANGULO\n------------------\nBASE: %.f\nALTURA: %.f\n------------------\nAREA: %.1f\n------------------", base, altura, area);

  return 0;
}