/*Faça um programa para ler um número inteiro e exibir o seu dobro.*/

#include <stdio.h>
int main(void){
  int num, dobro;
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  dobro = num * 2;
  printf("O dobro do numero %d é %d", num, dobro);

  return 0;
}