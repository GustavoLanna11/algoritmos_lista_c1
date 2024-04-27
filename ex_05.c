#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    float comprimento, largura, altura, volume;

    printf("Digite o valor do comprimento da caixa: ");
    scanf("%f",&comprimento);
    printf("Digite a altura da caixa: ");
    scanf("%f",&altura);
    printf("Digite a largura da caixa: ");
    scanf("%f",&largura);

    volume=comprimento*largura*altura;

    printf("O volume da caixa em metros cubicos eh: %.2f \n",volume);

}
