#include<stdio.h>

int digit(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d digit number",digit(n));
    return 0;
}

int digit(int x)
{  
    int dig;
    if (x==0)
        return 1;
    dig = 1 + digit(x/10);
    return dig;
}