/******************************************************************************

1. (25 pontos) Desenvolva um programa que recebe do usuário o raio de uma circunferência e calcula sua área
(lembre-se que A = pi.r2).Logo após, usando o dobro deste raio representando um lado de um quadrado,
calcule a área de um quadrado (lembre-se que A = l2). Por fim, calcule a diferença entre a área destequadrado e a área da circunferência e a apresente ao usuário.

*******************************************************************************/

#include <stdio.h>

int main() {
    const float pi = 3.14;
    float raio, lado, area_circ, area_quad, diferenca;
    
    printf("Informe o raio da circunferência: ");
    scanf("%f", &raio);
    
    area_circ = pi * raio * raio;
    
    lado = 2 * raio;
    area_quad = lado * lado;
    
    diferenca = area_quad - area_circ;
    
    printf("-------------------------");
    printf("\nAREA DA CIRCUNFERÊNCIA: %.2f", area_circ);
    printf("\nAREA DO QUADRADO: %.2f", area_quad);
    printf("\n-------------------------");
    printf("\nDIFERENÇA ENTRE AS DUAS AREAS: %.2f", diferenca);
    
    return 0;
}
