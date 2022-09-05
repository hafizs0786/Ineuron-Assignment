#include<stdio.h>

int main()
{
    char ch, str[20];
    int count=0,i;
    printf("Enter your name: ");
    fgets(str, 20, stdin);
    printf("Enter 1 letter of your name: ");
    scanf("%c",&ch);
    for (i=0; i<20; i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;

        if (ch == str[i])
            count++;
    }
    printf("\'%c\' occurs %d times in your name.",ch,count);
    
    return 0;
}