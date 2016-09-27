// [ACM] #10220 - I Love Big Numbers !
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10220     Accepted   0.078   2006-11-11 07:43:40   5126260   0.000

#include<stdio.h>
#define LEN 1000

int main(void)
{
    int i, j, n, k, sum;
    int x[LEN];

    while(scanf("%d" , &n) !=EOF)
    {
        k = 1;
        x[0] = 1;
        sum = 0;
        for(i = 1; i < LEN; i ++)
          x[i] = 0;

        for(i = 1; i <= n; i ++)
        {
            for(j = 0; j < k; j ++)
              x[j] = x[j] * i;
            for(j = 0; j < k -1; j ++)
            {
                if(x[j] > 9999)
                {
                    x[j + 1] = x[j + 1] + x[j] / 10000;
                    x[j] = x[j] % 10000;
                }
            }
            if(x[k - 1] > 9999)
            {
                k ++;
                x[j + 1] = x[j + 1] + x[j] / 10000;
                x[j] = x[j] % 10000;
            }
        }
        for(i = k; i >= 0; i --)
        {
            sum += x[i] / 1000;
            x[i] = x[i] % 1000;
            sum += x[i] / 100;
            x[i] = x[i] % 100;
            sum += x[i] / 10;
            sum += x[i] % 10;
        }
        printf("%d\n" , sum);
    }
    return 0;
}
