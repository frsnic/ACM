// [ACM] #543 - Goldbach's Conjecture
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 543       Accepted   0.180   2009-02-27 05:02:52   6971378   0.000

#include<stdio.h>
#include<math.h>
#define MAX 1000000

int Sieve(int n, int *arr, int *prime);

int main(void)
{
  int i, n, t, d;
  int *prime = malloc(79000 * sizeof(int));
  int *arr = calloc(MAX + 1, sizeof(int));

  d = Sieve(MAX, arr, prime);
  while(scanf("%d" , &n) && n != 0)
  {
    for(i = 0; i < d; i ++)
    {
      t = n - prime[i];
      if(!(arr[t]))
      {
        printf("%d = %d + %d\n" , n, prime[i], t);
        break;
      }
    }
    if(i == d)
      printf("Goldbach's conjecture is wrong.\n");
  }

  return 0;
}

int Sieve(int n, int *arr, int *prime)
{
  int i, j, k, d = 0;

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
