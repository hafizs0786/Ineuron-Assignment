#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *num;
    printf("Enter a number: ");
    num = (int*)malloc(4);
    scanf("%d",&num);
    if(num == NULL)
    {
        printf("Memory Allocation failed!");
        return 0;
    }
    
    printf("%d",num);
    return 0;
}
