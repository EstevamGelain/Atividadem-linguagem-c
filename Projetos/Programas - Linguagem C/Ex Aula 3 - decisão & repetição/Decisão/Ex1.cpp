#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

 printf(" Digite um numero inteiro: ");
 scanf("%d",&num);

 if (num % 2 == 0)
    printf(" O numero %d � par! ",num);

 else
    printf(" O numero %d � impar", num);

 return 0;
}






