#include<stdio.h>

int main()
{
    char str[5][20];
    int i;
    printf("Enter name of 5 cities:\n");
    for (i=0; i<5; i++)
        fgets(str[i], 20, stdin);

    printf("\n");

    for (i=0; i<5; i++)
        printf("%s", str[i]);    
    
    return 0;
}