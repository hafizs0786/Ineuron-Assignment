#include<stdio.h>

int main()
{
    int x,i=2;
    printf("Enter a number to check if prime or not: ");
    scanf("%d",&x);
    for (i; i<x; i++)
    {
        if (x%i==0)
        {
            printf("%d is not a Prime number",x);
            break;
        }
    }
    if (x==i || x==1)
        printf("%d is a Prime number",x);

    return 0;
}
