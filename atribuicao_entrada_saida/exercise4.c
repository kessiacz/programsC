/*Escreva um programa para ler uma temperatura dada na escala Fahrenheit e exibir o equivalente em
Celsius. Fórmula: C= 5.0/9.0 * (F-32)
Observação: Para testar se a sua resposta está correta saiba que 100oC = 212F*/

#include <stdio.h>
int main(void){
  float celsius, fahreinheit;
  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f", &fahreinheit);

  celsius = 5.0 / 9.0 * (fahreinheit - 32);
  printf("%.fF equivale a %.fº Celsius", fahreinheit, celsius);

  return 0;
}