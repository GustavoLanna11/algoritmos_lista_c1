#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int idade, idade_meses, idade_dias;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    idade_meses=idade*12;
    idade_dias=idade*365;

    printf("Sua idade digitada eh: %d \n",idade);
    printf("Sua idade em meses eh: %d \n",idade_meses);
    printf("Sua idade em dias eh: %d \n",idade_dias);
}
