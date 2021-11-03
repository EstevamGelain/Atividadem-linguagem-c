#include <stdio.h>

int main()
{
    float notas[4], media, soma=0, matriz[3][4];
    int l, c;
    printf("Exemplo de vetor. \nLer 4 notas de um aluno e mostra-las\n");
    for(int i = 0; i < 4; i++)
    {
        printf("Digite a nota %d: ",i+1);
        scanf("%f",&notas[i]);
    }
    for(int i = 3; i >=0 ; i--)
    {
        printf("\nA nota %d foi: %f",i+1,notas[i]);
        soma = soma + notas[i]; // soma += notas[i];
    }
    printf("\nA soma das notas e %f", soma);
    media = soma/4;
    printf("\nA media das notas e %f\n\n", media);

    for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 4; c++)
        {
            printf("Digite a nota %d do aluno %d: ",c+1,l+1);
            scanf("%f",&matriz[l][c]);
        }
    }
     printf("\n\n");
     for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 4; c++)
        {
            printf("\nNota %d do aluno %d = %f", c+1, l+1, matriz[l][c]);
        }
    }

    return 0;
}
