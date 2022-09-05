#include<stdio.h>

struct time
{
    int hrs;
    int min;
    int sec;
};

void timeDiff(struct time, struct time, struct time*);

int main()
{
    struct time start,end,diff;
    printf("Enter start time (hh:mm:ss):\n");
    scanf("%d:%d:%d",&start.hrs, &start.min, &start.sec);

    printf("\nEnter end time (hh:mm:ss)\n");
    scanf("%d:%d:%d",&end.hrs, &end.min, &end.sec);

    timeDiff(start, end, &diff);
    
    printf("\nTime Difference is:\n%d:%d:%d",diff.hrs,diff.min,diff.sec);
    return 0;
}

void timeDiff(struct time a, struct time b, struct time* d)
{
    if(b.sec<a.sec)
    {
        b.min--;
        b.sec+=60;
    }
    if(b.min<a.min)
    {
        b.hrs--;
        b.min+=60;
    }
    d->hrs = b.hrs-a.hrs;
    d->min = b.min-a.min;
    d->sec = b.sec-a.sec;
}