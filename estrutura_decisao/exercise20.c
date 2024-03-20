/******************************************************************************

20. Sabendo que um produto não pode ser comercializado caso esteja com seu prazo de validade
vencido, escreva um programa para ler a data de vencimento de um determinado produto.
Considerando a data atual (29/10/2017), o programa deverá informar uma ou mais mensagens,
de acordo com a tabela a seguir:

CENARIO - MENSAGEM

DATA DE VENCIMENTO POSTERIOR A DATA - PODE SER COMERCIALIZADO
DATA DE VENCIMENTO IGUAL A DATA ATUAL - DEVE SER FEITA PROMOÇÃO
DATA DE VENCIMENTO ANTERIOR A DATA ATUAL - DEVE SER DESCARTADO
PRODUTO TEM APENAS UM DIA DE VALIDADE - PRODUTO ALTAMENTE PERECIVEL

*******************************************************************************/

#include <stdio.h>

int main(){
    
  int dia, mes, ano;
  int dia_atual = 29, mes_atual = 10, ano_atual = 2017;

  printf("INFORME A DATA DE VENCIMENTO (dd/mm/aaaa): ");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  
  if (ano > ano_atual || (ano == ano_atual && mes > mes_atual) || (ano == ano_atual && mes == mes_atual && dia > dia_atual)) {
        
        printf("PODE SER COMERCIALIZADO\n");
        
    }
    
    else if (ano == ano_atual && mes == mes_atual && dia == dia_atual) {
        
        printf("DEVE SER FEITA PROMOÇÃO\n");
        
    }
    
    else if (ano < ano_atual || (ano == ano_atual && mes < mes_atual) || (ano == ano_atual && mes == mes_atual && dia < dia_atual)) {
    
        printf("DEVE SER DESCARTADO\n");
    
        
    }

    else if ((ano == ano_atual && mes == mes_atual && dia_atual - dia == 1) || (ano == ano_atual && mes == mes_atual && dia_atual == 1 && dia == 31)) {
        
        printf("PRODUTO ALTAMENTE PERECIVEL\n");
    }

    return 0;
}