#include<stdio.h>

int main()
{
    int x[5] = {28, 45, 39, 67, 90};
    int i;
    for(i=5-1; i>=0; i--)
    {
        printf("%d ",*(x+i));
    }
    return 0;
}