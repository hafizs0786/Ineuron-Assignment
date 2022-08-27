#include<stdio.h>

int main()
{
    int x,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (i<=x)
    {
        sum = sum + i*i;
        i++;
    }
    printf("Sum of square of first %d natural number is %d",x,sum);
    
    return 0;
}