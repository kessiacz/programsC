/******************************************************************************

7. Faça um programa que leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do
jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração
mínima de 1 hora e máxima de 24 horas. Exemplo: se o usuário digitar 16 para hora inicial e 2
para a hora final, o programa deve exibir: O Jogo durou 10 horas

*******************************************************************************/

#include <stdio.h>
#include <time.h>

int main()
{
    int inicial, final, op;
    
    printf("Informe a hora inicial: ");
    scanf("%d", &inicial);
    
    printf("Informe a hora final: ");
    scanf("%d", &final);
    
    if (inicial>final){
        op = (24 - (inicial-final));
        printf("O JOGO DUROU %d HORAS.", op);
    }
    else if(final>inicial){
        op = (24 - (final-inicial));
        printf("O JOGO DUROU %d HORAS.", op);
    }
}