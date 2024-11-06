/**********************************************************************************

1. (25 pontos) Escreva um programa que receba uma frase do usuário e conte quantas sequências de duas vogais consecutivas existem nesta frase.

***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char frase[100];
  int i, contador = 0;

  printf("-----------------------------------------\n");
  printf("DIGITE UMA FRASE: ");
  fgets(frase, 100, stdin);
  
  for(i = 0; i < strlen(frase); i++){
    if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U'){
      if(frase[i+1] == 'a' || frase[i+1] == 'A' || frase[i+1] == 'e' || frase[i+1] == 'E' || frase[i+1] == 'i' || frase[i+1] == 'I' || frase[i+1] == 'o' || frase[i+1] == 'O' || frase[i+1] == 'u' || frase[i+1] == 'U'){
        contador++;
      }
    }
  }

  printf("\n-----------------------------------------\n");
  printf("HA %d DE SEQUENCIAS DE DUAS VOGAIS CONSECUTIVAS!", contador);
  printf("\n-----------------------------------------\n");
  
  return 0;
}
