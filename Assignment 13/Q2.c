#include<stdio.h>

int sumOdd(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumOdd(n));
    
    return 0;
}

int sumOdd(int x)
{
    if(x==1)
        return 1;

    return (sumOdd(x-1)+x*2-1);
}