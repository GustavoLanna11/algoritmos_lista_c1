#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    int salario_minimo, salario_usuario, calculo;


    printf("Digite seu salario: ");
    scanf("%d",&salario_usuario);

    salario_minimo=1320;

    calculo=salario_usuario/salario_minimo;

    printf("O salario digitado eh: %d \n",salario_usuario);
    printf("O salario minimo eh: %d \n",salario_minimo);
    printf("O usuario possui essa quantidade de salarios minimos: %d \n",calculo);
}
