#include<stdio.h>

int main()
{
    int x,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (i<=x)
    {
        sum += i*2;
        i++;
    }
    printf("Sum of first %d even natural number is %d",x,sum);
    
    return 0;
}