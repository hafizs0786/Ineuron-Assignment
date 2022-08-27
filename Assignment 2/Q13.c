#include<stdio.h>

int main()
{
    int a,x,y;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    x=a%10;
    y=a/10;
    x*=100;
    printf("Rotated position of %d is %d",a,x+y);
    return 0;
}