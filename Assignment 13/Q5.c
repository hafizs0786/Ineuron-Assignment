#include<stdio.h>

int sumDigit(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumDigit(n));

    return 0;
}

int sumDigit(int x)
{
    if (x==0)
        return 0;
    
    return (x%10)+sumDigit(x/10);    
}