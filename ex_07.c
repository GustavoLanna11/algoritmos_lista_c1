#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    float km_inicial, km_final, consumo_combustivel, distancia_percorrida, gasto_combustivel;

    printf("Digite o km final: ");
    scanf("%f",&km_final);
    printf("Digite o km inicial: ");
    scanf("%f",&km_inicial);
    printf("Digite o consumo de combustivel do seu carro por litro: ");
    scanf("%f",&consumo_combustivel);

    distancia_percorrida=km_final-km_inicial;
    printf("A sua distancia percorrida eh: %.2f \n",distancia_percorrida);

    gasto_combustivel=distancia_percorrida/consumo_combustivel;
    printf("O seu gasto de combustivel por litro eh: %.2f \n",gasto_combustivel);

    }
