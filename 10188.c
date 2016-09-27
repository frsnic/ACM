// [ACM] #10188 - Automated Judge Script
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10188     Accepted   0.012   2007-07-24 11:18:07   5768270   0.000

#include<stdio.h>
#include<string.h>
#define LEN 4000

int main(void)
{
    char x[100][LEN], a[100][LEN];
    int i, j, k, n, m, ln, lm, tn, tc, ti = 1, t[LEN];

    while(scanf("%d%*c" , &n) != EOF && n != 0)
    {
        for(i = 0; i < n; i ++)
          fgets(x[i], 121, stdin);
        scanf("%d%*c" , &m);
        for(i = 0; i < m; i ++)
          fgets(a[i], 121, stdin);
        for(i = 0; i < n - 1; i ++)
        {
            ln = strlen(x[1 + i]);
            strncat(x[0], x[1 + i], ln + 1);
            strcat(x[0], "\n");
        }
        for(i = 0; i < m - 1; i ++)
        {
            lm = strlen(a[1 + i]);
            strncat(a[0], a[1 + i], lm + 1);
            strcat(a[0], "\n");
        }
        ln = strlen(x[0]);
        lm = strlen(a[0]);
        k = 0;
        for(i = 0; i < ln; i ++)
        {
            if('0' <= x[0][i] && x[0][i] <= '9')
              t[k ++] = x[0][i];
        }
        n = 0;
        if(ln != lm)
          tc = 2;
        else
          tc = 1;
        tn = 1;
        for(i = 0; i < lm; i ++)
        {
            if(x[0][i] == a[0][i] && tc < 2)
              tc = 1;
            else
              tc = 2;
            if('0' <= a[0][i] && a[0][i] <= '9')
            {
                if(a[0][i] == t[n])
                  n ++;
                else
                  tn = 0;
            }
        }
        if(n != k)
          tn = 0;
        if(tc == 1 && tn == 1)
          printf("Run #%d: Accepted\n" , ti);
        else if(tn == 1)
          printf("Run #%d: Presentation Error\n" , ti);
        else
          printf("Run #%d: Wrong Answer\n" , ti);
        ti ++;
    }
    return 0;
}
