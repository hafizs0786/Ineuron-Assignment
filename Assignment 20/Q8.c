#include<stdio.h>

int main()
{
    int x[5] = {20, 33, 52, 18, 62};
    int i,j,sum=0;

    for(i=0; i<5; i++)
    {
        sum += *(x+i);
    }
    printf("Sum is %d",sum);
    return 0;
}