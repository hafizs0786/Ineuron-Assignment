#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee input();
void sort(struct Employee*,int);
void display(struct Employee*, int);

int main()
{
    struct Employee emp[5];
    for (int i = 0; i<5; i++)
        emp[i] = input(i+1);
    display(emp, 5);
    return 0;
}

struct Employee input(int n)
{
    struct Employee e;
    printf("Enter Name, id and salary of employee %d:\n",n);     
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name)-1] = '\0';
    scanf("%d",&e.id);
    fflush(stdin);
    scanf("Rs.%f",&e.salary);
    fflush(stdin);
    return e;
}

void display(struct Employee e[],int size)
{
    for (int i=0; i<size; i++)
        printf("Name: %s, Id: %d, Salary: %.2f\n",e[i].name, e[i].id, e[i].salary);    
}