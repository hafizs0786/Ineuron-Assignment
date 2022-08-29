#include<stdio.h>

void natural(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    natural(a);  
    return 0;
}

void natural(int x)
{
    if (x==0)
        return;
    
    natural(x-1);
    printf("%d ",x);
}