/***********************************************************************

2. (25 pontos) Escreva um programa que receba 25 números do usuário e,
logo após, um número a ser pesquisado neste conjunto inserido. Por fim,
o programa deverá apresentar para o usuário o número de vezes
que o número a ser pesquisado foi encontrado no conjunto inserido.

************************************************************************/

#include <stdio.h>
int main(void){
  int vetor[25], n, i, cont=0;

  printf("-------------------------------------\n");
  printf("ACRESCENTE OS 25 NUMEROS\n");
  printf("-------------------------------------\n");
  
  for(i = 0; i < 25; i++){
    printf("INFORME O NUMERO %d: ", i + 1);
    scanf(" %d", &vetor[i]);
  }
  
  printf("\n-------------------------------------\n");
  printf("INFORME O NUMERO A SER PESQUISADO: ");
  scanf(" %d", &n);
  printf("\n-------------------------------------\n");
  
  for(i = 0; i < 25; i++){
    if(vetor[i]==n){
      cont++;
    }
  }

  printf("O NUMERO %d FOI ENCONTRADO %d VEZES", n, cont);
  printf("\n-------------------------------------");
  return 0;
}