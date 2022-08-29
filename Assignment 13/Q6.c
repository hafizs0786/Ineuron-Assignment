#include<stdio.h>

int fact(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",fact(n));

    return 0;
}

int fact(int x)
{
    if (x==1)
        return 1;
    
    return x*fact(x-1);
}