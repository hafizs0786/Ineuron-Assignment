#include<stdio.h>

void swap(char**, char**);

int main()
{
    char *a = "Hello";
    char *b = "User";
    swap(&a,&b);
    printf("a = %s, b = %s",a,b);
    return 0;
}

void swap(char **x, char **y)
{
    char *temp;
    temp = *x;
    *x = *y;
    *y = temp;
}