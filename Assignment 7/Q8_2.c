#include<stdio.h>

int main()
{
    int x,i;
    printf("Enter a number\n");
    scanf("%d",&x);
    for (i=2, x+=1; i<x; i++)
    {
        if (x%i==0)
        {        
            x++;
            i=1;
        }
    }
    printf("%d",x);
    
    return 0;
}