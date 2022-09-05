#include<stdio.h>

int main()
{
    char ch, a[] = "pshycology";
    int i,j;
    printf("%s\n",a);
    for (i = 0; a[i]; i++)
    {
        for (j=i+1; a[j]; j++)
        {
            if (a[i] > a[j])
            {
                ch = a[i];
                a[i] = a[j];
                a[j] = ch;
            }            
        }        
    }
    printf("%s",a);
    
    return 0;
}