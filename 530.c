// [ACM] #530 - Binomial Showdown
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 530       Accepted   0.002   2006-11-07 15:29:38   5115250   0.000

#include<stdio.h>

int main(void)
{
    long long int m, n, c, i;

    while(scanf("%lld %lld" , &n, &m) == 2)
    {
        if(n == 0)
          break;
        else if(n == m || m == 0)
          printf("1\n");
        else if(n - m == 1 || m == 1)
          printf("%lld\n" , n);
        else
        {
            c = 1;
            m = n - m > m ? m : n - m;
            for(i = 1; i <= m; i ++)
              c = c * (n - i + 1) / i;
            printf("%lld\n" , c);
        }
    }
    return 0;
}
