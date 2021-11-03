#include <stdio.h>

int main()
{
    float corrida[10]; // aqui esta uma decaração de um vetor onde ele só possui uma "linha"

    for(int i = 0; i < 4; i++)
    {
        printf("Digite o tempo do piloto %d :",i+1);
        scanf("%f",&corrida[i]);// aqui esta o scanf com a variavel corrida e onde ela vai armazenar que seria o valor da repetição.
    }
    for(int i = 3; i >=0 ; i--)
    {
        printf("\nO tempo do piloto %d foi: %f",i+1,corrida[i]); //na atribuição precisou colocar apenas o i para ser identificado na repetição.
    }
   return 0;
}
