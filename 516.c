// [ACM] #516 - Prime Land
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 516       Accepted   0.200   2008-10-16 17:32:35   6729982   0.000

#include<stdio.h>
#include<math.h>

int prime(int k);

int main(void)
{
  int n, i, num = 1, t = 0, s, pri[3517];
  char c;

  for(i = 0; i <= 32800; i ++)
  {
    if(prime(i + 2))
    {
      pri[t ++] = i + 2;
    }
  }
  t = 0;
  while(scanf("%d%c" , &n, &c) != EOF)
  {
    if(n == 0)
      break;
    if(t == 0)
    {
       t = 1;
       s = n;
    }
    else
    {
      while(n -- > 0)
        num *= s;
      t = 0;
    }
    if(c == '\n')
    {
      num -= 1;
      for(n = 3516; n >= 0; n --)
      {
        i = pri[n];
        if(num % i == 0)
        {
           t = 0;
           printf("%d " , i);
           while(num % i == 0 && num != 0)
           {
             num /= i;
             t ++;
           }
           printf("%d" , t);
           if(num != 1)
             printf(" ");
           else
             break;
        }
      }
      printf("\n");
      t = 0;
      num = 1;
    }
  }

  return 0;
}

int prime(int k)
{
  int i = 0;

  if(k == 1)
    return 0;

  for(i = 2; i <= sqrt(k); i ++)
  {
    if(k % i == 0)
      return 0;
  }

  return 1;
}
