// [ACM] #10684 - The jackpot
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10684     Accepted   0.540   2006-12-04 11:41:02   5179048   0.000

#include<stdio.h>

int main(void)
{
    int i, n, r, t, max;

    while(scanf("%d" , &n) && n != 0)
    {
        r = 0;
        max = 0;
        for(i = 0; i < n; i ++)
        {
            scanf("%d " , &t);
            if(r + t < 0)
              r = 0;
            else
              r += t;
            if(r > max)
              max = r;
        }
        if(max > 0)
          printf("The maximum winning streak is %d.\n" , max);
        else
          printf("Losing streak.\n");
    }
    return 0;
}
