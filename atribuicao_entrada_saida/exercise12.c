/*Considerando a tabela, a seguir, escreva um programa para ler as quantidades consumidas por um cliente
em cada produto, calcular e exibir o preço total da venda. */

#include <stdio.h>
int main(void){
  const float vchocolates = 1.50, vrefrigerante = 2.00, vmistoQuente = 2.00, vsorvete = 1.50;

  float qtChocolates, qtRefrigerante, qtMistoQuente, qtSorvete, chocolate, refrigerante, mistoQuente, sorvete, valorTotal;

  printf("Digite a quantidade consumida de cada item abaixo\nCHOCOLATE: ");
  scanf("%f", &qtChocolates);

  printf("REFRIGERANTE: ");
  scanf("%f", &qtRefrigerante);

  printf("MISTO QUENTE: ");
  scanf("%f", &qtMistoQuente);

  printf("SORVETE: ");
  scanf("%f", &qtSorvete);

  //valor total de cada item
  chocolate = qtChocolates * vchocolates;
  refrigerante = qtRefrigerante * vrefrigerante;
  mistoQuente = qtMistoQuente * vmistoQuente;
  sorvete = qtSorvete * vsorvete;

  valorTotal = chocolate + refrigerante + mistoQuente + sorvete;

  printf("\n--------------\nCHOCOLATE: R$ %.2f\n--------------\nREFRIGERANTE: R$ %.2f\n--------------\nMISTO QUENTE: R$ %.2f\n--------------\nSORVETE: R$ %.2f\n--------------\n VALOR TOTAL\nR$ %.2f", chocolate, refrigerante, mistoQuente, sorvete, valorTotal);

  return 0;
}