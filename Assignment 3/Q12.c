#include<stdio.h>
int main()
{   
    char ch ;
    printf("Enter an Alphabet (Ex: 'A-Z' or 'a-z'): ");
    scanf("%c",&ch);
    ch>='A' && ch<='Z' ? printf("Uppercase") : printf("Lowercase"); 
    return 0;
}
