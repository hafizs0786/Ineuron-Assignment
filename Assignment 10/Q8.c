#include<stdio.h>

int fact(int);
int perm(int, int);

int main()
{
    int n,r;
    printf("Enter two numbers: ");
    scanf("%d%d",&n,&r);
    printf("%d",perm(n,r));
    return 0;
}

int perm(int a, int b)
{
    int x = fact(a)/fact(b);
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