#include <stdio.h>

int main()
{
    int mat[3][4], l, c;
    printf("Ler e mostrar uma matriz\n\n");
    for(l=0; l<3; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("Digite o elemento mat[%d][%d]: ", l+1, c+1);
            scanf("%d", &mat[l][c]);
        }
    }
    printf("\nMatriz lida: \n\n");
    for(l=0; l<3; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("\t%4d", mat[l][c]);
        }
       printf("\n");
    }

     printf("\nMatriz transposta: \n\n");
    for(c=0; c<4; c++)
    {
        for(l=0; l<3; l++)
        {
            printf("\t%4d", mat[l][c]);
        }
       printf("\n");
    }
    return 0;
}
