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
    int res=1;
    for (int i=1; i<=x; i++)
    {
        res = res * i;
    }
    return res;    
}