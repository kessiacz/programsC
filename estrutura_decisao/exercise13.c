/******************************************************************************

13. Numa fábrica trabalham homens e mulheres divididos em duas classes:
 Classe A: os que fazem até 30 peças por mês;
 Classe B: os que fazem mais de 31 peças por mês.
A classe A recebe um salário-mínimo (R$ 260,00). A classe B recebe um salário-mínimo e mais
R$ 5,00 por cada peça acima das 30 iniciais.
Faça um programa que leia o número de peças fabricadas por um funcionário no mês e exiba sua
classe (A ou B) e o salário que ele deve receber.

*******************************************************************************/

#include <stdio.h>

int main(){

  float const salario = 260.00;
  float const pecas = 5.00;
  float npecas, op;
  
  printf("Informe o total de peças fabricadas no mês: ");
  scanf("%f", &npecas);
  
  if(npecas > 30){
      printf("\n-------------------\nCLASSE B\n-------------------\n");
      
      op = (npecas * pecas) + salario;
      printf("SALARIO FINAL: R$ %.2f", op);
      
  }
  else{
      printf("\n-------------------\nCLASSE A\n-------------------\nSALARIO FINAL: R$ %.2f", salario);
  }

  return 0;
}