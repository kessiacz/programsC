/******************************************************************************

17. Escreva um programa que:
 Leia os seguintes dados de entrada:
 Quantidade de quilômetros que o carro faz com um litro (autonomia do carro);
 Tempo gasto em uma viagem (em minutos);
 A velocidade média durante a viagem (km por hora).
 Considerando a velocidade média e o tempo gasto da viagem que foram lidos, calcule e
exiba a distância percorrida; Dica: faça uma regra de três;
 Considerando a distância percorrida (calculada) e a autonomia do carro lida, calcule e
exiba a quantidade de litros de combustível gasta na viagem. Dica: faça uma regra de
três.

*******************************************************************************/

#include <stdio.h>
int main(){

  float lt, tempo, km, distancia, qtLitros;

  printf("Informe a quantidade de KM que o carro faz com um litro: ");
  scanf("%f", &lt);

  printf("Informe a velocidade média: ");
  scanf("%f", &km);

  printf("Informe o tempo gasto em minutos: ");
  scanf("%f", &tempo);

  distancia = km * tempo;
  qtLitros = distancia * lt;

  printf("\n--------------\nDISTÂNCIA PERCORRIDA:\n%.2f\n--------------\nQUANTIDADE DE COMBUSTIVEL GASTO: %.2f\n--------------\n", distancia, qtLitros);

  return 0;
}