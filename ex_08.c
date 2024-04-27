#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    float ipi, valor_peca_um, valor_peca_dois, valor_total;
    int cod_um, qtd_peca_um, cod_dois, qtd_peca_dois;

    printf("Digite a porcentagem do IPI: ");
    scanf("%f",&ipi);

    printf("Digite o codigo da peca 1: ");
    scanf("%d",&cod_um);
    printf("Digite a quantidade da peca 1: ");
    scanf("%d",&qtd_peca_um);
    printf("Digite o valor da peca 1: ");
    scanf("%f",&valor_peca_um);

    printf("Digite o codigo da peca 2: ");
    scanf("%d",&cod_dois);
    printf("Digite a quantidade da peca 2: ");
    scanf("%d",&qtd_peca_dois);
    printf("Digite o valor da peca 2: ");
    scanf("%f",&valor_peca_dois);

    valor_total = ((valor_peca_um * qtd_peca_um) + (valor_peca_dois * qtd_peca_dois)) * ((ipi/100)+1);
    printf("O valor total eh: %.2f \n",valor_total);



}
