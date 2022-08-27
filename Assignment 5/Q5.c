#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (int i=1,j=x*2; i<=x; i++,j--)
    { 
        printf("%d\n",j-=1);
    }
    
    return 0;
}