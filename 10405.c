// [ACM] #10405 - Longest Common Subsequence
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10405     Accepted   0.012   2006-11-06 12:24:23   5111916   0.000

#include<stdio.h>
#include<string.h>

int main(void)
{
    int i, j, z[2][1002], lx, ly, p ,q;
    char x[1001], y[1001];

    while(gets(x) && gets(y))
    {
        p = 1;
        q = 0;
        for(i = 0; i < 1001; i ++)
        {
            z[0][i] = 0;
            z[1][i] = 0;
        }
        lx = strlen(x);
        ly = strlen(y);
        for(i = 0; i <= ly; i ++)
        {
            for(j = 0; j <= lx; j ++)
            {
                if(i == 0 || j == 0);
                else if(x[j - 1] == y[i - 1])
                  z[p][j] = z[q][j - 1] + 1;
                else
                  z[p][j] = z[p][j - 1] > z[q][j] ? z[p][j - 1] : z[q][j];
            }
            q = p == 1 ? 1 : 0;
            p = q == 1 ? 0 : 1;
        }
        printf("%d\n" , z[q][lx]);
    }
    return 0;
}
