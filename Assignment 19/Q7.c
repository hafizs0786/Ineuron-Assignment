#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ip[] = "123.256.120.1";
    int count=0;

    char *a = strtok(ip,".");
    while(a!=NULL)
    {
        int x = atoi(a);
        if((x>=0) && (x<=255))
            count++;
        a = strtok(NULL,".");
    }
    if (count==4)
        printf("Valid ip address");
    else
        printf("Not a valid ip address");    

    return 0;
}