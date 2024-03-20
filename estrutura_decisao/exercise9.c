/******************************************************************************

8. Faça um programa que leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor,
deve ser apresentado como resposta o mês do ano por extenso, em português (sem acentuação
e caracteres especiais), com a primeira letra maiúscula.
Exemplo: se o usuário digitar 10, o programa deve exibir: Outubro.

*******************************************************************************/

#include <stdio.h>

int main(){

  int valor;
  printf("Informe o valor equivalente ao mês: ");
  scanf("%d", &valor);
  
  switch (valor){
      case 1: printf("Janeiro"); break;
      case 2: printf("Fevereiro"); break;
      case 3: printf("Marco"); break;
      case 4: printf("Abril"); break;
      case 5: printf("Maio"); break;
      case 6: printf("Junho"); break;
      case 7: printf("Julho"); break;
      case 8: printf("Agosto"); break;;
      case 9: printf("Setembro"); break;
      case 10: printf("Outubro"); break;
      case 11: printf("Novembro"); break;
      case 12: printf("Dezembro"); break;
      default: printf("Mês inválido"); break;
  }

  return 0;
}