/***********************************************************************

1. (25 pontos) Escreva um programa que indique se uma matriz 3x3 inserida
pelo usuário apresenta a propriedade em que cada linha e cada coluna possua
apenas um número ímpar e os demais sejam pares.

************************************************************************/

#include <stdio.h>
int main(void){
  int matriz[3][3], i, j, impar = 0, par = 0;

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o valor da linha [%d] e coluna[%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(matriz[i][j] % 2 == 0){
        par++;
      }
      else if(matriz[i][j] % 2 != 0){
        impar++;
      }
    }
  }
  
  if(impar == 3){
    printf("\nQUANTIDADE DE IMPARES: %d\nTEM MESMA PROPRIEDADE", impar);
  }
  else{
      printf("\nQUANTIDADE DE IMPARES: %d\nNÃO TEM A MESMA PROPRIEDADE\nPOSSUEM MAIS DE UM NUMERO IMPAR", impar);
  }
  return 0;
}