#include<stdio.h>

int main()
{
    int a[3][3] = {1,2,4,8,5,6,7,9,3};
    int i=2,j=0,sum=0;
    for(i=2,j=0; i>=0; i--,j++)
        sum = sum + a[i][j];

    printf("Sum of left diagonal of matrix is %d",sum);
    return 0;
}