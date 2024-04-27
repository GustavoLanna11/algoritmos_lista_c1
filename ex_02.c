#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int velocidadekm;
    float conversao;

    printf("Digite sua velocidade: ");
    scanf("%d", &velocidadekm);

    conversao = velocidadekm*0.62;

    printf("A velocidade digitada em km eh: %d \n",velocidadekm);
    printf("A velocidade digitada em m eh: %.2f \n",conversao);
}
