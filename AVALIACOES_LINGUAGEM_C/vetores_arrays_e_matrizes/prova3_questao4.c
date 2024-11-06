/*********************************************************************************

4. (25 pontos) Suponha que em um baralho especial, os números permitidos para cada
naipe sejam {0,1,2,3,4} e que cada naipe está relacionado a um número, onde “ouro”
relaciona-se ao valor 0, “copas” a 1, “paus” a 2, e “espadas” a 3. Faça um programa
que peça ao usuário para indicar dez pares (valor, naipe) e conte a quantidade de
vezes que cada uma das possíveis combinações de (valor, naipe) ocorreu, apresentando este
resultado ao usuário por meio de uma matriz em que as linhas representam os naipes e as colunas,
os valores. Por fim, indique que combinações de (valor, naipe) ocorreram pelo menos uma vez.

*************************************************************************************/

#include <stdio.h>
int main(void){
  int baralho[4][5], i, j, valor, naipe, contador = 0;

  for(i = 0; i < 4; i++){
    for(j = 0; j < 5; j++){
      baralho[i][j] = 0;
    }
  }
  for(i = 0; i < 10; i++){
    printf("INFORME O VALOR E O NAIPE DA CARTA: ");
    scanf(" %d %d", &valor, &naipe);
    
    baralho[naipe][valor]++;
  }
  for(i = 0; i < 4; i++){
    for(j = 0; j < 5; j++){
      if(baralho[i][j] > 0){
        contador++;
      }
    }
  }
  printf("\n---------------------------\nQUANTIDADE DE VEZES QUE CADA NAIPE OCORREU: %d\n---------------------------\n", contador);
  for(i = 0; i < 4; i++){
    for(j = 0; j < 5; j++){
      if(baralho[i][j] > 0){
        printf("NAIPE: %d VALOR: %d\n", i, j);
      }
    }
  }

  return 0;
}
