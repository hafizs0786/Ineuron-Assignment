#include<stdio.h>

void oddRev();

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    oddRev(n);
    return 0;
}

void oddRev(int x)
{
    if(x==0)
        return;

    printf("%d ",2*x-1);
    oddRev(x-1);
}