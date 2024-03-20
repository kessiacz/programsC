/******************************************************************************

14. Assumindo que o valor de cada KW consumido custa R$ 5.00, faça um programa para ler a
quantidade de KW consumido por um cliente, calcular e exibir o valor a ser pago. Entretanto,
ninguém pode pagar menos do que a taxa básica (R$ 40.00). Ou seja, se o cálculo do valor a ser
pago for menor do que a taxa básica, o programa deve alterar o valor a ser pago para ser a taxa
mínima.

*******************************************************************************/

#include <stdio.h>

int main(){

  float const kw = 5.00;
  float const taxa = 40.00;
  float qt, op;
  
  printf("Informe a quantidade de KW consumido: ");
  scanf("%f", &qt);
  
  op = qt * kw;
  
  if(op < taxa){
      printf("\n------------------------------------------\nO VALOR A SER PAGO É DE: R$ %.2f", taxa);
      
  }
  else{
      printf("\n------------------------------------------\nO VALOR A SER PAGO É DE: R$ %.2f", op);
  }

  return 0;
}