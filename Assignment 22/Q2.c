#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i,sum=0;
    int *n;   
    float avg;
    printf("Enter a number you want to calculate average of: ");
    scanf("%d",&num);
    n = (int*)calloc(num,sizeof(int));    
    printf("Enter %d numbers:\n",num);
    for (i=0; i<num; i++)
    {
        scanf("%d",n+i);
        sum = sum+*(n+i);
    }
    printf("Average is %.2f",sum/(float)num);
    free(n);
    
    return 0;
}