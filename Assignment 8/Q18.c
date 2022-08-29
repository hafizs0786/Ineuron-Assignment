#include<stdio.h>

int main()
{
    int i,j;
    for (i=0; i<9; i++)
    {
        for (j=0; j<9; j++)
        {
            if (i<5)
            {                
                if (j<=4+i && j>=4-i)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if (j<=12-i && j>=i-4)
                    printf("*");
                else
                    printf(" ");
            }
                        
        }
        printf("\n");      
    }
    
    return 0;
}