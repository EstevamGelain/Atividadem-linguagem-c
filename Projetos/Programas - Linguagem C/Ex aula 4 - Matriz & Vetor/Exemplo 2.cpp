#include <stdio.h>

int main()
{
    float corrida[10]; // aqui esta uma decara��o de um vetor onde ele s� possui uma "linha"

    for(int i = 0; i < 4; i++)
    {
        printf("Digite o tempo do piloto %d :",i+1);
        scanf("%f",&corrida[i]);// aqui esta o scanf com a variavel corrida e onde ela vai armazenar que seria o valor da repeti��o.
    }
    for(int i = 3; i >=0 ; i--)
    {
        printf("\nO tempo do piloto %d foi: %f",i+1,corrida[i]); //na atribui��o precisou colocar apenas o i para ser identificado na repeti��o.
    }
   return 0;
}
