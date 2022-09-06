#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* mystr();

int main()
{
    char *str;
    printf("Enter your name: ");
    str = mystr();
    printf("Entered name is %s",str);
    free(str);
    return 0;
}

char* mystr()
{
    char *str, c;
    int i=0,s=1;
    str = (char*)malloc(sizeof(char));
    while (1)
    {
        c = getc(stdin);
        if(c == '\n')
        break;
        str[i] = c;
        s++;
        str = realloc(str,s*sizeof(char));
        i++;
    }
    str[i] = '\0';
    return str;
}