#include <stdio.h>
#include <locale.h>

int main()
{
    int num1, num2, result=1;


    printf("O programa ira calcular uma potencia Xy\n");
    printf("Digite o valor de X: ");
    scanf("%d",&num1);
    printf("Digite o valor de Y: ");
    scanf("%d",&num2);

    for(int i=1; i <= num2; i++)
    {

    result *= num1;

    printf(" %d, ",result);
    }




    return 0;
}

