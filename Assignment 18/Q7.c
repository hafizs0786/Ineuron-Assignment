#include<stdio.h>

void palindrome(char*);

int main()
{
    char str[] = "Eva can i See bees In a Cave";
    palindrome(str);
    return 0;
}

void palindrome(char a[])
{
    int i,j,pal;
    for(j=0; a[j]; j++);

    for (i=0; a[i]; i++)    
        if (a[i]>='A' && a[i]<='Z')
            a[i]+=32;
    
    for (i=0, j--; i<=j; i++, j--)
    {
        if(a[i]==' ')
            i++;
        if(a[j]==' ')
            j--;
        if (a[i]!=a[j])
            break;
    }

    if (i>j)
        printf("Palindrome string");
    else     
        printf("Not a Palindrome string");
    
}