#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,a,b,c;
    
    while (1)
    {
        printf("\n---------------------------------------");
        printf("\n\nEnter your choice: ");
        printf("\n1: To check an isosceles triangle\n");
        printf("2: To check a right angle triangle\n");
        printf("3: To check an equilateral triangle\n");
        printf("4: Exit\n");
        scanf("%d",&x);

        if (x<4)
        {
            printf("Enter lengths of a triangle\n");
            scanf("%d%d%d",&a,&b,&c);
        }        

        switch (x)
        {
        case 1:
            if (a==b || b==c ||c==a)
                printf("Isosceles Triangle");
            else
                printf("Not an Isosceles Triangle");
            break;      
        case 2:
            if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                printf("Right Angle Triangle");
            else
                printf("Not a Right Angle Triangle"); 
            break;
        case 3:
            if ((a==b) && (b==c))
                printf("Equilateral Triangle");
            else
                printf("Not an equilateral Angle Triangle"); 
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice \n");
        }
    }
    
    return 0;
}