#include<stdio.h>

int fact(int);
int comb(int, int);

int main()
{
    int n,r;
    printf("Enter two numbers: ");
    scanf("%d%d",&n,&r);
    printf("%d",comb(n,r));
    return 0;
}

int comb(int a, int b)
{
    int x = fact(a)/(fact(b) * fact(a-b));
    return x;
}

int fact(int x)
{
    int res=1;
    for (int i=1; i<=x; i++)
    {
        res = res * i;
    }
    return res;    
}