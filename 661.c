// [ACM] #661 - Blowing Fuses
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 661       Accepted   0.000   2006-11-08 11:00:24   5117828   0.000

#include<stdio.h>

int main(void)
{
    int n, m, c, i, temp, sum, max, t = 1, nn[20][2];

    while(scanf("%d %d %d" , &n, &m, &c) == 3)
    {
        if(n + m + c == 0)
          break;
        sum = 0;
        max = 0;
        for(i = 0; i < 20; i ++)
          nn[i][1] = 0;
        for(i = 0; i < n; i ++)
          scanf("%d" , &nn[i][0]);
        for(i = 1; i <= m; i ++)
        {
            scanf("%d" , &temp);
            if(sum <= c)
            {
                if(nn[temp - 1][1] == 0)
                {
                    if(nn[temp - 1][0] + sum > max)
                      max = nn[temp - 1][0] + sum;
                    sum += nn[temp - 1][0];
                    nn[temp - 1][1] = 1;
                }
                else
                {
                    nn[temp - 1][1] = 0;
                    sum -= nn[temp - 1][0];
                }
            }
        }
        printf("Sequence %d\n" , t);
        if(sum > c)
          printf("Fuse was blown.\n\n");
        else
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n" , max);
        }
        t ++;
    }
    return 0;
}
