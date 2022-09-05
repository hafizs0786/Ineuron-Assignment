#include<stdio.h>
#include<string.h>

int main()
{
    char list[10][20] = {"Abdul", "Akshay", "Deepak", "Ghanshyam", "Jyoti", 
                         "Mayank", "Prakash", "Payal", "Shubham", "Sudha"};
    char name[20];
    int i;
    printf("Enter your name to check in top 10 List:\n");
    gets(name);
    for (i=0; i<10; i++)
    {
        if (strcmp(name, list[i])==0)
        {
            printf("Congratulations! You are in Top 10 List");
            break;
        }        
    }
    if(i==10)
        printf("Sorry! You are not in Top 10 List");
    
    return 0;
}