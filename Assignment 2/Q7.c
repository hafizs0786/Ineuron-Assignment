#include<stdio.h>

int main()
{   
    int x, res = 0, count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x != 0)
    {
        res = x&1;
        count++;
        if (res == 1)
        {
            printf("Position of first 1 in lsb is %d",count);
            break;
        }
        x = x>>1;
    }    
    return 0;
}