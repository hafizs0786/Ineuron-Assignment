#include<stdio.h>

int sumEven(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumEven(n));
    
    return 0;
}

int sumEven(int x)
{
    if(x==1)
        return 2;

    return (sumEven(x-1)+x*2);
}