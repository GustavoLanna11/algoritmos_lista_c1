#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    int fahrenheit;
    float celsius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%d",&fahrenheit);

    celsius = (fahrenheit-32)/1.8;

    printf("A temperatura digitada em fahrenheit eh: %d \n",fahrenheit);
    printf("A temperatura transofrmada em celsius eh: %.2f \n",celsius);
}
