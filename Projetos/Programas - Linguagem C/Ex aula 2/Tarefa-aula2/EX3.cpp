#include <stdio.h>
#include <locale.h>

int main()
{
    char letra1, letra2, letra3, letra4;

    setlocale(LC_ALL, "Portuguese");

      printf("\n03 – Escreva um programa C que leia 4 caracteres e mostre-os em seqüência como se fossem uma única palavra. ");

    printf("\nEscreva uma letra: ");
    fflush(stdin);
    scanf("%c",&letra1);

    printf("\nEscreva uma outra letra: ");
    fflush(stdin);
    scanf("%c",&letra2);

    printf("\nEscreva uma outra letra: ");
    fflush(stdin);
    scanf("%c",&letra3);

    printf("\nEscreva uma outra letra: ");
    fflush(stdin);
    scanf("%c",&letra4);


      printf("\n %c%c%c%c",letra1,letra2,letra3,letra4);

    return 0;
}
