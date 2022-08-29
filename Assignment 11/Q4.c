#include<stdio.h>

int nPrime(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Next prime number of %d is %d",a,nPrime(a));
    return 0;
}

int nPrime(int x)
{
    x=x+1;
    for (int i=2; i<x; i++)
    {
        if (x%i==0)
        {            
            x++;
            i=1;
        }
        else
            break;
    }

    return x;    
}