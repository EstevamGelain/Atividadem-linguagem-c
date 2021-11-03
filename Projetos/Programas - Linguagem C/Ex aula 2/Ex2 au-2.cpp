#include <stdio.h>

int main()
{
    int ano, idade;

    printf("\nPrograma Que calcula o ano de nascimento da pessoa ao final do ano ");

    printf("\nInforme seu ano de nascimento:  ");
    scanf("%d",&ano);

    idade = 2021 - ano;

    printf("\nA idade da pessoa ao final do ano sera de: %d anos",idade);




    return 0;
}
