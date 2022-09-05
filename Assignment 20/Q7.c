#include<stdio.h>

int main()
{
    char *x = "Welcome to goa singham";
    int i,con=0,vow=0;
    for (i=0; *(x+i); i++)
    {
        if(*(x+i)=='a' || *(x+i)=='e' || *(x+i)=='i' || *(x+i)=='o' || *(x+i)=='u'
        || *(x+i)=='A' || *(x+i)=='E' || *(x+i)=='I' || *(x+i)=='O' || *(x+i)=='U')
            vow++;
        else if(*(x+i)!=' ')
            con++;
    }
    printf("%d Vowels and %d Consonents fount in string.",vow,con);

    return 0;
}