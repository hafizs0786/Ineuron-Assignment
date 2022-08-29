#include<stdio.h>

void revNum(int);

int main()
{
    int n;
    printf("Enter a number to print in reverse: ");
    scanf("%d",&n);
    revNum(n);
    return 0;
}

void revNum(int x)
{
    if (x==0)
        return;
    
    printf("%d",x%10);
    revNum(x/10);
}