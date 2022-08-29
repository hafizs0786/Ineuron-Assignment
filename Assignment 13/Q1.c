#include<stdio.h>

int sumNat(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumNat(n));    
    return 0;
}

int sumNat(int x)
{  
    if (x==1)
        return 1;
    return x + sumNat(x-1);
}