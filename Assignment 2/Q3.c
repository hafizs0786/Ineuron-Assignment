#include<stdio.h>

int main()
{   
    int a=5,b=10,c;
    printf("Value of a is %d and b is %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped value of a is %d and b is %d",a,b);
    return 0;
}