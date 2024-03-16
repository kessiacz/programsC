/*Escreva um programa que leia duas variáveis inteiras e troque o conteúdo entre elas. */

#include <stdio.h>
int main(void){
  int num1, num2, num;
  printf("Digite o primeiro valor inteiro: ");
  scanf("%d", &num1);

  printf("Digite o segundo valor inteiro: ");
  scanf("%d", &num2);

  num = num1;
  num1 = num2;
  num2 = num;

  printf("1ª VARIAVEL: %d\n2ª VARIAVEL: %d", num1, num2);

  return 0;
}