#include<stdio.h>

int main()
{
    int x,rem,val,arm=0,pow,dig;
    printf("Enter a number to check if Armstrong number or not:\n");
    scanf("%d",&x);
    val=x;
    for (pow=0; val>0; pow++)
        val=val/10;

    val = x;
    while (val>0)
    {
        dig=1;        
        rem = val%10;
        val = val/10;
        for (int j=0; j<pow; j++)
        {
            dig=dig*rem;
        }
        arm=arm+dig;       
    }    
    
    if (x==arm)
        printf("%d is an Armstrong number",x);
    else
        printf("%d is not an Armstrong number",x);    
    
    return 0;
}