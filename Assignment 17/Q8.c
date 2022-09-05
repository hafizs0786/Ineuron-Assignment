#include<stdio.h>

int main()
{
    char a[] = "Happy Independence Day";
    char b[30];
    int i;
    for (i=0; a[i]; i++)
        b[i] = a[i];
    printf("Value of string in b array:\n");
    printf("%s",b);
    return 0;
}