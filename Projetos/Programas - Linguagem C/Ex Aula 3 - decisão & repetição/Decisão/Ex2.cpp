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
        printf(" O numero  %d � maior que 20", num);

    else
        printf(" O numero %d � menor que 20", num);



 return 0;
}

