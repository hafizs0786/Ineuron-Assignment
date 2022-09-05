#include<stdio.h>

int main()
{
    char a[20] = "sentence is broken";
    int i,b[255] = {0};

    for (i=0; a[i]; i++)
        b[a[i]]++;
    
    for (i=0; i<255; i++)
        if (b[i]!='\0' && i!=' ')
            printf("%c = %d times\n",i,b[i]);    
    
    return 0;
}