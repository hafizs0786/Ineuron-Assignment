#include<stdio.h>

void even(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    even(n);
    return 0;
}

void even(int x)
{
    if (x==0)
        return;
    
    even(x-1);
    printf("%d ",2*x);
    
}