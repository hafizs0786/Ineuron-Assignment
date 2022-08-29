#include<stdio.h>

void unique(int*, int);

int main()
{
    int i,num=7,a[] = {56,78,48,78,67,48,78};
    printf("Default numbers\n");
    for (i=0; i<num; i++)
        printf("%d ",a[i]); 
    printf("\n\nUnique numbers:");
    unique(a, num);

    return 0;
}

void unique(int b[], int n)
{
    int i,j,dbl;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (b[i]==b[j] && b[i])     
            {
                b[j] = 0;
                dbl = b[i];
            }
        }
        if(b[i] && b[i]!=dbl)
            printf("%d ",b[i]);           
    }    
}
