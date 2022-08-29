#include<stdio.h>

void odd(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    odd(n);
    return 0;
}

void odd(int x)
{
    for (int i=0; i<x; i++)
    {
        printf("%d ",i*2+1);
    }    
}