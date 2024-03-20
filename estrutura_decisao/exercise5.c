/******************************************************************************

5. Fazer um programa que leia um símbolo de operação do usuário (+, -, / ou *) e dois números
reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, op_num;
    char op;
    printf("Informe a operação (+, -, / ou *): ");
    scanf("%s", &op);
    
    if(op!=0){
        if(op=='+'){
            printf("SOMA\n");
            printf("Informe o primeiro valor: ");
            scanf("%f", &num1);
            
            printf("Informe o segundo valor: ");
            scanf("%f", &num2);
            
            op_num = num1 + num2;
            
            printf("%.2f + %.2f = %.2f", num1, num2, op_num);
                
        }
        
        else if(op=='-'){
            printf("SUBTRAÇÃO\n");
            printf("Informe o primeiro valor: ");
            scanf("%f", &num1);
            
            printf("Informe o segundo valor: ");
            scanf("%f", &num2);
            
            op_num = num1 - num2;
            
            printf("%.2f - %.2f = %.2f", num1, num2, op_num);
            
        }
        else if(op=='/'){
            printf("DIVISÃO\n");
            printf("Informe o primeiro valor: ");
            scanf("%f", &num1);
            
            printf("Informe o segundo valor: ");
            scanf("%f", &num2);
            
            op_num = num1 / num2;
            
            printf("%.2f / %.2f = %.2f", num1, num2, op_num);
            
        }
        else if(op=='*'){
            printf("MULTIPLICAÇÃO\n");
            printf("Informe o primeiro valor: ");
            scanf("%f", &num1);
            
            printf("Informe o segundo valor: ");
            scanf("%f", &num2);
            
            op_num = num1 * num2;
            
            printf("%.2f * %.2f = %.2f", num1, num2, op_num);
                
            }
        
    }
    else{
        printf("OPERÇÃO INVÁLIDA.");
    }
    
    return 0;
    
}
