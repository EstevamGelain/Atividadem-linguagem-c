#include <stdio.h>
#include <stdlib.h>

int baseexpoente(int b, int e)
{
  if (e == 0)
    return 1;

  else
    return  b * baseexpoente(b, e - 1);

}

int main()
{
int base, ex;

printf(" Digite o numero da base da potencia: ");
scanf("%d",&base);

printf("\n Digite o numero do expoente da potencia: ");
scanf("%d",&ex);

printf("\n O numero de base de %d e expoente %d e: %d",base, ex, baseexpoente(base, ex));

return 0;
}


