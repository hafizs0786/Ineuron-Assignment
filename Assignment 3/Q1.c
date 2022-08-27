#include<stdio.h>
int main()
{   
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    num>0 ? printf("Positive") : printf("Non-Positive");    
    return 0;
}