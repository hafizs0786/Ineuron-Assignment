#include<stdio.h>

void rotation(int*, int, int);

int main()
{
    int a[5] = {34,56,80,27,49};
    int i,dir,move;
    printf("Numbers to rotate:\n");
    for(i=0; i<5; i++)
        printf("%d ",a[i]);
    
    printf("\n\n1.To rotate left\n2.To rotate right\n");
    printf("Choose direction to move: ");
    scanf("%d",&dir);
    printf("Number of moves: ");
    scanf("%d",&move);
    rotation(a,dir,move);

    return 0;
}

void rotation(int b[], int dir, int move)
{
    int i,j,temp;
    for (i=0; i<move; i++)
    {
        if(dir==1)
        {
            temp = b[0];
            for (j=0; j<4; j++)
            {
                b[j]=b[j+1];
            }
            b[4]=temp;
        }
        else
        {
            temp = b[4];
            for (j=4; j; j--)
            {
                b[j] = b[j-1];
            }   
            b[0]=temp;
        }
    }
    for (i=0; i<5; i++)
        printf("%d ",b[i]);    
}