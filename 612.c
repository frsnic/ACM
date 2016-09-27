// [ACM] #612 - DNA Sorting
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 612       Accepted   0.230   2006-11-24 10:53:20   5156977   0.000

#include<stdio.h>

int main(void)
{
    int i, j, k, n, x, y, a, c, g, t, sum[101][2];
    char p[101][51];

    scanf("%d" , &n);
    for(j = 0; j < n; j ++)
    {
        scanf("%d %d" , &x, &y);
        for(k = 0; k < y; k ++)
          scanf("%s" , p[k]);
        for(i = 0; i < y; i ++)
        {
            a = 0;
            c = 0;
            g = 0;
            t = 0;
            sum[i][0] = 0;
            sum[i][1] = i;
            for(k = x - 1; k >= 0; k --)
            {
                if(p[i][k] == 'A')
                  a ++;
                else if(p[i][k] == 'C')
                {
                    c ++;
                    sum[i][0] += a;
                }
                else if(p[i][k] == 'G')
                {
                    g ++;
                    sum[i][0] += a + c;
                }
                else
                {
                    t ++;
                    sum[i][0] += a + c + g;
                }
            }
        }
        for(k = 1; k < y; k ++)
        {
            g = sum[k][1];
            t = sum[k][0];
            i = k - 1;
            while(t < sum[i][0])
            {
                sum[i + 1][0] = sum[i][0];
                sum[i + 1][1] = sum[i][1];
                i --;
                if(i == -1)
                  break;
            }
            sum[i + 1][0] = t;
            sum[i + 1][1] = g;
        }
        for(i = 0; i < y; i ++)
        {
            t = sum[i][1];
            printf("%s\n" , p[t]);
        }
        if(j != n - 1)
          printf("\n");
    }
    return 0;
}
