#include<stdio.h>

void revNatural(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    revNatural(n);
    return 0;
}

void revNatural(int x)
{
    if (x==0)
        return;
        
    printf("%d ",x);
    revNatural(x-1);
}