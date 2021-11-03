#include <stdio.h>
#include <stdlib.h>


float divisao(float xx)
{
    float resultado, i;

    for(i=2; i <= xx; i++)
     resultado +=1/i;


    return resultado;
}

int main()
{
float x;

printf(" Digite um numero: ");
scanf("%f",&x);

printf("\n Resultado: %f", divisao(x));



return 0;
}
