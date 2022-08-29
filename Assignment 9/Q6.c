#include<stdio.h>

int main()
{
    int y,cy;
    printf("Enter an Year to know if Leap or not (Ex: 2020)\n");
    scanf("%d",&y);
    if (y%100 == 0)
        cy=y;
    
    switch (y%4==0 && cy%400==0)
    {
    case 0:
        printf("%d is not a leap year",y);
        break;
    case 1:
        printf("%d is a leap year",y);
    }
    
    return 0;
}