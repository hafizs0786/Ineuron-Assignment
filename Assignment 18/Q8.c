#include<stdio.h>

int word(char*);

int main()
{
    char str[]  = "Chal beta selfie lele re";
    printf("%d words in string",word(str));
    return 0;
}

int word(char a[])
{
    int i, word=1;
    for(i=0; a[i]; i++)
        if(a[i]==' ' && a[i+1]!=' ')
            word++;

    return word;
}