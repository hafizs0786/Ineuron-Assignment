#include<stdio.h>

char* lower(char*);

int main()
{
    char str[30];
    printf("Enter your full name: ");
    fgets(str, 30, stdin);
    printf("%s",lower(str));
    
    return 0;
}

char* lower(char a[])
{
    int i;
    for(i=0; a[i]; i++)
        if (a[i]>='A' && a[i]<='Z')
            a[i] = a[i]+32;
    
    return a;
}