// [ACM] #10340 - All in All
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10340     Accepted   0.055   2006-10-28 13:29:57   5083402   0.000

#include<stdio.h>
#include<string.h>
#define LEN 100000

int main(void)
{
    int i, j, t, la ,lb, n = 0;
    char a[LEN], b[LEN];

    while(scanf("%s %s" , a , b) == 2)
    {
        t = 0;
        la = strlen(a);
        lb = strlen(b);
        for(i = la; i < LEN; i ++)
          a[i] = 0;
        for(i = lb; i < LEN; i ++)
          b[i] = 0;
        j = -1;
        for(i = 0; i < la; i ++)
        {
            for( ; j < lb; )
            {
                j ++;
                if(a[i] == b[j])
                {
                    t ++;
                    break;
                }
            }
        }
        if(t == la)
          printf("Yes\n");
        else
          printf("No\n");
    }
    return 0;
}
