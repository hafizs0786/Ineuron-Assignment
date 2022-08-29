#include<stdio.h>

int main()
{
    int i,j,num;
    for (i=0; i<4; i++)
    {
        num=1;
        for (j=0; j<7; j++)
        {
            if ( (j>=i) && (j<=6-i))
            {
                printf("%d",num);
                j<3 ? num++ : num--;
            }
            else
                printf(" ") ;
        }
        printf("\n");

    }

    return 0;
}
