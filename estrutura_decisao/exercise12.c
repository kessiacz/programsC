/******************************************************************************

12. A empresa Vende Tudo Ltda paga o salário de cada vendedor com uma comissão de 5% sobre o
total de vendas daquele vendedor, mas essa comissão nunca deve ser inferior ao salário mínimo
(R$ 937,00). Faça um programa que:
- leia o valor total das vendas de um vendedor;
- calcule o salário do vendedor;
- exiba o salário final do vendedor.

*******************************************************************************/

#include <stdio.h>

int main(){

  float const comissao = 0.05;
  float const salario = 937.00;
  float valor, op, cont;
  
  printf("Informe o valor total das vendas: ");
  scanf("%f", &valor);
  
  op = valor * comissao;
  
  if(op > salario){
      cont = op + salario;
      printf("\n-------------------\nVende Tudo Ltda\n-------------------\n");
      printf("SALARIO FINAL: R$ %.2f", cont);
      
  }
  else{
      printf("\n-------------------\nVende Tudo Ltda\n-------------------\nCOMISSÃO É INFERIOR AO SALÁRIO");
  }

  return 0;
}