/**********************************************************************************

3. (25 pontos) Escreva um programa em C para ler um código de barras de uma caixa de produtos. Um código de barras válido tem um tamanho fixo de 15 dígitos (CCCCCCQQQLLLLLL), onde CCCCCC é o código do produto, QQQ é a quantidade de itens do produto dentro da caixa e LLLLLL é o lote da caixa. Se o código tiver um tamanho inválido (diferente de 15) ou se a quantidade dentro do código (QQQ) for menor que 500, deve-se exibir a mensagem “Código de Barras Inválido!!!”. Nesse caso, deve-se solicitar que o usuário digite o código novamente. O programa deverá ser finalizado apenas quando o usuário informar um código válido.

***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char codigo[15];
  int i, qtd;

  do{
    printf("-------------------------------\n");
    printf("DIGITE O CODIGO DE BARRAS: ");
    scanf("%s", codigo);
    
    qtd = strlen(codigo);
    
    if(qtd != 15){
      printf("-------------------------------\n");
      printf("Código de Barras Inválido!!!\n");
    }
  }while(qtd != 15);

  for(i = 0; i < qtd; i++){
    if(i < 6){
      if(!isdigit(codigo[i])){
        printf("-------------------------------\n");
        printf("Código de Barras Inválido!!!\n");
      }
    }
    else if(i > 5 && i < 11){
      if(!isalpha(codigo[i])){
        printf("-------------------------------\n");
        printf("Código de Barras Inválido!!!\n");
      }
    }
    else if(i > 10 && i < 15){
      if(!isdigit(codigo[i])){
        printf("-------------------------------\n");
        printf("Código de Barras Inválido!!!\n");
      }
    }
  }
  
  return 0;
}