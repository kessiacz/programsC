/******************************************************************************

16. O Botafogo Futebol Clube deseja aumentar o salário de seus jogadores. O reajuste deve obedecer à tabela
abaixo. Faça um programa que leia o salário atual de um jogador, e exiba o percentual de aumento e o
salário reajustado, se houver. Caso não tenha aumento, emita a mensagem: “Funcionário não terá
aumento”.

0,00 a 1.000,00 = 20%
1.000,01 a 5.000,00 = 10%
acima de 5.000,00 = 0%

*******************************************************************************/

#include <stdio.h>

int main(){

  float salario, op;
  
  printf("Informe o salario atual: ");
  scanf("%f", &salario);
  
  if(salario >= 0 && salario <=1000.00){
      op = (salario * 0.20) + salario;
      
      printf("REAJUSTE DE 20\nSALARIO REAJUSTADO: R$ %.2f", op);
  }
  
  else if(salario >= 1001.00 && salario <=5000.00){
      op = (salario * 0.10) + salario;
      
      printf("REAJUSTE DE 10\nSALARIO REAJUSTADO: R$ %.2f", op);
  }
  
  else if(salario > 5000.00){
      printf("FUNCIONÁRIO NÃO TERÁ AUMENTO");
  }

  return 0;
}