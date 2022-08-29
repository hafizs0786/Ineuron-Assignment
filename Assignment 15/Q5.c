#include<stdio.h>

int adjdup(int*, int);

int main()
{
    int i,num=5,a[] = {56,78,78,90,45};
    printf("Default numbers\n");
    for (i=0; i<num; i++)
        printf("%d ",a[i]);
    
    printf("\n%d is the first adjecent duplicate",adjdup(a, num));
    return 0;
}


int adjdup(int b[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (b[i]==b[i+1])
            break;        
    }
    return b[i];    
}