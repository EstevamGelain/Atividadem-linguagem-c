#include <stdio.h>
#include <locale.h>

void novosalario()
{
    int ano_atual, salario, percentual;
    float novo_salario;
    printf(" Informe o ano atual: ");
    scanf("%d",&ano_atual);

    salario = 600.00;
    percentual = 101.5;
    novo_salario = salario * ( 1+ percentual);

    for(int i = 2013+1; i<= ano_atual; i++);
    {
        percentual=percentual*2;
        novo_salario = novo_salario*(1+ percentual);
         printf("\n O seu novo salario é R$");


    };
}
int main()
{

        printf("\n O seu novo salario é R$");
        novosalario();


    return 0;
}
