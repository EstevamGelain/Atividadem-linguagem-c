#include <stdio.h>
#include <locale.h>


int main ()
{

    int num, num2;
    float num3;
    char letra, letra2;
    setlocale(LC_ALL, "Portuguese");

    printf(" Ler um n�mero e mostrar qual n�mero foi lido\n");

    printf(" Informe um n�mero: ");
    scanf("%d",&num);

    printf(" Informe um outro numero: ");
    scanf("%d",&num2);

    printf(" Informe um outro n�mero pertencentes aos reais: ");
    scanf("%f",&num3);

    printf(" Digite uma letra: ");
    fflush(stdin);
    scanf("\n%c",&letra);

    printf(" Digite uma letra: ");
    fflush(stdin);
    scanf("\n%c",&letra2);

    printf("\nA variavel vale %d e a variavel num2 vale %d e num3 vale %f\n",num, num2, num3);
    printf("\nA variavel letra vale %c e a letra2 vale %c\n",letra, letra2);

    printf("\nA segunda letra foi ");
    putchar(letra2);


    return 0;
}
