#include<stdio.h>

int main()
{   
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a&1 ? printf("%d is an Odd number",a) : printf("%d is an Even number",a);
    return 0;    
}