#include<stdio.h>

int main()
{
    char str[20];
    int count,i,j;
    printf("Enter name of a city: ");
    fgets(str, 20, stdin);
    for (i=0; str[i]; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            count++;        
    }

    printf("Vowels comes %d times.",count);
    
    return 0;
}