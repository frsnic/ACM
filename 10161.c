// [ACM] #10161 - Ant on a Chessboard
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10161     Accepted   0.010   2008-10-15 04:19:08   6725567   0.000

#include<stdio.h>

int main(void)
{
  long long int i, n, t, k;

  while(scanf("%lld" , &n) != EOF)
  {
    if(n == 0)
      break;
    k = 0;
    t = 1;
    for(i = 1; ; )
    {
      if(i - t + 1 <= n && n <= i + t - 1)
      {
        if(n == i)
          printf("%lld %lld\n" , t, t);
        else
        {
          if(t % 2 == 0)
          {
            if(i - t + 1 <= n && n < i)
              printf("%lld %lld\n" , t - i + n, t);
            else
              printf("%lld %lld\n" , t, t - n + i);
          }
          else
          {
            if(i - t + 1 <= n && n < i)
              printf("%lld %lld\n" , t, t - i + n);
            else
              printf("%lld %lld\n" , t - n + i, t);
          }
        }
        break;
      }
      k += 2;
      i += k;
      t ++;
    }
  }

  return 0;
}
