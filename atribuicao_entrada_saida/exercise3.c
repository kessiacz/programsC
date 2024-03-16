/*Escreva um programa para calcular e exibir o comprimento de uma circunferência, sendo dado pelo usuário o valor de seu raio. (C = 2πR).
Obs: a biblioteca <math.h> disponibiliza uma constante chamada M_PI, que contém o valor de π. Para 
utilizá-la, basta incluir a biblioteca no início do programa.*/

#include <stdio.h>
#include <math.h>
int main(void){
  float raio, c;
  printf("Digite o valor do raio da circunferência: ");
  scanf("%f", &raio);

  c = 2 * M_PI * raio;
  printf("A circunferência do raio %.2f é %.2f", raio, c);

  return 0;
}