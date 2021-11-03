#include <stdio.h>
#include <string.h>

int main()
{
char f[100], palavra[100];
int i, y=0, x=0;

printf("Insira uma frase: ");
fgets(f,100,stdin);

for(i = 0; f[i] != '\0'; i++)
    {
 if(f[i] == ' ')
      {
  while (x < i)
        {

      palavra[y] = f[x];
      y++;
      x++;

        }



      palavra[y] = '\0';
      y=0;
      x++;

      printf("%s %s ", palavra, palavra);
      }
    }

while (x < i-1)
{
palavra[y] = f[x];
 y++;
 x++;
}

palavra[y] = '\0';

printf("%s %s ", palavra, palavra);

return 0;
}
