#include <stdio.h>
#include <locale.h>

void Calculafatorial()
{
    int num, fat=1;
  setlocale(LC_ALL, "Portuguese");

printf(" Digite um número: ");
scanf("%d",&num);

for(int i=1; i<= num; i++)
    {
    fat*=i;
    }
}

int main()
{


printf(" O fatorial é ");
Calculafatorial();

    return 0;
}
