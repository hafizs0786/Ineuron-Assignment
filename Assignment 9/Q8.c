#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    switch (x==0)
    {
    case 1:
        printf("0");
        break;
    default:
        printf("%d",x-x*2);
    }
    
    return 0;
}