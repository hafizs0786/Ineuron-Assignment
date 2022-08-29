#include<stdio.h>

int main()
{
    int x,y,i,j;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    if (x>y)
    {
        i=x;
        x=y;
        y=i;
    }
    for (i=2, j=3; i<=y ; i++)
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
            if (j>=x)
            {
                printf("%d ",j);
            }  
            i=1;
            j++; 
        }        
    }     
    
    return 0;
}