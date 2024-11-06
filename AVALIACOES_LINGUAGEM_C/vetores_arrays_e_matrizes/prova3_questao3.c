/***********************************************************************

3. (25 pontos) Escreva um programa que requisite inicialmente quantos
números o usuário quer inserir até um máximo de 100. Logo após, receba
cada número inserido pelo usuário e o armazene em um vetor. Por último,
verifique se este vetor é simétrico com relação ao centro, ou seja, caso
a quantidade inserida seja N, este vetor possui a propriedade de
vetor[0] == vetor[N-1], vetor[1] == vetor[N-2], vetor[2] == vetor[N-3]
e assim por diante. Por exemplo, os vetores {0,1,2,1,0} e {1,2,2,1} são 
simétricos com relação ao centro.

************************************************************************/

#include <stdio.h>
int main(void){
  int vetor[100], n, i;

  printf("-----------------------------------------\n");
  printf("INFORME A QUANTIDADE QUE DESEJA INSERIR: ");
  scanf(" %d", &n);
  printf("-----------------------------------------\n");

  for(i = 0; i < n; i++){
    printf("INFORME O NUMERO %d: ", i);
    scanf(" %d", &vetor[i]);
  }

  printf("\n-----------------------------------------\n");
  
  for(i = 0; i < n; i++){
    if(vetor[i] == vetor[n - 1 - i]){
      printf("É SIMÉTRICO!\n");
    }
    else{
      printf("NAO É SIMÉTRICO!\n");
    }
  }
  
  printf("\n-----------------------------------------\n");

  return 0;
}