#include<stdio.h>

int main()
{
    int a,b,i,l;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);    
    for (i=2; i<=a*b/2; i++)
    {
        if (a%i==0 && b%i==0)
        {
            l=0;
            break;
        }        
    }
    if (l>0)
        printf("%d and %d are Co-Prime numbers",a,b);
    else   
        printf("%d and %d are not Co-Prime numbers",a,b);   
    
    return 0;
}