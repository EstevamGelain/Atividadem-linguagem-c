#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

     printf(" Digite um numero inteiro: ");
 scanf("%d",&num);

 if (num % 7 == 0)
    printf(" O numero %d é divisivel por 7! ",num);

 else
    printf(" O numero %d não é divisivel por 7", num);


 return 0;
}

