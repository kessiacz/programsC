/**********************************************************************************

2. (25 pontos) O personagem de Maurício de Sousa, Cebolinha, possui uma condição denominada dislalia, em que ele troca a letra ‘r’ pela letra ‘l’, caso a primeira não esteja no fim de uma palavra. Escreva um código que lê uma frase do usuário e a converta para a forma como ele falaria. Em outras palavras, ao encontrar a letra ‘r’ sucedida por uma outra letra na frase, ela deve ser trocada pela letra ‘l’. Por exemplo, caso a frase inserida seja: “agora, eu preciso achar a mônica”, a frase convertida deverá ser: “agola, eu pleciso achar a mônica”, em que a letra ‘r’ no fim de uma palavra não foi trocada. Por fim, apresente o resultado ao usuário.

***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char frase[100];
  int i, j, tamanho;

  printf("----------------------------------------\n");
  printf("DIGITE UMA FRASE: ");
  fgets(frase, 100, stdin);
  
  tamanho = strlen(frase);
  
  for(i = 0; i < tamanho; i++){
    if(frase[i] == 'r' && frase[i+1] != ' ' && frase[i+1] != '\0'){
      frase[i] = 'l';
    }
    else if (frase[i] == 'R' && frase[i+1] != ' ' && frase[i+1] != '\0'){
      frase[i] = 'L';
    }
  }

  printf("\n----------------------------------------\n");
  printf("%s", frase);
  
  return 0;
}
