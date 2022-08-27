#include<stdio.h>
int main() 
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if (x%3 == 0 || x%2 == 0)
        printf("Divisible by 7 or 3");
    else
        printf("Not divisible by 7 or 3");

    return 0;    
}