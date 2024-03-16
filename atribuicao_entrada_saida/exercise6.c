/*Faça um programa que leia 2 valores inteiro (A e B) e mostre o resultado da divisão inteira. O programa deve 
exibir uma mensagem do tipo: “A divisão de _ por _ é igual a _ ”.
*/

#include <stdio.h>
int main(void){
  int valorA, valorB, divisao;
  printf("Digite o valor A: ");
  scanf("%d", &valorA);

  printf("Digite o valor B: ");
  scanf("%d", &valorB);

  divisao = valorA / valorB;
  printf("\n-------\nDIVISÃO\n-------\nA divisão de %d por %d é igual a %d ",valorA, valorB, divisao);

  return 0;
}
