#include<stdio.h>

void merge(int*, int*, int);

int main()
{
    int i,num=10;
    int a[] = {56,78,45,67,27};
    int b[] = {32,23,18,60,83};
    
    merge(a,b,num);
    
    return 0;
}

void merge(int b[], int c[],int num)
{
    int i,j,temp,mer[num];
    for (i=0; i<num; i++)
    {
        if(i<=4) 
            mer[i]=b[i];
        else
            mer[i] = c[i-5];
    }

    for (i=0; i<num; i++)
    {
        for (j=i+1; j<num; j++)
        {
            if (mer[i] < mer[j])
            {
                temp = mer[i];
                mer[i] = mer[j];
                mer[j] = temp;
            }
        }                
    }
    for (i=0; i<num; i++)
        printf("%d ",mer[i]);     
}