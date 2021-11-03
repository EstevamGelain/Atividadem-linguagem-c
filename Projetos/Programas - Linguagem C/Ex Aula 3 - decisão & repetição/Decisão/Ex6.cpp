#include <stdio.h>
#include <locale.h>


int main()
{
    int num1, num2, num3, num4, result;
    float media;
    setlocale(LC_ALL, "Portuguese");

    printf(" Digite sua primeira nota: ");
    scanf("%d",&num1);

    printf(" Digite sua segunda nota: ");
    scanf("%d",&num2);

    printf(" Digite sua terceira nota: ");
    scanf("%d",&num3);

    printf(" Digite sua quarta nota: ");
    scanf("%d",&num4);

    result = (num1 + num2 + num3 + num4);
    printf("\n %d",result);

    media = result/4;
    printf("\n\n%f",media);


    if(media < 2.5)
    printf("\n Sua media é %f, nota E ",media);

    else
    {
    if(media >=  2.5 && media < 5)
    printf("\n Sua media é %f, nota D ",media);

    if(media >=  5 && media < 7)
    printf("\n Sua media é %f, nota C ",media);

    if(media >=  7 && media < 8.5)
    printf("\n Sua media é %f, nota B ",media);

    if(media >=  8.5 && media < 10)
    printf("\n Sua media é %f, nota A ",media);

    }


    return 0;
}
