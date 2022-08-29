#include<stdio.h>

void square(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    square(n);
    return 0;
}

void square(int x)
{
    if(x==0)
        return;
    
    square(x-1);
    printf("square of %d is %d\n",x,x*x);
}