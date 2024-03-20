/******************************************************************************

19. Faça um programa para calcular a conta final de um hóspede de um hotel fictício, considerando
que:
a) Deve-se ler o número do apartamento do hóspede, o tipo do apartamento utilizado (A, B, C ou D), o
número de diárias utilizadas pelo hóspede e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela seguinte tabela:
-----------------------------------
TIPO DO APTO. VALOR DA DIÁRIA (R$)
A 150,00
B 100,00
C 75,00
D 50,00
-----------------------------------
c) o valor total das diárias é calculado pela multiplicação do número de diárias utilizadas pelo valor da
diária;
d) o subtotal é calculado pela soma do valor total das diárias e o valor do consumo interno;
e) o valor da taxa de serviço equivale a 10% do subtotal;
f) a total geral resulta da soma do subtotal com a taxa de serviço.
g) escreva a conta final contendo: o número do apartamento do hóspede, o tipo do apartamento, o número
de diárias utilizadas, o valor unitário da diária, o valor total das diárias, o valor do consumo interno, o
subtotal, o valor da taxa de serviço e o total geral.

*******************************************************************************/

#include <stdio.h>

int main(){
    
  float consumo, valor_diaria, total_diarias, subtotal, total_geral;
  float taxa = 0.10;
  int ap, qt_diarias, tipo_int;
  char tipo;
  
  printf("INFORME AS SEGUINTES INFORMAÇÕES:\n------------------------------\n");

  printf("NUMERO DO APARTAMENTO: ");
  scanf("%d", &ap);

  printf("TIPO (A, B, C, D): ");
  getchar(); //puxando o caractere
  scanf("%c", &tipo);
  
  printf("QUANTIDADE DE DIARIAS: ");
  scanf("%d", &qt_diarias);
  
  printf("CONSUMO INTERNO DO HOSPEDE: ");
  scanf("%f", &consumo);
  
  switch(tipo){
      case 'A':
      valor_diaria = 150.00;
      break;
      
      case 'B':
      valor_diaria = 100.00;
      break;
      
      case 'C':
      valor_diaria = 75.00;
      break;
      
      case 'D':
      valor_diaria = 50.00;
      break;
      
      default:
            printf("Tipo de apartamento inválido.\n");
            return 1;
      
  }
  
  total_diarias = valor_diaria * qt_diarias;
  subtotal = total_diarias + consumo;
  total_geral = subtotal + (subtotal * taxa);
  
  printf("\n----------------------------\nCONTA FINAL:\n----------------------------\n");
  printf("APARTAMENTO: %d\n", ap);
  printf("TIPO: %c\n", tipo);
  printf("QUANTIDADE DE DIARIAS: %d\n", qt_diarias);
  printf("VALOR UNITÁRIO DA DIÁRIA: R$ %.2f\n", valor_diaria);
  printf("VALOR TOTAL DAS DIÁRIAS: R$ %.2f\n", total_diarias);
  printf("VALOR DO CONSUMO INTERNO: R$ %.2f\n", consumo);
  printf("SUBTOTAL: R$ %.2f\n", subtotal);
  printf("TAXA DE SERVIÇO: %.2f\n", taxa * 100);
  printf("-------------------------\nVALOR TOTAL GERAL: R$ %.2f\n-------------------------\n", total_geral);

  return 0;
  
}