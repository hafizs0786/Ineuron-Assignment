#include<stdio.h>

void nPrime(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    nPrime(n);
    
    return 0;
}

void nPrime(int x)
{
    int count = 1;
    for (int i=2, j=2; count<=x; i++)
    {
        if (i<j)
        {
            if (j%i==0)
            {
                j++;
                i=1;
            }            
        }
        else
        {
            printf("%d ",j);
            count++;
            j++;
            i=1;
        }       
    }      
}