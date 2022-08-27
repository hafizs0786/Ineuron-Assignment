#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if (x>0)
        printf("Positive number");
    else if(x<0)
        printf("Negative number");
    else
        printf("Number is 0");

    return 0;    
}