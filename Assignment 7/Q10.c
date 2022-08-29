#include<stdio.h>

int main()
{
    int i,val,rem,arm,pow,dig;
    for (i=1; i<=1000; i++)
    {
        val=i;
        arm=0;
        for (pow=0; val>0; pow++)
            val=val/10;

        val=i;        
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
        if(arm==i)
            printf("%d ",i);
    }   
    
    return 0;
}