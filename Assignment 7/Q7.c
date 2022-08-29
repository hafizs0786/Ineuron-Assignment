#include<stdio.h>

int main()
{
    int a,b,i;
    printf("Enter two range (Ex: for 1-10 enter 1 and 10)\n");
    scanf("%d%d",&a,&b);
    for (a; a<b; a++)
    {
        for (i=2 ; i<a; i++)
        {
            if (a%i==0)
                break;               
        }
        if (i==a)
            printf("%d ",a);        
    }
    
    return 0;
}