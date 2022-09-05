#include<stdio.h>

int main()
{
    char *str = "Elimination";
    int i,num;
    for(num=0; *(str+num); num++);

    for(i=num-1; i>=0; i--)
    {
        printf("%c",*(str+i));
    }
    return 0;
}