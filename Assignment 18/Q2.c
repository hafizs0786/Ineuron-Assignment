#include<stdio.h>

char* reverse(char*);

int main()
{
    char str[]  = "Hello";
    printf("%s",reverse(str));
    return 0;
}

char* reverse(char a[])
{
    int i,j;
    char ch;
    for (j=0; a[j]; j++); 
    for (i=0, j--; i<=j; i++,j--)
    {
        ch = a[i];
        a[i] = a[j];
        a[j] = ch;
    }

    return a;
}