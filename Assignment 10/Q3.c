#include<stdio.h>

int even(int);
int main()
{
    int x, res;
    printf("Enter a numer to check \n");
    scanf("%d",&x);
    res = even(x);

    res==1 ? printf("Even Number") : printf("Odd Number");
    
    return 0;
}

int even(int x)
{
    if (x%2==0)
        return 1;
    else
        return 0;
}