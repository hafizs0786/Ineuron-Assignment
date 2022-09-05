#include<stdio.h>
#include <string.h>

//With using strcmp()
int main()
{
    char city[10][20], temp[20];
    int i,j;
    printf("Enter 10 city names:\n");
    for(i=0; i<10; i++)
        fgets(city[i], 20, stdin);

    for(i=0; i<9; i++)
    {
        for (j=i+1; j<=9; j++)
        {
            if (strcmp(city[i], city[j]) > 0)
            {
                strcpy(temp, city[i]);
                strcpy(city[i], city[j]);
                strcpy(city[j], temp);
            }
        }        
    }
    printf("\nSorted city names:\n");
    for(i=0; i<10; i++)
        printf("%s",city[i]);

    return 0;
}