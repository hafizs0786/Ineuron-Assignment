#include<stdio.h>

int sumSquare(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumSquare(n));
    
    return 0;
}

int sumSquare(int x)
{
    if(x==0)
        return 0;

    return (sumSquare(x-1)+x*x);
}