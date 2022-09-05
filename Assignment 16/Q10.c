#include<stdio.h>

int main()
{
    int a[3][3] = {1,5,1,4,8,1,1,4,6};
    int i,j,count=0,max=0,x;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if(a[i][j]==1)
                count++;
        }
        if(count>max)
        {
            max=count;
            x=i;
            count=0;
        }
    }
    printf("Row %d has maximum number of 1",x+1);
    
    return 0;
}