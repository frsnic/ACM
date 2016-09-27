// [ACM] #10235 - Simply Emirp
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10235     Accepted   0.062   2006-11-05 15:53:08   5109051   0.000

#include<stdio.h>
#include<math.h>

int check(int k);

int main(void)
{
    int i, x, y, t, n, p, m;
    while(scanf("%d" , &x) != EOF)
    {
        t = 0;
        if(x == 1)
          printf("1 is not prime.\n");
        else
        {
            t = check(x);
            if(t == 0)
              printf("%d is not prime.\n" , x);
        }
        if(t == 1)
        {
            i = 1;
            n = 10;
            y = 0;
            while(x / n != 0)
            {
                i ++;
                n *= 10;
            }
            n = n / 10;
            t = x;
            m = 1;
            for(p = 1; p <= i; p ++)
            {
                y += (t / n) * m;
                t -= (t / n) * n;
                n /= 10;
                m *= 10;
            }
            t = 1;
            if(y != x)
            {
                if(check(y))
                  printf("%d is emirp.\n" , x);
                else
                  printf("%d is prime.\n" , x);
            }
            else
              printf("%d is prime.\n" , x);
        }
    }
    return 0;
}

int check(int x)
{
    int i, k;

    k = sqrt(x);
    for(i = 2; i <= k; i ++)
    {
        if(x % i == 0)
          return 0;
    }
    if(i >= k)
      return 1;
}
