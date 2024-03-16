/*Faça um programa em C que faça a conversão de Dólar para Real. Primeiro, defina uma constante chamada 
COTACAO com o valor de 3.18. Em seguida, leia o valor em dólares, multiplique pela cotação e exiba o 
resultado em reais*/

#include <stdio.h>
int main(void){
  const float cotacao = 3.18;
  float dolar, real;
  printf("Digite o valor em dólares: ");
  scanf("%f", &dolar);

  real = dolar * cotacao;
  printf("\n---------\nCONVERSÃO\n---------\nVALOR EM DOLAR: %.f\n---------\nR$ %.2f",dolar, real);

  return 0;
}