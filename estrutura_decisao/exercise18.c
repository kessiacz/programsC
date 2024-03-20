/******************************************************************************

18. Deseja-se calcular o imposto de renda de um contribuinte. Para isto, escreva um programa que:
a) leia os seguintes dados do contribuinte: CPF, rendimento anual, imposto retido na fonte, contribuição
previdenciária, despesas médicas, número de dependentes;
b) é deduzido o valor de R$ 1.080,00 por cada dependente;
c) cálculo do valor total das deduções: contribuição previdenciária + despesas médicas + dedução dos
dependentes;
d) cálculo da base de cálculo: rendimento anual – total das deduções;
e) com base na tabela abaixo:
----------------------------------------------
BASE DE CALCULO - ALIQUOTA - PARCELA A DEDUZIR
----------------------------------------------
até 10.800,00 - ISENTO - SEM parcela
de 10.800,01 até 21.600,00 - 15% - 1.620,00
acima de 21.600,00 - 25% - 3.780,00
----------------------------------------------
Cálculo do imposto devido: ( (base de cálculo * alíquota) - parcela a deduzir )
f) haverá imposto a pagar se a diferença entre o imposto devido e o imposto retido na fonte for positiva;
caso contrário, haverá imposto a restituir.
g) exiba todos os dados lidos e calculados.

*******************************************************************************/

#include <stdio.h>
int main(){
    
  int cpf;
  float rendimento, imposto_retido, contribuicao, despesa_med, qt_depentendes, total_deducoes, base, imposto_devido;
  float const valor_dependestes = 1080.00;
  float aliquota, parcela;

  printf("INFORME AS SEGUINTES INFORMAÇÕES:\n------------------------------");

  printf("\nCPF: ");
  scanf("%d", &cpf);

  printf("RENDIMENTO ANUAL: ");
  scanf("%f", &rendimento);
  
  printf("IMPOSTO RETIDO NA FONTE: ");
  scanf("%f", &imposto_retido);
  
  printf("CONTRIBUIÇÃO PREVIDENCIÁRIA: ");
  scanf("%f", &contribuicao);
  
  printf("DESPESAS MÉDICAS: ");
  scanf("%f", &despesa_med);
  
  printf("NÚMERO DE DEPENDENTES: ");
  scanf("%f", &qt_depentendes);
  
  total_deducoes = contribuicao + despesa_med + (qt_depentendes * valor_dependestes);
  base = rendimento - total_deducoes;
  
  if(base <= 10800.00){
      printf("DADOS INFORMADOS:\n----------------------------\n");
      printf("CPF: %d\n", cpf);
      printf("RENDIMENTO ANUAL: %f\n", rendimento);
      printf("IMPOSTO RETIDO NA FONTE: %.2f\n", imposto_retido);
      printf("CONTRIBUIÇÃO PREVIDENCIÁRIA: %.2f\n", contribuicao);
      printf("DESPESAS MÉDICAS: %.2f\n", despesa_med);
      printf("NÚMERO DE DEPENDENTES: %.2f\n", qt_depentendes);
      printf("VALOR TOTAL DE DEDUÇÕES: %.2f\n", total_deducoes);
      printf("VALOR DA BASE DE CALCULO: %.2f\n----------------------------\n", base);
      printf("NÃO HÁ IMPOSTO A PAGAR");
  }
  
  else if(base > 10800.00 && base <= 21600.00){
      
      aliquota = 0.15;
      parcela = 1620.00;
      
      imposto_devido = (base * aliquota) - parcela;
      printf("DADOS INFORMADOS:\n----------------------------\n");
      printf("CPF: %d\n", cpf);
      printf("RENDIMENTO ANUAL: %f\n", rendimento);
      printf("IMPOSTO RETIDO NA FONTE: %.2f\n", imposto_retido);
      printf("CONTRIBUIÇÃO PREVIDENCIÁRIA: %.2f\n", contribuicao);
      printf("DESPESAS MÉDICAS: %.2f\n", despesa_med);
      printf("NÚMERO DE DEPENDENTES: %.2f\n", qt_depentendes);
      printf("VALOR TOTAL DE DEDUÇÕES: %.2f\n", total_deducoes);
      printf("VALOR DA BASE DE CALCULO: %.2f\n----------------------------\n", base);
      printf("IMPOSTO A PAGAR É DE: R$ %.2f", imposto_devido);
  }
  
  else if(base > 21600.00){
      
      aliquota = 0.25;
      parcela = 3780.00;
      
      imposto_devido = (base * aliquota) - parcela;
      printf("DADOS INFORMADOS:\n----------------------------\n");
      printf("CPF: %d\n", cpf);
      printf("RENDIMENTO ANUAL: %f\n", rendimento);
      printf("IMPOSTO RETIDO NA FONTE: %.2f\n", imposto_retido);
      printf("CONTRIBUIÇÃO PREVIDENCIÁRIA: %.2f\n", contribuicao);
      printf("DESPESAS MÉDICAS: %.2f\n", despesa_med);
      printf("NÚMERO DE DEPENDENTES: %.2f\n", qt_depentendes);
      printf("VALOR TOTAL DE DEDUÇÕES: %.2f\n", total_deducoes);
      printf("VALOR DA BASE DE CALCULO: %.2f\n----------------------------\n", base);
      printf("IMPOSTO A PAGAR É DE: R$ %.2f", imposto_devido);
  }

  return 0;
}