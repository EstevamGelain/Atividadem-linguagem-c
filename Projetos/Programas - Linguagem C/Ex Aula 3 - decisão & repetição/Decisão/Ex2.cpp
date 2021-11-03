#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf(" Digite um numero inteiro maior que zero: ");
    scanf("%d",&num);

    if (num >= 20)
        printf(" O numero  %d é maior que 20", num);

    else
        printf(" O numero %d é menor que 20", num);



 return 0;
}

