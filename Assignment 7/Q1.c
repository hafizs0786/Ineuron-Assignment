#include<stdio.h>

int main()
{
    int x,i,a=0,b=1,fib=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for ( i=1; i<x-1; i++)
    {           
        fib=a+b;
        a=b;
        b=fib;
    }
    if (x==2)
        fib=1;
    printf("%d",fib);
    
    return 0;
}