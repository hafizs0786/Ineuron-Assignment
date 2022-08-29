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
    if (x==0)
        return;

    odd(x-1);
    printf("%d ",2*x-1);   
}