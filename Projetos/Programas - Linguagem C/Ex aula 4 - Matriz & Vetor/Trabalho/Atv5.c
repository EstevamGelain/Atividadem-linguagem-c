#include <stdio.h>
#include <string.h>
int main()
{
char frase[100];
int i;



printf(" Escreva uma frase: ");
gets(frase);


for(i= strlen(frase); i >=0; i-- )
{
    printf("%c",frase[i]);
}



return 0;
}
