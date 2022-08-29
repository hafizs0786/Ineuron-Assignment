#include<stdio.h>

void pFact(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    pFact(n);
    return 0;
}

void pFact(int x)
{
    int i=2;
    while (x>1)
    {
        if (x%i==0)
        {
            printf("%d ",i);
            x = x/i;
        }
        else
            i++;
    }    
}