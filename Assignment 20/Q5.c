#include<stdio.h>

int main()
{
    int x=15, y=29;  
    int *a=&x, *b=&y;  
    if(*a>*b)
        printf("%d is greater",*a);
    else
        printf("%d is greater",*b);
        
    return 0;
}
