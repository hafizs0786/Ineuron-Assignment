#include<stdio.h>

int compare(char*, char*);

int main()
{
    char a[10]="Delhi", b[10]="Allahabad";
    /*        
        If returns 0 string is strings are same
        If returns negative, strings are dictionary wise
        If returns positive, strings are non-dictionary wise
    */   
    printf("%d",compare(a,b));
    return 0;
}

int compare(char a[], char b[])
{
    int i,res=0;
    for (i=0; a[i] ; i++)
    {
        if (a[i] > b[i])
            res=1;
        else if(a[i] < b[i])
            res=-1;        
    }
    return res;
}