#include<stdio.h>

void fibb(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    fibb(x);
        
    return 0;
}

void fibb(int x)
{
    int i, a=0, b=1, fib=0;

    for ( i=0; i<x && i<2; i++)
        printf("%d ",fib+i);

    for (i=1; i<x-1; i++)
    {
        fib=a+b;
        a=b;
        b=fib;        
        printf("%d ",fib);
    }    
}