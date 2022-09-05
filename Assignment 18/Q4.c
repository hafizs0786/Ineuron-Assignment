#include<stdio.h>

char* upper(char*);

int main()
{
    char str[30];
    printf("Enter your full name: ");
    fgets(str, 30, stdin);
    printf("%s",upper(str));   
    return 0;
}

char* upper(char a[])
{
    int i;
    for (i=0; a[i]; i++)
        if (a[i]>='a' && a[i]<='z')
            a[i] = a[i]-32;

    return a;    
}