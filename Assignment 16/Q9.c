#include<stdio.h>

int main()
{
    int a[3][3] = {1,0,6,0,0,0,0,3,0};
    int i,j,count=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>(3*3)/2)
        printf("Given matrix is sparse matrix");
    else
        printf("Given matrix is not a sparse matrix");
    return 0;
}