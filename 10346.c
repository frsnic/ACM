// [ACM] #10346 - Peter's Smoke
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10346     Accepted   0.000   2008-10-13 12:37:34   6721354   0.000

#include<stdio.h>

int main(void)
{
  long long int n, i, k;

  while(scanf("%lld %lld\n" , &n, &k) == 2)
  {
    i = n;
    while(n >= k)
    {
      i += n / k;
      n = n / k + n % k;
    }
    printf("%lld\n" , i);
  }

  return 0;
}
