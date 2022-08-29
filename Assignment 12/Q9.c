#include<stdio.h>

void octal(int);

int main()
{
    int n;
    printf("Enter a number to print octal: ");
    scanf("%d",&n);
    octal(n);
    return 0;
}

void octal(int x)
{
    if (x==0)
        return;
    
    octal(x/8);
    printf("%d",x%8);
    
}