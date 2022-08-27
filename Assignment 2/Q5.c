#include<stdio.h>

int main()
{   
    int num,rem,sum=0;
    printf("Enter three digit number: ");
    scanf("%d",&num);
    while (num>0)
    {
        rem = num%10;
        num = num/10;
        sum = sum+rem;
    }   
    printf("Sum of digits is %d",sum);
    return 0;
}