#include<stdio.h>

void bPrime(int, int);

int main()
{
    int a,b;
    printf("Enter two range (Ex: for 1-10 enter 1 and 10)\n");
    scanf("%d%d",&a,&b);  
    bPrime(a,b);
    return 0;
}

void bPrime(int x, int y)
{
    for (int i=2; x<=y; i++)
    {
        if (i<x)
        {
            if (x%i==0)
            {
                x++;
                i=1;
            }            
        }
        else
        {
            printf("%d ",x);
            x++;
            i=1;
        }       
    }
}