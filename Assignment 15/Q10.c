#include<stdio.h>

void frequency(int b[], int n)
{
    int i, x[1000]={0};
    // printf("%d",x[999]);
    for (i=0 ;i<n; i++)
        x[b[i]]++; 

    for (i=0; i<1000; i++)
        if(x[i] != 0)        
            printf("%d = %d times.\n",i,x[i]);
}

int main()
{
    int i,num=6;
    int a[] = {56,45,45,67,56,27};
    frequency(a,num);

    return 0;
}