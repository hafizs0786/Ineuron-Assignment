#include<stdio.h>
#include<string.h>

int main()
{
    char users[10][20] = {"abdul123", "ananya1998", "bhuvan_BB", "ketan@agr", "Sweety.love",
                          "Srk.02.11", "tiwariji", "vibhutiji", "anita_bhabhi", "anguri@bjgph"};
    char user[20];
    int i,access=0;
    printf("Please enter username:\n");
    gets(user);
    for (i=0; i<10; i++)
    {
        if(strcmp(user, users[i]) == 0)
        {
            access=1;
            break;
        }
    }

    if (access == 1)
    {  
        int num,fact=1;
        printf("Login success!\n"); 
        printf("Enter a number to calculate factorial: ");
        scanf("%d",&num);
        for (i=1; i<=num; i++)
            fact*=i;
        printf("Factorial of %d is %d.",num,fact) ;
    }
    else
        printf("Sorry! username \'%s\' not found.",user); 
    
    return 0;
}