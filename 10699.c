// [ACM] #10699 - Count the factors
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10699     Accepted   0.110   2009-02-26 13:51:59   6970232   0.000

#include<stdio.h>
#include<math.h>
#define MAX 1000000

int Sieve(int n, int *prime);

int main(void)
{
  int i, m, n, t, d = 0;
  int *arr = malloc(79000 * sizeof(int));

  d = Sieve(MAX, arr);
  while(scanf("%d" , &n) && n != 0)
  {
    printf("%d" , n);
    t = 0;
    for(i = 0; i < d; i ++)
    {
      if(n < arr[i])
        break;
      if(n % arr[i] == 0)
      {
        t ++;
        while(n % arr[i] == 0)
          n /= arr[i];
      }
    }
    printf(" : %d\n" , t);
  }

  return 0;
}

int Sieve(int n, int *prime)
{
  int i, j, k, d = 0;
  int *arr = calloc(MAX + 1, sizeof(int));

  for(i = 2; i <= n; )
  {
    prime[d ++] = i;
    k = i * 2;
    while(k < n)
    {
      arr[k] = 1;
      k += i;
    }
    i ++;
    while(arr[i] == 1)
      i ++;
  }

  return d;
}
