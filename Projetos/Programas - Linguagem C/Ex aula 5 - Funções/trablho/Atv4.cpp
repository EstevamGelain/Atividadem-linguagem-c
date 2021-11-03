#include <stdio.h>
#include <stdlib.h>

int divisores(int num);

int main()
{
    int num;

     printf(" Escreva um numero positivo: ");
     scanf("%d",&num);
     printf("/n O numero de divisores do numero %d e %d",num, divisores(num));
     return 0;
}

int divisores(int div)
{
    int cont = 0, limite;
    for(int i=1; i <= div; i++)
    {
    if (div % i == 0)
    {
         limite = div / i;
         cont++;
    }
    }
    return cont;
}
