#include<stdio.h>

int main()
{
    char *str = "Welcome to goa Singham";
    int i;
    for (i=0; *(str+i); i++);
    printf("Length of string is %d",i);

    return 0;
}