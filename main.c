#include <stdio.h>
#include <stdlib.h>
#define N 5

void diyagonal(int mat [N][N],int *diyagonalmi)
{
    int i,j;
    *diyagonalmi=1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i != j && mat[i][j] != 0)
            {
                *diyagonalmi=0;
            }
        }
    }
}

void simetrik(int mat [N][N],int *deger)
{
    *deger=1;
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
           if(mat[i][j] != mat[j][i])
           {
                *deger=0;
           }
        }
    }
}

void bastirma(int mat[N][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int d;
    int e;
    int matris[N][N]=
    {
        {2,0,0,0,0},
        {0,6,0,0,0},
        {2,0,0,0,0},
        {0,6,0,0,0},
        {0,0,0,0,4}
    };
    bastirma(matris);
    simetrik(matris,&d);
    diyagonal(matris,&e);
    if(d==1)
    {
        printf("Bu matris simetriktir.\n");
    }
    else{

        printf("Bu matris simetrik degildir.\n");
    }
    if (e ==1 )
    {
        printf("Bu matris diyagonaldir.\n");
    }
    else
    {
        printf("Bu matris diyagonal degildir.\n");
    }
}
