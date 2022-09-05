#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void sort(struct Employee*,int);
void display(struct Employee*, int);

int main()
{
    struct Employee emp[5] = {
        {1, "Arshad", 25000},
        {2, "Rizwan", 40000},
        {3, "Montu", 100000},
        {4, "Ikram", 55000},
        {5, "Akbar", 250000}
    };
    sort(emp,5);
    printf("Sorted by names: \n");
    display(emp, 5);
    return 0;
}

void sort(struct Employee emp[],int size)
{
    int i,j;
    struct Employee temp;
    for(i=0; i<size-1; i++)
        for(j=i+1; j<size; j++)
            if(strcmp(emp[i].name, emp[j].name) > 0)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
}

void display(struct Employee e[],int size)
{
    for (int i=0; i<size; i++)
        printf("Name: %s, Id: %d, Salary: %.2f\n",e[i].name, e[i].id, e[i].salary);    
}