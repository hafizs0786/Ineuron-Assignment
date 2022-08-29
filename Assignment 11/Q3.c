#include<stdio.h>

int prime(int);

int main()
{
    int a, res;
    printf("Enter a number to check prime or not\n");
    scanf("%d",&a);
    res=prime(a);
    res==1 ? printf("Prime number") : printf("Not a prime number");
    
    return 0;
}

int prime(int x)
{
    int pr=1;
    for (int i = 2; i<x; i++)
        if (x%i==0)
        {
            pr=0;
            break;
        }

    return pr;    
}