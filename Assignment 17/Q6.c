#include<stdio.h>

int main()
{
    char ch,str[20];
    int i,j;
    printf("Enter Your Name: ");
    fgets(str, 20, stdin);
    for(j=0; str[j]; j++);

    for (i=0, j-=2; i<=j; i++, j--)
    {  
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }

    printf("%s",str);
    
    
    return 0;
}