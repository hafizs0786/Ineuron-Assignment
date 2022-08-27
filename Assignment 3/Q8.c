#include<stdio.h>
int main()
{
    int y,cy=0;
    printf("Enter an Year to know if Leap or not (Ex: 2020)\n");
    scanf("%d",&y);
    if (y%100 == 0)
        cy=y;
    if (y%4 == 0 && cy%400 == 0)
        printf("%d is a leap year",y);
    else        
        printf("%d is not a leap year",y);

    return 0;    
}