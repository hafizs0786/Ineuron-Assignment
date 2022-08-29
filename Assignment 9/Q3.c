#include<stdio.h>

int main()
{
    int x;
    printf("Enter week day (Ex:1 for Monday): ");
    scanf("%d",&x);
    printf("\n");
    switch (x)
    {
    case 1:
        printf("Mondays are the fresh start that we all need at the beginning of the week");
        break;
    case 2:
        printf("If yesterday was good, today will be better. Happy Tuesday.");
        break;
    case 3:
        printf("Today, be the best version of yourself! Good morning, and happy Wednesday!");
        break;
    case 4:
        printf("Good morning, Happy Thursday, be someone’s sunshine today.");
        break;
    case 5:
        printf("Hope this Friday gives you a lot of pleasure and love.");
        break;
    case 6:
        printf("Wish you have a blissful weekend. Happy Saturday!");
        break;
    case 7:
        printf("May the sun shine brightly on you this Sunday and fill you with blessings!");
        break;   
    default:        
        printf("Invalid Week Day");
    }
    return 0;
}