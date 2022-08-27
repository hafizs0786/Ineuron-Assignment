#include<stdio.h>

int main()
{   
    int a=5,b=10;
    printf("Value of a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped value of a is %d and b is %d",a,b);
    return 0;
}