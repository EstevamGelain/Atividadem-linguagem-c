#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf(" Digite sua idade para saber sua categoria: ");
    scanf("%d",&num);

    if(num >= 5 && num <= 7)
        printf(" Sua categoria � infantil A");

    else
    {

        if(num >= 8 && num <= 10)
        printf(" Sua categoria � infantil B");


        if(num >= 11 && num <= 13)
        printf(" Sua categoria � juvenil A");


        if(num >= 14 && num <= 17)
        printf(" Sua categoria � juvenil B");


        if(num > 18)
        printf(" Sua categoria � s�nior");

        else
            printf(" Idade invalida");



    }


 return 0;
}

