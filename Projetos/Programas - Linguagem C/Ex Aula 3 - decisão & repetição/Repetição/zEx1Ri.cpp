#include <stdio.h>
#include <locale.h>

int main()
{
    int num, soma;


    while(num != 0)
    {
        printf(" Digite um numero: ");
        scanf("%d",&num);
        soma+= num;
    };
     printf(" O resultado da soma é: %d  ",soma);

        return 0;
}











