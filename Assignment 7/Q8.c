#include<stdio.h>

int main()
{
    int x,i;
    printf("Enter a number\n");
    scanf("%d",&x);
    for (x+=1; 1; x++)
    {
        for (i=2 ; i<x; i++)
        {
            if (x%i==0)
                break;               
        }
        if (i==x)
        {
            printf("%d ",x);
            break; 
        }       
    }
    
    return 0;
}