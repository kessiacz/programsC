/******************************************************************************

15. Escreva um programa que determine o grau de obesidade de uma pessoa. O programa deve ler o
peso e a altura da pessoa. O grau de obesidade é determinado pelo índice da massa corpórea
(Massa = Peso / (Altura *Altura)) através da tabela abaixo:

NORMAL: < 26
OBESO: >=26 e <30
OBESO MORBIDO: >= 30

*******************************************************************************/

#include <stdio.h>

int main(){

  float massa, altura, peso;
  
  printf("Informe o peso: ");
  scanf("%f", &peso);
  
  printf("Informe a altura: ");
  scanf("%f", &altura);
  
  massa = peso / (altura*altura);
  
  if(massa < 26){
      printf("NORMAL");
  }
  
  else if(massa >= 26 && massa <30){
      printf("OBESO");
      
  }
  
  else if(massa >= 30){
      printf("OBESO MORBIDO");
      
  }

  return 0;
}