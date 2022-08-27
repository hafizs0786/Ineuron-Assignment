#include<stdio.h>

int main()
{
    int x,y,i=1;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    while (1)
    {
        if (i%x==0 && i%y==0)
        {
            printf("LCM of %d and %d is %d: ",x,y,i);
            break;
        }
        i++;
    }
    
    return 0;
}