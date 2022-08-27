#include<stdio.h>

int main()
{   
    int d,m,y;
    printf("Enter Day, Month and Year in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &d,&m,&y);
    printf("Day - %d, Month - %d, Year - %d", d,m,y);
    return 0;
}