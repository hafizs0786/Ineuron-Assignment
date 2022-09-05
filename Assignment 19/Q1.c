#include<stdio.h>

int main()
{
    char names[5][20];
    int i,j,count=0;
    
    printf("Enter any 5 names:\n");
    for (i=0; i<5; i++)
    fgets(names[i], 20, stdin);

    for (i=0; i<5; i++)
    {
        for(j=0; names[i][j]; j++)
        {
            if(names[i][j]=='a' || names[i][j]=='e' || names[i][j]=='i' || names[i][j]=='o' || names[i][j]=='u' ||
            names[i][j]=='A' || names[i][j]=='E' || names[i][j]=='I' || names[i][j]=='O' || names[i][j]=='U')
                count++;
        }
    }
    printf("%d Vowels in given names",count);  

    return 0;
}