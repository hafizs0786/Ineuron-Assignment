#include<stdio.h>

int main()
{
    for (int i=2,j=2; i<100; i++)
    {
        if (i<j)
        {
            if (j%i == 0)
            {
                j++;
                i=1;        
            }
        }      
        else
        {
            printf("%d ",j);
            j++;
            i=1;
        }  
    }  
    
    return 0;
}