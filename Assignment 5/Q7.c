#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (int i=1,j=x*2; i<=x; i++, j-=2)
    {
        printf("%d\n",j);
    }
    
    return 0;
}