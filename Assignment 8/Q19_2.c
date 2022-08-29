#include<stdio.h>

int main()
{
    int i,j;
    for (i=0; i<13; i++)
    {
        for (j=0; j<19; j++)
        {
            if (i<3)
            {
                if ((j>=2-i && j<=6+i) || (j>=12-i && j<=16+i))
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if (i==3 && j==6)
                    printf(" MySirG ");
                if ( i==3 && j>=6 && j<=13)
                continue;                
                
                if (j>=i-3 && j<=21-i)
                    printf("*");
                else
                    printf(" ");                
            }
        }
        printf("\n");
    }    

    return 0;
}