// [ACM] #913 - Joana and the Odd Numbers
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 913       Accepted   0.000   2008-10-06 11:18:35   6705147   0.000

#include<stdio.h>

int main(void)
{
  long long int n;

  while(scanf("%lld\n" , &n) != EOF)
  {
    n = (n + 1) / 2;
    n = n * n * 6 - 9;
    printf("%lld\n" , n);
  }

  return 0;
}
