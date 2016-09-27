// [ACM] #10062 - Tell me the frequencies!
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 10062     Accepted   0.002   2006-10-30 14:51:41   5089470   0.000

#include<stdio.h>
#include<string.h>

int main(void)
{
    int s, t, i, j, m, a, l, apn[256], ans[256], ansn[256];
    char x[1000], ap[256];

    gets(x);
    while(1)
    {
        t = 0;
        s = 1000;
        m = 0;
        a = 0;
        for(i = 0; i < 256; i ++)
        {
            ap[i] = 0;
            apn[i] = 0;
            ans[i] = 0;
            ansn[i] = 0;
        }
        l = strlen(x);
        for(i = l + 1; i < 1000; i ++)
          x[i] = 0;
        for(j = 0; j < l; j ++)
        {
            for(i = 0; i < 62; i ++)
            {
                if(x[j] == ap[i])
                {
                    apn[i] ++;
                    break;
                }
                else if(i == 61)
                {
                    ap[t] = x[j];
                    apn[t] = 1;
                    t ++;
                    break;
                }
            }
        }
        for(i = 0; i < t; i ++)
        {
            for(j = 0; j < t; j ++)
            {
                if(apn[j] < s)
                {
                    s = apn[j];
                    a = j;
                }
                else if(apn[j] == s)
                {
                    if(ap[j] > ap[a])
                      a = j;
                }
                if(j == t - 1)
                {
                    ans[m] = ap[a];
                    ansn[m] = s;
                    apn[a] = 1000;
                    m ++;
                    break;
                }
            }
            s = 1000;
        }
        for(i = 0; i < t; i ++)
          printf("%d %d\n" , ans[i], ansn[i]);
        if(gets(x) != NULL)
          printf("\n");
        else
          break;
    }
    return 0;
}
