#include <stdio.h>

int main(void){

  int num, resto;
  printf("Digite um número: ");
  scanf("%d", &num);

  resto = num % 2;
  if(resto == 0){
    printf("o numero é PAR");
  }
  else{
    printf("o numero é IMPAR");
  }

  return 0;
}