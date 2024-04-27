#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int valor, hora, minuto, segundo, horasobra;

    printf("Digite um periodo em segundos: ");
    scanf("%d",&valor);

    hora = valor/3600;
    horasobra = valor%3600;
    minuto = horasobra/60;
    segundo = horasobra%60;

    printf("Horas: %d \n",hora);
    printf("Minutos: %d \n",minuto);
    printf("Segundos: %d \n",segundo);


}
