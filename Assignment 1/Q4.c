#include<stdio.h>

int main()
{
    int r;
    float a;
    printf("Enter Radius of circle: ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is %.2f having the radius %d", a,r);
    return 0;
}