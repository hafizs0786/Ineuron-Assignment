#include<stdio.h>
int main()
{   
    int a,b,c,r;
    printf("Enter value of a, b & c: ");
    scanf("%d %d %d",&a,&b,&c);
    r = b*b - 4*a*c;
    if (r>0)
        printf("Real and Distinct");
    else if (r<0)
        printf("Imaginary Roots") ;
    else
        printf("Real and equal");    
    return 0;
}