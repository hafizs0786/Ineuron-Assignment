#include<stdio.h>

int main()
{
    int a,b,c,x;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    x = b*b - 4*a*c;
    switch (x>0)
    {
    case 1:
        printf("Real and Distinct Roots");
        break;
    case 0:
        switch (x<0)
        {
            case 1:
                printf("Imaginary roots");
                break;
            default:
                printf("Real and equal Roots");
        }
    }
    
    return 0;
}