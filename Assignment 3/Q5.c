#include<stdio.h>
int main()
{   
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    num>99 && num<1000 ? printf("Three digit number") : printf("Not a three digit number");    
    return 0;
}