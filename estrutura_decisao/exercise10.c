/******************************************************************************

10. Escreva um programa que leia o número total de deputados da câmara federal do Brasil e o
número de deputados da Paraíba. Ao final, o programa deve calcular e exibir o percentual de
participação da Paraíba na Câmara dos Deputados. Por exemplo, se o total da câmara federal
informado for 500 deputados e o total da Paraíba for 22 deputados, o programa deve exibir 4.4%.
Dica: faça uma regra de três.

*******************************************************************************/

#include <stdio.h>

int main(){

  float numbr, numpb, op;
  printf("Informe o número total de deputados da câmara federal do Brasil: ");
  scanf("%f", &numbr);
  
  printf("Informe o número total de deputados da câmara federal da Paraíba: ");
  scanf("%f", &numpb);
  
  op = (numpb/numbr)*100;
  
  if(op==0){
      printf("Não existem deputados paraibanos!");
  }
  else{
      printf("%.2f", op);
  }

  return 0;
}