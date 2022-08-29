#include<stdio.h>

int power(int, int);

int main()
{
    int num,pow;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter power of number: ");
    scanf("%d",&pow);
    printf("%d",power(num,pow));

    return 0;
}

int power(int n, int p)
{
    if (p==0)
        return 1;
            
    return n = n*power(n,p-1);
}