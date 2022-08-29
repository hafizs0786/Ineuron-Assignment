#include<stdio.h>

int main()
{
    int x;
    printf("Enter an even number: ");
    scanf("%d",&x);
    switch (x%2==0)
    {
    case 1:
        printf("%d",x+1);
        break;
    default:
        printf("%d is not an even number",x);
    }
    
    return 0;
}