#include<stdio.h>

int duplicate(int*, int);

int main()
{
    int i,num=6,a[] = {56,45,78,60,45,78};
    printf("Default numbers\n");
    for (i=0; i<num; i++)
        printf("%d ",a[i]);
    
    printf("\nTotal %d duplicate found",duplicate(a, num));

    return 0;
}

int duplicate(int b[], int n)
{
    int i,j,dup=0;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (b[i]==b[j] && b[j])
            {
                dup++;
            }        
        }
        
    }
    return dup;    
}
