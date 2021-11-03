#include <stdio.h>

int main()
{
    int mat[4][4], l, c;
    printf("Ler e mostrar uma matriz\n\n");
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("Digite o elemento mat[%d][%d]: ", l+1, c+1);
            scanf("%d", &mat[l][c]);
        }
    }
    printf("\nMatriz lida: \n\n");
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("\t%4d", mat[l][c]);
        }
       printf("\n");
    }
    printf("\nDiagonal principal\n");
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
            if(l==c)
                printf("\t%4d", mat[l][c]);
        }
    }
    printf("\nDiagonal secundaria\n");
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
         if((l+1)+(c+1) == 5)
                printf("\t%4d", mat[l][c]);
        }
    }

    return 0;
}
