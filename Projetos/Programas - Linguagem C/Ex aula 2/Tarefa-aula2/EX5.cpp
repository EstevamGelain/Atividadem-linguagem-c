#include <stdio.h>
#include <locale.h>

int main()
{
    float km, s, kmh, vm, ms,m,ms2;
    setlocale(LC_ALL, "Portuguese");

    printf("\nEscreva qual foi a quilometragem: ");
    scanf("%d",&km);

     printf("\nEscreva qual foi o tempo gasto em segundos: ");
    scanf("%d",&s);



    ms = 3,6;
    m = km*1000;

    ms2 = m / s;

    kmh = ms2 * ms;

    printf(" O resultado em km/h é: %f ",kmh);



  return 0;
}

