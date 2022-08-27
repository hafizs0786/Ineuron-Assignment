#include<stdio.h>

int main()
{
    int x,i;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (i=x; i>=1; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}