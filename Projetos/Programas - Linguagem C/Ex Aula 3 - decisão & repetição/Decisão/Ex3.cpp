#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf(" Digite um numero: ");
    scanf("%d",&num);


    if (num > 0)
        printf(" O numero %d � positivo",num);

    else
    {
        if (num < 0)
            printf(" O numero %d � negativo",num);

        else
             printf(" O numero %d � nulo",num);


    }



 return 0;
}

