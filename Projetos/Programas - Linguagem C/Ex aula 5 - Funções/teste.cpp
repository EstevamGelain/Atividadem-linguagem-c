#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, limite, cont=0;

     printf("Escreva um numero positivo: ");
    scanf("%d",&num);

    for(int i=1; i <= num; i++)
    {
    if (num % i == 0)
    {
         limite = num / i;
         cont++;
    }

    }
printf("% O numero de divisores do numero %d sao: %d",num, cont);

return 0;
}

