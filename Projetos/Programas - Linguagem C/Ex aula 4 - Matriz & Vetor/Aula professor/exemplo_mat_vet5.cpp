#include<stdio.h>

int main()
{
    int mat[4][4];
    for(int l=0; l<4; l++)
    {
        for(int c = 0; c<4; c++)
        {
            if(l==c)
                mat[l][c]=1;
            else
                mat[l][c]=0;
        }
    }
     printf("\nMatriz lida: \n\n");
    for(int l=0; l<4; l++)
    {
        for(int c=0; c<4; c++)
        {
            printf("\t%4d", mat[l][c]);
        }
       printf("\n");
    }


    return 0;
}

