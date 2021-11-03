#include <stdio.h>
#include <string.h>
int main(void)
{
char frase[100];
int i, j, contador;
char palavras[] =" ";


printf("Escreva uma frase: ");
gets(frase);


 for (i=0; i<strlen(frase); i++)
    {
        for (j=0; j<strlen(palavras); j++)
        {
            if (frase[i] == palavras[j])
            {
                contador++;
            }
        }
    }

    if (contador == 1)
    {
        printf ("\n\nO texto informado possui 1 palavra\n\n");
    }
    else
    {
        printf ("\n\nO texto informado possui %d palavras\n\n", contador+1);
    }


    return 0;
}



