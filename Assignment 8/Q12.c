#include<stdio.h>

int main()
{
    int i,j;
    char ch;
    for (i=0; i<4 ; i++)
    {
        ch='A';
        for (j=0; j<7; j++)
        {
            if (j>=i && j<=6-i)
            {
                printf("%c",ch);
                j<3 ? ch++ : ch--;
            }
            else
                printf(" ") ;           
        }
        printf("\n");        
    }
    
    return 0;
}