// [ACM] #11000 - Bee
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 11000     Accepted   0.000   2006-11-07 10:19:30   5114277   0.000

#include<stdio.h>

int main(void)
{
    long long int n, a, b, c, i;

    while(scanf("%lld" , &n) != 0)
    {
        if(n == -1)
          break;
        a = 0;
        b = 0;
        for(i = 0; i <= n ; i ++)
        {
            c = a;
            a = b;
            b = a + c + 1;
        }
        printf("%lld %lld\n" , a, b);
    }
    return 0;
}
