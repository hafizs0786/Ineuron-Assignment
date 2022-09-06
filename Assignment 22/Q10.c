#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,*num,max=0,min;
    num = (int*)calloc(5,sizeof(int));
    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++)
        scanf("%d",num+i);
        
    min = *(num+0);

    for(i=0; i<5; i++)
    {
        if(*(num+i)>max)
            max = *(num+i);
        if(*(num+i)<min)
            min = *(num+i);
    }
    printf("Maximum = %d, Minimum = %d",max,min);

    return 0;
}