#include <stdio.h>
#include <string.h>

int main()
{
char frase[100];
int i, j;



printf(" Escreva uma frase: ");
gets(frase);

for (i=0; i< strlen(frase); i++)
{
    if(frase[i] == ' ')
    {
        printf("\n");
    }
    else
    {
        printf("%c",frase[i]);
    }
}
    return 0;
}
