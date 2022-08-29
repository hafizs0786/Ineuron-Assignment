#include<stdio.h>

int main()
{
    int a,b,i,hcf;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    for (i=1; 1; i++)
        if (i%a==0 && i%b==0)
            break;
    hcf=(a*b)/i;  
    printf("%d",hcf);
    
    return 0;
}