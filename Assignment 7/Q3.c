#include<stdio.h>

int main()
{
    int x,i,a=0,b=1,fib=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for ( i=1; i<x+1; i++)
    {   
        fib=a+b;
        a=b;
        b=fib;
        if (x==fib)
        {
            a=1;
            break;
        }        
    }
    if (a==1 || x==0)
        printf("%d is in fibonacci series",x);
    else
        printf("%d is not in fibonacci series",x);    
    
    return 0;
}