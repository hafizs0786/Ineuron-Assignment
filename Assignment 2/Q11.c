#include<stdio.h>

int main()
{   
    int a,b;
    printf("Enter any number: ");
    scanf("%d",&a);
    printf("Enter a single digit number: ");
    scanf("%d",&b);
    a*=10;
    printf("Appended result of 2 numbers is %d", a+b);
    return 0;
}