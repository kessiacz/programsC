/******************************************************************************

8. Faça um programa que leia 2 valores inteiros (A e B). Em seguida, o programa deve mostrar uma
mensagem "Os números sao multiplos" ou "Os números nao sao multiplos", indicando se os
valores lidos são múltiplos entre si. Exemplo: Se usuário digitar A=6 B=24, o programa deve
exibir: Os números sao multiplos. Se usuário digitar A=9 B=24, o programa deve exibir: Os
números NAO sao múltiplos.

*******************************************************************************/

#include <stdio.h>

int main(){

  int a, b, op1, op2;
  printf("Digite o valor de A: ");
  scanf("%d", &a);

  printf("Digite o valor de B: ");
  scanf("%d", &b);

  op1 = a%b;
  op2 = b%a;
  
  if(op1 == 0 || op2==0){
    printf("Os números SÃO multiplos!");
  }
  else{
    printf("Os números NÃO é multiplos!");
  }

  return 0;
}