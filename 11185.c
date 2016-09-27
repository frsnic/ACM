// [ACM] #11185 - Ternary                                                 
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 11185     Accepted   0.010   2008-10-07 04:23:23   6707233   0.000

#include<stdio.h>

int main(void)
{
  int n, i , arr[32];

  while(scanf("%d\n" , &n) != EOF)
  {
    i = 0;
    if(n < 0)
      break;
    while(n > 2)
    {
      arr[i ++] = n % 3;
      n = n / 3;
    }
    arr[i] = n % 3;
    for( ; i >= 0; i --)
      printf("%d" , arr[i]);
    printf("\n");
  }

  return 0;
}
