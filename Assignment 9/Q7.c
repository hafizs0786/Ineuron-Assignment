#include<stdio.h>

int main()
{
    int unit;
    float charge,bill;
    printf("Enter your Electricity unit\n");
    scanf("%d",&unit);
    
    switch (unit<=50)
    {
    case 1:
        charge = unit*0.50;
        bill = charge + (charge*20/100);
        printf("Your Electriciry bill is %.2f",bill);
        break;
    case 0:
        switch (unit<=150)
        {
        case 1:
            charge = unit*0.75;
            bill = charge + (charge*20/100);
            printf("Your Electriciry bill is %.0f",bill);
            break;
        case 0:
            switch (unit<=250)
            {
            case 1:
                charge = unit*1.20;
                bill = charge + (charge*20/100);
                printf("Your Electriciry bill is %.2f",bill);
                break;
            
            case 0:
                charge = unit*1.50;
                bill = charge + (charge*20/100);
                printf("Your Electriciry bill is %.2f",bill);
            }
        }
    }
    
    return 0;
}