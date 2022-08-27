#include<stdio.h>

int main()
{   
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Unit digit of %d is %d", num, num%10);
    return 0;
}
