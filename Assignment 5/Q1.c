#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number to print MySirG in multiple: ");
    scanf("%d",&x);
    for (int i=1; i<=x; i++)
    {
        printf("%d. MySirG\n",i);
    }
    
    return 0;
}