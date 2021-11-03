#include <stdio.h>
#include <locale.h>

void fatorial()
{
    float x, fat=1;
    setlocale(LC_ALL, "Portuguese");

      printf("\n Digite um valor maior que zero: ");
      scanf("%d",&x);

    while(x > 0){
    fat == fat * x;
      x--;

printf(" O numero fatorial: %f", fat);
    }
}
int main()
{

    printf("\n\n\n Execução da sub rotina");

    fatorial();

     printf("\n\n\n termino subrotina ");

    return 0;
}
