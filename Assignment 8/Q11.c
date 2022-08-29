#include<stdio.h>

int main()
{
    int i,j;
    char ch;
    for (i=0; i<5; i++)
    {
        ch='A';
        for (j=0; j<9; j++)
        {
            if (j>=4-i && j<=4+i)
            {
                printf("%c",ch);
                j<4 ? ch++ : ch--;
                
            }
            else
                printf(" ");            
        }  
        printf("\n");   
    }
        
    return 0;
}