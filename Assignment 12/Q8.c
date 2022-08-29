#include<stdio.h>

void binary(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    binary(n);
    return 0;
}

void binary(int x)
{
    if(x==0)
        return;
    binary(x>>1);
    printf("%d",x&1);
}