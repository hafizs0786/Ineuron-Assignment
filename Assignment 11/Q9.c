#include<stdio.h>

int square(int);

int main()
{
    int a;
    printf("Enter a number to print square: ");
    scanf("%d",&a);
    printf("%d",square(a));
    
    return 0;
}

int square(int x)
{
    return x*x;
}