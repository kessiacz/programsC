/*Escrever um programa para ler o custo de fábrica de um carro, e exibir o custo final ao consumidor
que é calculado como sendo: custo de fábrica + porcentagem do distribuidor + porcentagem
dos impostos. Sabendo que o percentual do distribuidor é de 28% do custo de fábrica e os 
impostos corresponde a 45% do custo de fábrica;
*/

#include <stdio.h>
int main(void){

  const float porcDist = 0.28, porcImposto = 0.45;
  float custoFabrica, custoFinal;

  printf("Digite o custo de fabrica de um carro: ");
  scanf("%f", &custoFabrica);

  custoFinal = custoFabrica + porcDist + porcImposto;

  printf("\n--------------\nCUSTO DE FABRICA: R$ %.3f\n--------------\nCUSTO DE FABRICA: R$ %.3f\n--------------\n", custoFabrica, custoFinal);

  return 0;
}