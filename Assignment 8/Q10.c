#include<stdio.h>

int main()
{
    int i,j,num;
    for (i=0; i<4; i++)
    {
        num=1;
        for (j=0; j<7; j++)
        {
            if ( j>=0 && j<=3-i || j>=3+i)
            {
                printf("%d",num);
                j<3 ? num++ : num--;
            }
            else
            {                  
                printf(" ");
                j<3 ? num++ : num--;
            }            
        }
        printf("\n");

    }

    return 0;
}
