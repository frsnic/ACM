// [ACM] #10300 - Ecological Premium
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10300     Accepted   0.000   2008-10-08 08:33:42   6710369   0.000

#include<stdio.h>

int main(void)
{
  long long int n, i, m, j , a , b, c, ans;

  scanf("%lld\n" ,&n);
  for(i = 0; i < n; i ++)
  {
    scanf("%lld\n" , &m);
    ans = 0;
    for(j = 0; j < m; j ++)
    {
      scanf("%lld %lld %lld" , &a, &b, &c);
      ans += a * c;
    }
    printf("%lld\n" , ans);
  }

  return 0;
}
