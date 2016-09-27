// [ACM] #402 - M*A*S*H
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 402       Accepted   0.370   2008-12-01 18:13:48   6824880   0.020

#include<stdio.h>

int main(void)
{
  int i, j, n, t, x, k, num[50], count, d = 1;

  while(scanf("%d %d" , &n, &x) != EOF)
  {
    for(i = 0; i < n; i ++)
      num[i] = 0;
    count = 0;
    for(j = 0; j < 20; j ++)
    {
      scanf("%d" , &t);
      getchar();
      i = 1;
      k = 0;
      while(i <= n && count < n - x)
      {
        if(num[i - 1] == 0)
        {
          k ++;
          if(k % t == 0)
          {
            count ++;
            num[i - 1] = count;
          }
        }
        i ++;
      }
    }
    printf("Selection #%d\n" , d ++);
    x = 0;
    for(i = 0; i < n; i ++)
    {
      if(num[i] == 0)
      {
        if(x == 1)
          printf(" ");
        printf("%d" , i + 1);
        x = 1;
      }
    }
    printf("\n\n");
  }

  return 0;
}
