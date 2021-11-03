#include <stdio.h>

int main()
{
    float corrida[10][10];
    int k, p;
    printf("O programa ira falar o número do kart e do piloto e pedir o tempo do piloto\n");

    for (k = 0; k < 3; k++)
    {
            for (p = 0; p < 3; p++)
                {
                printf("Digite o tempo do kart %d com o piloto %d ",k+1, p+1);
                scanf("%f",&corrida[k][p]);
                }
    }
    printf("\n\n\n");
     for (k = 0; k < 3; k++)
    {
            for (p = 0; p < 3; p++)
                {
                printf("O tempo do kart %d com o piloto %d  foi de: %f \n",k+1, p+1, corrida[k][p]);

                }
    }
     return 0;
}

