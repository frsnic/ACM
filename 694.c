// [ACM] #694 - The Collatz Sequence
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 694       Accepted   0.148   2007-05-04 12:05:41   5556270   0.020

#include<stdio.h>

int main(void)
{
    long long int x, y, i, t, n = 1;

    while(scanf("%lld %lld" , &x, &y) && x + y > 0)
    {
        t = 0;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = " \
               , n, x, y);
        while(1)
        {
            if(x == 1 || x > y)
            {
                if(x == 1)
                  t ++;
                printf("%lld\n" , t);
                break;
            }
            else if(x % 2 == 0)
              x /= 2;
            else
              x = x * 3 + 1;
            t ++;
        }
        n ++;
    }
    return 0;
}
