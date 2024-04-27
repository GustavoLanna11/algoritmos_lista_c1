#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    float altura, raio, volume, numero_pi;

    printf("Digite a altura do cilindro: ");
    scanf("%f",&altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f",&raio);

    numero_pi=3.14;
    raio = pow(raio,2);

    volume=numero_pi * raio * altura;
    printf("O volume do cilindro em metros cubicos eh: %.2f \n",volume);
}
