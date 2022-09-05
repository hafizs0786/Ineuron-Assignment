#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Marks
{
    int roll;
    char name[20];
    int phys;
    int chem;
    int math;    
    float perc;
};


int main()
{
    struct Marks s[2];
    int i;
    for(i=0; i<2; i++)
    {
        printf("\nEnter name of student %d:\n",i+1);
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        s[i].name[strlen(s[i].name)-1] = '\0';
        printf("Roll number: \n");
        scanf("%d",&s[i].roll);
        printf("Physics Marks: \n");
        scanf("%d",&s[i].phys);
        printf("Chemistry Marks: \n");
        scanf("%d",&s[i].chem);
        printf("Maths Marks: \n");
        scanf("%d",&s[i].math);
        s[i].perc = ((float)(s[i].phys+s[i].chem+s[i].math))/300*100;
    }
    system("cls");

    for(i=0; i<2; i++)
    {
        printf("\nName: %s\n",s[i].name);
        printf("Roll number: %d\n",s[i].roll);
        printf("Percentage: %.2f%\n",s[i].perc);
    }
    
    return 0;
}