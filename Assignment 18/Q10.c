#include<stdio.h>

void repChar(char*);

int main()
{
    char str[30];
    printf("Enter Your Full Name: ");
    
    fgets(str, 30, stdin);
    repChar(str);
    return 0;
}

void repChar(char a[])
{
    int i,j;
    char b[255]= "\0";
    for (i=0; a[i]; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i] = a[i]+32;  //To make lowercase for repetation checking
        b[a[i]]++;
    }
    printf("Repeated chatacters: ");
    for (i=0; i<255; i++)
        if(b[i]>1 && i!=' ')
            printf("%c ",i);           
}