// [ACM] #369 - Combinations
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 369       Accepted   0.008   2006-11-03 12:29:18   5101816   0.000

#include<stdio.h>

int main(void)
{
    long long int i, j, c, n, m, R;

    while(scanf("%lld %lld" , &n, &m) == 2)
    {
        c = 1;
        if(n == 0 && m == 0)
          break;
        R = n - m > m ? m : n - m;
        for (i = n, j = 1; j <= R; i --, j ++)
          c = (c * i) / j;
        printf("%lld things taken %lld at a time is %lld exactly.\n" \
              , n, m, c);
    }
    return 0;
}
