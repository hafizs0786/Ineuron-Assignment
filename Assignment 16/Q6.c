#include<stdio.h>

int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,j,sum=0;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,sum);
        sum=0;
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum = sum + a[j][i];
        }
        printf("\nSum of column %d is %d",i+1,sum);
        sum=0;
    }
    
    return 0;
}