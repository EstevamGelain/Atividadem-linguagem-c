#include <stdio.h>
#include <locale.h>

int main()
{
    int num1, num2;
    setlocale(LC_ALL, "Portuguese");

    printf("\n01 – Escreva um programa em C que leia dois números inteiros e mostre-os em ordem inversa no final.");

    printf("\nDigite o Primeiro numero: ");
    scanf("%d",&num1);


    printf("\nDigite o segundo numero: ");
    scanf("%d",&num2);

    printf("\nO segundo numero foi o %d e o primeiro numero foi o %d",num2, num1);




    return 0;
}
