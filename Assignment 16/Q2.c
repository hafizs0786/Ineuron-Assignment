#include<stdio.h>

int main()
{
    int a[3][3] = {1,2,3,2,3,1,3,2,1};
    int b[3][3] = {1,3,2,2,1,3,3,1,2};
    int c[3][3];
    int i,j,k,sum=0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<3; k++)
            {
                sum = sum + a[j][k]*b[k][i];
            }
            c[j][i] = sum;
            sum = 0;
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}