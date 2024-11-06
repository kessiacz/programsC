/**********************************************************************************

4. (25 pontos) Escreva um programa que receba duas strings do usuário e concatene as duas em uma terceira string de tamanho 30 a máxima quantidade inteira de vezes. Por exemplo, se as strings inseridas foram “eng” e “eletrica”, a primeira tem tamanho 3 e a segunda 8. Logo, ela as duas concatenadas possuirão tamanho 8+3=11, podendo ser concatenadas apenas duas vezes na string final de tamanho 30.

***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char str1[30], str2[30], str3[60];
  int i, j, k, tam1, tam2;

  printf("-----------------------------------\n");
  printf("DIGITE A PRIMEIRA STRING: ");
  scanf("%s", str1);

  printf("-----------------------------------\n");
  printf("DIGITE A SEGUNDA STRING: ");
  scanf("%s", str2);
  
  tam1 = strlen(str1);
  tam2 = strlen(str2);
  
  for(i=0; i<tam1; i++){
    str3[i] = str1[i];
  }
  
  for(j=0; j<tam2; j++){
    str3[i+j] = str2[j];
  }
  
  printf("-----------------------------------\n");
  printf("STRING CONCATENADA: %s", str3);
  
  return 0;
}