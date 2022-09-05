#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Students
{
    int roll;
    char name[20];
    int age;
};

int main()
{
    struct Students s[10];
    int i;

    for (i=0; i<10; i++)
    {
        printf("\nEnter name of student %d\n",i+1);
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        s[i].name[strlen(s[i].name)-1] = '\0';
        printf("Enter roll number\n");
        scanf("%d",&s[i].roll);
        printf("Age of student\n");
        scanf("%d",&s[i].age);
    }
    system("cls");
    for (i=0; i<10; i++)
    {        
        printf("\nName: %s\n",s[i].name);
        printf("Roll number: %d\n",s[i].roll);
        printf("Age: %d\n",s[i].age);
    }
    return 0;
}