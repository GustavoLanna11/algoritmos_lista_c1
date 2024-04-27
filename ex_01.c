#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
   int numero, antecessor, sucessor;
    printf("Digite seu numero: ");
    scanf("%d",&numero);
    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O numero digitado eh: %d \n",numero);
    printf("O antecessor dele eh: %d \n",antecessor);
    printf("O sucessor eh: %d \n",sucessor);
}
