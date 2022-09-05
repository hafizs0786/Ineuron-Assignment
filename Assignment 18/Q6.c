#include<stdio.h>

int alphanum(char*);

int main()
{
    char str[] = "Icc T-20 World Cup";
    if (alphanum(str) == 1)
        printf("String is alphanumeric");
    else 
        printf("String is not alphanumeric");
    

    return 0;
}

int alphanum(char a[])
{
    int i,alph,num,res=0;
    for (i=0; a[i]; i++)
    {
        if ((a[i]>='A' && a[i]<='Z') || a[i]>='a' && a[i]<='z')
            alph = 1;
        if (a[i]>='0' && a[i]<='9')
            num = 1;        
    }
    if(alph==1 && num==1)
        res=1;

    return res;    
}