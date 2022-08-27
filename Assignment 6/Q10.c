#include<stdio.h>

int main()
{
    int x,rev=0,rem=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x>0)
    {
        rem = x%10;
        x = x/10;
        rev = rev*10 + rem;
    }
    printf("%d",rev);    
    
    return 0;
}