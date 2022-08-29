#include<stdio.h>

void natural(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    natural(n);
    return 0;
}

void natural(int x)
{
    for (int i=1; i<=x; i++)
    {
        printf("%d ",i);
    }    
}