
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i;
    float result, divisao;

    printf("Digite um valor: ");
    scanf("%d",&x);




    for(i=1; i <= x; i++)
    {
            result = 1/i;

    printf("%f\n",result);
    }

}


