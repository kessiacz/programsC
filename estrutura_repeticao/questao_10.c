/******************************************************************************

10. O Índice de Massa Corporal (IMC) ajuda os especialistas a identificar quem
está com os números da balança muito acima ou muito aquém do que deveria.
Escreva um programa, em C, para ler a altura e o peso de 20 pessoas, calcular o
IMC de cada uma e indicar o estado nutricional de acordo com a tabela.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float p, h, imc;
    
    for(int i = 1; i <= 20; i++){
        printf("%d INFORME O PESO: ", i);
        scanf(" %f", &p);
        
        printf("%d INFORME A ALTURA: ", i);
        scanf(" %f", &h);
        
        imc = p / (h * h);
        
        if(imc < 16){
            printf("DESNUTRICAO\nIMC: %.2f\n", imc);
        }
        else if(imc >= 16 && imc < 18.4){
            printf("MAGREZA\nIMC: %.2f\n", imc);
        }
        else if(imc >= 18.5 && imc < 25){
            printf("NORMALIDADE\nIMC: %.2f\n", imc);
        }
        else if(imc >= 25.1 && imc < 29.9){
            printf("SOBREPESO\nIMC: %.2f\n", imc);
        }
        else if(imc >= 30 && imc < 39.9){
            printf("OBESIDADE\nIMC: %.2f\n", imc);
        }
        else if(imc >= 40){
            printf("OBESIDADE MORBIDA\nIMC: %.2f\n", imc);
        }
        else{
            printf("ERRO!\n");
        }
    }
    
    return 0;
}