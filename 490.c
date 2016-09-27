// [ACM] #490 - Rotating Sentences
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 490       Accepted   0.004   2006-11-05 09:12:18   5108374   0.000

#include<stdio.h>
#include<string.h>

char x[100][100];

int main(void)
{
    int i, k, j = 0, l = 0;

    while(gets(x[j]))
    {
        l = l > strlen(x[j]) ? l : strlen(x[j]);
        j ++;
    }
    for(k = j - 1, i = 0; i < l; k --)
    {
        if(x[k][i])
          printf("%c" , x[k][i]);
        else
          printf(" ");
        if(k == 0)
        {
            printf("\n");
            k = j;
            i ++;
        }
    }
    return 0;
}
