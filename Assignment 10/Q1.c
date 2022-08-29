#include<stdio.h>
float area(int);

int main()
{
    int r;
    printf("Enter radius of circle\n");
    scanf("%d",&r);
    printf("Area of circle is %.2f",area(r));
    return 0;
}

float area(int x)
{
    float area;
    area = 3.14*x*x;
    return area;
}