#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[5][20] = {"porche", "with", "no", "breaks", "with"};
    char word1[20], word2[20];
    int i,w1=-1,w2=-1, diff;
    printf("Enter two words to find minimum difference:\n");
    gets(word1);
    gets(word2);

    for (i=0; i<5; i++)
    {
        if (strcmp(s[i],word1) == 0)
            w1=i;
        if (strcmp(s[i],word2) == 0)
            w2=i;

        if(w1>=0 && w2>=0)
            diff= abs(w1-w2);
    }
    printf("Minimum difference between 2 words is %d",diff-1);
           

    return 0;
}