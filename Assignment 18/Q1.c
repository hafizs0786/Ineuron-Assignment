#include<stdio.h>

int length(char*);

int main()
{
    char str[]  = "MySirG";
    printf("%d",length(str));
    return 0;
}

int length(char a[])
{
    int i;
    for (i=0; a[i]; i++);

    return i;
    
}