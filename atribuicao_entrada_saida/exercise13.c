/*
Faça um programa que leia: o número de carros vendidos e o valor total das vendas do vendedor. Em 
seguida, calcule e exiba o salário final do vendedor sabendo que a empresa paga um salário fixo de R$ 
622,00, mais uma comissão de R$ 30,00 por cada carro vendido, mais 5% do valor total das vendas do 
vendedor. */

#include <stdio.h>
int main(void){

  const float salarioFixo = 622.00, comissao = 30.00, porc = 0.05;
  int qtCarros;
  float vTotalVendas, sFinal;

  printf("Digite o número de carros vendidos: ");
  scanf("%d", &qtCarros);

  printf("Digite o valor total de vendas: ");
  scanf("%f", &vTotalVendas);

  sFinal = salarioFixo + (comissao * qtCarros) + (vTotalVendas * porc);

  printf("\n--------------\nCARROS VENDIDOS: %d\n--------------\nVALOR TOTAL DE VENDAS: R$ %.2f\n--------------\nSALÁRIO FIXO: R$ %.2f\n--------------\nCOMISSÃO: R$ %.2f\n--------------\nSALARIO FINAL:\nR$ %.2f\n--------------\n", qtCarros, vTotalVendas, salarioFixo, comissao, sFinal);

  return 0;
}