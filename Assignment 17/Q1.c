#include<stdio.h>

int main()
{
    char str[] = "MySirg";
    int i;
    for (i=0; str[i]; i++);
    printf("The length of string is %d",i);
    
    return 0;
}