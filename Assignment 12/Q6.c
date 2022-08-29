#include<stdio.h>

void evenRev(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    evenRev(n);
    return 0;
}

void evenRev(int x)
{
    if (x==0)
        return;
    
    printf("%d ",2*x);
    evenRev(x-1);
    
}