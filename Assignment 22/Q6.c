#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,*num,max=0;
    printf("Enter 5 numbers:\n");
    num = (int*)malloc(5*sizeof(int));
    for(i=0; i<5; i++)
        scanf("%d",num+i);

    for(i=0;i<5; i++)
    {
        if(*(num+i) > max)
            max = *(num+i);
    }
    printf("%d is the largest number",max);
    return 0;
}