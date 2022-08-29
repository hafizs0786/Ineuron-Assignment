#include<stdio.h>

int fact(int);
int sSum();

int main()
{
    printf("Sum of the given series is %d",sSum());
    return 0;
}

int sSum()
{
    int i,res=0;
    for (i=1; i<=5; i++)
    {
        res = res+(fact(i)/i);
    }
    return res;
    
}

int fact(int x)
{
    int res=1,i;
    for (i=1; i<=x; i++)
    {
        res = res*i;
    }
    return res;    
}