#include<stdio.h>

void sort(int*, int);

int main()
{
    int i,num[] = {20,30,50,10,40};    
    sort(num, 5);
    printf("Sorted Values:\n");
    for (i=0; i<5; i++)
        printf("%d ",num[i]);

    return 0;    
}

void sort(int *x, int y)
{
    int i,j,temp;
    for (i=0; i<y-1; i++)
    {
        for(j=i+1; j<y; j++)
        {
            if(*(x+i) > *(x+j))
            {
                temp = *(x+i);
                *(x+i) = *(x+j);
                *(x+j) = temp; 
            }
        }
    }
    
}