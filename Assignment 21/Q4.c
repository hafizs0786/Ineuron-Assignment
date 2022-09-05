#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void high(struct Employee*,int);

int main()
{
    struct Employee emp[10] = {
        {1, "Arshad", 25000},
        {2, "Akbar", 40000},
        {3, "Ikram", 100000},
        {4, "Montu", 55000},
        {5, "Rizwan", 25000},
        {6, "Izhar", 75000},
        {7, "Hafiz", 150000},
        {8, "Shoaib", 25000},
        {9, "Afjal", 45000},
        {10, "Jahid", 135000}
    };
    high(emp,10);
    return 0;
}

void high(struct Employee emp[],int size)
{
    int i,j;
    struct Employee temp;
    temp.salary=0;
    for(i=0; i<size; i++)
        if(emp[i].salary > temp.salary)
            temp = emp[i];

    printf("Highest salary Employee\n");
    printf("Id=%d, Name=%s, Salary=Rs.%.0f/-\n",temp.id, temp.name, temp.salary);
}