#include <stdio.h>

int main()
{
    float corrida[10][10]; //aqui esta a declaração da variavel onde se encontra o numero de karts e o numero de pilotos.
    int k, p; // k= kart e p= piloto

    printf("O programa ira falar o numero do kart e do piloto e pedir o tempo do piloto\n");

    for (k = 0; k < 3; k++) //aqui se inicia uma repetição para avisar qual é o kart que o piloto testou.
    {
            for (p = 0; p < 3; p++) // aqui se inicia uma repetição para avisar qual o piloto que usou o kart informado primeiro.
                {
                printf("Digite o tempo do kart %d com o piloto %d ",k+1, p+1);
                scanf("%f",&corrida[k][p]); // no scanf precisa prestar muita atenção para que  não se inverta as atribuições.
                }
    }
    printf("\n\n\n");


     for (k = 0; k < 3; k++) //aqui se inicia uma repetição para avisar qual é o kart que o piloto testou.
    {
            for (p = 0; p < 3; p++) // aqui se inicia uma repetição para avisar qual o piloto que usou o kart informado primeiro.
                {
                printf("O tempo do kart %d com o piloto %d  foi de: %f \n",k+1, p+1, corrida[k][p]);
                //primeiro foi atribuida as mascaras para informar o piloto e o tempo e depois veio a variavel corrida, onde ela contem o tempo.

                }
    }

     return 0;
}
