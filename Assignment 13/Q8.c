#include<stdio.h>

int fib(int);

int main()
{
    int a,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    for (i = 0; i<a; i++)
    {
        printf("%d ",fib(i));
    }
    
    return 0;
}

int fib(int x)
{
    if (x==0 || x==1)
        return x;
    
    return fib(x-1) + fib(x-2);
}