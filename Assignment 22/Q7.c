#include<stdio.h>
#include<stdlib.h>

void f1(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    f1(num);
    /*After execution of f1 function variable 'p' will destroy which contains address of DMA variable 
    but DMA variable exist and block some memory and unable to access, which is wastage of memory*/
    return 0;
}

void f1(int n)
{
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = n*n;
    printf("Square of %d is %d",n,*p);
}