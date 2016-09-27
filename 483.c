// [ACM] #483 - Word Scramble
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 483       Accepted   0.002   2007-05-05 07:08:33   5558570   0.000

#include<stdio.h>
#include<string.h>
#define LEN 1000

int main(void)
{
    char str[LEN], c;
    int l, i, k;

    while(scanf("%s%c" , str, &c) != EOF)
    {
        l = strlen(str);
        for(i = l - 1; i >= 0; i --)
          printf("%c" , str[i]);
        if(c == '\n')
          printf("\n");
        else
          printf(" ");
    }
    return 0;
}
