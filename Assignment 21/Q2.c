#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee input();

int main()
{
    struct Employee emp;
    emp = input();
    printf("Name = %s, Id = %d, Salary = %.2f",emp.name, emp.id, emp.salary);
    return 0;
}

struct Employee input()
{
    struct Employee e;
    printf("Enter Employee Name, id and salary:\n");     
    gets(e.name);
    scanf("%d",&e.id);
    scanf("%f",&e.salary);
    return e;
}