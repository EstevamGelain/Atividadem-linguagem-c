#include <stdio.h>
#include <locale.h>

int main()
{
    int inte;
    float real, resu;
     setlocale(LC_ALL, "Portuguese");

     printf("02 – Escreva um programa em C que leia um número real e um número inteiro, faça a divisão do número real pelo inteiro e mostre o resultado.");

    printf("\n Digite um numero inteiro: ");
    scanf("%d",&inte);

    printf("\n Digite um numero real: ");
    scanf("%f",&real);

    resu = real / inte;

    printf("\nO resultado foi de: %f",resu);


    return 0;
}
