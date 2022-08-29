#include<stdio.h>

int main()
{
    int x;
    printf("Enter a month number (Ex:1 for January): ");
    scanf("%d",&x);
    printf("\n");
    switch (x)
    {
    case 1:
        printf("1: January has 31 days");
        break;
    case 2:
        printf("2: February has 28 or 29 days");
        break;
    case 3:
        printf("3: March has 31 days");
        break;
    case 4:
        printf("4: April has 30 days");
        break;
    case 5:
        printf("5: May has 31 days");
        break;
    case 6:
        printf("6: June has 30 days");
        break;
    case 7:
        printf("7: July has 31 days");
        break;
    case 8:
        printf("8: August has 31 days");
        break;
    case 9:
        printf("9: September has 30 days");
        break;
    case 10:
        printf("10: October has 31 days");
        break;
    case 11:
        printf("11: November has 30 days");
        break;
    case 12:
        printf("12: December has 31 days");
        break;    
    default:        
        printf("Invalid month number");
    }
    return 0;
}