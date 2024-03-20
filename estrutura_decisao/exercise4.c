/******************************************************************************

4. Fazer um programa que leia os 3 lados de um triângulo e determine se o triângulo é válido. Em
caso afirmativo, informar o tipo de triângulo de acordo com a tabela abaixo:
EQUILATERO: possui os três lados iguais.
ISOSCELES: possui apenas dois lados iguais.
ESCALENO: possui os três lados são diferentes.
Obs: - Para ser válido o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num12, num13, num23;
    printf("Informe o primeiro lado: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo lado: ");
    scanf("%d", &num2);
    
    printf("Informe o terceiro lado: ");
    scanf("%d", &num3);
    
    //soma dos lados
    num12 = num1 + num2;
    num13 = num1 + num3;
    num23 = num2 + num3;
    
    //verificar se é um triangulo valido
    if(num1<num23 && num2<num13 && num3<num12){
        //verificar o tipo de triangulo
        if(num1==num2 && num2==num3 && num1==num3){
            printf("É um triangulo EQUILÁTERO.");
        }
        else{
            if(num1!=num2 && num2!=num3 && num1!=num3){
                printf("É um triangulo ESCALENO.");
            }
            else{
                printf("É um triangulo ISÓSCELES.");
            }
        }
    }
    else{
            printf("NÃO É UM TRIANGULO.");
    }
    
    return 0;
    
}
