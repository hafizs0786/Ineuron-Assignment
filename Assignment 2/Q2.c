#include<stdio.h>

int main()
{   
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("%d without last digit is %d",num,num/10);
    return 0;
}