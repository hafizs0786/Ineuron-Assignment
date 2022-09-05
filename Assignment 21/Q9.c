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
    int num,i;
    printf("Enter number of students to store: ");
    scanf("%d",&num);
    struct Students s[num];

    for (i=0; i<num; i++)
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
    for (i=0; i<num; i++)
    {
        printf("\nName: %s\n",s[i].name);
        printf("Roll number: %d\n",s[i].roll);
        printf("Age: %d\n",s[i].age);
    }
    
    return 0;
}