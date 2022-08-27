#include<stdio.h>
int main()
{   
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    num%5 == 0 ? printf("Divisible by 5") : printf("Not Divisible by 5");    
    return 0;
}