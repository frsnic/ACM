// [ACM] #355 - The Bases Are Loaded
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 355       Accepted   0.012   2007-07-22 14:36:00   5762869   0.000

#include<stdio.h>
#include<string.h>

int main(void)
{
    long long int x, y, i, n, l, sum;
    char c[1000];

    while(scanf("%lld %lld %s" , &x, &y, c) != EOF)
    {
        l = strlen(c);
        n = 1;
        sum = 0;
        printf("%s " , c);
        for(i = l - 1; i >= 0; i --)
        {
            if('A' <= c[i] && c[i] <= 'F')
              c[i] -= 55;
            else
              c[i] -= '0';
            if(c[i] >= x)
            {
                y = 0;
                break;
            }
            sum += c[i] * n;
            n *= x;
        }
        if(y == 0)
          printf("is an illegal base %lld number\n" , x);
        else
        {
            for(n = 0; ; n ++)
            {
                c[n] = sum % y + '0';
                if('9' < c[n])
                  c[n] += 7;
                if(sum / y < y)
                {
                    if(sum / y != 0)
                    {
                        c[++ n] = sum / y + '0';
                        if('9' < c[n])
                          c[n] += 7;
                    }
                    break;
                }
                else
                  sum /= y;
            }
            printf("base %lld = " , x);
            for(i = n; i >= 0; i --)
              printf("%c" , c[i]);
            printf(" base %lld\n" , y);
        }
    }
    return 0;
}
