/*Escreve um programa para ler o salário bruto e o valor das horas extras trabalhadas. O programa deve exibir o salário líquido que deve ser obtido usando a fórmula:
salário liquido = salário bruto + valor das horas extras - 8% do salario bruto */

#include <stdio.h>
int main(void){
  float sBruto, vHoraExtra, sLiquido, porc;
  printf("Digite o valor do salário bruto: ");
  scanf("%f", &sBruto);

  printf("Digite o valor das horas extras: ");
  scanf("%f", &vHoraExtra);

  porc = sBruto * 0.08; //valor de 8% do salario brut

  sLiquido = (sBruto + vHoraExtra) - porc;

  printf("\n--------------\nSALÁRIO BRUTO: %.2f\nHORAS EXTRAS: %2.f\n--------------\nSALÁRIO LIQUIDO: %.2f\n", sBruto, vHoraExtra, sLiquido);

  return 0;
}