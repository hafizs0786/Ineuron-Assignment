#include<stdio.h>

int main()
{
    int x,dig=0;
    printf("Enter any number: ");
    scanf("%d",&x);
    while (x>0)
    {
        x/=10;
        dig++;
    }
    printf("%d digit number",dig);    
    
    return 0;
}