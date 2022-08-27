#include<stdio.h>

//With while loop & 2 variable
int main()
{
    int i=1, j=21;
    while(i<=10)
    {
        printf("%d\n",j-=2);
        i++;
    }

    return 0;    
}