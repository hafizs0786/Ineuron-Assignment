#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,a,b;
    while (1)
    {
        printf("\n------------------------------\n");
        printf("\n1: Addition\n");
        printf("2: Subtraction\n");
        printf("3: Multiplication\n");
        printf("4: Division\n");
        printf("5: Exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d",&x);
        printf("\n");
        switch (x)
        {
        case 1:
            printf("Enter two numbers to add\n");
            scanf("%d%d",&a,&b);
            printf("%d + %d = %d",a,b,a+b);
            break;
        case 2:
            printf("Enter two numbers to subtract\n");
            scanf("%d%d",&a,&b);
            printf("%d - %d = %d",a,b,a-b);
            break;
        case 3:
            printf("Enter two numbers to multiply\n");
            scanf("%d%d",&a,&b);
            printf("%d x %d = %d",a,b,a*b);
            break;
        case 4:
            printf("Enter two numbers to divide\n");
            scanf("%d%d",&a,&b);
            printf("%d - %d = %d",a,b,a/b);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    
    return 0;
}