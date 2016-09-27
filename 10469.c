// [ACM] #10469 - To Carry or not to Carry
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10469     Accepted   0.012   2008-10-06 04:05:09   6704590   0.000

#include<stdio.h>

void transform(int n, char arr[]);

int main(void)
{
  int a, b, i;
  char arra[32], arrb[32], ans[32];

  while(scanf("%d %d\n" , &a, &b) != EOF)
  {
    transform(a, arra);
    transform(b, arrb);
    for(i = 0; i < 32; i ++)
      ans[i] = (arra[i] + arrb[i] == 2) ? 0 : arra[i] + arrb[i];
    a = ans[0];
    b = 2;
    for(i = 1; i < 32; i ++)
    {
      a += b * ans[i];
      b *= 2;
    }
    printf("%d\n" , a);
  }

  return 0;
}

void transform(int n, char arr[])
{
  int i = 0;

  while(n != 1)
  {
    arr[i ++] = n % 2;
    n = n / 2;
  }
  arr[i ++] = n % 2;
  for( ; i < 32; i ++)
    arr[i] = 0;
}
