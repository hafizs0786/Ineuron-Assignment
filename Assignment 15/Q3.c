#include<stdio.h>

void sort(int*, int);

int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a[num];
    printf("Enter %d numbers\n",num);
    for(i=0; i<num; i++)
        scanf("%d",&a[i]);
    printf("Sorted in Ascending order:\n");
    sort(a, num);
    
    return 0;
}

void sort(int b[], int n)
{
    int i,j,temp;
    for (i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }       
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",b[i]);
       
}