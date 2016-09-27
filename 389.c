// [ACM] #389 - Basically Speaking
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 389       Accepted   0.523   2006-12-12 04:37:46   5194255   2.453

#include<stdio.h>
#include<string.h>

int main(void)
{
    int x, y, i, n, l, sum;
    char c[10000];

    while(scanf("%s %d %d" , c, &x, &y) != EOF)
    {
        l = strlen(c);
        n = 1;
        sum = 0;
        for(i = l - 1; i >= 0; i --)
        {
            if('A' <= c[i] && c[i] <= 'F')
              c[i] -= 55;
            else
              c[i] -= '0';
            sum += c[i] * n;
            n *= x;
        }
        for(n = 0; ; n ++)
        {
            c[n] = sum % y + '0';
            if('9' < c[n])
              c[n] += 7;
            if(n > 6)
              break;
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
        if(n > 6)
          printf("  ERROR\n");
        else
        {
            for(i = 0; i < 6 - n; i ++)
              printf(" ");
            for(i = n; i >= 0; i --)
              printf("%c" , c[i]);
            printf("\n");
        }
    }
    return 0;
}
