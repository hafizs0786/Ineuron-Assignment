#include<stdio.h>

int main()
{
    int i,j;
    char ch;
    for (i=0; i<7; i++)
    {
        ch='A';
        for (j=0; j<13 ; j++)
        {
            if (i>=0 && j<=6-i || j>=6+i)
            {
                printf("%c",ch);
                j<6 ? ch++ : ch--;
            }
            else
            {
                printf(" "); 
                j<6 ? ch++ : ch--;
            }           
        }
        printf("\n");
        
    }
    
    return 0;
}