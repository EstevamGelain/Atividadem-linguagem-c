#include <stdio.h>
#include <stdlib.h>

int soma(int x)
{
    if(x == 0)
        return 0;
    else
        return x + soma(x - 1);
}

int main ()
{

int x;

printf(" Digite um numero qualquer positivo: ");
scanf("%d", &x);

printf("\n A soma de 1 ate %d e de: %d", x, soma(x));



return 0;
}
