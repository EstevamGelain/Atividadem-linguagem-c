#include <stdio.h>

int main()
{
   char letras[6];
   printf("Ler 6 caracteres\n");
   for(int i=0; i<6; i++)
   {
       printf("Letra %d: ", i+1);
       fflush(stdin);
       scanf("%c", &letras[i]);
   }
   for(int i=0; i<6; i++)
   {
      printf("%c", letras[i]);
   }
   return 0;
}
