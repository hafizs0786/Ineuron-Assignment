#include<stdio.h>

int main()
{
    int x,i=1,fact=1;
    printf("Enter a number to get factorial: ");
    scanf("%d",&x);
    while (i<=x)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial of %d is %d",x,fact);
    
    return 0;
}