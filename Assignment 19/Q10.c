#include<stdio.h>
#include<string.h>

int main()
{
    int i, flag=0;
    char user[3][3][20] = {
                            {"Abdul Hafiz Raza","abdul_hafiz", "78692"},
                            {"Sayyad Mohammad Ali", "sayyad_ali", "king123"},
                            {"Sayyad Taufik", "taufik@ali", "12345"}
                        };
    char username[20], password[20];
    printf("Enter username: ");
    gets(username);
    printf("Enter your password: ");
    gets(password);

    for (i = 0; i<3; i++)
    {
        if (strcmp(username, user[i][1])==0 && strcmp(password, user[i][2])==0)
        {
            flag = 1;
            printf("Login Success!\n");
            printf("Welcome %s",user[i][0]);
        }       
    }

    if(flag==0)
        printf("Username or password not matched");
    
    return 0;
}