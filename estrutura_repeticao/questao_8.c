/******************************************************************************

8. Faça um programa para dizer o vencedor de uma partida de ping-pongue entre
o jogador 1 e o jogador 2. Para cada ponto disputado, o usuário deve informar 
1 ou 2 para dizer qual o jogador venceu aquele ponto. A partida chega ao final
quando um dos jogadores tiver 21 pontos (ou mais) e a diferença de pontos entre
os jogadores for maior ou igual a dois.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, jogador1 = 0, jogador2 = 0, diferenca1 = 0, diferenca2 = 0;
    
    do{
        printf("INFORME QUAL JOGADOR VENCEU O PONTO (1 OU 2): ");
        scanf("%d", &numero);
        
        if(numero == 1){
            jogador1++;
            
        }else if(numero == 2){
            jogador2++;
            
        }
        
        printf("POTUACAO\nJOGADOR 1: %d\nJOGADOR 2: %d\n", jogador1, jogador2);
        
    }while((jogador1 < 21 && jogador2 < 21) || abs(jogador1 - jogador2 <= 2));
    
    
    if(jogador1 > jogador2){
        printf("O JOGADOR 1 VENCEU A PARTIDA COM %d PONTOS", jogador1);
        
    }else{
        printf("O JOGADOR 2 VENCEU A PARTIDA COM %d PONTOS", jogador2);
    }
    
    return 0;
}